/*
 * XREFs of _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _ChkSum@12 @ 0x4B35A6BB (_ChkSum@12.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  unsigned int v3; // edx
  unsigned __int16 *v4; // ecx
  unsigned __int16 v5; // si
  unsigned int v6; // ebx
  char *CheckSum; // edi
  unsigned int v9; // esi
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // [esp+Ch] [ebp-8h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-4h] BYREF

  v5 = 0;
  v12 = v4;
  v6 = v3;
  if ( RtlImageNtHeaderEx(0, v4, v3, &OutHeaders) < 0 )
  {
    CheckSum = (char *)BaseAddress;
  }
  else
  {
    CheckSum = (char *)OutHeaders->OptionalHeader.CheckSum;
    if ( !CheckSum )
      return 1;
    v9 = (char *)OutHeaders - (char *)v12 + 88;
    v10 = ChkSum(0, v12, v9 >> 1);
    v11 = ChkSum(v10, &OutHeaders->OptionalHeader.Subsystem, (v6 - v9 - 4) >> 1);
    v5 = v11;
    if ( (v6 & 1) != 0 )
      v5 = v11 + *((unsigned __int8 *)v12 + v6 - 1) + ((v11 + (unsigned int)*((unsigned __int8 *)v12 + v6 - 1)) >> 16);
  }
  return (char *)BaseAddress + v5 == CheckSum;
}

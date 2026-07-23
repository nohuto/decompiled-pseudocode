/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1800F5C7C
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AB90 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x1800F5C48 (ChkSum.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  NTSTATUS v6; // eax
  int v7; // r10d
  char *v8; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  ULONG v12; // r11d
  char *v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = RtlImageNtHeaderEx(0, BaseAddress, NumberOfBytes, (PIMAGE_NT_HEADERS *)&v13);
  LOWORD(v7) = 0;
  if ( v6 < 0 )
  {
    v12 = FileLength;
  }
  else
  {
    v8 = v13;
    if ( !*((_DWORD *)v13 + 22) )
      return 1;
    v10 = ChkSum(0, (unsigned __int16 *)BaseAddress, (unsigned __int64)(v13 - (_BYTE *)BaseAddress + 88) >> 1);
    v7 = (unsigned __int16)ChkSum(v10, (unsigned __int16 *)v8 + 46, (NumberOfBytes - v11 - 4) >> 1);
    if ( (NumberOfBytes & 1) != 0 )
      LOWORD(v7) = v7
                 + (unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)
                 + ((v7 + (unsigned int)(unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)) >> 16);
  }
  return FileLength + (unsigned __int16)v7 == v12;
}

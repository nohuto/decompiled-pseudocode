/*
 * XREFs of _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _ChkSum@12 @ 0x4B35A6BB (_ChkSum@12.c)
 */

bool __fastcall LdrVerifyMappedImageMatchesChecksum(unsigned __int16 *a1, unsigned int a2, int a3)
{
  unsigned __int16 v3; // si
  int v5; // edi
  unsigned int v7; // esi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  if ( RtlImageNtHeaderEx(0, (unsigned int)a1, a2, 0, &v11) < 0 )
  {
    v5 = a3;
  }
  else
  {
    v5 = *(_DWORD *)(v11 + 88);
    if ( !v5 )
      return 1;
    v7 = v11 - (_DWORD)a1 + 88;
    v8 = ChkSum(0, a1, v7 >> 1);
    v9 = ChkSum(v8, (unsigned __int16 *)(v11 + 92), (a2 - v7 - 4) >> 1);
    v3 = v9;
    if ( (a2 & 1) != 0 )
      v3 = v9 + *((unsigned __int8 *)a1 + a2 - 1) + ((v9 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  return a3 + v3 == v5;
}

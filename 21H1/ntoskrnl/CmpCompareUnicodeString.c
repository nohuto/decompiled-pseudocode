/*
 * XREFs of CmpCompareUnicodeString @ 0x140691678
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindKcbInHashEntryByName @ 0x14061D324 (CmpFindKcbInHashEntryByName.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpGetMappingHiveForString @ 0x140691560 (CmpGetMappingHiveForString.c)
 *     CmpCompareKeysByName @ 0x1408715D8 (CmpCompareKeysByName.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r10

  v4 = *(unsigned __int16 **)(a1 + 8);
  v5 = *(unsigned __int16 **)(a2 + 8);
  v6 = *(_WORD *)a2 >> 1;
  v7 = *(_WORD *)a1 >> 1;
  if ( v7 )
  {
    while ( v6 )
    {
      v8 = *v4++;
      v9 = *v5++;
      if ( v8 != v9 )
      {
        if ( (a3 & 1) == 0 && v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
            v8 = NLS_UPCASE(v8);
          else
            v8 -= 32;
        }
        if ( (a3 & 2) == 0 && v9 >= 0x61u )
        {
          if ( v9 <= 0x7Au )
            v9 -= 32;
          else
            v9 = NLS_UPCASE(v9);
        }
        if ( v8 != v9 )
          return v8 - (unsigned int)v9;
      }
      --v6;
      if ( !--v7 )
        return v7 - (unsigned int)v6;
    }
  }
  return v7 - (unsigned int)v6;
}

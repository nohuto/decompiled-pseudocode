/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x140875F88
 * Callers:
 *     CmpFindNameInListCellWithStatus @ 0x14065AE50 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14086F090 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x140875EB4 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14087BB70 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // r11
  unsigned int v8; // r9d
  unsigned int v9; // r10d

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 <= 0x7A )
            LOWORD(v8) = v8 - 32;
          else
            LOWORD(v8) = NLS_UPCASE(v8);
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 <= 0x7A )
            LOWORD(v9) = v9 - 32;
          else
            LOWORD(v9) = NLS_UPCASE(v9);
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}

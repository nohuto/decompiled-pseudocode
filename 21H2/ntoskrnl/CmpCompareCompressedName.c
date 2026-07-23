/*
 * XREFs of CmpCompareCompressedName @ 0x1406DDE80
 * Callers:
 *     CmpFindNameInListCellWithStatus @ 0x14065AE50 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406DF2A4 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 *     CmpCheckValueList @ 0x1406DFBC0 (CmpCheckValueList.c)
 *     CmpCheckLexicographicalOrder @ 0x1406E2570 (CmpCheckLexicographicalOrder.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14086F090 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x140875EB4 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14087BB70 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // r11
  unsigned __int16 v6; // r10
  unsigned __int16 *v7; // rbx
  unsigned __int16 v9; // r9
  unsigned int v10; // esi

  v5 = *(_WORD *)a1 >> 1;
  v6 = a3;
  v7 = *(unsigned __int16 **)(a1 + 8);
  if ( v5 )
  {
    while ( v6 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 = NLS_UPCASE(v9);
          else
            v9 -= 32;
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
            LOWORD(v10) = NLS_UPCASE(v10);
          else
            LOWORD(v10) = v10 - 32;
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --v6;
      if ( !--v5 )
        return v5 - (unsigned int)v6;
    }
  }
  return v5 - (unsigned int)v6;
}

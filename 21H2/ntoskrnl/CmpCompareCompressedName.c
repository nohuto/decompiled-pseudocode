/*
 * XREFs of CmpCompareCompressedName @ 0x1407C45A0
 * Callers:
 *     CmpCompareKeysByName @ 0x14065C51C (CmpCompareKeysByName.c)
 *     CmpCheckLexicographicalOrder @ 0x14069B700 (CmpCheckLexicographicalOrder.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406D2154 (CmpFindKcbInHashEntryByName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140722280 (CmpFindNameInListCellWithStatus.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpCompareInIndex @ 0x1407C4180 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1407C4460 (CmpDoCompareKeyName.c)
 *     CmpCheckValueList @ 0x1407C4990 (CmpCheckValueList.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14091514C (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140921EA0 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // r11
  unsigned __int16 v6; // r10
  unsigned __int16 *v7; // rbx
  unsigned __int16 v9; // bp
  unsigned int v10; // esi
  _QWORD *CurrentServerSiloGlobals; // rax
  _QWORD *v13; // rax

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
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            v9 = NLS_UPCASE(CurrentServerSiloGlobals[154], v9);
          }
          else
          {
            v9 -= 32;
          }
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
          {
            v13 = PsGetCurrentServerSiloGlobals();
            LOWORD(v10) = NLS_UPCASE(v13[154], v10);
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
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

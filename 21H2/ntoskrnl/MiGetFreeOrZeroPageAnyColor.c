/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1402990B4
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x140232110 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x14029914C (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14029932C (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // ebx

  v3 = *(int *)(a1 + 6300);
  if ( v3 >= 0x10 )
    v3 = 16LL;
  v7 = (unsigned int)dword_140C4DEF8 * v3;
  if ( (a3 & 0x10001) != 0 || (result = MiDemoteLocalLargePage(a1, a2, a3, v7)) == 0 )
  {
    result = MiRemovePageAnyColor(a1, a2, a3, v7);
    if ( result != 1 )
    {
      if ( result )
        return result;
      result = MiGetPageSlist(a1, a2, a3);
      if ( result || (a3 & 0x4000) == 0 )
        return result;
      v10 = a3 & 0xFFFFBFFF;
      result = MiRemovePageAnyColor(a1, a2, v10, v9);
      if ( result != 1 )
      {
        if ( !result )
          return MiGetPageSlist(a1, a2, v10);
        return result;
      }
    }
    return 1LL;
  }
  return result;
}

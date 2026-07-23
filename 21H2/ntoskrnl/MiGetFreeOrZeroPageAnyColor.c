/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x140215A94
 * Callers:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 * Callees:
 *     MiRemovePageAnyColor @ 0x140215B2C (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x140215D0C (MiGetPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // ebx

  v3 = *(int *)(a1 + 6300);
  v4 = a3;
  v5 = a2;
  if ( v3 >= 0x10 )
    v3 = 16LL;
  v7 = (unsigned int)dword_140C4DF38 * v3;
  if ( (a3 & 0x10001) != 0 || (result = MiDemoteLocalLargePage(a1, a2, a3, v7)) == 0 )
  {
    result = MiRemovePageAnyColor(a1, v5, v4, v7);
    if ( result != 1 )
    {
      if ( result )
        return result;
      result = MiGetPageSlist(a1, v5, v4);
      if ( result || (v4 & 0x4000) == 0 )
        return result;
      v10 = v4 & 0xFFFFBFFF;
      result = MiRemovePageAnyColor(a1, v5, v10, v9);
      if ( result != 1 )
      {
        if ( !result )
          return MiGetPageSlist(a1, v5, v10);
        return result;
      }
    }
    return 1LL;
  }
  return result;
}

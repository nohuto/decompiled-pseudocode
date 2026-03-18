/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x14022FD10
 * Callers:
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 * Callees:
 *     MiGetPageSlist @ 0x140220360 (MiGetPageSlist.c)
 *     MiRemovePageAnyColor @ 0x14022FDA0 (MiRemovePageAnyColor.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  unsigned __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // ebp
  __int64 v9; // r8

  v3 = a3;
  v4 = a2;
  if ( (a3 & 1) != 0 )
    goto LABEL_5;
  v6 = *(int *)(a1 + 16188);
  if ( v6 >= 0x10 )
    v6 = 16LL;
  result = MiDemoteLocalLargePage(a1, a2, a3, (unsigned int)dword_140C50738 * v6);
  if ( !result )
  {
LABEL_5:
    result = MiRemovePageAnyColor(a1, v4, v3);
    if ( result == 1 )
      return 1LL;
    if ( result )
      return result;
    result = (__int64)MiGetPageSlist(a1, v4, v3);
    if ( result )
      return result;
    v8 = v3 & 0xFFFFBFFF;
    if ( (v3 & 0x4000) == 0 )
      v8 = v3;
    v9 = v8;
    LODWORD(v9) = v8 | 0x40000;
    result = MiRemovePageAnyColor(a1, v4, v9);
    if ( result == 1 )
      return 1LL;
    if ( !result )
    {
      if ( (v8 & 0x4000) == 0 )
        return 0LL;
      result = (__int64)MiGetPageSlist(a1, v4, v8);
      if ( !result )
        return 0LL;
    }
  }
  return result;
}

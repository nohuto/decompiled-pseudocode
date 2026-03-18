/*
 * XREFs of ?TSW_CalcRowAndCol@@YGHPAUtagSwitchWndInfo@@HPAH1@Z @ 0x15C6C8
 * Callers:
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge TSW_CalcRowAndCol@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagSwitchWndInfo *a3,
        _DWORD *a4,
        int *a5,
        int *a6)
{
  int v6; // esi
  int v7; // edx

  v6 = a1 - a2[8];
  if ( v6 < 0 )
    v6 += a2[5];
  v7 = v6 / a2[9];
  if ( v7 >= a2[10] )
    return 0;
  *(_DWORD *)a3 = v7;
  *a4 = v6 - v7 * a2[9];
  return 1;
}

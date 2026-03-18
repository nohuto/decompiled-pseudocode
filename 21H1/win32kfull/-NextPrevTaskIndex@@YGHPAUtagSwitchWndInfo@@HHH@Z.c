/*
 * XREFs of ?NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z @ 0x15C660
 * Callers:
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     <none>
 */

char *__userpurge NextPrevTaskIndex@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagSwitchWndInfo *a3,
        int a4,
        int a5,
        int a6)
{
  char *v6; // edx
  int v7; // eax

  if ( a4 )
  {
    v6 = (char *)a3 + a1;
    v7 = *(_DWORD *)(a2 + 20);
    if ( (int)v6 >= v7 )
      v6 -= v7;
  }
  else
  {
    v6 = (char *)(a1 - (_DWORD)a3);
    if ( (int)v6 < 0 )
      v6 += *(_DWORD *)(a2 + 20);
  }
  return v6;
}

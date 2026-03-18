/*
 * XREFs of ?NextPrevPhwnd@@YGPAPAUHWND__@@PAUtagSwitchWndInfo@@PAPAU1@H@Z @ 0x15C62F
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     <none>
 */

HWND *__userpurge NextPrevPhwnd@<eax>(int a1@<edx>, int a2@<ecx>, struct tagSwitchWndInfo *a3, HWND *a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v5 + 16;
  if ( a3 )
  {
    v8 = a1 + 4;
    if ( v8 == v6 )
      return (HWND *)v7;
  }
  else if ( a1 == v7 )
  {
    return (HWND *)(v6 - 4);
  }
  else
  {
    return (HWND *)(a1 - 4);
  }
  return (HWND *)v8;
}

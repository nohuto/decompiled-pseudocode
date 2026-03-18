/*
 * XREFs of RemoveVisRgnTracker @ 0x1C004EC9C
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C004B644 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01536E0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C004EFEC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

void __fastcall RemoveVisRgnTracker(__int64 a1, int a2)
{
  CWindowProp *v3; // rcx
  int v4; // ebx
  bool v5; // zf
  CWindowProp *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( CWindowProp::GetProp<CVisRgnTrackerProp>(a1, (__int64 *)&v6) )
  {
    v3 = v6;
    v4 = ~a2;
    v5 = (v4 & *((_DWORD *)v6 + 8)) == 0;
    *((_DWORD *)v6 + 8) &= v4;
    if ( v5 )
      CWindowProp::RemoveAndDeleteProp(v3);
  }
}

/*
 * XREFs of _RemoveVisRgnTracker@8 @ 0xF4D94
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     ?_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB522A (-_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QAEXXZ @ 0x19C226 (-RemoveAndDeleteProp@CWindowProp@@QAEXXZ.c)
 */

void __fastcall RemoveVisRgnTracker(int a1, int a2)
{
  CWindowProp *v3; // ecx
  int v4; // esi
  bool v5; // zf
  CWindowProp *v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  if ( CWindowProp::GetProp<CVisRgnTrackerProp>(a1, (int *)&v6) )
  {
    v3 = v6;
    v4 = ~a2;
    v5 = (v4 & *((_DWORD *)v6 + 4)) == 0;
    *((_DWORD *)v6 + 4) &= v4;
    if ( v5 )
      CWindowProp::RemoveAndDeleteProp(v3);
  }
}

/*
 * XREFs of _UserRemoveWindowedSwapChain@8 @ 0xC2A82
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ @ 0xC2B32 (-ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ.c)
 *     ?NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z @ 0xC2CB2 (-NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SGHPAUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xC2DFC (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SGHPAUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xCC5E2 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     _RemoveVisRgnTracker@8 @ 0xF4D94 (_RemoveVisRgnTracker@8.c)
 */

int __stdcall UserRemoveWindowedSwapChain(CSwapChainProp *a1, int a2)
{
  int v2; // edi
  int v3; // eax
  struct tagWND *v4; // esi
  CSwapChainProp *v5; // edi

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = (struct tagWND *)v3;
  if ( v3 && (*(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF) != 0x29D )
  {
    a1 = 0;
    if ( a2 )
    {
      if ( CWindowProp::GetProp<CSwapChainProp>(v3, &a1) )
        *((_DWORD *)a1 + 3) = 1;
    }
    else if ( CWindowProp::RemoveProp<CSwapChainProp>(v3, &a1) )
    {
      v5 = a1;
      CSwapChainProp::ClearCompositionSurfaceObj(a1);
      if ( !IsWindowBeingDestroyed(v4) )
        CSwapChainProp::NotifyDwm(v5, v4);
      (**(void (__thiscall ***)(CSwapChainProp *))v5)(v5);
      RemoveVisRgnTracker(v4, 2);
    }
    v2 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}

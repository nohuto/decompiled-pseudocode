/*
 * XREFs of _UserSetWindowedSwapChain@12 @ 0xC2B6E
 * Callers:
 *     _UserSetWindowedSwapChainApiExt@12 @ 0xC2B56 (_UserSetWindowedSwapChainApiExt@12.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ @ 0xC2B32 (-ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ.c)
 *     ?NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z @ 0xC2CB2 (-NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SGHPAXPAPAV1@@Z @ 0xC2DA0 (-CreateSwapChainProp@CSwapChainProp@@SGHPAXPAPAV1@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xCC5E2 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall UserSetWindowedSwapChain(int a1, int a2, int a3)
{
  int v4; // edi
  struct tagWND *v5; // eax
  struct tagWND *v6; // ebx
  int v7; // eax
  CSwapChainProp *v8; // esi
  void *v10; // [esp+0h] [ebp-1Ch]
  struct CSwapChainProp **v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-10h]
  void *v14; // [esp+14h] [ebp-8h] BYREF
  CSwapChainProp *v15; // [esp+18h] [ebp-4h] BYREF
  void *v16; // [esp+24h] [ebp+8h]

  v14 = 0;
  v4 = 0;
  v15 = 0;
  EnterCrit(0, 1);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_22;
  v7 = *(_WORD *)(*((_DWORD *)v5 + 5) + 30) & 0x3FFF;
  if ( v7 == 669 )
    goto LABEL_22;
  if ( v7 == 671 )
    goto LABEL_22;
  if ( IsWindowBeingDestroyed(v6) )
    goto LABEL_22;
  v12 = IsWindowDesktopComposed(v6);
  if ( DxgkReferenceCompositionObject(a3, 1, 1, 1, &v14) < 0 )
    goto LABEL_22;
  CWindowProp::GetProp<CSwapChainProp>(v6, &v15);
  v8 = v15;
  if ( !v15 )
  {
    if ( !CSwapChainProp::CreateSwapChainProp(v10, v11) )
      goto LABEL_22;
    v8 = v15;
    v4 = CWindowProp::SetProp(v15, v6);
    if ( v4 )
    {
      v4 = 0;
      if ( CreateVisRgnTracker(v6) >= 0 )
      {
        v4 = 1;
LABEL_20:
        if ( v12 )
          v4 = CSwapChainProp::NotifyDwm(v8, v6);
        goto LABEL_22;
      }
    }
    (**(void (__thiscall ***)(CSwapChainProp *))v8)(v8);
    v8 = 0;
LABEL_19:
    if ( !v4 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v16 = v14;
  if ( *((void **)v15 + 2) == v14 )
  {
    *((_DWORD *)v15 + 3) = 0;
    v4 = 1;
    DxgkReleaseCompositionObjectReference(v14);
    goto LABEL_22;
  }
  if ( a2 || *((_DWORD *)v15 + 3) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj((void **)v15);
    if ( *((_DWORD *)v8 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    *((_DWORD *)v8 + 3) = 0;
    v4 = 1;
    *((_DWORD *)v8 + 2) = v16;
    goto LABEL_19;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return v4;
}

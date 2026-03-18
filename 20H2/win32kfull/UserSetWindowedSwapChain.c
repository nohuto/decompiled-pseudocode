/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C01532E8
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C01532D0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00804F0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     CreateVisRgnTracker @ 0x1C00C6F1C (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00C6FCC (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0153490 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C01535E0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C0153624 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // eax
  __int64 v11; // r9
  int v12; // r15d
  CSwapChainProp *v13; // rbx
  void *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_15;
  v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v8 & 0xFFFFFFFD) == 0 )
    goto LABEL_15;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_15;
  v10 = IsWindowDesktopComposed(v8);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v11, &v19) < 0 )
    goto LABEL_15;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v9, (__int64 *)&v20);
  v13 = v20;
  if ( !v20 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v19, &v20) )
      goto LABEL_15;
    v13 = v20;
    v3 = CWindowProp::SetProp(v20, (unsigned __int64)v9);
    if ( v3 )
    {
      if ( (int)CreateVisRgnTracker(v9, 2) >= 0 )
      {
        v3 = 1;
LABEL_13:
        if ( v12 )
          v3 = CSwapChainProp::NotifyDwm(v13, v9);
        goto LABEL_15;
      }
      v3 = 0;
    }
    (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
    v13 = 0LL;
LABEL_12:
    if ( !v3 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v14 = v19;
  if ( *((void **)v20 + 2) == v19 )
  {
    *((_DWORD *)v20 + 6) = 0;
    v3 = 1;
    DxgkReleaseCompositionObjectReference(v19);
    goto LABEL_15;
  }
  if ( a2 || *((_DWORD *)v20 + 6) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v20);
    if ( *((_QWORD *)v13 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v15, v16, v17);
    *((_DWORD *)v13 + 6) = 0;
    v3 = 1;
    *((_QWORD *)v13 + 2) = v14;
    goto LABEL_12;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v8);
  return v3;
}

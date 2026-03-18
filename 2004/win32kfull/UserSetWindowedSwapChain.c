/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C0150BE8
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C0150BD0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0027814 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C0028A38 (CreateVisRgnTracker.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C004B090 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0150D90 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0150EE0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C0150F24 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagWND *v11; // rsi
  int v12; // eax
  __int64 v13; // r9
  int v14; // r15d
  CSwapChainProp *v15; // rbx
  void *v16; // rbp
  void *v18; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_15;
  v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669;
  if ( (v9 & 0xFFFFFFFD) == 0 )
    goto LABEL_15;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_15;
  v12 = IsWindowDesktopComposed(v9);
  LOBYTE(v13) = 1;
  v14 = v12;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v13, &v18) < 0 )
    goto LABEL_15;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v11, (__int64 *)&v19);
  v15 = v19;
  if ( !v19 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v18, &v19) )
      goto LABEL_15;
    v15 = v19;
    v3 = CWindowProp::SetProp(v19, (__int64)v11);
    if ( v3 )
    {
      if ( (int)CreateVisRgnTracker(v11, 2) >= 0 )
      {
        v3 = 1;
LABEL_13:
        if ( v14 )
          v3 = CSwapChainProp::NotifyDwm(v15, v11);
        goto LABEL_15;
      }
      v3 = 0;
    }
    (**(void (__fastcall ***)(CSwapChainProp *))v15)(v15);
    v15 = 0LL;
LABEL_12:
    if ( !v3 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v16 = v18;
  if ( *((void **)v19 + 2) == v18 )
  {
    *((_DWORD *)v19 + 6) = 0;
    v3 = 1;
    DxgkReleaseCompositionObjectReference(v18);
    goto LABEL_15;
  }
  if ( a2 || *((_DWORD *)v19 + 6) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v19);
    if ( *((_QWORD *)v15 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    *((_DWORD *)v15 + 6) = 0;
    v3 = 1;
    *((_QWORD *)v15 + 2) = v16;
    goto LABEL_12;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v3;
}

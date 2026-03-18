/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C01536E0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C004B090 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     RemoveVisRgnTracker @ 0x1C004EC9C (RemoveVisRgnTracker.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0150D90 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0150EE0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C023E30C (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagWND *v9; // rbx
  CSwapChainProp *v11; // rsi
  CSwapChainProp *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFF;
    if ( (_DWORD)v7 != 669 )
    {
      v12 = 0LL;
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, (__int64 *)&v12) )
          *((_DWORD *)v12 + 6) = 1;
      }
      else if ( (unsigned int)CWindowProp::RemoveProp<CSwapChainProp>(v5, &v12) )
      {
        v11 = v12;
        CSwapChainProp::ClearCompositionSurfaceObj(v12);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v9) )
          CSwapChainProp::NotifyDwm(v11, v9);
        (**(void (__fastcall ***)(CSwapChainProp *))v11)(v11);
        RemoveVisRgnTracker((__int64)v9, 2);
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}

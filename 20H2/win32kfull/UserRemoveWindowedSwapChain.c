/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0156010
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00804F0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     RemoveVisRgnTracker @ 0x1C00C0E38 (RemoveVisRgnTracker.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0153490 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C01535E0 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C023D068 (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  CSwapChainProp *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  CSwapChainProp *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 != 669 )
    {
      v12 = 0LL;
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, (__int64 *)&v12) )
          *((_DWORD *)v12 + 6) = 1;
      }
      else if ( (unsigned int)CWindowProp::RemoveProp<CSwapChainProp>(v5, &v12) )
      {
        v9 = v12;
        CSwapChainProp::ClearCompositionSurfaceObj(v12);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) )
          CSwapChainProp::NotifyDwm(v9, v7, v10, v11);
        (**(void (__fastcall ***)(CSwapChainProp *))v9)(v9);
        RemoveVisRgnTracker((__int64)v7, 2);
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}

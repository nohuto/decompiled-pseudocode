/*
 * XREFs of _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180007D80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800056D8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005908 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180005F7C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  char *v4; // rdi
  int v5; // eax
  char *v6; // [rsp+38h] [rbp+10h] BYREF
  void (__stdcall *v7)(PSRWLOCK); // [rsp+48h] [rbp+20h] BYREF

  if ( *Context )
  {
    v4 = Context + 32;
    AcquireSRWLockExclusive((PSRWLOCK)Context + 4);
    Context[65] = 0;
    if ( v4 )
    {
      v7 = ReleaseSRWLockExclusive;
      v6 = v4;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v7, &v6);
    }
    if ( !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnDllShutdownInProgress;
      if ( wil::details::g_pfnDllShutdownInProgress )
        v5 = wil::details::g_pfnDllShutdownInProgress();
      if ( !v5 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)Context) )
      {
        wil::details_abi::SubscriptionList::OnSignaled(
          (LPCRITICAL_SECTION)(*((_QWORD *)Context + 3) + 200LL),
          *((PSRWLOCK *)Context + 3));
        wil::details_abi::FeatureStateData::RecordUsage(*((PSRWLOCK *)Context + 3));
      }
    }
  }
}

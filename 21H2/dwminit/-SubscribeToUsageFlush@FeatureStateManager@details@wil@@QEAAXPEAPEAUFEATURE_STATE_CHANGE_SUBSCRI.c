/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180005E40
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006780 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180005580 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180005F7C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  int v6; // eax
  RTL_SRWLOCK *v7; // rbp
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+8h] BYREF
  void (__stdcall *v9)(PSRWLOCK); // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)this && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v6 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v6 && wil::details::FeatureStateManager::EnsureStateData(this) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      if ( !*((_QWORD *)this + 30) )
      {
        v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
        if ( v7 )
        {
          *((_QWORD *)this + 30) = 0LL;
          AcquireSRWLockExclusive(v7);
          wil::details_abi::SubscriptionList::SubscribeUnderLock(
            (wil::details_abi::SubscriptionList *)&v7[25],
            (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)this + 30,
            (void (*)(void *))_lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
            this);
          v9 = ReleaseSRWLockExclusive;
          v8 = v7;
          wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v9, &v8);
        }
      }
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details::FeatureStateManager *)((char *)this + 168),
        a2,
        a3,
        0LL);
      if ( *a2 )
        *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
      if ( this != (wil::details::FeatureStateManager *)-32LL )
      {
        v9 = ReleaseSRWLockExclusive;
        v8 = (RTL_SRWLOCK *)((char *)this + 32);
        wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v9, &v8);
      }
    }
  }
}

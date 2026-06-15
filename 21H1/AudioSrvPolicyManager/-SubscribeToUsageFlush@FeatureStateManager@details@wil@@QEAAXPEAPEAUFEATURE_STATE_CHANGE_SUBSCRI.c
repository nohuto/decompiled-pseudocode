/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18000894C
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180009270 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180008214 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180008BB4 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  RTL_SRWLOCK *v6; // rbp

  *a2 = 0LL;
  if ( *(_BYTE *)this && wil::details::FeatureStateManager::EnsureStateData(this) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    if ( !*((_QWORD *)this + 12) )
    {
      if ( *((_QWORD *)this + 3) )
      {
        *((_QWORD *)this + 12) = 0LL;
        v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
        AcquireSRWLockExclusive(v6);
        wil::details_abi::SubscriptionList::SubscribeUnderLock(
          (wil::details_abi::SubscriptionList *)&v6[25],
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)this + 12,
          (void (*)(void *))_lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
          this);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
      }
    }
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details::FeatureStateManager *)((char *)this + 176),
      a2,
      a3,
      0LL);
    if ( *a2 )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
    if ( this != (wil::details::FeatureStateManager *)-32LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
  }
}

/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18004C448
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18004B330 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18004C4E0 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18004D1B4 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  RTL_SRWLOCK *v8; // rbx

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) )
  {
    v8 = this + 4;
    AcquireSRWLockExclusive(this + 4);
    if ( wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock((wil::details::FeatureStateManager *)this) )
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details_abi::SubscriptionList *)&this[13],
        a2,
        a3,
        a4);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}

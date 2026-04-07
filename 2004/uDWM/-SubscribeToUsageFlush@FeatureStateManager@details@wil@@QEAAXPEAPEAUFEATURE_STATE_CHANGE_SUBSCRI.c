/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18004D23C
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18004C460 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002F358 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18004D5E0 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18004ED44 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) && wil::details::FeatureStateManager::EnsureStateData(this) )
  {
    AcquireSRWLockExclusive(this + 4);
    wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock((wil::details::FeatureStateManager *)this);
    wil::details_abi::SubscriptionList::SubscribeUnderLock((wil::details_abi::SubscriptionList *)&this[22], a2, a3, 0LL);
    if ( *a2 )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
    if ( this != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(this + 4);
  }
}

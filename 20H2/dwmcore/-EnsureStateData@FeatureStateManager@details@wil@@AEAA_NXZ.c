/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002B614
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18002B454 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18002C810 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18014C99C (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002A074 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rax
  bool v3; // zf
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  Ptr = this[3].Ptr;
  v3 = Ptr == 0LL;
  if ( !Ptr )
  {
    if ( !this[2].Ptr )
    {
      v5 = (__int64)this[1].Ptr;
      v8 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v5, &v8) >= 0
        && !this[2].Ptr )
      {
        this[2].Ptr = v8;
      }
    }
    v6 = ((__int64)this[2].Ptr + 32) & -(__int64)(this[2].Ptr != 0LL);
    AcquireSRWLockExclusive(this + 4);
    v7 = (__int64)this[3].Ptr;
    if ( !v7 )
    {
      this[3].Ptr = (PVOID)v6;
      v7 = v6;
    }
    if ( this != (RTL_SRWLOCK *)-32LL )
    {
      ReleaseSRWLockExclusive(this + 4);
      v7 = (__int64)this[3].Ptr;
    }
    v3 = v7 == 0;
  }
  return !v3;
}

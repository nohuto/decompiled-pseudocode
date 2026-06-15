/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x14002248C
 * Callers:
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x140022A38 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x140025D1C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x140027844 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A634 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140021A7C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14003ADB4 (--1last_error_context@wil@@QEAA@XZ.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rax
  bool v3; // zf
  DWORD LastError; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF
  DWORD v10; // [rsp+3Ch] [rbp+14h]

  Ptr = this[3].Ptr;
  v3 = Ptr == 0LL;
  if ( !Ptr )
  {
    v9 = 0;
    LastError = GetLastError();
    v3 = this[3].Ptr == 0LL;
    v10 = LastError;
    if ( v3 )
    {
      if ( !this[2].Ptr )
      {
        v6 = (__int64)this[1].Ptr;
        v8 = 0LL;
        if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v6, &v8) >= 0
          && !this[2].Ptr )
        {
          this[2].Ptr = v8;
        }
      }
      v5 = ((__int64)this[2].Ptr + 32) & -(__int64)(this[2].Ptr != 0LL);
    }
    else
    {
      v5 = 0LL;
    }
    wil::srwlock::lock_exclusive(this + 4, (RTL_SRWLOCK **)&v8);
    if ( !this[3].Ptr )
      this[3].Ptr = (PVOID)v5;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v8);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
    v3 = this[3].Ptr == 0LL;
  }
  return !v3;
}

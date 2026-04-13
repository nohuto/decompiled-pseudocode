/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000B71C
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000C280 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000AFF4 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000BC50 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  RTL_SRWLOCK *v8; // rdi
  int (*ProcAddress)(void (*)(void *), void *, unsigned __int64 *, void **); // rax
  HMODULE ModuleHandleW; // rax
  int v11; // eax

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) )
  {
    v8 = this + 4;
    AcquireSRWLockExclusive(this + 4);
    if ( this[11].Ptr )
    {
      v11 = 0;
    }
    else
    {
      this[11].Ptr = 0LL;
      ProcAddress = g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification;
      if ( g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification )
        goto LABEL_8;
      ModuleHandleW = g_wil_details_ntdllModuleHandle;
      if ( !g_wil_details_ntdllModuleHandle )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        g_wil_details_ntdllModuleHandle = ModuleHandleW;
      }
      ProcAddress = (int (*)(void (*)(void *), void *, unsigned __int64 *, void **))GetProcAddress(
                                                                                      ModuleHandleW,
                                                                                      "RtlRegisterFeatureConfigurationChangeNotification");
      g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification = ProcAddress;
      if ( ProcAddress )
LABEL_8:
        v11 = ((__int64 (__fastcall *)(void (__fastcall *)(void *), RTL_SRWLOCK *, _QWORD, RTL_SRWLOCK *))ProcAddress)(
                _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
                this,
                0LL,
                &this[11]);
      else
        v11 = -1073741511;
    }
    if ( !v11
      && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                          &this[9],
                          0x418A073AA3BC7C75LL,
                          this)
      && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                          &this[10],
                          0x418A073AA3BC88F5LL,
                          this) )
    {
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details_abi::SubscriptionList *)&this[13],
        a2,
        a3,
        a4);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}

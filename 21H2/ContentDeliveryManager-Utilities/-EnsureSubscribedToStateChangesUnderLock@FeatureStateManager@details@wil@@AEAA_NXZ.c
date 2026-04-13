/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000BB34
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000C0C0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000B98C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::FeatureStateManager *this)
{
  _QWORD *v1; // rsi
  char v2; // bl
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  int v6; // eax

  v1 = (_QWORD *)((char *)this + 160);
  v2 = 0;
  if ( *((_QWORD *)this + 20) )
  {
    v6 = 0;
  }
  else
  {
    ProcAddress = (FARPROC)g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification;
    *v1 = 0LL;
    if ( ProcAddress )
      goto LABEL_7;
    ModuleHandleW = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = ModuleHandleW;
    }
    ProcAddress = GetProcAddress(ModuleHandleW, "RtlRegisterFeatureConfigurationChangeNotification");
    g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification = (__int64)ProcAddress;
    if ( ProcAddress )
LABEL_7:
      v6 = ((__int64 (__fastcall *)(void (__fastcall *)(char *), wil::details::FeatureStateManager *, _QWORD, _QWORD *))ProcAddress)(
             _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
             this,
             0LL,
             v1);
    else
      v6 = -1073741511;
  }
  if ( !v6
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (wil::details **)this + 18,
                        0x418A073AA3BC7C75LL,
                        (__int64)this)
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (wil::details **)this + 19,
                        0x418A073AA3BC88F5LL,
                        (__int64)this) )
  {
    return 1;
  }
  return v2;
}

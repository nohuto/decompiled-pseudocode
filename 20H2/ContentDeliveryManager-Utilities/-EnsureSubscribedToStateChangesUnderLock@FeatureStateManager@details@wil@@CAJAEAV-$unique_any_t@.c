/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000B9BC
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000B45C (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800081CC (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180009760 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  wil::details *v5; // rbp
  unsigned int v6; // r14d
  const struct __WIL__WNF_TYPE_ID *v7; // rbx
  DWORD LastError; // edi
  struct __WIL__WNF_USER_SUBSCRIPTION *v9; // rdx
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  unsigned int v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-44h] BYREF
  const struct __WIL__WNF_TYPE_ID *v15; // [rsp+58h] [rbp-40h] BYREF

  v15 = a2;
  if ( *a1 )
    return 0LL;
  v13 = 0;
  v14 = 0;
  wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v15, a2, a3, &v13, 0LL, &v14);
  v5 = *a1;
  v6 = v13;
  v7 = v15;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v9);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(wil::details **, const struct __WIL__WNF_TYPE_ID *, _QWORD, void *, const void *, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlSubscribeWnfStateChangeNotification");
  g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (int (__high *)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int))ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(wil::details **, const struct __WIL__WNF_TYPE_ID *, _QWORD, void *, const void *, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  else
    return 3221225785LL;
}

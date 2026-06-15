/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x14002252C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1400224B4 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x140027DF8 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x140028818 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x1400289B8 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14003ACE4 (--1last_error_context@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  bool v3; // zf
  wil::details *v6; // rdi
  struct __WIL__WNF_USER_SUBSCRIPTION *v7; // rdx
  unsigned int v9; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-1Ch] BYREF
  _BYTE v11[4]; // [rsp+48h] [rbp-18h] BYREF
  DWORD LastError; // [rsp+4Ch] [rbp-14h]
  const struct __WIL__WNF_TYPE_ID *v13; // [rsp+50h] [rbp-10h] BYREF

  v3 = *a1 == 0LL;
  v13 = a2;
  if ( !v3 )
    return 0LL;
  v9 = 0;
  v10 = 0;
  wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v13, a2, a3, &v9, 0LL, &v10);
  v6 = *a1;
  if ( *a1 )
  {
    v11[0] = 0;
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v6, v7);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v11);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           a1,
           v13,
           v9,
           _lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}

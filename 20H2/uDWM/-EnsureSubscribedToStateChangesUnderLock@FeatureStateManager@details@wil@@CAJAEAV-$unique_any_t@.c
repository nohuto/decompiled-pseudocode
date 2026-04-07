/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18004D22C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18004D1B4 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180040E38 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18004D2D4 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007EECC (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  wil::details *v5; // rsi
  DWORD LastError; // ebx
  struct __WIL__WNF_USER_SUBSCRIPTION *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-34h] BYREF
  const struct __WIL__WNF_TYPE_ID *v11; // [rsp+48h] [rbp-30h] BYREF

  v11 = a2;
  if ( *a1 )
    return 0LL;
  v9 = 0;
  v10 = 0;
  wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v11, a2, a3, &v9, 0LL, &v10);
  v5 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v8);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           a1,
           v11,
           v9,
           &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}

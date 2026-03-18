/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18002C4AC
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002C434 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18002C564 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18002C610 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E22B0 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
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
  struct __WIL__WNF_USER_SUBSCRIPTION *v10; // rdx
  unsigned int v11; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-44h] BYREF
  const struct __WIL__WNF_TYPE_ID *v13; // [rsp+48h] [rbp-40h] BYREF

  v13 = a2;
  if ( *a1 )
    return 0LL;
  v11 = 0;
  v12 = 0;
  wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v13, a2, a3, &v11, 0LL, &v12);
  v5 = *a1;
  v6 = v11;
  v7 = v13;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v10);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           a1,
           v7,
           v6,
           &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}

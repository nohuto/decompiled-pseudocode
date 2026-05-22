/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18003DDA8
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003DD30 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x180011E2C (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800370A4 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180064BF4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180067F1C (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  bool v3; // zf
  wil::details *v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  struct __WIL__WNF_USER_SUBSCRIPTION *v9; // rdx
  unsigned int v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-1Ch] BYREF
  _BYTE v13[4]; // [rsp+48h] [rbp-18h] BYREF
  DWORD LastError; // [rsp+4Ch] [rbp-14h]
  const struct __WIL__WNF_TYPE_ID *v15; // [rsp+50h] [rbp-10h] BYREF

  v3 = *a1 == 0LL;
  v15 = a2;
  if ( !v3 )
    return 0LL;
  v11 = 0;
  v12 = 0;
  wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v15, a2, a3, &v11, 0LL, &v12);
  v6 = *a1;
  v7 = v11;
  v8 = (__int64)v15;
  if ( *a1 )
  {
    v13[0] = 0;
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v6, v9);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v13);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           (__int64)a1,
           v8,
           v7,
           (__int64)_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           (__int64)a3);
}

/*
 * XREFs of ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x180087B04
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180087A4C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180087C38 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RtlSubscribeWnfStateChangeNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int (__high *v5)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int); // r10
  HMODULE NtDllModuleHandle; // rax

  v5 = g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))v5)(
             a1,
             a2,
             a3,
             a4,
             a5,
             0LL,
             0,
             0);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (int (__high *)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int))GetProcAddress(NtDllModuleHandle, "RtlSubscribeWnfStateChangeNotification");
  v5 = g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))v5)(
             a1,
             a2,
             a3,
             a4,
             a5,
             0LL,
             0,
             0);
  else
    return 3221225785LL;
}

/*
 * XREFs of wil_details_RtlSubscribeWnfStateChangeNotification @ 0x18003E534
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18003DB30 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800383D4 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RtlSubscribeWnfStateChangeNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD); // r10
  HMODULE NtDllModuleHandle; // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return v5(a1, a2, a3, a4, a5, 0LL, 0, 0);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (__int64)GetProcAddress(
                                                                       NtDllModuleHandle,
                                                                       "RtlSubscribeWnfStateChangeNotification");
  v5 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return v5(a1, a2, a3, a4, a5, 0LL, 0, 0);
  else
    return 3221225785LL;
}

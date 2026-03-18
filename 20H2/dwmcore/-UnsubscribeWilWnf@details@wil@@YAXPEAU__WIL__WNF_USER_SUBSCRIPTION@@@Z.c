/*
 * XREFs of ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E22B0
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18002C4AC (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800E1D80 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18002C698 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::UnsubscribeWilWnf(wil::details *this, struct __WIL__WNF_USER_SUBSCRIPTION *a2)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
        (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
  {
    ((void (__fastcall *)(wil::details *, struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress)(this, a2);
  }
}

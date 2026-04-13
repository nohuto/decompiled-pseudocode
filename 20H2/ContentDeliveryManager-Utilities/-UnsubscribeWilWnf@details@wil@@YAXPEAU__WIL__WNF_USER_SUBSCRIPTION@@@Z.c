/*
 * XREFs of ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180009760
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000B9BC (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180017320 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::UnsubscribeWilWnf(wil::details *this, struct __WIL__WNF_USER_SUBSCRIPTION *a2)
{
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax

  ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
    goto LABEL_5;
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                  ModuleHandleW,
                                                                  "RtlUnsubscribeWnfNotificationWaitForCompletion");
  g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
  if ( ProcAddress )
LABEL_5:
    ((void (__fastcall *)(wil::details *, struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress)(this, a2);
}

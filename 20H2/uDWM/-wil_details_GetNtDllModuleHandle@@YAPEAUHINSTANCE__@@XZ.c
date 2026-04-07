/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004D380
 * Callers:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180040E38 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180041850 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180042630 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18004D050 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z @ 0x18004D138 (-wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z.c)
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18004D2D4 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18007E8D0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007EDA8 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007EECC (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18007F28C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18007F3AC (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}

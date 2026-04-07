/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004E630
 * Callers:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180040788 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180040F80 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180041DB0 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18004E300 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z @ 0x18004E3E8 (-wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z.c)
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18004E584 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18007F120 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007F5F8 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007F71C (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18007FB10 (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18007FC30 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
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

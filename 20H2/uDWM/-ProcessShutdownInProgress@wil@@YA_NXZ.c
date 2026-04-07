/*
 * XREFs of ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18002D9C0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18002CED8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002CFB4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18004C154 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005341C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180053474 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18007D6F8 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18007E038 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18007E2C0 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18007E460 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18007E4F0 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ProcessShutdownInProgress(wil *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::details::g_processShutdownInProgress )
    return 1;
  if ( wil::details::g_pfnDllShutdownInProgress ? wil::details::g_pfnDllShutdownInProgress() : 0 )
    return 1;
  return v1;
}

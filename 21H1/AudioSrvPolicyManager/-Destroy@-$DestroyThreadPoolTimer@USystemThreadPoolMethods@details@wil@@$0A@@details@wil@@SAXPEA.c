/*
 * XREFs of ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18000DD5C
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180008A50 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180008C64 (-EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180009338 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DA24 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DB18 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}

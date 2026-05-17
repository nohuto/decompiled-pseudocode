/*
 * XREFs of _NtUpdateWnfStateData@28 @ 0x4B2F4660
 * Callers:
 *     _RtlPublishWnfStateData@24 @ 0x4B2F1FE0 (_RtlPublishWnfStateData@24.c)
 *     _SignalStartWerSvc@0 @ 0x4B33AD08 (_SignalStartWerSvc@0.c)
 *     _RtlTestAndPublishWnfStateData@28 @ 0x4B33BFD0 (_RtlTestAndPublishWnfStateData@28.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 *     _RtlpFcNotifyFeatureUsageTarget@8 @ 0x4B375B93 (_RtlpFcNotifyFeatureUsageTarget@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtUpdateWnfStateData(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}

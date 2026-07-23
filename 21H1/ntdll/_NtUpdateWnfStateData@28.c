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

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  return Wow64SystemServiceCall();
}

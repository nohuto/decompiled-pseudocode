/*
 * XREFs of _NtQueryWnfStateData@24 @ 0x4B2F3FB0
 * Callers:
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _wil_details_StagingConfig_Load@20 @ 0x4B30692A (_wil_details_StagingConfig_Load@20.c)
 *     _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0 (_RtlQueryWnfStateDataWithExplicitScope@28.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 *     _RtlpFcNotifyFeatureUsageTarget@8 @ 0x4B375B93 (_RtlpFcNotifyFeatureUsageTarget@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  return Wow64SystemServiceCall();
}

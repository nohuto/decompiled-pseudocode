/*
 * XREFs of _ZwPowerInformation@20 @ 0x4B2F2F70
 * Callers:
 *     _RtlCheckSystemBootStatusIntegrity@4 @ 0x4B3508F0 (_RtlCheckSystemBootStatusIntegrity@4.c)
 *     _RtlRestoreSystemBootStatusDefaults@0 @ 0x4B350CB0 (_RtlRestoreSystemBootStatusDefaults@0.c)
 *     _RtlUnlockBootStatusData@4 @ 0x4B350D40 (_RtlUnlockBootStatusData@4.c)
 *     _RtlpRecordBootStatusData@16 @ 0x4B350F8B (_RtlpRecordBootStatusData@16.c)
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     _RtlpDestroyExecutionRequiredRequest@4 @ 0x4B36FCC4 (_RtlpDestroyExecutionRequiredRequest@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return Wow64SystemServiceCall();
}

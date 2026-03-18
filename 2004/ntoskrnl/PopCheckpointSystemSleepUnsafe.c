/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x1409AF874
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x1407624E4 (PopEnableSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x1404B6EB0 (HalSetEnvironmentVariableEx.c)
 *     VslReportBugCheckProgress @ 0x1404F8070 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14094BF10 (ExSetFirmwareEnvironmentVariable.c)
 */

NTSTATUS __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !PoAllProcIntrDisabled )
    return ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v2, 1, 1);
  if ( PopCheckpointEfiRuntimeRedirected )
    return VslReportBugCheckProgress(
             (char *)L"SystemSleepCheckpoint",
             (__int128 *)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             &v2,
             1u,
             1);
  return HalSetEnvironmentVariableEx(
           L"SystemSleepCheckpoint",
           (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
           (__int64)&v2,
           1,
           1);
}

/*
 * XREFs of HvlpWriteEventLog @ 0x1404F4D24
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CBAA8 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x1404F44D0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4658 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1404F48CC (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1404F4944 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1404F49A0 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4AA8 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1404F4C5C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}

/*
 * XREFs of HvlpWriteEventLog @ 0x1404F46D4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x1404F3E80 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4008 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1404F427C (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1404F42F4 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1404F4350 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4458 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1404F460C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
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

/*
 * XREFs of ZwPowerInformation @ 0x1403F8D50
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404BCA68 (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x14071FDDC (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140786774 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140790F5C (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407CA890 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407CB678 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E372C (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408F2408 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408F252C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14090AD28 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140917D90 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140917FC0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A76FFC (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}

/*
 * XREFs of ZwPowerInformation @ 0x1403F41A0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404B9548 (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x1406A4E40 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140778174 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14078356C (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407BC000 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407BCDE8 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408DD8EC (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EC7F8 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EC91C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140905108 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140912250 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140912480 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A70D1C (PopCreateIdlePhaseWatchdog.c)
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

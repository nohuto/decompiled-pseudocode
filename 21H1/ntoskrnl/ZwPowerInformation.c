/*
 * XREFs of ZwPowerInformation @ 0x1403F2F10
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404B8E68 (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140775D64 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14077AB6C (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407B8E90 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407B9C78 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408DC57C (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EB578 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EB69C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140903E28 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140910ED0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140911100 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A7000C (PopCreateIdlePhaseWatchdog.c)
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

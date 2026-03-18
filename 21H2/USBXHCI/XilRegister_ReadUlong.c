/*
 * XREFs of XilRegister_ReadUlong @ 0x1C00139CC
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0001160 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_InterruptDisable @ 0x1C000CC70 (Interrupter_InterruptDisable.c)
 *     RootHub_D0Exit @ 0x1C000D388 (RootHub_D0Exit.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000D648 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C000D734 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00117FC (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011B68 (Controller_Start.c)
 *     RootHub_D0Entry @ 0x1C0011DD8 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_DumpPortData @ 0x1C00133B0 (RootHub_DumpPortData.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00139F0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     Register_WaitForControllerReady @ 0x1C0013BAC (Register_WaitForControllerReady.c)
 *     Interrupter_InterruptEnable @ 0x1C0013C78 (Interrupter_InterruptEnable.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0014130 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C00141D8 (Register_SetClearSSICPortUnused.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0017208 (Register_FindFirstExtendedCapability.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0017624 (RootHub_Read30PortSpeeds.c)
 *     Register_GetAllExtendedCapability @ 0x1C0018104 (Register_GetAllExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C0018848 (Register_FindNextExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C00188AC (Register_GetExtendedCapabilityTotalSize.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030DA4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00310D8 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0031544 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00319B4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0032F20 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034C90 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034EA0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003BDEC (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C1CC (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003D278 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003D3C4 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D604 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003DB7C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003DD2C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E1D0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E620 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     DmaEnabler_Create @ 0x1C006E4E0 (DmaEnabler_Create.c)
 *     RootHub_PrepareHardware @ 0x1C006F968 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C0072764 (RootHub_PopulatePortFlagsFromRegistry.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0075DCC (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003D040 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 553LL) )
    return *a2;
  v3 = 0;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}

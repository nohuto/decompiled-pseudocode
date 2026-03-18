/*
 * XREFs of XilRegister_ReadUlong @ 0x1C0013DA0
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C00053F0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_InterruptDisable @ 0x1C000A8B8 (Interrupter_InterruptDisable.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000AF28 (RootHub_WaitForResumeCompletion.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     RootHub_D0Exit @ 0x1C000B838 (RootHub_D0Exit.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000F3B8 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000F58C (Register_SetClearSSICPortUnused.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Interrupter_InterruptEnable @ 0x1C0010F5C (Interrupter_InterruptEnable.c)
 *     Register_WaitForControllerReady @ 0x1C001102C (Register_WaitForControllerReady.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00110F8 (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0011CC0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_D0Entry @ 0x1C0011F50 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_DumpPortData @ 0x1C0013A44 (RootHub_DumpPortData.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0013F4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_D0Entry @ 0x1C0015068 (Register_D0Entry.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0017F24 (RootHub_Read30PortSpeeds.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0018F9C (Register_FindFirstExtendedCapability.c)
 *     Register_GetAllExtendedCapability @ 0x1C0019008 (Register_GetAllExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C00198A0 (Register_FindNextExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C0019A70 (Register_GetExtendedCapabilityTotalSize.c)
 *     RootHub_DetectLinkErrorState @ 0x1C001AFA4 (RootHub_DetectLinkErrorState.c)
 *     Controller_D0EntryRestoreState @ 0x1C00317F4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0031B1C (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0031F7C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0032584 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0033BA0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0035720 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0035910 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003C528 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C8E8 (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003D960 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003DAAC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003DCF4 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003DEC8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003E26C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003E41C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E8C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003ED10 (RootHub_Update20HardwareLpmParameters.c)
 *     Register_PrepareHardware @ 0x1C006DF14 (Register_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006F01C (DmaEnabler_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070C80 (Register_ParseCapabilityRegister.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0075A58 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003D720 (Register_ReadSecureMmio.c)
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

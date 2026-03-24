/*
 * XREFs of XilRegister_WriteUlong @ 0x1C0013F1C
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C00053F0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_InterruptDisable @ 0x1C000A8B8 (Interrupter_InterruptDisable.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     RootHub_D0Exit @ 0x1C000B838 (RootHub_D0Exit.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000F3B8 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000F58C (Register_SetClearSSICPortUnused.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Interrupter_InterruptEnable @ 0x1C0010F5C (Interrupter_InterruptEnable.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0011CC0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_D0Entry @ 0x1C0011F50 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C00141B0 (XilCoreDeviceSlot_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00143C4 (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_D0Entry @ 0x1C0015068 (Register_D0Entry.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030AF4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0030E1C (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C003127C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0032EA0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034050 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034A20 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034C10 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003B8B8 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003BC78 (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003CCFC (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003CE48 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D094 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D268 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003D60C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003D7BC (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E0B0 (RootHub_Update20HardwareLpmParameters.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C00500C4 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006EC08 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C00768D4 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C003CEA0 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 553) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}

/*
 * XREFs of XilRegister_WriteUlong @ 0x1C0012E40
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C00053F0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_InterruptDisable @ 0x1C000A078 (Interrupter_InterruptDisable.c)
 *     Register_ControllerStop @ 0x1C000A738 (Register_ControllerStop.c)
 *     RootHub_D0Exit @ 0x1C000AF68 (RootHub_D0Exit.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000E928 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000EACC (Register_SetClearSSICPortUnused.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     Interrupter_InterruptEnable @ 0x1C00104D0 (Interrupter_InterruptEnable.c)
 *     Controller_Start @ 0x1C00109E8 (Controller_Start.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0010F2C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001100C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_D0Entry @ 0x1C0011298 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_BiosHandoff @ 0x1C0012E98 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0013288 (XilCoreDeviceSlot_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001349C (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_D0Entry @ 0x1C0013F88 (Register_D0Entry.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030314 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003063C (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0030A9C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C00326C0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034240 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034430 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003B048 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003B408 (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003C480 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003C5CC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003C814 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003C9E8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003CD8C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003CF3C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003D830 (RootHub_Update20HardwareLpmParameters.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C00501B4 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C00765E4 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C003C624 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 537) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}

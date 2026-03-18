/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228
 * Callers:
 *     RootHub_D0Exit @ 0x1C000AF68 (RootHub_D0Exit.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0010F2C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001100C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_D0Entry @ 0x1C0011298 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034240 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034430 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003C814 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003C9E8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003CD8C (RootHub_ForceU3.c)
 *     RootHub_SetPortResumeTime @ 0x1C003D0A4 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003D830 (RootHub_Update20HardwareLpmParameters.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall RootHub_ReleaseReadModifyWriteLock(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  char v7; // si
  char result; // al

  v5 = *(_QWORD *)(a1 + 48) + 104LL * a2;
  v6 = *(_QWORD *)(v5 + 24);
  v7 = *(_BYTE *)(v5 + 32);
  *(_BYTE *)(v5 + 32) = 0;
  if ( *(_DWORD *)v6 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
               WdfDriverGlobals,
               *(_QWORD *)(v6 + 8));
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
               WdfDriverGlobals,
               *(_QWORD *)(v6 + 8));
  }
  if ( v7 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}

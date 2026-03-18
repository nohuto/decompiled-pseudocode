/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4
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
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rbx
  char v6; // si
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx

  v4 = a2;
  v6 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v10 + 537) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v10);
      v6 = 1;
    }
  }
  v7 = *(_QWORD *)(a1 + 48) + 104 * v4;
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_DWORD *)v8 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
               WdfDriverGlobals,
               *(_QWORD *)(v8 + 8),
               0LL);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
               WdfDriverGlobals,
               *(_QWORD *)(v8 + 8));
  }
  *(_BYTE *)(v7 + 32) = v6;
  return result;
}

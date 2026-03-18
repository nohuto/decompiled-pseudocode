/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C
 * Callers:
 *     RootHub_D0Exit @ 0x1C000D388 (RootHub_D0Exit.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C000D734 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_D0Entry @ 0x1C0011DD8 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034C90 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034EA0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D604 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003DB7C (RootHub_ForceU3.c)
 *     RootHub_SetPortResumeTime @ 0x1C003DE94 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E620 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 */

char __fastcall RootHub_ReleaseReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  char v4; // bl
  char result; // al

  v3 = *(_QWORD *)(a1 + 48) + 112LL * a2;
  v4 = *(_BYTE *)(v3 + 32);
  *(_BYTE *)(v3 + 32) = 0;
  result = DynamicLock_Release(*(_QWORD *)(v3 + 24));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}

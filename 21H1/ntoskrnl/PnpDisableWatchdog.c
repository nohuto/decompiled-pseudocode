/*
 * XREFs of PnpDisableWatchdog @ 0x14070AEC0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037B1C0 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x140723FC0 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x140737340 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x14089E090 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x14035B3E4 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x14035B430 (ExDeleteTimer.c)
 *     PnpRecordBlackbox @ 0x14070AF90 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408A7474 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  ExDeleteTimer(*(_QWORD *)(v1 + 56), 1, 1, 0LL);
  *(_QWORD *)(v1 + 56) = 0LL;
  if ( *(int *)(v1 + 96) > 0 )
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
  ExFreePoolWithTag((PVOID)v1, 0x54645750u);
  v3 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  PnpRecordBlackbox(0LL, v3);
  if ( *(_BYTE *)(a1 + 32) )
    PnpWatchdogEtwWrite(a1, 0LL);
  PnpFreeWatchdog((void *)a1);
}

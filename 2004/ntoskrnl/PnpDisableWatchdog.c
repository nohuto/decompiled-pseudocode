/*
 * XREFs of PnpDisableWatchdog @ 0x1406498CC
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037BF40 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x14072AA5C (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14075EED0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x14089F3B0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x140275234 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x140275280 (ExDeleteTimer.c)
 *     PnpRecordBlackbox @ 0x14064999C (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408A8794 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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

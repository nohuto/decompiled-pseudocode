/*
 * XREFs of PnpDisableWatchdog @ 0x1406F4B48
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037DC70 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x1407394EC (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x1408A4EE0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x14033BFC4 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x14033C010 (ExDeleteTimer.c)
 *     PnpRecordBlackbox @ 0x1406F4C18 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AE2C4 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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

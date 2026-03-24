/*
 * XREFs of PnpDisableWatchdog @ 0x1406774E0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037E000 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x1406E78D0 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x140735EC0 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x14073E92C (PnpCallAddDevice.c)
 *     PnpProcessCompletedEject @ 0x1408A24B0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PnpFreeWatchdog @ 0x14027F8C4 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x14027F910 (ExDeleteTimer.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     PnpRecordBlackbox @ 0x1406775B0 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AB894 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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

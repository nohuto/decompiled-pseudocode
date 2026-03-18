/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x14050CCA8
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072B200 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx(a1 + 80, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

/*
 * XREFs of PiSwUnlock @ 0x140737DA4
 * Callers:
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407BC26C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PiSwUnlock()
{
  ExReleaseResourceLite(&PiSwLockObj);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

/*
 * XREFs of PiSwUnlock @ 0x140747030
 * Callers:
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D118 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEDBC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 */

_QWORD *PiSwUnlock()
{
  ExReleaseResourceLite(&PiSwLockObj);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

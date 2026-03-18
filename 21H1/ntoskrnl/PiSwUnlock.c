/*
 * XREFs of PiSwUnlock @ 0x14072C6C0
 * Callers:
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PiSwIrpInterfaceRegister @ 0x140752F94 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x1407B90FC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

_QWORD *PiSwUnlock()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseResourceLite(&PiSwLockObj);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}

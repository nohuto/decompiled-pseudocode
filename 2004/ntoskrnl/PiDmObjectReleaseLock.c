/*
 * XREFs of PiDmObjectReleaseLock @ 0x140734C38
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PiDmObjectReleaseLock(ULONG_PTR a1)
{
  ExReleasePushLockEx(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

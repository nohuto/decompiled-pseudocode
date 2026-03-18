/*
 * XREFs of PiDmObjectReleaseLock @ 0x1407440C8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDmObjectReleaseLock(ULONG_PTR a1)
{
  ExReleasePushLockEx(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

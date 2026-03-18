/*
 * XREFs of PiDmObjectReleaseLock @ 0x140730208
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDmObjectReleaseLock(ULONG_PTR a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  ExReleasePushLockEx(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
}

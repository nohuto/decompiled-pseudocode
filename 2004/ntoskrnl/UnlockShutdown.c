/*
 * XREFs of UnlockShutdown @ 0x14070A50C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UnlockShutdown()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

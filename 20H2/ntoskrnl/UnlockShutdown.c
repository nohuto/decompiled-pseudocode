/*
 * XREFs of UnlockShutdown @ 0x1405DADCC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *UnlockShutdown()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

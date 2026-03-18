/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1406D5E5C
 * Callers:
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char CmpUnlockAppHiveLoadList()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

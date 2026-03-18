/*
 * XREFs of CmpUnlockHiveList @ 0x14068DF80
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x1402D2E54 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140322E14 (CmpJoinClassOfTrust.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

/*
 * XREFs of CmpLockHiveListExclusive @ 0x14068DF60
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x1402D2E54 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140322E14 (CmpJoinClassOfTrust.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

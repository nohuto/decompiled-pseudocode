/*
 * XREFs of CmpUnlockHiveList @ 0x1405DADAC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpUnJoinClassOfTrust @ 0x1402F2D68 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x140331630 (CmpJoinClassOfTrust.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

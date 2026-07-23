/*
 * XREFs of CmpUnlockHiveList @ 0x1405E2A98
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x140213A50 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x140214140 (CmpJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

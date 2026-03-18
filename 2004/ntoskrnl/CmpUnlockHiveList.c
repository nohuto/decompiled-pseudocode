/*
 * XREFs of CmpUnlockHiveList @ 0x14070BD9C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpUnJoinClassOfTrust @ 0x1402725E0 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x14035DA98 (CmpJoinClassOfTrust.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

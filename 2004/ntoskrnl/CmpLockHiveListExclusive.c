/*
 * XREFs of CmpLockHiveListExclusive @ 0x14070BDBC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpUnJoinClassOfTrust @ 0x1402725E0 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x14035DA98 (CmpJoinClassOfTrust.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

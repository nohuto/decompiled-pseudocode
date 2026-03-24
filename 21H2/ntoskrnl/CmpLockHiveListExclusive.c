/*
 * XREFs of CmpLockHiveListExclusive @ 0x14071D2A4
 * Callers:
 *     CmpJoinClassOfTrust @ 0x1402D3974 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x14036173C (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

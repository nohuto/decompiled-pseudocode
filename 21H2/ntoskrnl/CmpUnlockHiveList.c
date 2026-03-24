/*
 * XREFs of CmpUnlockHiveList @ 0x14071D2C4
 * Callers:
 *     CmpJoinClassOfTrust @ 0x1402D3974 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x14036173C (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

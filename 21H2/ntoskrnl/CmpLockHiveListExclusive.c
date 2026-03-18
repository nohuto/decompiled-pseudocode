/*
 * XREFs of CmpLockHiveListExclusive @ 0x1406DEFFC
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140256264 (CmpJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

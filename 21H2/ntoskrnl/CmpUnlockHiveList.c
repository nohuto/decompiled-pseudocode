/*
 * XREFs of CmpUnlockHiveList @ 0x1406DEFDC
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140256264 (CmpJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

__int64 CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

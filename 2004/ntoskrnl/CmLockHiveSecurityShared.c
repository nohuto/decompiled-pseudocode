/*
 * XREFs of CmLockHiveSecurityShared @ 0x14087274C
 * Callers:
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1776, 0LL);
}

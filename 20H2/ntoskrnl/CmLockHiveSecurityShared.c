/*
 * XREFs of CmLockHiveSecurityShared @ 0x14087829C
 * Callers:
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1776, 0LL);
}

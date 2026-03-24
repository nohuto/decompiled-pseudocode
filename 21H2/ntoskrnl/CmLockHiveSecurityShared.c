/*
 * XREFs of CmLockHiveSecurityShared @ 0x140875B88
 * Callers:
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1776, 0LL);
}

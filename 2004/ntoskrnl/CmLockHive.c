/*
 * XREFs of CmLockHive @ 0x1405E2C78
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x140650858 (CmpFlushNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
}

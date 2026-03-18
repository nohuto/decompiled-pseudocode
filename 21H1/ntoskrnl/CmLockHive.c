/*
 * XREFs of CmLockHive @ 0x1405F3CFC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x140659FD8 (CmpFlushNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
}

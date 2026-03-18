/*
 * XREFs of CmLockHive @ 0x1405F7884
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x1406A3528 (CmpFlushNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
}

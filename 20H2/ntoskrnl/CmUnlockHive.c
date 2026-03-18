/*
 * XREFs of CmUnlockHive @ 0x1405F7BA8
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x1406A3528 (CmpFlushNotify.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1672));
  return KeAbPostRelease(v1);
}

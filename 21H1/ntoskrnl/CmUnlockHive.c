/*
 * XREFs of CmUnlockHive @ 0x1405F4018
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x140659FD8 (CmpFlushNotify.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1672);
  return KeAbPostRelease(v1);
}

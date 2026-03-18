/*
 * XREFs of CmUnlockHive @ 0x1405E2938
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x140650858 (CmpFlushNotify.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1672));
  return KeAbPostRelease(v1);
}

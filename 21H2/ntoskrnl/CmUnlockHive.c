/*
 * XREFs of CmUnlockHive @ 0x140663A5C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x14066AE8C (CmpFlushNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1672);
  return KeAbPostRelease(v1);
}

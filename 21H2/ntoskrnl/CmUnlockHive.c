/*
 * XREFs of CmUnlockHive @ 0x14065887C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x14065FCAC (CmpFlushNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1672);
  return KeAbPostRelease(v1);
}

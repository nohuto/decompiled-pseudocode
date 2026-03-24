/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407C9020
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8E74 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

char __fastcall CmpVolumeContextUnlockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 56;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 56);
  return KeAbPostRelease(v1);
}

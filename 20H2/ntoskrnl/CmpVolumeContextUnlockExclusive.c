/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407C4D60
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C4BB4 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall CmpVolumeContextUnlockExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 56;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  return KeAbPostRelease(v1);
}

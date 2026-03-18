/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407B6530
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B6384 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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

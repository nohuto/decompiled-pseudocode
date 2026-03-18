/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x1407B33C0
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B3214 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
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

/*
 * XREFs of CmpVolumeContextUnlockShared @ 0x1407C4C44
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C4BB4 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

char __fastcall CmpVolumeContextUnlockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 56);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}

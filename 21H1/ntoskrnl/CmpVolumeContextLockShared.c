/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407B32D8
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B3214 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}

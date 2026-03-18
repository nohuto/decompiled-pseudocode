/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407B6448
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B6384 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}

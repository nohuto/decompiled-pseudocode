/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407C8F38
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8E74 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}

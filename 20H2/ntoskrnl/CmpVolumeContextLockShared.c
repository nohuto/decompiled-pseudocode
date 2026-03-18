/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407C4C78
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C4BB4 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}

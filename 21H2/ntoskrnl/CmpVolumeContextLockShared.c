/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407C9258
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9194 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}

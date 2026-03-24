/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C007CACC
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C0010D50 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000E808 (WPP_RECORDER_SF_qqd.c)
 *     WMI_FireNotification @ 0x1C0084F0C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBMISC_GenerateUserNotificationForPersistentOverCurrent(__int64 a1)
{
  int v3; // [rsp+38h] [rbp-10h]

  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 4u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_qqd(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x71u,
      (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
      *(_QWORD *)a1,
      a1,
      v3);
  }
  return WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 200), 3LL);
}

/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C007E0A8
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C0011160 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000EC30 (WPP_RECORDER_SF_qqd.c)
 *     WMI_FireNotification @ 0x1C0086B48 (WMI_FireNotification.c)
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
      (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
      *(_QWORD *)a1,
      a1,
      v3);
  }
  return WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 200), 3LL);
}

/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180053780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qd @ 0x1800BD798 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22LL,
      &WPP_42b4fa7daad03b80922a8ee15d46dabb_Traceguids,
      (char *)this - 8,
      a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 16));
}

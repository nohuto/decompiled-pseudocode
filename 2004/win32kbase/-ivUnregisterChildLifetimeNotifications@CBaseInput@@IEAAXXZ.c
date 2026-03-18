/*
 * XREFs of ?ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ @ 0x1C01B6C7C
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C004C440 (CleanupSensorExplicitly.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::ivUnregisterChildLifetimeNotifications(CBaseInput *this)
{
  void *v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      25,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  v2 = (void *)*((_QWORD *)this + 156);
  if ( v2 )
  {
    if ( gpfnIVUnregisterChildLifetimeNotifications )
      gpfnIVUnregisterChildLifetimeNotifications(v2);
    *((_QWORD *)this + 156) = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        12,
        26,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
}

/*
 * XREFs of ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BC8A8
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00515D0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0051910 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::ivRegisterChildLifetimeNotifications(void **this, unsigned int a2)
{
  unsigned int v2; // ebx
  struct _ETHREAD *CurrentThread; // rdx
  int v5; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      12,
      22,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  CurrentThread = KeGetCurrentThread();
  if ( gpfnIVRegisterChildLifetimeNotifications )
    v5 = gpfnIVRegisterChildLifetimeNotifications(
           (struct _ETHREAD *)gpIVThread,
           CurrentThread,
           (int (*)(void *))CBaseInput::_ivOnChildLifetimeNotification,
           v2,
           this + 156);
  else
    v5 = -1073741637;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    WPP_RECORDER_SF_qqd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      2u,
      0xCu,
      0x17u,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      KeGetCurrentThread(),
      this,
      v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(CurrentThread) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)CurrentThread,
      12,
      24,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v5;
}

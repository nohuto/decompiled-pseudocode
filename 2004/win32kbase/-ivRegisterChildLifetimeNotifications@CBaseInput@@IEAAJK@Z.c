/*
 * XREFs of ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B6B48
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C005F240 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C005F420 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
    LOBYTE(CurrentThread) = 2;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)CurrentThread,
      12,
      23,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (char)KeGetCurrentThread(),
      (char)this,
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

/*
 * XREFs of WppInitKm @ 0x1C007285C
 * Callers:
 *     DriverEntry @ 0x1C007232C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rbx
  _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax

  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) == 4 )
    {
      v4 = &WPP_MAIN_CB;
      do
      {
        DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
        v4->Vpb = 0LL;
        ((void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))DeviceObjectExtension)(
          v4->DriverObject,
          0LL,
          WppClassicProviderCallback,
          v4,
          &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
    WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
}

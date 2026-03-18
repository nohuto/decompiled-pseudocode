/*
 * XREFs of _WppCleanupKm@4 @ 0x27A5A4
 * Callers:
 *     _EditionUninitializeWppLogging@4 @ 0xD46CA (_EditionUninitializeWppLogging@4.c)
 * Callees:
 *     <none>
 */

int __thiscall WppCleanupKm(void *this)
{
  PDEVICE_OBJECT v1; // esi
  int result; // eax

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v1 )
      {
        if ( *(_QWORD *)&v1->DeviceExtension )
        {
          pfnEtwUnregister(v1->DeviceExtension, v1->DeviceType);
          v1->DeviceExtension = 0;
          v1->DeviceType = 0;
        }
        v1 = (PDEVICE_OBJECT)v1->DriverObject;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    result = WppAutoLogStop(WPP_GLOBAL_Control, this);
    WPP_RECORDER_INITIALIZED = &WPP_RECORDER_INITIALIZED;
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
  return result;
}

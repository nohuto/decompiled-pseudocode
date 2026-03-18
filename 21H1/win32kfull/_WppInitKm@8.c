/*
 * XREFs of _WppInitKm@8 @ 0x27A7A6
 * Callers:
 *     _EditionInitializeWppLogging@8 @ 0xE7B64 (_EditionInitializeWppLogging@8.c)
 * Callees:
 *     <none>
 */

int __fastcall WppInitKm(int a1, int a2)
{
  struct _DEVICE_OBJECT *v4; // esi
  int result; // eax

  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      v4 = &WPP_MAIN_CB;
      do
      {
        v4->DeviceExtension = 0;
        v4->DeviceType = 0;
        pfnEtwRegisterClassicProvider(v4->ReferenceCount, 0, WppClassicProviderCallback, v4, &v4->DeviceExtension);
        v4 = (struct _DEVICE_OBJECT *)v4->DriverObject;
      }
      while ( v4 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_DWORD *)&WPP_MAIN_CB.Type = WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    result = WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
    WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
  return result;
}

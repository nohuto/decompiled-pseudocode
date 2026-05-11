/*
 * XREFs of DriverUnload @ 0x1C00236E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DriverUnload(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx
  void *v3; // rcx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
        {
          ((void (*)(void))pfnEtwUnregister)();
          v1->Vpb = 0LL;
        }
        v1 = v1->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
    WPP_RECORDER_INITIALIZED = &WPP_RECORDER_INITIALIZED;
  }
  if ( g_RegistryPath )
  {
    v3 = (void *)*((_QWORD *)g_RegistryPath + 1);
    if ( v3 )
      ExFreePool(v3);
    ExFreePool(g_RegistryPath);
    g_RegistryPath = 0LL;
  }
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}

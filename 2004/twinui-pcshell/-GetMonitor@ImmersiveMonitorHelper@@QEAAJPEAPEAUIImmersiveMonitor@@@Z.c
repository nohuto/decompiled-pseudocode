/*
 * XREFs of ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C68C
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001A4C0 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x180330240 (-WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::GetMonitor(ImmersiveMonitorHelper *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IImmersiveMonitor **)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((char *)this + 64);
  *a2 = *v2;
  return 0LL;
}

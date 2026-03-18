/*
 * XREFs of ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0054278
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00542A4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *CreateCachedMonitor(void)
{
  struct tagMONITOR *result; // rax

  result = gpMonitorCached;
  if ( !gpMonitorCached )
  {
    result = CreateMonitor();
    gpMonitorCached = result;
  }
  return result;
}

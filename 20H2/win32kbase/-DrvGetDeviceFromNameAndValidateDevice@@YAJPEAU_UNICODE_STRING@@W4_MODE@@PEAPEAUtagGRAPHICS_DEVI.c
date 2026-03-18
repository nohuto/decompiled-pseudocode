/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C000A8CC
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C000A110 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00C6610 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C0148FB8 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C000C9F0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        struct tagGRAPHICS_DEVICE **a3)
{
  __int64 DeviceFromName; // rdi
  int v5; // eax
  PCUNICODE_STRING String1; // [rsp+48h] [rbp+20h] BYREF

  DeviceFromName = 0LL;
  if ( a2 == UserMode )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(String1);
    if ( String1 )
      Win32FreePool(String1);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
  }
  if ( !DeviceFromName )
    return 3223193057LL;
  v5 = *(_DWORD *)(DeviceFromName + 160);
  if ( (v5 & 1) == 0 )
    return 3223193058LL;
  if ( (v5 & 8) != 0 )
    return 3223193059LL;
  *a3 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
  return 0LL;
}

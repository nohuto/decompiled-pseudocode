/*
 * XREFs of wcschr @ 0x1C00CCA80
 * Callers:
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C003B680 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     ParseWindowStation @ 0x1C00664C0 (ParseWindowStation.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 *     InitCreateUserSubsystem @ 0x1C0294B40 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}

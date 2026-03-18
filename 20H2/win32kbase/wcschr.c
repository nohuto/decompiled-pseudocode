/*
 * XREFs of wcschr @ 0x1C00CBC90
 * Callers:
 *     ParseWindowStation @ 0x1C002A0C0 (ParseWindowStation.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C009AE10 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 *     InitCreateUserSubsystem @ 0x1C0292A58 (InitCreateUserSubsystem.c)
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

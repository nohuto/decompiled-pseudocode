/*
 * XREFs of CiDriverUnload @ 0x1C000C770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00043F8 (WPP_SF_.c)
 *     wil_UninitializeFeatureStaging @ 0x1C000A008 (wil_UninitializeFeatureStaging.c)
 *     CsTerminate @ 0x1C000C7D8 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_f2567f649f8e330a8ddb4ba7f0878bc2_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  CsTerminate();
  return wil_UninitializeFeatureStaging();
}

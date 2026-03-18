/*
 * XREFs of ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00A6F24
 * Callers:
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C004ADA4 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A5040 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A58B8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputSpaceRegion *__fastcall CInputSpace::Iter::ModifiableRegion(CInputSpace::Iter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = 0LL;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  v4 = *((_QWORD *)this + 2);
  if ( v4 != *((_QWORD *)this + 1) )
    return (struct CInputSpaceRegion *)(v4 + 16);
  return (struct CInputSpaceRegion *)v3;
}

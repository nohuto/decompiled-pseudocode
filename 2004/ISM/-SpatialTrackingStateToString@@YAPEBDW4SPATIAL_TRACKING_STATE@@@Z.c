/*
 * XREFs of ?SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z @ 0x1801641EC
 * Callers:
 *     ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180164CA4 (-StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRA.c)
 *     ?TrackingStateChanged_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@2@Z @ 0x180166254 (-TrackingStateChanged_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPAT.c)
 * Callees:
 *     <none>
 */

const char *__fastcall SpatialTrackingStateToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Stopped";
  v1 = a1 - 1;
  if ( !v1 )
    return "PositionAndOrientation";
  if ( v1 == 1 )
    return "OrientationOnly";
  return "(unknown)";
}

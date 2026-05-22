/*
 * XREFs of ?StopTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800DD170
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800DA510 (-StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTr.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::StopTracking(
        __int64 a1,
        int a2)
{
  int v3; // ecx

  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StopTracking(a1, a2);
  if ( v3 >= 0 )
  {
    *(_WORD *)(a1 + 582) = 0;
    *(_BYTE *)(a1 + 580) = 0;
    *(_OWORD *)(a1 + 984) = 0LL;
    *(_DWORD *)(a1 + 1000) = 0;
  }
  *(_BYTE *)(a1 + 105) = 1;
  return (unsigned int)v3;
}

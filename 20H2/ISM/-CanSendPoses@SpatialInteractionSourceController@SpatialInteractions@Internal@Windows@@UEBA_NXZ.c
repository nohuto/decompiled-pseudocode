/*
 * XREFs of ?CanSendPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x18016AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ @ 0x1800CFFE0 (-HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CanSendPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 104) )
    return 0;
  if ( *((_BYTE *)this + 456) && *((_BYTE *)this + 457)
    || Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode((RTL_SRWLOCK *)this) )
  {
    return 1;
  }
  return v1;
}

/*
 * XREFs of ?OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D79E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::OnDeviceRemoved(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this)
{
  return Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects(this);
}

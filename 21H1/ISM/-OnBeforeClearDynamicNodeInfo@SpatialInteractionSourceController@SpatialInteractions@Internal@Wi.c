/*
 * XREFs of ?OnBeforeClearDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@EEAAXXZ @ 0x18016D590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::OnBeforeClearDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(this);
}

/*
 * XREFs of ?Is6DOF@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x18016CE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::Is6DOF(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  return *((_BYTE *)this + 1013) != 0;
}

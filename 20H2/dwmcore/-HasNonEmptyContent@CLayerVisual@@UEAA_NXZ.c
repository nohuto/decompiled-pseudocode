/*
 * XREFs of ?HasNonEmptyContent@CLayerVisual@@UEAA_NXZ @ 0x180010FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return *((float *)this + 37) > *((float *)this + 35) && *((float *)this + 38) > *((float *)this + 36);
}

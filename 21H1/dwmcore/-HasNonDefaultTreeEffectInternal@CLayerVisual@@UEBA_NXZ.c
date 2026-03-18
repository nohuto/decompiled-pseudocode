/*
 * XREFs of ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180013F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonDefaultTreeEffectInternal(CLayerVisual *this)
{
  return *((_QWORD *)this + 78) != 0LL;
}

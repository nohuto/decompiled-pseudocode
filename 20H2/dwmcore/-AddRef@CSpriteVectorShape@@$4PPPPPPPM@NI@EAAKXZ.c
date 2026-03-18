/*
 * XREFs of ?AddRef@CSpriteVectorShape@@$4PPPPPPPM@NI@EAAKXZ @ 0x1800EEEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSpriteVectorShape::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 216));
}

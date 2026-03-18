/*
 * XREFs of ?AddRef@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x1800EEED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD2DResource::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 88));
}

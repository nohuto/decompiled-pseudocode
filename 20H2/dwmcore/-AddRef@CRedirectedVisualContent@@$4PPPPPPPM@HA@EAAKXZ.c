/*
 * XREFs of ?AddRef@CRedirectedVisualContent@@$4PPPPPPPM@HA@EAAKXZ @ 0x1800EECA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRedirectedVisualContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 112));
}

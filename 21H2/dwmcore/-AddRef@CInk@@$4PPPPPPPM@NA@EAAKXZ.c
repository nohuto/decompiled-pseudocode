/*
 * XREFs of ?AddRef@CInk@@$4PPPPPPPM@NA@EAAKXZ @ 0x180105830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInk::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 208));
}

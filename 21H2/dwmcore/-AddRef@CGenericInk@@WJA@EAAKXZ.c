/*
 * XREFs of ?AddRef@CGenericInk@@WJA@EAAKXZ @ 0x1801057D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGenericInk::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 144));
}

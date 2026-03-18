/*
 * XREFs of ?AddRef@CDDARenderTarget@@WII@EAAKXZ @ 0x1800EFFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 136));
}

/*
 * XREFs of ?AddRef@CD3DDevice@@WBA@EAAKXZ @ 0x1800EBE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DDevice::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 16));
}

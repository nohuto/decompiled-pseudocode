/*
 * XREFs of ?AddRef@CDDARenderTarget@@$4PPPPPPPM@HHA@EAAKXZ @ 0x1800EFF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 1904));
}

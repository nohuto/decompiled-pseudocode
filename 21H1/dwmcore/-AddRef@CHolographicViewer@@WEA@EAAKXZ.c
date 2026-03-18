/*
 * XREFs of ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800EC100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 64));
}

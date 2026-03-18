/*
 * XREFs of ?AddRef@CHolographicInteropTexture@@WFA@EAAKXZ @ 0x1801058F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 80));
}

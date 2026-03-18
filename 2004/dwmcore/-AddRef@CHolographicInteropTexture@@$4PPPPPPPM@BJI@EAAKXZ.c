/*
 * XREFs of ?AddRef@CHolographicInteropTexture@@$4PPPPPPPM@BJI@EAAKXZ @ 0x1800F2AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 408));
}

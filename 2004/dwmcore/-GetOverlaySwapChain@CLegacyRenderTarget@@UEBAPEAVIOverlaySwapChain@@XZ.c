/*
 * XREFs of ?GetOverlaySwapChain@CLegacyRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x1800DDB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CLegacyRenderTarget::GetOverlaySwapChain(CLegacyRenderTarget *this)
{
  return (struct IOverlaySwapChain *)*((_QWORD *)this + 3);
}

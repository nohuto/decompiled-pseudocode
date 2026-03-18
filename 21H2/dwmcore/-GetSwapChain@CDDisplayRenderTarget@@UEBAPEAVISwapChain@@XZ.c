/*
 * XREFs of ?GetSwapChain@CDDisplayRenderTarget@@UEBAPEAVISwapChain@@XZ @ 0x1800FA020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChain *__fastcall CDDisplayRenderTarget::GetSwapChain(CDDisplayRenderTarget *this)
{
  return (struct ISwapChain *)*((_QWORD *)this + 4);
}

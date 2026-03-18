/*
 * XREFs of ?GetSwapChain@CRemoteRenderTarget@@UEBAPEAVISwapChain@@XZ @ 0x1800FA030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChain *__fastcall CRemoteRenderTarget::GetSwapChain(CRemoteRenderTarget *this)
{
  return (struct ISwapChain *)*((_QWORD *)this + 3);
}

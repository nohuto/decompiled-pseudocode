/*
 * XREFs of ?GetVBlankDuration@CDDisplaySwapChain@@UEBA_KXZ @ 0x1801A0AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CDDisplaySwapChain::GetVBlankDuration(CDDisplaySwapChain *this)
{
  return g_qpcFrequency.QuadPart / 60;
}

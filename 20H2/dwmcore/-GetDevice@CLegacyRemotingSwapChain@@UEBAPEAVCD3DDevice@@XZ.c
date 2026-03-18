/*
 * XREFs of ?GetDevice@CLegacyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1800DF338
 * Callers:
 *     ?GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800F2620 (-GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacyRemotingSwapChain::GetDevice(CLegacyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 21);
}

/*
 * XREFs of ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800EEB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(__int64 a1)
{
  return CLegacySwapChain::GetDevice((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)));
}

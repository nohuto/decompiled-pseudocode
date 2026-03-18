/*
 * XREFs of ?SetDisplayId@CLegacySwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z @ 0x1800F18C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::SetDisplayId(__int64 a1)
{
  return CLegacySwapChain::SetDisplayId(a1 - *(int *)(a1 - 4));
}

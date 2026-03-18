/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ @ 0x1801087B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IOverlaySwapChain>::Release(__int64 a1)
{
  return CMILCOMBaseT<IOverlaySwapChain>::Release(a1 - *(int *)(a1 - 4) - 480);
}

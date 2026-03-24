/*
 * XREFs of ?GetDirtyRects@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F79E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CLegacySwapChain::GetDirtyRects(a1 - *(int *)(a1 - 4) - 24, a2);
}

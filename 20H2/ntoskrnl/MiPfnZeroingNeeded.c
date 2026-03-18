/*
 * XREFs of MiPfnZeroingNeeded @ 0x1402C7380
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiAddMdlPageToTradeBlock @ 0x140320194 (MiAddMdlPageToTradeBlock.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiConvertContiguousPages @ 0x140334AA4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140334C04 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiUpdateLargePagePfns @ 0x14055D12C (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C4DE58) == 0 )
      return 0;
  }
  return result;
}

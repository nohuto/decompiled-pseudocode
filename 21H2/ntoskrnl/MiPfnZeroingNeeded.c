/*
 * XREFs of MiPfnZeroingNeeded @ 0x140238B60
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiChangePageAttributeContiguous @ 0x1402CF8B8 (MiChangePageAttributeContiguous.c)
 *     MiConvertContiguousPages @ 0x1402E3BC4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402E3D24 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiAddMdlPageToTradeBlock @ 0x1402FF488 (MiAddMdlPageToTradeBlock.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiAllocateMdlPagesByLists @ 0x140374714 (MiAllocateMdlPagesByLists.c)
 *     MiUpdateLargePagePfns @ 0x14055EBFC (MiUpdateLargePagePfns.c)
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
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C4DFD8) == 0 )
      return 0;
  }
  return result;
}

/*
 * XREFs of MiPfnZeroingNeeded @ 0x140349390
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiAddMdlPageToTradeBlock @ 0x140311BA4 (MiAddMdlPageToTradeBlock.c)
 *     MiChangePageAttributeContiguous @ 0x14031F698 (MiChangePageAttributeContiguous.c)
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140345564 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140371824 (MiAllocateMdlPagesByLists.c)
 *     MiUpdateLargePagePfns @ 0x14055910C (MiUpdateLargePagePfns.c)
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
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C4DF18) == 0 )
      return 0;
  }
  return result;
}

/*
 * XREFs of MiPfnZeroingNeeded @ 0x14031A050
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiConvertContiguousPages @ 0x14031600C (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140316224 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAddMdlPageToTradeBlock @ 0x14034F394 (MiAddMdlPageToTradeBlock.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiAllocateMdlPagesByLists @ 0x140372634 (MiAllocateMdlPagesByLists.c)
 *     MiUpdateLargePagePfns @ 0x14055975C (MiUpdateLargePagePfns.c)
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
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C4DDD8) == 0 )
      return 0;
  }
  return result;
}

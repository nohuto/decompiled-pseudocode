/*
 * XREFs of MiPfnZeroingNeeded @ 0x140268A70
 * Callers:
 *     MiAddMdlPageToTradeBlock @ 0x1402446B4 (MiAddMdlPageToTradeBlock.c)
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiUpdateLargePagePfns @ 0x1405C32E4 (MiUpdateLargePagePfns.c)
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
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C50818) == 0 )
      return 0;
  }
  return result;
}

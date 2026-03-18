/*
 * XREFs of ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801B0B58
 * Callers:
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18007D7B0 (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<std::vector<CVisual *>>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      std::_Deallocate<16,0>(*(void **)v1, (*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)v1 = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
  }
}

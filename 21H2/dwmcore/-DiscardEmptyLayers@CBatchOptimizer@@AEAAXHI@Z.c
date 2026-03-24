/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180012274
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180011FAC (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x180012090 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180090C38 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180012314 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV-$span@PEAVCBaseDrawListEntry@@.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180090F5C (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]

  if ( a3 )
  {
    v4 = (int)a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      v10 = (char *)this + v7 + 120;
      v8 = *(unsigned int *)((char *)this + v7 + 96);
      v9 = v8;
      if ( !v10 )
      {
        if ( v8 )
        {
          ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v8, a2);
          __debugbreak();
        }
      }
      CBatchOptimizer::DiscardEntries(*(_QWORD *)(*((_QWORD *)this + 1) + 168LL), &v9);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}

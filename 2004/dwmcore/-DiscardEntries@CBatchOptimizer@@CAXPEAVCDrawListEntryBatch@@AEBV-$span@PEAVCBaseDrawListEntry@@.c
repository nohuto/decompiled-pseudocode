/*
 * XREFs of ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x1800123E4
 * Callers:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180011FE8 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180012344 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CBatchOptimizer::DiscardEntries(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // r14
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx

  v2 = 0LL;
  dword_180345260 += *(_DWORD *)a2;
  v4 = *(_QWORD **)(a2 + 8);
  result = (unsigned __int64)&v4[*(_QWORD *)a2];
  v6 = *(_QWORD *)a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v4 > result )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = *v4;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 48LL))(*v4, a1);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      ++v2;
      ++v4;
    }
    while ( v2 != v6 );
  }
  return result;
}

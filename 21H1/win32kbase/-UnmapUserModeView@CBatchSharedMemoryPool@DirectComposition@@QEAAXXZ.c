/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00B9F14
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0006CD0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C0007140 (NtDCompositionConfirmFrame.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00B400C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00B9EEC (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  __int64 v2; // rcx

  if ( *((_QWORD *)this + 6) )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v2 )
      MmUnmapViewOfSection(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
}

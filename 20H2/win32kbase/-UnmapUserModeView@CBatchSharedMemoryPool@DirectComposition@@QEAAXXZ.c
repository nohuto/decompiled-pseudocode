/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0060144
 * Callers:
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C006011C (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C006733C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0080370 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C0080AA0 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v3 )
      MmUnmapViewOfSection(v3, v1);
    *((_QWORD *)this + 6) = 0LL;
  }
}

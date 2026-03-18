/*
 * XREFs of ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C006011C
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C005FE44 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0060144 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::Reset(DirectComposition::CBatchSharedMemoryPool *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(this);
}

/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B45A8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0082B74 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C008FA10 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B440C (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B44C0 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00BC0FC (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00C2E64 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C9E54 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int i; // esi
  unsigned int v7; // esi
  struct _LIST_ENTRY *Flink; // rdi
  VIDMM_GLOBAL *j; // rdi
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v3 = *((_DWORD *)this + 926);
  v4 = 0;
  for ( i = 0; i < v3; ++i )
  {
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * i), a2, a3);
    v3 = *((_DWORD *)this + 926);
  }
  v7 = 0;
  if ( *((_DWORD *)this + 1750) )
  {
    do
    {
      if ( *((_QWORD *)this + v7 + 143) )
        VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + v7 + 79));
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 1750) );
    v3 = *((_DWORD *)this + 926);
  }
  if ( v3 )
  {
    do
      VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v4++));
    while ( v4 < *((_DWORD *)this + 926) );
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 348LL) & 1) != 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
      (DXGAUTOPUSHLOCK *)v10,
      (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
      0);
    DXGPUSHLOCK::AcquireExclusive(v11);
    Flink = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
    v12 = 2;
    while ( Flink != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    {
      VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&Flink[-100].Blink);
      Flink = Flink->Flink;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  VIDMM_GLOBAL::ReportProcessStates((struct _KTHREAD **)this);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 5130, 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v12 = 1;
  for ( j = (VIDMM_GLOBAL *)*((_QWORD *)this + 5136); j != (VIDMM_GLOBAL *)((char *)this + 41088); j = *(VIDMM_GLOBAL **)j )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (struct _KTHREAD **)j - 3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}

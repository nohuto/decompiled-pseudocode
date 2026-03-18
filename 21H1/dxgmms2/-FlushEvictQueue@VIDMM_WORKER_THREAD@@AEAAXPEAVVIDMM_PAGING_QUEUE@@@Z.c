/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00BA4C8
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00BAB08 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BAD88 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BCFDC (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(VIDMM_WORKER_THREAD *this, struct VIDMM_PAGING_QUEUE *a2)
{
  struct VIDMM_PAGING_QUEUE **v4; // rax
  struct VIDMM_PAGING_QUEUE **v5; // rdi
  struct VIDMM_PAGING_QUEUE *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v13; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
    *((_QWORD *)this + 19) = KeGetCurrentThread();
    if ( *((_DWORD *)a2 + 28) != 1 )
      break;
    v4 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 32);
    v5 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
    if ( v5[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32)
      || (v6 = *v5, *((struct VIDMM_PAGING_QUEUE ***)*v5 + 1) != v5) )
    {
      __fastfail(3u);
    }
    *v4 = v6;
    *((_QWORD *)v6 + 1) = v4;
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
    KeLeaveCriticalRegion();
    v13 = 0LL;
    v12 = 0;
    v7 = VIDMM_WORKER_THREAD::SubmitPacket(this, a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v5, 0, &v12, &v13);
    v10 = v7;
    if ( v7 < 0 || v12 )
    {
      v11 = WdLogNewEntry5_WdCriticalError(v9, v8);
      *(_QWORD *)(v11 + 24) = 270LL;
      *(_QWORD *)(v11 + 32) = 23LL;
      *(_QWORD *)(v11 + 40) = v10;
      *(_OWORD *)(v11 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    VIDMM_PAGING_QUEUE::ReclaimPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v5);
  }
  *((_QWORD *)this + 19) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
  KeLeaveCriticalRegion();
}

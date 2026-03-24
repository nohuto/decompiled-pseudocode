/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00B9064
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00B96F4 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B9974 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BBBC8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(VIDMM_WORKER_THREAD *this, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v4; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // rax
  bool v15; // [rsp+70h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v16; // [rsp+78h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 28) == 1 )
  {
    v4 = (char *)a2 + 32;
    do
    {
      v5 = *(struct VIDMM_PAGING_QUEUE_PACKET **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
        || (v6 = *(_QWORD *)v5, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v5 + 8LL) != v5) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)this + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
      KeLeaveCriticalRegion();
      v15 = 0;
      v16 = 0LL;
      v7 = VIDMM_WORKER_THREAD::SubmitPacket(this, a2, v5, 0, &v15, &v16);
      v10 = v7;
      if ( v7 < 0 || v15 )
      {
        if ( *((_BYTE *)v5 + 24) )
          v11 = *((_QWORD *)v5 + 9) == 0LL;
        else
          v11 = *((_QWORD *)v5 + 10) == 0LL;
        v12 = *((int *)v5 + 12);
        if ( v11 )
        {
          v13 = *(_QWORD *)this;
          LOBYTE(v9) = !v11;
          v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
          v14[3] = 270LL;
          v14[4] = 76LL;
          v14[5] = v10;
          v14[6] = v13;
          v14[7] = v12;
          WdLogEvent5_WdCriticalError(v14);
        }
      }
      VIDMM_PAGING_QUEUE::ReclaimPacket(a2, v5);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
      *((_QWORD *)this + 19) = KeGetCurrentThread();
    }
    while ( *((_DWORD *)a2 + 28) == 1 );
  }
  *((_QWORD *)this + 19) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
  KeLeaveCriticalRegion();
}

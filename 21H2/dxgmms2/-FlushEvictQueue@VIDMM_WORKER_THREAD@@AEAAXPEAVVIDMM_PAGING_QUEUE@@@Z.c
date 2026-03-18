/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00DE984
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ @ 0x1C00DEF38 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ.c)
 * Callees:
 *     ?Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ @ 0x1C001CEA4 (-Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DF1D8 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E1718 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbp
  bool v11; // zf
  bool v12; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v13; // [rsp+68h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 28) == 1 )
  {
    v6 = (char *)a2 + 32;
    do
    {
      v7 = *(struct VIDMM_PAGING_QUEUE_PACKET **)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6
        || (v8 = *(_QWORD *)v7, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v7 + 8LL) != v7) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)this + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
      KeLeaveCriticalRegion();
      v12 = 0;
      v13 = 0LL;
      v9 = VIDMM_WORKER_THREAD::SubmitPacket(this, a2, v7, 0, &v12, &v13);
      v10 = v9;
      if ( v9 < 0 || v12 )
      {
        if ( (unsigned int)Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled() )
        {
          if ( *((_BYTE *)v7 + 24) )
            v11 = *((_QWORD *)v7 + 9) == 0LL;
          else
            v11 = *((_QWORD *)v7 + 10) == 0LL;
          if ( v11 )
            WdLogSingleEntry5(0LL, 270LL, 76LL, v10, *(_QWORD *)this, *((int *)v7 + 12));
        }
        else
        {
          WdLogSingleEntry5(0LL, 270LL, 23LL, v10, 0LL, 0LL);
        }
      }
      VIDMM_PAGING_QUEUE::ReclaimPacket(a2, v7);
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

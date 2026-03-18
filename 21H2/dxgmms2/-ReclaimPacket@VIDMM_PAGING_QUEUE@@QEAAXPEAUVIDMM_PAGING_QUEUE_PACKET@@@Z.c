/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E1718
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00DE984 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C00A2CE4 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  VIDMM_PAGING_QUEUE **v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 144, 0LL);
  *(_QWORD *)(v2 + 152) = KeGetCurrentThread();
  v7 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  if ( *v7 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v7;
  *v7 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v8 = *((int *)this + 28);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
        WdLogSingleEntry5(0LL, 270LL, 58LL, this, v8, 0LL);
      VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0LL, v5, v6);
    }
  }
  --*(_DWORD *)(*((_QWORD *)this + 17) + 72LL);
  --*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v9 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}

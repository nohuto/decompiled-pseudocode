/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BCFBC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B6F0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00BA4A8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0065EB4 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  VIDMM_PAGING_QUEUE **v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 144, 0LL);
  *(_QWORD *)(v2 + 152) = KeGetCurrentThread();
  v6 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  if ( *v6 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v7 = *((int *)this + 28);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
        v8[7] = 0LL;
        v8[3] = 270LL;
        v8[4] = 58LL;
        v8[5] = this;
        v8[6] = v7;
        WdLogEvent5_WdCriticalError(v8);
      }
      VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0);
    }
  }
  --*(_DWORD *)(*((_QWORD *)this + 17) + 64LL);
  --*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v9 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}

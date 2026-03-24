/*
 * XREFs of ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0001F94
 * Callers:
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00764CC (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0067D64 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::InsertPagingQueueList(__int64 **this, struct VIDMM_PAGING_QUEUE *a2)
{
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE **v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 14, 0LL);
  this[15] = (__int64 *)KeGetCurrentThread();
  v4 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 48);
  v5 = (VIDMM_DEVICE **)this[13];
  if ( *v5 != (VIDMM_DEVICE *)(this + 12) )
    __fastfail(3u);
  *((_QWORD *)a2 + 7) = v5;
  *(_QWORD *)v4 = this + 12;
  *v5 = v4;
  this[13] = (__int64 *)v4;
  this[15] = 0LL;
  ExReleasePushLockExclusiveEx(this + 14, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 49) )
  {
    v6 = **this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 144, 0LL);
    *(_QWORD *)(v6 + 152) = KeGetCurrentThread();
    VIDMM_PAGING_QUEUE::SetStatus(a2, 2LL);
    v7 = **this + 144;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}

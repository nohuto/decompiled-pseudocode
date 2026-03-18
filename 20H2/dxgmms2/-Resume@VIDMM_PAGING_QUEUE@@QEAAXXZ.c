/*
 * XREFs of ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C008314C
 * Callers:
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00830AC (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0071A74 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Resume(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 144, 0LL);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 28) )
    VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, *((_QWORD *)this + 4) != (_QWORD)this + 32);
  v3 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}

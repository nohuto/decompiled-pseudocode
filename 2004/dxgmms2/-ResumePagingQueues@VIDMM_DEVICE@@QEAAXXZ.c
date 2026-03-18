/*
 * XREFs of ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083424
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083294 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00834C4 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ResumePagingQueues(VIDMM_DEVICE *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  VIDMM_PAGING_QUEUE *v5; // rcx

  if ( *((_BYTE *)this + 49) == 1 )
  {
    v2 = (char *)this + 112;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    v3 = (char *)this + 96;
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    *((_BYTE *)this + 49) = 0;
    v4 = (char *)*((_QWORD *)this + 12);
    while ( v4 != v3 )
    {
      v5 = (VIDMM_PAGING_QUEUE *)(v4 - 48);
      v4 = *(char **)v4;
      VIDMM_PAGING_QUEUE::Resume(v5);
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}

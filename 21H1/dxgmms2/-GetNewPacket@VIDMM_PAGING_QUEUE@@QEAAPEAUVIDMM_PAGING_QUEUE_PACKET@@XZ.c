/*
 * XREFs of ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0066038
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0064E30 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 */

VIDMM_PAGING_QUEUE **__fastcall VIDMM_PAGING_QUEUE::GetNewPacket(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  VIDMM_PAGING_QUEUE **v3; // rdi
  VIDMM_PAGING_QUEUE *v4; // rbp
  VIDMM_PAGING_QUEUE **v5; // rbx
  VIDMM_PAGING_QUEUE *v6; // rax
  __int64 v7; // rcx
  VIDMM_PAGING_QUEUE **result; // rax

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 144, 0LL);
  v3 = (VIDMM_PAGING_QUEUE **)((char *)this + 16);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  v4 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = (char *)v4 + 1;
  v5 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 2);
  if ( v5[1] != (VIDMM_PAGING_QUEUE *)((char *)this + 16) || (v6 = *v5, *((VIDMM_PAGING_QUEUE ***)*v5 + 1) != v5) )
    __fastfail(3u);
  *v3 = v6;
  *((_QWORD *)v6 + 1) = v3;
  v7 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v3
    || (result = (VIDMM_PAGING_QUEUE **)operator new[](0xA0uLL, 0x38346956u, PagedPool), (v5 = result) != 0LL) )
  {
    memset(v5, 0, 0xA0uLL);
    result = v5;
    v5[5] = v4;
  }
  return result;
}

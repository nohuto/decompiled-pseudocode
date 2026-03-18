/*
 * XREFs of ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0070990
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C003E304 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A764 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0073180 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0073C90 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C007EAE8 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0087054 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AFEF8 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B0008 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F5C (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B17F8 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C00709EC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 */

int __fastcall VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int *v5; // r8

  v2 = *((_QWORD *)this + 5049);
  v3 = *((unsigned int *)a2 + 1);
  v4 = *(_QWORD *)(v2 + 80);
  if ( (_DWORD)v3 == -1 )
    v5 = *(unsigned int **)(v2 + 80);
  else
    v5 = (unsigned int *)(v4 + 176 * v3);
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (struct VIDMM_PAGING_QUEUE *)v5,
           *(struct _VIDSCH_SYNC_OBJECT **)(176LL * v5[36] + v4 + 152),
           1);
}

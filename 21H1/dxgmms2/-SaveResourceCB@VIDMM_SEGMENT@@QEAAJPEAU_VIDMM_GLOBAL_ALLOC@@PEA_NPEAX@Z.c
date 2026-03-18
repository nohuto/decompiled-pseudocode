/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B4AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024310 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0061C1C (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B5220 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C88F0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SaveResourceCB(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    v8 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdEvent(v8);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 472, 0LL);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)v9, &EventVidMmSaveResource, v10, a2);
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, a2);
    v11 = *((_QWORD *)a2 + 16);
    v12 = *((_QWORD *)a2 + 17);
    VIDMM_MEMORY_SEGMENT::TransferToSystem(this, a2, 1, *((PRKPROCESS ***)a2 + 12), 1);
    *((_QWORD *)a2 + 27) = v11;
    *((_QWORD *)a2 + 26) = v12;
  }
  return 0LL;
}

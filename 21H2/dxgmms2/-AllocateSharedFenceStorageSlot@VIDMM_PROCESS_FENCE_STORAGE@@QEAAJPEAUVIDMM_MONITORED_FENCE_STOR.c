/*
 * XREFs of ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0017040
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0083F50 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0012358 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0015F78 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0060E50 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C0085040 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        struct VIDMM_PROCESS *a3)
{
  VIDMM_FENCE_STORAGE_PAGE *v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rbx
  int v8; // edi
  VIDMM_FENCE_STORAGE_PAGE **v9; // rax
  KSPIN_LOCK v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = (VIDMM_FENCE_STORAGE_PAGE *)operator new[](0xA8uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v6 )
    v7 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v6, (struct VIDMM_PROCESS_FENCE_STORAGE *)this);
  else
    v7 = 0LL;
  if ( !v7 )
    return 3221225495LL;
  v8 = VIDMM_FENCE_STORAGE_PAGE::Init(v7, a3);
  if ( v8 < 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7);
    return (unsigned int)v8;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v7, a2);
    KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
    v9 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 5);
    v10 = this[5];
    if ( *(KSPIN_LOCK **)(v10 + 8) != this + 5 )
      __fastfail(3u);
    *(_QWORD *)v7 = v10;
    *((_QWORD *)v7 + 1) = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *v9 = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}

/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00127F8
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0080360 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0012928 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0015E98 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00831EC (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C0083350 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  KSPIN_LOCK *v2; // r14
  char *v5; // rdi
  VIDMM_PROCESS_FENCE_STORAGE *v6; // rbx
  char v7; // bl
  VIDMM_FENCE_STORAGE_PAGE *v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v13; // rax
  VIDMM_PROCESS_FENCE_STORAGE **v14; // rcx
  VIDMM_PROCESS_FENCE_STORAGE **v15; // rax
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)((char *)this + 56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 7, &LockHandle);
  v5 = (char *)this + 24;
  v6 = (VIDMM_PROCESS_FENCE_STORAGE *)*((_QWORD *)this + 3);
  if ( v6 == (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 24) )
  {
    v7 = 0;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(*((VIDMM_FENCE_STORAGE_PAGE **)this + 3), a2);
    if ( *((_QWORD *)v6 + 12) == -1LL )
    {
      v13 = *(VIDMM_PROCESS_FENCE_STORAGE **)v6;
      if ( *(VIDMM_PROCESS_FENCE_STORAGE **)(*(_QWORD *)v6 + 8LL) != v6 )
        goto LABEL_20;
      v14 = (VIDMM_PROCESS_FENCE_STORAGE **)*((_QWORD *)v6 + 1);
      if ( *v14 != v6 )
        goto LABEL_20;
      *v14 = v13;
      *((_QWORD *)v13 + 1) = v14;
      v15 = (VIDMM_PROCESS_FENCE_STORAGE **)((char *)this + 8);
      v16 = *((_QWORD *)this + 1);
      if ( *(VIDMM_PROCESS_FENCE_STORAGE **)(v16 + 8) != (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 8) )
        goto LABEL_20;
      *(_QWORD *)v6 = v16;
      *((_QWORD *)v6 + 1) = v15;
      *(_QWORD *)(v16 + 8) = v6;
      *v15 = v6;
    }
    v7 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
    return 0LL;
  v9 = (VIDMM_FENCE_STORAGE_PAGE *)operator new[](0xA8uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v9 )
    v10 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v9, this);
  else
    v10 = 0LL;
  if ( !v10 )
    return 3221225495LL;
  v11 = VIDMM_FENCE_STORAGE_PAGE::Init(v10, 0LL);
  if ( v11 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v10, a2);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v12 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      *(_QWORD *)v10 = v12;
      *((_QWORD *)v10 + 1) = v5;
      *(_QWORD *)(v12 + 8) = v10;
      *(_QWORD *)v5 = v10;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
LABEL_20:
    __fastfail(3u);
  }
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v10, 1u);
  return (unsigned int)v11;
}

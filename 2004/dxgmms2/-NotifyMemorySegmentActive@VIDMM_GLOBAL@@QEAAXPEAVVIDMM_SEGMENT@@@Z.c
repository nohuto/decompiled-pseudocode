/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00237C0
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C0064580 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C9A4C (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char *v2; // rbx
  __int64 v5; // rdi
  char v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r8
  VIDMM_SEGMENT *v9; // rcx
  VIDMM_SEGMENT *v10; // rcx
  char v11; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)this + 41072;
  v5 = *((_QWORD *)this + 5027) + 1584LL * *((unsigned int *)a2 + 95);
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5134, &LockHandle);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v7 = *(_DWORD *)(v5 + 432);
  *(_DWORD *)(v5 + 432) = v7 | (1 << *((_DWORD *)a2 + 5));
  *((_QWORD *)this + 5135) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v7 && *(_DWORD *)(v5 + 24) )
  {
    do
    {
      v9 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * (v7 + *(_DWORD *)(v5 + 20)));
      if ( *((_DWORD *)v9 + 92) != -1
        && (*(_DWORD *)(v5 + 64) == (unsigned int)VIDMM_SEGMENT::DriverId(v9)
         || *(_DWORD *)(v5 + 48) == (unsigned int)VIDMM_SEGMENT::DriverId(v10)) )
      {
        LOBYTE(v8) = 1;
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))this + 5017))(
               *((_QWORD *)this + 5018),
               *((unsigned int *)a2 + 92),
               v8) == -1071775466 )
        {
          v11 = *(_BYTE *)(v5 + 436);
          if ( (v11 & 4) != 0 )
          {
            v6 = 1;
            *(_BYTE *)(v5 + 436) = v11 | 0x20;
          }
        }
        *(_BYTE *)(v5 + 436) &= ~0x40u;
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v5 + 24) );
  }
  LOBYTE(v8) = 1;
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64))this + 5017))(
    *((_QWORD *)this + 5018),
    *((unsigned int *)a2 + 92),
    v8);
  if ( (*(_BYTE *)(v5 + 436) & 0x20) != 0 )
  {
    if ( v6 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 95), 1u);
  }
}

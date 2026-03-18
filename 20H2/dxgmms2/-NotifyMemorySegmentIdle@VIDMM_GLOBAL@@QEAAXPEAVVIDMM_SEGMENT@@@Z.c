/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002342C
 * Callers:
 *     ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C0022180 (-VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00852B0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00C8810 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v2; // r15
  int v5; // edi
  char *v6; // rbx
  __int64 v7; // r14
  int v8; // edi
  VIDMM_SEGMENT *v9; // rcx
  struct _KEVENT *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 5027);
  v5 = 1 << *((_DWORD *)a2 + 5);
  v6 = (char *)this + 41072;
  v7 = 1584LL * *((unsigned int *)a2 + 95);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5134, &LockHandle);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 29) && !*((_BYTE *)a2 + 372) )
  {
    v8 = *(_DWORD *)(v7 + v2 + 432) & ~v5;
    *(_DWORD *)(v7 + v2 + 432) = v8;
    if ( *(_DWORD *)(v7 + v2 + 64) != (unsigned int)VIDMM_SEGMENT::DriverId(a2)
      && *(_DWORD *)(v7 + v2 + 48) != (unsigned int)VIDMM_SEGMENT::DriverId(v9) )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 5017))(
        *((_QWORD *)this + 5018),
        *((unsigned int *)a2 + 92),
        0LL);
      v8 = *(_DWORD *)(v7 + v2 + 432);
    }
    if ( !v8 )
    {
      v10 = (struct _KEVENT *)*((_QWORD *)this + 5543);
      *((_BYTE *)this + 40938) = 1;
      KeSetEvent(v10, 0, 0);
    }
  }
  *((_QWORD *)this + 5135) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

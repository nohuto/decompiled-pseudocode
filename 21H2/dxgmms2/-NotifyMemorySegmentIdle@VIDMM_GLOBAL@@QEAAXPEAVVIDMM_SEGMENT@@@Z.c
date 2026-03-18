/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DE74
 * Callers:
 *     ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C002CFE0 (-VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00A3E50 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00EB5F0 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v3; // r15
  int v4; // ecx
  __int64 v6; // r14
  int v7; // edi
  int v8; // edi
  VIDMM_SEGMENT *v9; // rcx
  struct _KEVENT *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 5028);
  v4 = *((_DWORD *)a2 + 5);
  v6 = 1584LL * *((unsigned int *)a2 + 95);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 1 << v4;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5134, &LockHandle);
  *((_QWORD *)this + 5135) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 29) && !*((_BYTE *)a2 + 372) )
  {
    v8 = *(_DWORD *)(v6 + v3 + 432) & ~v7;
    *(_DWORD *)(v6 + v3 + 432) = v8;
    if ( *(_DWORD *)(v6 + v3 + 64) != (unsigned int)VIDMM_SEGMENT::DriverId(a2)
      && *(_DWORD *)(v6 + v3 + 48) != (unsigned int)VIDMM_SEGMENT::DriverId(v9) )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 5018))(
        *((_QWORD *)this + 5019),
        *((unsigned int *)a2 + 92),
        0LL);
      v8 = *(_DWORD *)(v6 + v3 + 432);
    }
    if ( !v8 )
    {
      v10 = (struct _KEVENT *)*((_QWORD *)this + 5544);
      *((_BYTE *)this + 40938) = 1;
      KeSetEvent(v10, 0, 0);
    }
  }
  *((_QWORD *)this + 5135) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

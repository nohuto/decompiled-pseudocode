/*
 * XREFs of CcGetDirtyPagesHelper @ 0x140289D20
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14027A1B4 (CcReferenceSharedCacheMapFileObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  void *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  void *v26; // [rsp+40h] [rbp-A8h]
  __int64 v27; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-98h]
  __int64 v29; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  __int64 v31; // [rsp+78h] [rbp-70h] BYREF
  __int64 v32; // [rsp+80h] [rbp-68h] BYREF
  __int64 v33; // [rsp+88h] [rbp-60h]
  __int64 v34; // [rsp+90h] [rbp-58h]
  unsigned __int64 v35; // [rsp+98h] [rbp-50h]
  void (__fastcall *v36)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+A0h] [rbp-48h]
  __int64 v37; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v29 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v34 = a3[2];
  v33 = a3[3];
  v5 = *a3;
  v37 = *a3;
  v36 = (void (__fastcall *)(unsigned __int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a3[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  v6 = *(_QWORD *)(v3 + 672) - 120LL;
  v28 = v6;
  while ( v6 != v3 + 552 )
  {
    v7 = *(_DWORD *)(v6 + 152);
    if ( (v7 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x42FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v7 & 0x2000000) != 0 && *(_QWORD *)(v6 + 240) == v5 || (v7 & 0x1000000) != 0 && **(_QWORD **)(v6 + 240) == v5 )
    {
      ++*(_DWORD *)(v6 + 4);
      ++*(_DWORD *)(v6 + 536);
      ++*(_DWORD *)(v6 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v4 = v26;
            v6 = v28;
          }
        }
      }
      __writecr8(OldIrql);
      v9 = CcReferenceSharedCacheMapFileObject(v6);
      v35 = v9;
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
      v10 = *(_QWORD *)(v6 + 16) - 16LL;
      v29 = v10;
      while ( v10 + 16 != v6 + 16 )
      {
        if ( *(_WORD *)v10 == 765 && *(_BYTE *)(v10 + 2) )
        {
          v32 = *(_QWORD *)(v10 + 8);
          v11 = *(_DWORD *)(v10 + 4);
          v27 = *(_QWORD *)(v10 + 40);
          v31 = *(_QWORD *)(v10 + 48);
          ++*(_DWORD *)(v10 + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
          if ( v4 )
          {
            CcUnpinFileDataEx(v4);
            v4 = 0LL;
            v26 = 0LL;
          }
          v12 = v11;
          v9 = v35;
          v36(v35, &v32, v12, &v27, &v31, v34, v33);
          if ( v27 )
          {
            v13 = a3[4];
            if ( !v13 || v27 < v13 )
              a3[4] = v27;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
          v14 = *(_DWORD *)(v10 + 64);
          if ( v14 > 1 )
          {
            *(_DWORD *)(v10 + 64) = v14 - 1;
          }
          else
          {
            v4 = (void *)v10;
            v26 = (void *)v10;
          }
        }
        v10 = *(_QWORD *)(v10 + 16) - 16LL;
        v29 = v10;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v6 + 96), v9, 0x63536343u);
      if ( v4 )
      {
        CcUnpinFileDataEx(v4);
        v4 = 0LL;
        v26 = 0LL;
      }
      v3 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      --*(_DWORD *)(v6 + 4);
      --*(_DWORD *)(v6 + 536);
      --*(_DWORD *)(v6 + 112);
      v5 = v37;
    }
    v6 = *(_QWORD *)(v6 + 120) - 120LL;
    v28 = v6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v15 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v15);
  return 1;
}

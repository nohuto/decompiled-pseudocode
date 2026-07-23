/*
 * XREFs of CcGetDirtyPagesHelper @ 0x1402FEF50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140300520 (CcReferenceSharedCacheMapFileObject.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  void *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v8; // r14
  __int64 i; // rdi
  unsigned int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  void *v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  __int64 v28; // [rsp+70h] [rbp-78h] BYREF
  __int64 v29; // [rsp+78h] [rbp-70h] BYREF
  __int64 v30; // [rsp+80h] [rbp-68h]
  __int64 v31; // [rsp+88h] [rbp-60h]
  __int64 v32; // [rsp+90h] [rbp-58h]
  void (__fastcall *v33)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+98h] [rbp-50h]
  __int64 v34; // [rsp+A0h] [rbp-48h]
  __int64 v37; // [rsp+108h] [rbp+20h] BYREF

  v2 = a1;
  v3 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v37 = 0LL;
  v28 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v31 = a2[2];
  v30 = a2[3];
  v4 = *a2;
  v34 = *a2;
  v33 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a2[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v5 = *(_QWORD *)(v2 + 96) - 120LL;
  v26 = v5;
  while ( v5 != v2 - 24 )
  {
    v6 = *(_DWORD *)(v5 + 152);
    if ( (v6 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x408uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v6 & 0x2000000) != 0 && *(_QWORD *)(v5 + 240) == v4 || (v6 & 0x1000000) != 0 && **(_QWORD **)(v5 + 240) == v4 )
    {
      ++*(_DWORD *)(v5 + 4);
      ++*(_DWORD *)(v5 + 536);
      ++*(_DWORD *)(v5 + 112);
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
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v3 = v25;
            v5 = v26;
          }
        }
      }
      __writecr8(OldIrql);
      v8 = CcReferenceSharedCacheMapFileObject(v5);
      v32 = v8;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
      for ( i = *(_QWORD *)(v5 + 16) - 16LL; i + 16 != v5 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v29 = *(_QWORD *)(i + 8);
          v10 = *(_DWORD *)(i + 4);
          v37 = *(_QWORD *)(i + 40);
          v28 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
          if ( v3 )
          {
            CcUnpinFileDataEx(v3);
            v3 = 0LL;
            v25 = 0LL;
          }
          v11 = v10;
          v8 = v32;
          v33(v32, &v29, v11, &v37, &v28, v31, v30);
          if ( v37 )
          {
            v12 = a2[4];
            if ( !v12 || v37 < v12 )
              a2[4] = v37;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
          v13 = *(_DWORD *)(i + 64);
          if ( v13 > 1 )
          {
            *(_DWORD *)(i + 64) = v13 - 1;
          }
          else
          {
            v3 = (void *)i;
            v25 = (void *)i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
      CcDereferenceSharedCacheMapFileObject(v5, v8);
      if ( v3 )
      {
        CcUnpinFileDataEx(v3);
        v3 = 0LL;
        v25 = 0LL;
      }
      v2 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      --*(_DWORD *)(v5 + 4);
      --*(_DWORD *)(v5 + 536);
      --*(_DWORD *)(v5 + 112);
      v4 = v34;
    }
    v5 = *(_QWORD *)(v5 + 120) - 120LL;
    v26 = v5;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(v14);
  return 1;
}

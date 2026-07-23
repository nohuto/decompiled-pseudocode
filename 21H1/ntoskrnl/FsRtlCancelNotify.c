/*
 * XREFs of FsRtlCancelNotify @ 0x1402FC690
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x1402FC574 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1402FC650 (PsChargeProcessPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  PVOID v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  PVOID v15; // rax
  PVOID PoolWithTag; // r15
  unsigned int v17; // esi
  char *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int16 v21; // ax
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  _QWORD *v26; // [rsp+68h] [rbp-50h]
  char *P; // [rsp+D0h] [rbp+18h]

  SubjectContext = 0LL;
  v3 = *(_QWORD **)(a2 + 56);
  v26 = v3;
  P = (char *)v3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = *v3;
  v6 = KeGetCurrentThread();
  if ( v6 != *(struct _KTHREAD **)(*v3 + 56LL) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v5);
    *(_QWORD *)(v5 + 56) = v6;
  }
  ++*(_DWORD *)(v5 + 64);
  v7 = a2 + 168;
  v8 = *(_QWORD *)(a2 + 168);
  if ( v8 )
  {
    v9 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v10 = (PVOID)v3[11];
  if ( v10 && !v3[10] )
  {
    if ( (v14 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v14 + 10) & 5) == 0
        ? (v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000010u), v10 = (PVOID)v3[11])
        : (v15 = *(PVOID *)(v14 + 24)),
          v15 == v10)
      || v10 == *(PVOID *)(a2 + 24) )
    {
      PoolWithTag = 0LL;
      v17 = 0;
      v18 = (char *)*((_QWORD *)P + 6);
      if ( v18 == P + 48 )
      {
        if ( *((_DWORD *)P + 24) >= *((_DWORD *)P + 26) )
          v17 = *((_DWORD *)P + 24);
      }
      else
      {
        v25 = *((_QWORD *)v18 + 2);
        if ( *(_DWORD *)(v25 + 8) >= *((_DWORD *)P + 26) )
        {
          v17 = *(_DWORD *)(v25 + 8);
          if ( *((_QWORD *)v18 - 18) )
          {
            PoolWithTag = (PVOID)*((_QWORD *)v18 - 18);
          }
          else
          {
            v19 = *((_QWORD *)v18 - 20);
            if ( v19 )
            {
              if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
              {
                PoolWithTag = *(PVOID *)(v19 + 24);
              }
              else
              {
                PoolWithTag = MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, 0x40000010u);
                v17 = *(_DWORD *)(v25 + 8);
              }
            }
          }
          if ( v17 > *((_DWORD *)P + 24) )
            v17 = *((_DWORD *)P + 24);
        }
      }
      if ( v17 )
      {
        if ( !PoolWithTag )
        {
          v20 = PsChargeProcessPoolQuota(*((PEPROCESS *)P + 15), PagedPool, v17);
          if ( v20 < 0 )
            RtlRaiseStatus(v20);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v17, 0x4E725346u);
          *((_QWORD *)P + 10) = PoolWithTag;
        }
        memmove(PoolWithTag, *((const void **)P + 11), *((unsigned int *)P + 26));
        *((_DWORD *)P + 25) = v17;
        *((_QWORD *)P + 11) = PoolWithTag;
        v21 = *((_WORD *)v26 + 36);
      }
      else
      {
        *((_WORD *)P + 36) |= 2u;
        v21 = *((_WORD *)P + 36);
      }
      if ( (v21 & 2) != 0 )
      {
        *((_QWORD *)P + 11) = 0LL;
        *((_QWORD *)P + 10) = 0LL;
        *((_QWORD *)P + 13) = 0LL;
        *((_DWORD *)P + 25) = 0;
      }
    }
  }
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)*((_QWORD *)P + 3);
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v5 + 64))-- == 1 )
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v5);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
}

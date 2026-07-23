/*
 * XREFs of FsRtlCancelNotify @ 0x140228890
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x140228778 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x140228850 (PsChargeProcessPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  PVOID v10; // rcx
  __int64 v11; // r10
  PVOID v12; // rax
  PVOID PoolWithTag; // r15
  unsigned int v14; // esi
  char *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int16 v18; // ax
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  _QWORD *v23; // [rsp+68h] [rbp-50h]
  char *P; // [rsp+D0h] [rbp+18h]

  SubjectContext = 0LL;
  v3 = *(_QWORD **)(a2 + 56);
  v23 = v3;
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
    if ( (v11 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v11 + 10) & 5) == 0
        ? (v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u), v10 = (PVOID)v3[11])
        : (v12 = *(PVOID *)(v11 + 24)),
          v12 == v10)
      || v10 == *(PVOID *)(a2 + 24) )
    {
      PoolWithTag = 0LL;
      v14 = 0;
      v15 = (char *)*((_QWORD *)P + 6);
      if ( v15 == P + 48 )
      {
        if ( *((_DWORD *)P + 24) >= *((_DWORD *)P + 26) )
          v14 = *((_DWORD *)P + 24);
      }
      else
      {
        v22 = *((_QWORD *)v15 + 2);
        if ( *(_DWORD *)(v22 + 8) >= *((_DWORD *)P + 26) )
        {
          v14 = *(_DWORD *)(v22 + 8);
          if ( *((_QWORD *)v15 - 18) )
          {
            PoolWithTag = (PVOID)*((_QWORD *)v15 - 18);
          }
          else
          {
            v16 = *((_QWORD *)v15 - 20);
            if ( v16 )
            {
              if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
              {
                PoolWithTag = *(PVOID *)(v16 + 24);
              }
              else
              {
                PoolWithTag = MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000010u);
                v14 = *(_DWORD *)(v22 + 8);
              }
            }
          }
          if ( v14 > *((_DWORD *)P + 24) )
            v14 = *((_DWORD *)P + 24);
        }
      }
      if ( v14 )
      {
        if ( !PoolWithTag )
        {
          v17 = PsChargeProcessPoolQuota(*((PEPROCESS *)P + 15), PagedPool, v14);
          if ( v17 < 0 )
            RtlRaiseStatus(v17);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v14, 0x4E725346u);
          *((_QWORD *)P + 10) = PoolWithTag;
        }
        memmove(PoolWithTag, *((const void **)P + 11), *((unsigned int *)P + 26));
        *((_DWORD *)P + 25) = v14;
        *((_QWORD *)P + 11) = PoolWithTag;
        v18 = *((_WORD *)v23 + 36);
      }
      else
      {
        *((_WORD *)P + 36) |= 2u;
        v18 = *((_WORD *)P + 36);
      }
      if ( (v18 & 2) != 0 )
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
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}

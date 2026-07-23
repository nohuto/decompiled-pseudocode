/*
 * XREFs of FsRtlUninitializeOplock @ 0x14022D260
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rdi
  _QWORD *v2; // rax
  char *v3; // rbx
  _QWORD *v4; // rcx
  char *v5; // rax
  char *v6; // rbx
  PVOID *v7; // rbx
  PFAST_MUTEX v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  char *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // rax
  void *v20; // rcx
  void *v21; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = v1 + 88;
      v3 = (char *)*((_QWORD *)v1 + 11);
      if ( v3 == v1 + 88 )
        break;
      v11 = *(_QWORD **)v3;
      if ( *((_QWORD **)v3 + 1) != v2 || (char *)v11[1] != v3 )
LABEL_30:
        __fastfail(3u);
      *v2 = v11;
      v11[1] = v2;
      v12 = (_QWORD *)*((_QWORD *)v3 + 2);
      if ( v12 )
      {
        *((_BYTE *)v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64(v12 + 13, 0LL);
        KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v12 + 69));
        v12[7] = 0LL;
        v12 = (_QWORD *)*((_QWORD *)v3 + 2);
      }
      (*((void (__fastcall **)(_QWORD, _QWORD *))v3 + 3))(*((_QWORD *)v3 + 4), v12);
      ExFreePoolWithTag(v3, 0);
    }
    while ( 1 )
    {
      v4 = v1 + 40;
      v5 = (char *)*((_QWORD *)v1 + 5);
      if ( v5 == v1 + 40 )
        break;
      v13 = v5 - 168;
      v14 = *((_QWORD *)v5 + 2);
      v15 = *(_QWORD *)v5;
      if ( *((_QWORD **)v5 + 1) != v4 || *(char **)(v15 + 8) != v5 )
        goto LABEL_30;
      *v4 = v15;
      *(_QWORD *)(v15 + 8) = v4;
      v13[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v13 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v13[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v14 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v14 + 24) == 590400 )
      {
        v16 = *((_QWORD *)v13 + 3);
        *(_OWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *(_DWORD *)v16 = 1572865;
        *(_DWORD *)(v16 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *((_QWORD *)v13 + 7) = 24LL;
      }
      else
      {
        *((_QWORD *)v13 + 7) = 8LL;
      }
      *((_DWORD *)v13 + 12) = 0;
      IofCompleteRequest((PIRP)v13, 1);
    }
    while ( 1 )
    {
      v6 = (char *)*((_QWORD *)v1 + 7);
      if ( v6 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v6 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7));
        v18 = *v17;
        v19 = (_QWORD *)v17[1];
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
          goto LABEL_30;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v6 + 5) )
          FsRtlpClearOwner(v1, v6);
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v6, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v7 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v7 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9));
      FsRtlpModifyThreadPriorities(v1, v7, 0LL);
      ObfDereferenceObjectWithTag(v7[3], 0x746C6644u);
      FsRtlpClearOwner(v1, v7);
      ExFreePoolWithTag(v7, 0);
    }
    v8 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v9 = *(_QWORD *)&v8[3].Contention;
      BYTE5(v8[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v8[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v8[1].Owner));
      if ( *(_DWORD *)(v9 + 24) == 590400 )
      {
        v10 = *(_QWORD *)&v8->Event.Header.Lock;
        *(_OWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)v10 = 1572865;
        *(_DWORD *)(v10 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v8[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v8[1].Count = 8LL;
      }
      v8->OldIrql = 0;
      IofCompleteRequest((PIRP)v8, 1);
      *(_QWORD *)v1 = 0LL;
      v20 = (void *)*((_QWORD *)v1 + 1);
      if ( v20 )
        ObfDereferenceObjectWithTag(v20, 0x746C6644u);
      FsRtlpModifyThreadPriorities(v1, 0LL, 0LL);
      FsRtlpClearOwner(v1, 0LL);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v21 = (void *)*((_QWORD *)v1 + 17);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}

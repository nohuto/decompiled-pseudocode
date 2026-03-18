/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x140369C70
 * Callers:
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140369C50 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EAE40 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140376ED4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB1EC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0LL);
    FsRtlpClearOwner(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
    {
      *(_QWORD *)(v6 + 56) = 0LL;
      v6 = *(_QWORD *)v5;
    }
    *(_DWORD *)(v6 + 48) = -1073741536;
    IofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = *(void **)(v5 + 88);
        if ( v7 == (void *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v7);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}

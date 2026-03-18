/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x140376950
 * Callers:
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140376930 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039F3B0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140542834 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x140240DB4 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14024A390 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14024E884 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

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
        v7 = *(_QWORD **)(v5 + 88);
        if ( v7 == (_QWORD *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v7);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}

/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x14036C610
 * Callers:
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x14036C5F0 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374940 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140392C5C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EED00 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpClearOwner @ 0x140375064 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140379C74 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EF0AC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx

  v5 = *(__int64 **)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex((PFAST_MUTEX)v5[19]);
  if ( *v5 && *(_BYTE *)(*v5 + 68) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0LL);
    FsRtlpClearOwner(v5, 0LL);
    *((_BYTE *)v5 + 32) = 0;
    v6 = *v5;
    if ( *(__int64 **)(*v5 + 56) == v5 )
    {
      *(_QWORD *)(v6 + 56) = 0LL;
      v6 = *v5;
    }
    *(_DWORD *)(v6 + 48) = -1073741536;
    IofCompleteRequest((PIRP)*v5, 1);
    *v5 = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v5[1], 0x746C6644u);
    v5[1] = 0LL;
    *((_DWORD *)v5 + 36) = v5[18] & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = (__int64 *)v5[11];
        if ( v7 == v5 + 11 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v7);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v5[19]);
}

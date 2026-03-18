/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x14054276C
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140249470 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x140542BF0 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14024E884 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); i != (_QWORD *)(v3 + 88); i = (_QWORD *)*i )
  {
    v5 = i;
    v6 = i[2];
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 68) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v5);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}

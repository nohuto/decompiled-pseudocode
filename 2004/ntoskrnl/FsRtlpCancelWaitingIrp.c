/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x1404EB3A8
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x1404EBC70 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB81C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  void *v5; // rcx
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

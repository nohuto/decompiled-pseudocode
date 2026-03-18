/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x1404EB2C8
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EB094 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x1404EB700 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402976F0 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EB71C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 3221225760LL, 0LL);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState(v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}

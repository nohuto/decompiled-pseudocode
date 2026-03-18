/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x140322450
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140208D40 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x140322430 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140209640 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140322558 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403EFE3C (FsRtlpRemoveAndCompleteRHIrp.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v6 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v7; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteRHIrp((PVOID)*i, 0, 0, 0);
        v6 = 1;
      }
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v7 == v7 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}

/*
 * XREFs of FsRtlInitializeLargeMcb @ 0x14029B890
 * Callers:
 *     FsRtlInitializeMcb @ 0x14088B6B0 (FsRtlInitializeMcb.c)
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x140202C50 (FsRtlInitializeBaseMcbEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

void __stdcall FsRtlInitializeLargeMcb(PLARGE_MCB Mcb, POOL_TYPE PoolType)
{
  struct _FAST_MUTEX *v3; // rax
  LIST_ENTRY *p_WaitListHead; // rax

  FsRtlInitializeBaseMcbEx(&Mcb->BaseMcb, PoolType, 1u);
  v3 = (struct _FAST_MUTEX *)ExAllocateFromNPagedLookasideList(&FsRtlFastMutexLookasideList);
  Mcb->GuardedMutex = v3;
  if ( !v3 )
    RtlRaiseStatus(0xC000009A);
  v3->Count = 1;
  v3->Owner = 0LL;
  v3->Contention = 0;
  LOWORD(v3->Event.Header.Lock) = 1;
  v3->Event.Header.Size = 6;
  v3->Event.Header.SignalState = 0;
  p_WaitListHead = &v3->Event.Header.WaitListHead;
  p_WaitListHead->Blink = p_WaitListHead;
  p_WaitListHead->Flink = p_WaitListHead;
}

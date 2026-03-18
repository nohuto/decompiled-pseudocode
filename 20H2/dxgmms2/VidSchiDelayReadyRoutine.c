/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C0010810
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C0010798 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000FE3C (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiDelayReadyRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(DeferredContext[12] + 24LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  if ( (DeferredContext[23] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 46) &= ~0x40u;
    if ( VidSchiUnwaitContext((__int64)DeferredContext, 0x6860u) )
    {
      *(_QWORD *)(v5 + 1208) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1176), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}

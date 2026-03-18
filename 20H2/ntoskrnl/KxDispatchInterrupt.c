/*
 * XREFs of KxDispatchInterrupt @ 0x140403FD0
 * Callers:
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 */

__int64 KxDispatchInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR CurrentThread; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v2 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v2;
  v3 = *(unsigned int *)(CurrentThread + 80);
  CurrentPrcb->StartCycles += v2;
  v4 = v2 + v3;
  v5 = v4;
  if ( HIDWORD(v4) )
    v5 = -1;
  *(_DWORD *)(CurrentThread + 80) = v5;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v2);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0);
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v7 = 0;
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      _mm_pause();
    }
    while ( (CurrentPrcb->PrcbLock & 1) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
  }
  NextThread = CurrentPrcb->NextThread;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = NextThread;
  NextThread->WaitBlockFill6[68] = 2;
  *(_BYTE *)(CurrentThread + 643) = 31;
  KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v6);
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  return SwapContext(1LL);
}

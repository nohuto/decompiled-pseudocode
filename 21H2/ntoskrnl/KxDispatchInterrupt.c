/*
 * XREFs of KxDispatchInterrupt @ 0x1404067C0
 * Callers:
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 * Callees:
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
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
  KiQueueReadyThread(CurrentPrcb, CurrentThread, v6);
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  return SwapContext(1LL);
}

/*
 * XREFs of KxDispatchInterrupt @ 0x140428BA0
 * Callers:
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiEndThreadAccountingPeriod @ 0x1402B9660 (KiEndThreadAccountingPeriod.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 */

__int64 KxDispatchInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG_PTR CurrentThread; // rdi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v2 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v2;
  CurrentPrcb->StartCycles += v2;
  v3 = (CurrentPrcb->CpuCycleScalingFactor * v2) >> 16;
  v4 = v3 + *(_DWORD *)(CurrentThread + 80);
  if ( (v3 + *(unsigned int *)(CurrentThread + 80)) >> 32 )
    v4 = -1;
  *(_DWORD *)(CurrentThread + 80) = v4;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0xBE) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v3);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0);
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v6 = 0;
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
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
  KiQueueReadyThread(CurrentPrcb, CurrentThread, v5);
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  return SwapContext(1LL);
}

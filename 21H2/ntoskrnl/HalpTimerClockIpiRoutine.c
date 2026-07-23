/*
 * XREFs of HalpTimerClockIpiRoutine @ 0x1402C5E60
 * Callers:
 *     <none>
 * Callees:
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C29A0 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerClockIpiRoutine(__int64 a1)
{
  __int64 CurrentPrcb; // rax
  _QWORD *v2; // rbx

  KeClockInterruptNotify(*(_QWORD *)(a1 + 136), *(unsigned __int8 *)(*(_QWORD *)(a1 + 136) + 41LL));
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  if ( *(_BYTE *)(CurrentPrcb + 33) && HalpWatchdogTimer )
  {
    CurrentPrcb = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
      CurrentPrcb = off_140C008C0[0]();
    if ( HalpTimerWatchdogResetCount == -1 )
      CurrentPrcb = HalpTimerWatchdogTriggerSystemReset(0LL);
  }
  LODWORD(CurrentPrcb) = KeGetPcr()->Prcb.Number;
  v2 = (_QWORD *)(HalpCounterSetInfo + 24 * CurrentPrcb);
  if ( (_QWORD *)*v2 != v2 && MEMORY[0xFFFFF78000000008] - v2[2] >= 0x4C4B40uLL )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))off_140C007D8[0])(0LL, 0LL);
    v2[2] = MEMORY[0xFFFFF78000000008];
  }
  return 1;
}

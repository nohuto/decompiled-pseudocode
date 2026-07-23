/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x1404D4A10
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcaQueueDpc @ 0x14024EA78 (HalpMcaQueueDpc.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BF8B8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C29A0 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // di
  __int64 InternalData; // rax
  __int64 v4; // r8
  __int16 v5; // ax
  __int64 CurrentPrcb; // rax
  _QWORD *v7; // rbx

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    KeClockInterruptNotify(v1, v2);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v5 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v5, SHIBYTE(v5));
      }
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      if ( *(_BYTE *)(CurrentPrcb + 33) && HalpWatchdogTimer )
      {
        CurrentPrcb = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          CurrentPrcb = off_140C008C0[0]();
        if ( HalpTimerWatchdogResetCount == -1 )
          CurrentPrcb = HalpTimerWatchdogTriggerSystemReset(0);
      }
      LODWORD(CurrentPrcb) = KeGetPcr()->Prcb.Number;
      v7 = (_QWORD *)(HalpCounterSetInfo + 24 * CurrentPrcb);
      if ( (_QWORD *)*v7 != v7 && MEMORY[0xFFFFF78000000008] - v7[2] >= 0x4C4B40uLL )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))off_140C007D8[0])(0LL, 0LL);
        v7[2] = MEMORY[0xFFFFF78000000008];
      }
    }
  }
  return 1;
}

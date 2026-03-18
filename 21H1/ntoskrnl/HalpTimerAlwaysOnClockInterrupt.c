/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x1404CF3B0
 * Callers:
 *     <none>
 * Callees:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     HalpMcaQueueDpc @ 0x1403202D4 (HalpMcaQueueDpc.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BA0A8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD190 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  __int64 InternalData; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 CurrentPrcb; // rax
  _QWORD *v10; // rbx

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    LOBYTE(v5) = v2;
    KeClockInterruptNotify(v1, v5, v6, v7);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v8 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v8, SHIBYTE(v8));
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
      v10 = (_QWORD *)(HalpCounterSetInfo + 24 * CurrentPrcb);
      if ( (_QWORD *)*v10 != v10 && MEMORY[0xFFFFF78000000008] - v10[2] >= 0x4C4B40uLL )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))off_140C007D8[0])(0LL, 0LL);
        v10[2] = MEMORY[0xFFFFF78000000008];
      }
    }
  }
  return 1;
}

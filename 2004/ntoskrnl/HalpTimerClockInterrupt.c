/*
 * XREFs of HalpTimerClockInterrupt @ 0x14021F0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     HalpMcaQueueDpc @ 0x14035DEF8 (HalpMcaQueueDpc.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD870 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerClockInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // si
  __int64 InternalData; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  int v6; // eax
  unsigned int v7; // eax
  __int64 CurrentPrcb; // rax
  _QWORD *v9; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  v5 = (char *)&HalpClockTickLog
     + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(LARGE_INTEGER *)v5 = RtlGetInterruptTimePrecise(&PerformanceCounter);
  *((_DWORD *)v5 + 2) = KeGetPcr()->Prcb.Number;
  v5[12] = KeGetCurrentPrcb()->PendingTickFlags & 1;
  v5[13] = BYTE2(KeGetPcr()->HalReserved[5]);
  v6 = KiClockTimerOwner;
  v5[14] = KeGetCurrentPrcb()->ClockOwner;
  *((_DWORD *)v5 + 4) = v6;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    BYTE2(KeGetPcr()->HalReserved[5]) = 0;
  }
  else if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v1, v2);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v7 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc((unsigned __int8)v7, v7 >> 8);
      }
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
      v9 = (_QWORD *)(HalpCounterSetInfo + 24 * CurrentPrcb);
      if ( (_QWORD *)*v9 != v9 && MEMORY[0xFFFFF78000000008] - v9[2] >= 0x4C4B40uLL )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))off_140C007D8[0])(0LL, 0LL);
        v9[2] = MEMORY[0xFFFFF78000000008];
      }
    }
  }
  return 1;
}

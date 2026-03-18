/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x140521AC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcaQueueDpc @ 0x1402592CC (HalpMcaQueueDpc.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpScanForProfilingCorruption @ 0x14050BAC8 (HalpScanForProfilingCorruption.c)
 *     HalpTimerSwitchToNormalClock @ 0x14050C138 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050EB80 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // di
  __int64 InternalData; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v9; // ax
  _QWORD *v10; // rbx

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v5 + 120))(InternalData);
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    LOBYTE(v6) = v3;
    KeClockInterruptNotify(v2, v6, v7, v8);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v9 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v9, SHIBYTE(v9));
      }
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          off_140C01F10[0]();
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v10 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v10[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v10 != v10 )
            ((void (__fastcall *)(_QWORD, _QWORD))off_140C01E28[0])(0LL, 0LL);
          HalpScanForProfilingCorruption(v1);
          v10[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}

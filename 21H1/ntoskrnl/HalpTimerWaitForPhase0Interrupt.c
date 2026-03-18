/*
 * XREFs of HalpTimerWaitForPhase0Interrupt @ 0x1403A4EF4
 * Callers:
 *     HalpTimerInitializeClock @ 0x1403A4DE8 (HalpTimerInitializeClock.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     HalpProcessorFence @ 0x1403F1C50 (HalpProcessorFence.c)
 */

char __fastcall HalpTimerWaitForPhase0Interrupt(__int64 a1)
{
  unsigned int i; // ebx
  int v3; // eax

  *(_DWORD *)(a1 + 64) = 0;
  HalpProcessorFence();
  for ( i = 0; i < 0xBB8; i += 10 )
  {
    if ( *(_DWORD *)(a1 + 64) )
      goto LABEL_5;
    KeStallExecutionProcessor(0x2710u);
  }
  v3 = *(_DWORD *)(a1 + 64);
  if ( v3 )
LABEL_5:
    LOBYTE(v3) = 1;
  return v3;
}

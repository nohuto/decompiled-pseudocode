/*
 * XREFs of HalpTimerWaitForPhase0Interrupt @ 0x1403AE5B0
 * Callers:
 *     HalpTimerInitializeClock @ 0x1403AE4A4 (HalpTimerInitializeClock.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     HalpProcessorFence @ 0x1403F7A90 (HalpProcessorFence.c)
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

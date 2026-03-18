/*
 * XREFs of KiCheckKeepAlive @ 0x1402F36BC
 * Callers:
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(unsigned int a1)
{
  char v2; // di

  v2 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(KiClockCheckPending, a1) )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, a1) )
    {
      KeRemoveProcessorAffinityEx(KiClockCheckReady, a1);
      KeRemoveProcessorAffinityEx(KiClockCheckPending, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(KiClockCheckReady, a1);
    }
  }
  return v2;
}

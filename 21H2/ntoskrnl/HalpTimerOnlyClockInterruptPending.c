/*
 * XREFs of HalpTimerOnlyClockInterruptPending @ 0x1402329A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1402329F0 (HalpInterruptGetHighestPriorityInterrupt.c)
 */

bool HalpTimerOnlyClockInterruptPending()
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  v2 = 0;
  if ( (int)HalpInterruptGetHighestPriorityInterrupt(&v3, &v2) >= 0 && v2 )
    return ((v3 - 209) & 0xFFFFFFFD) == 0;
  return v0;
}

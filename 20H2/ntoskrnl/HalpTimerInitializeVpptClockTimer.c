/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140385C0C
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x1404BF0D4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}

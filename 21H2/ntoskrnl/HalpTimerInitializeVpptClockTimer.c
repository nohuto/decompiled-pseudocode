/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140391724
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x14050D564 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}

/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140383190
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x1404BB4D4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}

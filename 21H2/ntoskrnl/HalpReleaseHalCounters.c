/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B9130
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140864280 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x1408643D0 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}

/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B3B70
 * Callers:
 *     HalAllocateHardwareCounters @ 0x14085F910 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x14085FA60 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}

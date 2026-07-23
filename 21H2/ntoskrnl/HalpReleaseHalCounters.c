/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B9370
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1408643E0 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x140864530 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}

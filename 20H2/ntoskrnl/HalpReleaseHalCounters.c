/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B7770
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140866680 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x1408667D0 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}

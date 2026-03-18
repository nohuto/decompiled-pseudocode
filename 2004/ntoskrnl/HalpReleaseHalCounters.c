/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B4250
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140860C60 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x140860DB0 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}

/*
 * XREFs of HalpAllocateHalCounters @ 0x1404B92F4
 * Callers:
 *     EmonAllocateCounter @ 0x1404D32A0 (EmonAllocateCounter.c)
 *     Amd64AllocateCounter @ 0x1404DD968 (Amd64AllocateCounter.c)
 *     HalAllocateHardwareCounters @ 0x1408643E0 (HalAllocateHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpAllocateHalCounters()
{
  if ( (_InterlockedExchangeAdd(&HalpPmuInUse, 2u) & 1) == 0 )
    return 0LL;
  _InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
  return 3221225473LL;
}

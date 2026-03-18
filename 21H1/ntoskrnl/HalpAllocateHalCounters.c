/*
 * XREFs of HalpAllocateHalCounters @ 0x1404B3AF4
 * Callers:
 *     EmonAllocateCounter @ 0x1404CDC40 (EmonAllocateCounter.c)
 *     Amd64AllocateCounter @ 0x1404D8278 (Amd64AllocateCounter.c)
 *     HalAllocateHardwareCounters @ 0x14085F910 (HalAllocateHardwareCounters.c)
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

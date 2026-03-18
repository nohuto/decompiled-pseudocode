/*
 * XREFs of HalpAllocateHalCounters @ 0x1404B76F4
 * Callers:
 *     EmonAllocateCounter @ 0x1404D1690 (EmonAllocateCounter.c)
 *     Amd64AllocateCounter @ 0x1404DBD18 (Amd64AllocateCounter.c)
 *     HalAllocateHardwareCounters @ 0x140866680 (HalAllocateHardwareCounters.c)
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

/*
 * XREFs of HalpTscQueryCounter @ 0x1404D0BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 HalpTscQueryCounter()
{
  if ( HalpTscFenceRequired == 1 )
  {
    _mm_lfence();
  }
  else if ( HalpTscFenceRequired == 2 )
  {
    _mm_mfence();
  }
  return __rdtsc();
}

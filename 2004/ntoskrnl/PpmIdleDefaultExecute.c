/*
 * XREFs of PpmIdleDefaultExecute @ 0x1403BA000
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x1403F2EC0 (HalProcessorIdle.c)
 */

__int64 __fastcall PpmIdleDefaultExecute(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( a5 )
    __writemsr(0x48u, 0LL);
  HalProcessorIdle();
  if ( a5 )
    __writemsr(0x48u, a5);
  else
    _mm_lfence();
  return 0LL;
}

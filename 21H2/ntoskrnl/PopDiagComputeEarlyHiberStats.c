/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140A48CA4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  qword_140C22E28 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
  v0 = &qword_140001B28;
  v1 = 59LL;
  qword_140C22DF0 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  do
  {
    if ( (v0[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140C22D18 + *v0);
      if ( v4 > (unsigned __int64)PopSstDiagResumeClock )
        v4 -= *((_QWORD *)&PopSstDiagResumeClock + 1);
      v3 = *v0;
      *(__int64 *)((char *)&qword_140C22D18 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v0 += 3;
    --v1;
  }
  while ( v1 );
  result = qword_140C22DE8 - qword_140C22D80;
  qword_140C22D78 = qword_140C22DE8 - qword_140C22D80;
  return result;
}

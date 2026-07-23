/*
 * XREFs of WmiGetClock @ 0x1405A1290
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 */

unsigned __int64 __fastcall WmiGetClock(int a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v4; // ecx

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  result = 0LL;
  if ( a1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 > 2 )
      {
        if ( a1 <= 4 )
          return result;
        if ( a1 == 5 )
          return __rdtsc();
      }
      return RtlGetSystemTimePrecise().QuadPart;
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v4 = *(unsigned __int8 *)(v2 + 4209) - 2;
  if ( v4 )
  {
    if ( v4 == 1 )
      return __rdtsc();
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  return RtlGetSystemTimePrecise().QuadPart;
}

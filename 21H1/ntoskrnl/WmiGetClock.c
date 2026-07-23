/*
 * XREFs of WmiGetClock @ 0x1405A0BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
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

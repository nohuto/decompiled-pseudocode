/*
 * XREFs of RIMIDEValidateInjectionQpcCount @ 0x1C016BF94
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C016A9A0 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIDEValidateInjectionQpcCount(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  if ( !gullTouchInjectionMaxTimeOffset )
    gullTouchInjectionMaxTimeOffset = 5000 * gliQpcFreq.QuadPart / 1000;
  return a4 && !a1
      || !a2 && !a1
      || (a4 || (a2 || !a1 || a5) && a1 != a2 && a1 - a2 <= a3)
      && *(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1 <= (unsigned __int64)gullTouchInjectionMaxTimeOffset;
}

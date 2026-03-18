/*
 * XREFs of HalpTscFallback @ 0x1404BC040
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140381420 (HalCalibratePerformanceCounter.c)
 *     HalpTimerSelectFallbackPerformanceCounter @ 0x1404BADE8 (HalpTimerSelectFallbackPerformanceCounter.c)
 */

__int64 __fastcall HalpTscFallback(ULONG_PTR Argument, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+20h] [rbp-8h]

  _disable();
  v4 = v7 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    HalpTimerSelectFallbackPerformanceCounter();
    MEMORY[0xFFFFF780000003C6] = 0;
    _InterlockedDecrement((volatile signed __int32 *)Argument);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument != -1 );
    _InterlockedOr(v6, 0);
  }
  result = HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 4), *(_QWORD *)(Argument + 8), a3);
  if ( v4 )
    _enable();
  return result;
}

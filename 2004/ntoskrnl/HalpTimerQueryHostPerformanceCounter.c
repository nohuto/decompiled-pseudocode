/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x1404B1B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1)
{
  __int64 v2; // rbx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140C4A358 || !qword_140C4A208 )
    return 3221225659LL;
  v2 = qword_140C4A358();
  *a1 = ((__int64 (*)(void))qword_140C4A208)() + v2;
  return 0LL;
}

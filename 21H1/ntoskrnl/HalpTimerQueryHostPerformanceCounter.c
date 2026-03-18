/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x1404B14A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1)
{
  __int64 v2; // rbx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140C4A4B8 || !qword_140C4A368 )
    return 3221225659LL;
  v2 = qword_140C4A4B8();
  *a1 = ((__int64 (*)(void))qword_140C4A368)() + v2;
  return 0LL;
}

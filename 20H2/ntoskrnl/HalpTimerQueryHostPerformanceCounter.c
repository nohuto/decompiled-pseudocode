/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x1404B5080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1)
{
  __int64 v2; // rbx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140C4A3B8 || !qword_140C4A268 )
    return 3221225659LL;
  v2 = qword_140C4A268(0LL);
  *a1 = ((__int64 (*)(void))qword_140C4A3B8)() + v2;
  return 0LL;
}

/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x140503320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1)
{
  __int64 v2; // rbx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140C4C5D8 || !qword_140C4C488 )
    return 3221225659LL;
  v2 = qword_140C4C488(0LL);
  *a1 = ((__int64 (*)(void))qword_140C4C5D8)() + v2;
  return 0LL;
}

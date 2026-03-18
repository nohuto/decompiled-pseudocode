/*
 * XREFs of ?_ValidateInjectionQpcCount@@YGH_K00HH@Z @ 0x149874
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge _ValidateInjectionQpcCount@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  return a2 && !a3
      || !a4 && !a3
      || (a2 || (a4 || !a3 || a1) && a3 != a4 && a3 - a4 <= a5)
      && *(_QWORD *)&KeQueryPerformanceCounter(0) - a3 <= gullTouchInjectionMaxTimeOffset;
}

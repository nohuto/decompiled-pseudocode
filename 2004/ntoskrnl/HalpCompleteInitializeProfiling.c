/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x14099B194
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x14099B120 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))*((_QWORD *)HalpProfileInterface[0] + 15);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

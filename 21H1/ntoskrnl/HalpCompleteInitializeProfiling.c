/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x140996C24
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140996BB0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))*((_QWORD *)HalpProfileInterface[0] + 15);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

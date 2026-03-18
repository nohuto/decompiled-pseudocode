/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x1409A1294
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x1409A1220 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))*((_QWORD *)HalpProfileInterface[0] + 15);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

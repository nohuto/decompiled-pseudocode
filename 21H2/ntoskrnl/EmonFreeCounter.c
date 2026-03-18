/*
 * XREFs of EmonFreeCounter @ 0x1403BEC24
 * Callers:
 *     EmonDisableMonitoring @ 0x140520270 (EmonDisableMonitoring.c)
 *     EmonInitializeProfiling @ 0x140A557A0 (EmonInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonFreeCounter(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( HalpProfileInterface == &DefaultProfileInterface )
    v1 = HalpCounterStatus;
  else
    v1 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  *(_DWORD *)(*(_QWORD *)(v1 + 8LL * a1) + 24LL) = 3;
  result = *(_QWORD *)(v1 + 8LL * a1);
  *(_DWORD *)(result + 32) = 0;
  return result;
}

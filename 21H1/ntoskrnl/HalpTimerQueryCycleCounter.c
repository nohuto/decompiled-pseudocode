/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x1403CAA50
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x140399F38 (HalpFindTimer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

ULONG_PTR *__fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  ULONG_PTR *result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = result[24];
    InternalData = HalpTimerGetInternalData((__int64)result);
    return (ULONG_PTR *)(*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
  }
  return result;
}

/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C00047E0
 * Callers:
 *     CpcAcquirePerformance @ 0x1C00045A0 (CpcAcquirePerformance.c)
 *     CpcCommitPerformance @ 0x1C0004600 (CpcCommitPerformance.c)
 *     CpcReadFeedback @ 0x1C00046C0 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C0014980 = dword_1C0014960;
  qword_1C0014988 = a2;
  byte_1C0014990 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0014940);
  for ( i = (__int64 *)qword_1C0014950; i != &qword_1C0014950; i = (__int64 *)*i )
    a1(i, &dword_1C0014980);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0014940);
}

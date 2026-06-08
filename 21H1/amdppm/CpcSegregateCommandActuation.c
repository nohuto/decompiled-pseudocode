/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C0003E54
 * Callers:
 *     CpcAcquirePerformance @ 0x1C0003C20 (CpcAcquirePerformance.c)
 *     CpcCommitPerformance @ 0x1C0003C80 (CpcCommitPerformance.c)
 *     CpcReadFeedback @ 0x1C0003D40 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C0013970 = dword_1C0013950;
  qword_1C0013978 = a2;
  byte_1C0013980 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0013930);
  for ( i = (__int64 *)qword_1C0013940; i != &qword_1C0013940; i = (__int64 *)*i )
    a1(i, &dword_1C0013970);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0013930);
}

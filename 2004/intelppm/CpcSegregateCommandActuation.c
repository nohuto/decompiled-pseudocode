/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C00090A4
 * Callers:
 *     CpcAcquirePerformance @ 0x1C0008E10 (CpcAcquirePerformance.c)
 *     CpcCommitPerformance @ 0x1C0008E70 (CpcCommitPerformance.c)
 *     CpcReadFeedback @ 0x1C0008F90 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C001C990 = dword_1C001C970;
  qword_1C001C998 = a2;
  byte_1C001C9A0 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C001C950);
  for ( i = (__int64 *)qword_1C001C960; i != &qword_1C001C960; i = (__int64 *)*i )
    a1(i, &dword_1C001C990);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C001C950);
}

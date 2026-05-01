/*
 * XREFs of sub_180046E02 @ 0x180046E02
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180046E02(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}

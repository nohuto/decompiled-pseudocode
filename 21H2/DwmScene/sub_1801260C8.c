/*
 * XREFs of sub_1801260C8 @ 0x1801260C8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_1801260C8(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}

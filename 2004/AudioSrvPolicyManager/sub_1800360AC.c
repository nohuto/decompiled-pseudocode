/*
 * XREFs of sub_1800360AC @ 0x1800360AC
 * Callers:
 *     sub_18003CD2E @ 0x18003CD2E (sub_18003CD2E.c)
 *     unknown_libname_29 @ 0x18003CD9A (unknown_libname_29.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800360AC(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}

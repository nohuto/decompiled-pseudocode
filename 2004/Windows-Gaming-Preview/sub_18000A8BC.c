/*
 * XREFs of sub_18000A8BC @ 0x18000A8BC
 * Callers:
 *     unknown_libname_40 @ 0x180046037 (unknown_libname_40.c)
 *     sub_180046049 @ 0x180046049 (sub_180046049.c)
 *     sub_1800466A1 @ 0x1800466A1 (sub_1800466A1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A8BC(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(result + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

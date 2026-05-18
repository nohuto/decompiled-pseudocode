/*
 * XREFs of sub_1800F0BD0 @ 0x1800F0BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F0DA8 @ 0x1800F0DA8 (sub_1800F0DA8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F0BD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_1800F0DA8();
  result = *a4;
  if ( (*(_BYTE *)(*a4 + 442) & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, a2, a3, a4);
  return result;
}

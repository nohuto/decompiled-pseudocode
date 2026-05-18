/*
 * XREFs of sub_1800EB300 @ 0x1800EB300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EB4D8 @ 0x1800EB4D8 (sub_1800EB4D8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800EB300(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_1800EB4D8();
  result = *a4;
  if ( (*(_BYTE *)(*a4 + 442) & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, a2, a3, a4);
  return result;
}

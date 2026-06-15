/*
 * XREFs of sub_1800DA8EC @ 0x1800DA8EC
 * Callers:
 *     sub_1800DA884 @ 0x1800DA884 (sub_1800DA884.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DA8EC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  sub_180048790(a1 + 1, a3);
  a1[2] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}

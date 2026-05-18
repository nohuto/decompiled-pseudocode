/*
 * XREFs of sub_180036B18 @ 0x180036B18
 * Callers:
 *     sub_18003C320 @ 0x18003C320 (sub_18003C320.c)
 * Callees:
 *     sub_1800359E0 @ 0x1800359E0 (sub_1800359E0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180036B18(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800359E0(a1);
  v4 = a1[20];
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}

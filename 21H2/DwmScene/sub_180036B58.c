/*
 * XREFs of sub_180036B58 @ 0x180036B58
 * Callers:
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180036B58(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 176);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}

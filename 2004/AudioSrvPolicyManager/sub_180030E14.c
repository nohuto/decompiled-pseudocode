/*
 * XREFs of sub_180030E14 @ 0x180030E14
 * Callers:
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_WORD *__fastcall sub_180030E14(__int64 a1)
{
  _WORD *result; // rax

  result = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  if ( !result || !*result )
    return (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  return result;
}

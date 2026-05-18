/*
 * XREFs of sub_180070EC0 @ 0x180070EC0
 * Callers:
 *     sub_18002B500 @ 0x18002B500 (sub_18002B500.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180070EC0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800D5F90(*v2);
}

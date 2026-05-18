/*
 * XREFs of sub_18006DA68 @ 0x18006DA68
 * Callers:
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DA68(_QWORD **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*a1)[26])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}

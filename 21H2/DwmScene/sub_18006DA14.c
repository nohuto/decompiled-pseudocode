/*
 * XREFs of sub_18006DA14 @ 0x18006DA14
 * Callers:
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DA14(_QWORD **a1, unsigned int a2, unsigned int a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*a1)[25])(a1, a2, a3);
}

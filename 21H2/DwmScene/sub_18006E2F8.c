/*
 * XREFs of sub_18006E2F8 @ 0x18006E2F8
 * Callers:
 *     sub_1800D3404 @ 0x1800D3404 (sub_1800D3404.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006E2F8(_QWORD **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64, _QWORD))(*a1)[35])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}

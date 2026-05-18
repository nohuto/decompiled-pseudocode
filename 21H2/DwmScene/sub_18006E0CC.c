/*
 * XREFs of sub_18006E0CC @ 0x18006E0CC
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 * Callees:
 *     sub_1800DFE6C @ 0x1800DFE6C (sub_1800DFE6C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006E0CC(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_1800DFE6C(*(_QWORD *)(a1 + 96) + 9256LL, a2, 0LL);
  return sub_1800DFE60(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}

/*
 * XREFs of sub_1800687FC @ 0x1800687FC
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 * Callees:
 *     sub_1800DA59C @ 0x1800DA59C (sub_1800DA59C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800687FC(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_1800DA59C(*(_QWORD *)(a1 + 96) + 9256LL, a2, 0LL);
  return sub_1800DA590(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}

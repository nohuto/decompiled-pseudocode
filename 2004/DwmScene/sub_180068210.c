/*
 * XREFs of sub_180068210 @ 0x180068210
 * Callers:
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 *     sub_180026320 @ 0x180026320 (sub_180026320.c)
 *     sub_1800264A0 @ 0x1800264A0 (sub_1800264A0.c)
 *     sub_18002A670 @ 0x18002A670 (sub_18002A670.c)
 *     sub_180033A54 @ 0x180033A54 (sub_180033A54.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068210(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **))(*a1)[29])(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}

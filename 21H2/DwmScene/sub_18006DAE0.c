/*
 * XREFs of sub_18006DAE0 @ 0x18006DAE0
 * Callers:
 *     sub_1800105F0 @ 0x1800105F0 (sub_1800105F0.c)
 *     sub_18002BBF0 @ 0x18002BBF0 (sub_18002BBF0.c)
 *     sub_18002BD70 @ 0x18002BD70 (sub_18002BD70.c)
 *     sub_18002FF40 @ 0x18002FF40 (sub_18002FF40.c)
 *     sub_180039324 @ 0x180039324 (sub_180039324.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DAE0(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **))(*a1)[29])(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}

/*
 * XREFs of sub_18012788D @ 0x18012788D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C5E68 @ 0x1800C5E68 (sub_1800C5E68.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012788D(__int64 a1, __int64 a2)
{
  sub_1800C5E68(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}

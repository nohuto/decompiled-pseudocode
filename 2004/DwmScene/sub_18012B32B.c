/*
 * XREFs of sub_18012B32B @ 0x18012B32B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011B7E4 @ 0x18011B7E4 (sub_18011B7E4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B32B(__int64 a1, __int64 a2)
{
  sub_18011B7E4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}

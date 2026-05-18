/*
 * XREFs of sub_18012B51E @ 0x18012B51E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011B794 @ 0x18011B794 (sub_18011B794.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B51E(__int64 a1, __int64 a2)
{
  sub_18011B794(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}

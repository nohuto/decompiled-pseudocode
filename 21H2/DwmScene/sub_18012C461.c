/*
 * XREFs of sub_18012C461 @ 0x18012C461
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_18009DAE8 @ 0x18009DAE8 (sub_18009DAE8.c)
 *     sub_18009DC40 @ 0x18009DC40 (sub_18009DC40.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012C461(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18009DAE8(*(_QWORD *)(a2 + 32), *(_QWORD **)(a2 + 56), *(_QWORD **)(a2 + 48));
  v3 = sub_180010B74(*(_QWORD *)(a2 + 32));
  sub_18009DC40(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}

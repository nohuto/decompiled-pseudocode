/*
 * XREFs of sub_18012B34F @ 0x18012B34F
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_1800319E0 @ 0x1800319E0 (sub_1800319E0.c)
 *     sub_18006BAD4 @ 0x18006BAD4 (sub_18006BAD4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B34F(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18006BAD4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 40), *(__int64 **)(a2 + 80));
  v3 = sub_180010A94(*(_QWORD *)(a2 + 32));
  sub_1800319E0(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}

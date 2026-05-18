/*
 * XREFs of sub_18012D8E0 @ 0x18012D8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_18006D2EC @ 0x18006D2EC (sub_18006D2EC.c)
 *     sub_18006D684 @ 0x18006D684 (sub_18006D684.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D8E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18006D2EC(*(_QWORD *)(a2 + 64), *(__int64 **)(a2 + 80), *(__int64 **)(a2 + 56));
  v3 = sub_180010B74(*(_QWORD *)(a2 + 64));
  sub_18006D684(v3, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 72));
  throw;
}

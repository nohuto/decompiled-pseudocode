/*
 * XREFs of sub_18012A474 @ 0x18012A474
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D2EC @ 0x18006D2EC (sub_18006D2EC.c)
 *     sub_18006D684 @ 0x18006D684 (sub_18006D684.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A474(__int64 a1, __int64 a2)
{
  sub_18006D2EC(*(_QWORD *)(a2 + 104), *(__int64 **)(a2 + 56), *(__int64 **)(a2 + 96));
  sub_18006D684(*(_QWORD *)(a2 + 120), *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 64));
  throw;
}

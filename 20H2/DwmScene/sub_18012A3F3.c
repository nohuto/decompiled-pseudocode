/*
 * XREFs of sub_18012A3F3 @ 0x18012A3F3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010B4EC @ 0x18010B4EC (sub_18010B4EC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A3F3(__int64 a1, __int64 a2)
{
  sub_18010B4EC(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}

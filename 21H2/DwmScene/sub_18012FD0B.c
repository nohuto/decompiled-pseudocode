/*
 * XREFs of sub_18012FD0B @ 0x18012FD0B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180110DBC @ 0x180110DBC (sub_180110DBC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FD0B(__int64 a1, __int64 a2)
{
  sub_180110DBC(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 152));
  throw;
}

/*
 * XREFs of sub_180130FD0 @ 0x180130FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801212B8 @ 0x1801212B8 (sub_1801212B8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130FD0(__int64 a1, __int64 a2)
{
  sub_1801212B8(*(_QWORD **)(a2 + 48));
  throw;
}

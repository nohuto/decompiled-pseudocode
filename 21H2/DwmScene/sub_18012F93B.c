/*
 * XREFs of sub_18012F93B @ 0x18012F93B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109C64 @ 0x180109C64 (sub_180109C64.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F93B(__int64 a1, __int64 a2)
{
  sub_180109C64(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}

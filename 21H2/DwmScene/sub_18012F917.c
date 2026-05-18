/*
 * XREFs of sub_18012F917 @ 0x18012F917
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109C3C @ 0x180109C3C (sub_180109C3C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F917(__int64 a1, __int64 a2)
{
  sub_180109C3C(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}

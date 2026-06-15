/*
 * XREFs of sub_1800E2D20 @ 0x1800E2D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

void __fastcall __noreturn sub_1800E2D20(__int64 a1, __int64 a2)
{
  sub_1800CD58C(*(__int64 **)(a2 + 112), *(__int64 **)(a2 + 136));
  sub_1800472E0(*(_QWORD *)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}

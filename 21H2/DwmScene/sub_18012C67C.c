/*
 * XREFs of sub_18012C67C @ 0x18012C67C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A740C @ 0x1800A740C (sub_1800A740C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012C67C(__int64 a1, __int64 a2)
{
  sub_1800A740C(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}

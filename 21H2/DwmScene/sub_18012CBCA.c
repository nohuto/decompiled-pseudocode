/*
 * XREFs of sub_18012CBCA @ 0x18012CBCA
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B3974 @ 0x1800B3974 (sub_1800B3974.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CBCA(__int64 a1, __int64 a2)
{
  sub_1800B3974(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}

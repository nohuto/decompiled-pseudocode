/*
 * XREFs of sub_18012A946 @ 0x18012A946
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080EB0 @ 0x180080EB0 (sub_180080EB0.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A946(__int64 a1, __int64 a2)
{
  sub_180080EB0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}

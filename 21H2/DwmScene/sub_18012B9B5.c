/*
 * XREFs of sub_18012B9B5 @ 0x18012B9B5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F35C @ 0x18008F35C (sub_18008F35C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B9B5(__int64 a1, __int64 a2)
{
  sub_18008F35C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}

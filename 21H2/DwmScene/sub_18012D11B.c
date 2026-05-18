/*
 * XREFs of sub_18012D11B @ 0x18012D11B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F484 @ 0x18008F484 (sub_18008F484.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D11B(__int64 a1, _QWORD *a2)
{
  __int64 **v3; // rax

  v3 = (__int64 **)sub_18008F484(a2[12], a2 + 4, a2[4]);
  sub_1800CBD30((_QWORD *)a2[12], a2 + 5, *v3);
  throw;
}

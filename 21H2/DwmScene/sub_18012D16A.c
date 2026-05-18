/*
 * XREFs of sub_18012D16A @ 0x18012D16A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F484 @ 0x18008F484 (sub_18008F484.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D16A(__int64 a1, __int64 *a2)
{
  __int64 **v3; // rax

  v3 = (__int64 **)sub_18008F484(a2[4], a2 + 5, a2[19]);
  sub_1800CBD30((_QWORD *)a2[4], a2 + 6, *v3);
  throw;
}

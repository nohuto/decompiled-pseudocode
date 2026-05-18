/*
 * XREFs of sub_1800A062C @ 0x1800A062C
 * Callers:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_180070E0C @ 0x180070E0C (sub_180070E0C.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A062C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 144);
  return result;
}

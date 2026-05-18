/*
 * XREFs of sub_18000BE10 @ 0x18000BE10
 * Callers:
 *     sub_180076A34 @ 0x180076A34 (sub_180076A34.c)
 *     sub_18010333C @ 0x18010333C (sub_18010333C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall sub_18000BE10(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // rdx

  result = (__int64 *)operator new(0x10uLL);
  v3 = qword_180222618;
  qword_180222618 = (__int64)result;
  *result = v3;
  result[1] = a1;
  return result;
}

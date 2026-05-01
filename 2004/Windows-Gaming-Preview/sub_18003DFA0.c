/*
 * XREFs of sub_18003DFA0 @ 0x18003DFA0
 * Callers:
 *     sub_18003DA50 @ 0x18003DA50 (sub_18003DA50.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_18003DFA0(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  result[2] = 1;
  result[3] = 1;
  *(_QWORD *)result = off_18004DA90;
  *((_QWORD *)result + 2) = a2;
  *a1 = a2;
  a1[1] = result;
  return result;
}

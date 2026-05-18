/*
 * XREFs of sub_1800AF998 @ 0x1800AF998
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 * Callees:
 *     sub_1800B2770 @ 0x1800B2770 (sub_1800B2770.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 */

_QWORD *__fastcall sub_1800AF998(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800B2FD8() )
    sub_1800B2770(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}

/*
 * XREFs of sub_1800EA5C0 @ 0x1800EA5C0
 * Callers:
 *     sub_1800EC08E @ 0x1800EC08E (sub_1800EC08E.c)
 *     sub_1800EC0CA @ 0x1800EC0CA (sub_1800EC0CA.c)
 * Callees:
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

LPVOID *__fastcall sub_1800EA5C0(LPVOID **a1)
{
  LPVOID *v1; // rcx
  LPVOID *result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800E3CDC(v1);
  return result;
}

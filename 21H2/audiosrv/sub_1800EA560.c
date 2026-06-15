/*
 * XREFs of sub_1800EA560 @ 0x1800EA560
 * Callers:
 *     sub_1800EC09A @ 0x1800EC09A (sub_1800EC09A.c)
 *     sub_1800EC0D6 @ 0x1800EC0D6 (sub_1800EC0D6.c)
 * Callees:
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

LPVOID *__fastcall sub_1800EA560(__int64 a1)
{
  LPVOID *result; // rax
  LPVOID *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(LPVOID **)(a1 + 8);
    v2 = **(LPVOID ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return sub_1800E3CDC(v2);
  }
  return result;
}

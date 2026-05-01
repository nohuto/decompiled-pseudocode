/*
 * XREFs of sub_18003A154 @ 0x18003A154
 * Callers:
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18003A154(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a1[2] - *a1;
  if ( a2 + a1[1] - *a1 < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return sub_18003A184(a1, a2);
}

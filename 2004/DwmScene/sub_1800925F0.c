/*
 * XREFs of sub_1800925F0 @ 0x1800925F0
 * Callers:
 *     sub_1800918E0 @ 0x1800918E0 (sub_1800918E0.c)
 *     sub_180092530 @ 0x180092530 (sub_180092530.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800925F0(_QWORD *a1, _QWORD *a2)
{
  *a2 = a1[18];
  a2[1] = a1[22];
  a2[2] = a1[20];
  a2[3] = a1[24];
  a2[4] = a1[26];
  a2[5] = a1[28];
  a2[6] = a1[30];
  a2[7] = a1[32];
  a2[8] = a1[34];
  return a2;
}

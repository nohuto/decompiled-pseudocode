/*
 * XREFs of sub_18011BF60 @ 0x18011BF60
 * Callers:
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 * Callees:
 *     sub_18011BF88 @ 0x18011BF88 (sub_18011BF88.c)
 */

__int64 __fastcall sub_18011BF60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18011BF88(a1, a2, v3);
  return a1;
}

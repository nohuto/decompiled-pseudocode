/*
 * XREFs of sub_180034630 @ 0x180034630
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033378 @ 0x180033378 (sub_180033378.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void **__fastcall sub_180034630(void **a1, char a2)
{
  void *v4; // rcx

  *a1 = off_18003F5D8;
  sub_180039D98(a1[19]);
  sub_180039D98(a1[20]);
  v4 = a1[17];
  *a1 = &off_18003F678;
  _o_free(v4);
  sub_180033378(a1 + 1);
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

/*
 * XREFs of sub_18003439C @ 0x18003439C
 * Callers:
 *     sub_18003CE70 @ 0x18003CE70 (sub_18003CE70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003439C(_QWORD *a1)
{
  *a1 = &off_18003F678;
  _o_free(a1[17]);
  return sub_180033378(a1 + 1);
}

/*
 * XREFs of sub_180039C4C @ 0x180039C4C
 * Callers:
 *     sub_180039BE0 @ 0x180039BE0 (sub_180039BE0.c)
 *     sub_180064374 @ 0x180064374 (sub_180064374.c)
 *     sub_1800659C8 @ 0x1800659C8 (sub_1800659C8.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 */

BOOL __fastcall sub_180039C4C(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  BOOL result; // eax

  v2 = (void *)a1[22];
  a1[22] = 0LL;
  if ( v2 )
    result = sub_18003850C(v2);
  v3 = (void *)a1[14];
  a1[14] = 0LL;
  if ( v3 )
    result = sub_18003850C(v3);
  v4 = (void *)a1[6];
  a1[6] = 0LL;
  if ( v4 )
    return sub_18003850C(v4);
  return result;
}

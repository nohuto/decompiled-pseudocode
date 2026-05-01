/*
 * XREFs of sub_180085AB4 @ 0x180085AB4
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 */

BOOL __fastcall sub_180085AB4(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_18003850C(v2);
    *a1 = 0LL;
  }
  return result;
}

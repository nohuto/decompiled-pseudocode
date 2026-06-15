/*
 * XREFs of sub_1800685D0 @ 0x1800685D0
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

BOOL __fastcall sub_1800685D0(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_180033A70(v2);
    *a1 = 0LL;
  }
  return result;
}

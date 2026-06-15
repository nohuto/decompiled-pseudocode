/*
 * XREFs of sub_1800F23AC @ 0x1800F23AC
 * Callers:
 *     sub_1800F2A93 @ 0x1800F2A93 (sub_1800F2A93.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800F23AC(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
    result = sub_18006A148(v2);
  *a1 = 0LL;
  return result;
}

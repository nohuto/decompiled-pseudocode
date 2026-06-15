/*
 * XREFs of sub_18006FC90 @ 0x18006FC90
 * Callers:
 *     sub_18006FAF4 @ 0x18006FAF4 (sub_18006FAF4.c)
 *     sub_1800711DB @ 0x1800711DB (sub_1800711DB.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_18006FC90(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_18006A148(v1);
  return result;
}

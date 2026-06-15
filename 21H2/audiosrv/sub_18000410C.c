/*
 * XREFs of sub_18000410C @ 0x18000410C
 * Callers:
 *     sub_180004014 @ 0x180004014 (sub_180004014.c)
 *     sub_1800D1BD0 @ 0x1800D1BD0 (sub_1800D1BD0.c)
 *     sub_180107A1C @ 0x180107A1C (sub_180107A1C.c)
 *     sub_180108EE0 @ 0x180108EE0 (sub_180108EE0.c)
 *     sub_180108F20 @ 0x180108F20 (sub_180108F20.c)
 * Callees:
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 */

BOOL __fastcall sub_18000410C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = SetEvent(a1);
  if ( !result )
  {
    sub_1800B5EF4(retaddr, 2332LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
    JUMPOUT(0x18007DF8ELL);
  }
  return result;
}

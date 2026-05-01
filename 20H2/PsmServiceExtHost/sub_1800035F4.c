/*
 * XREFs of sub_1800035F4 @ 0x1800035F4
 * Callers:
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 * Callees:
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 */

volatile signed __int64 *__fastcall sub_1800035F4(__int64 a1)
{
  volatile signed __int64 *i; // rbx

  for ( i = *(volatile signed __int64 **)(a1 + 688); i; i = *(volatile signed __int64 **)(a1 + 688) )
  {
    if ( _InterlockedIncrement64(i + 12) <= 1 )
      __fastfail(0xEu);
    sub_18000A110(a1);
    sub_180009018(i);
    sub_1800286D8(i);
    sub_1800093A0(a1, 0LL);
    if ( *(volatile signed __int64 **)(a1 + 688) == i )
      break;
    sub_18000A110(a1);
    sub_180017F60((PVOID)i);
    sub_1800093A0(a1, 0LL);
  }
  return i;
}

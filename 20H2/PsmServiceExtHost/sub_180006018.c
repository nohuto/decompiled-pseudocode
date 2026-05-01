/*
 * XREFs of sub_180006018 @ 0x180006018
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 * Callees:
 *     sub_180006158 @ 0x180006158 (sub_180006158.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

char __fastcall sub_180006018(_QWORD *a1, char a2)
{
  char v4; // di
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)sub_180006158(a1) )
  {
    if ( (a1[81] & 0x800000000LL) == 0 )
    {
      v5 = sub_1800067F0(a1);
      a1[81] |= 0x800000000uLL;
      v6 = v5;
      if ( _InterlockedIncrement64(a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(a1[78]);
      sub_1800066B0(a1, v6);
    }
    if ( a2 && (a1[81] & 0x30000LL) != 0 )
    {
      do
      {
        v9 = a1[100];
        sub_18000A110(a1);
        sub_18000F390();
        RtlWaitOnAddress(a1 + 100, &v9, 8LL);
        sub_18001E380(v8);
        sub_1800093A0(a1, 0LL);
      }
      while ( (a1[81] & 0x30000LL) != 0 );
    }
    return 1;
  }
  return v4;
}

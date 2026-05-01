/*
 * XREFs of sub_18002C530 @ 0x18002C530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002C298 @ 0x18002C298 (sub_18002C298.c)
 *     sub_18002C668 @ 0x18002C668 (sub_18002C668.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_18002C530(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        __int64 a4,
        int *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // r15
  int v12; // eax
  char *v13; // rdi
  wchar_t *v14; // [rsp+30h] [rbp-298h]
  void *v15; // [rsp+38h] [rbp-290h]
  PVOID P[2]; // [rsp+40h] [rbp-288h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-278h] BYREF

  v15 = a3;
  v14 = a2;
  if ( a8 <= 1 && a7 )
  {
    v11 = a7;
    do
    {
      if ( a8 )
      {
        P[0] = 0LL;
        sub_18001E380();
        v12 = sub_180008D30(*(_QWORD *)(a1 + 120), *a6, (__int64 *)P);
        v13 = (char *)P[0];
        if ( v12 >= 0 )
        {
          sub_1800093A0((__int64)P[0] + 64, 0);
          sub_18002C298((__int64)(v13 + 64));
          sub_18000A110((__int64)(v13 + 64));
        }
        sub_18000F390();
        if ( v13 )
          sub_1800265B0(v13);
      }
      else
      {
        sub_18002C668(Destination, a2, a3, *a5, *a6);
        sub_18000F200(a1 - 8, (__int64)Destination);
      }
      a2 = v14;
      a3 = v15;
      ++a6;
      ++a5;
      --v11;
    }
    while ( v11 );
  }
}

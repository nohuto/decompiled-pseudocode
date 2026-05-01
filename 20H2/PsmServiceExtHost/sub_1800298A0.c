/*
 * XREFs of sub_1800298A0 @ 0x1800298A0
 * Callers:
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800299B8 @ 0x1800299B8 (sub_1800299B8.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800298A0(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( (unsigned int)sub_1800299B8(a1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL);
    sub_1800223EC(v3);
    v4 = *(_DWORD *)(v3 + 340);
    if ( (v4 & 4) != 0 )
    {
      sub_18000A110(a1);
      sub_18000F390();
      if ( (unsigned int)dword_1800B3218 > 5 )
      {
        v6 = *(_QWORD *)(a1 - 32);
        v9 = 8LL;
        v8 = &v6;
        sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1243, 0, 0, 3u, &v7);
      }
      sub_180005700(v3 + 304, v3 + 320, 0LL);
      sub_1800260A0(v3);
      v2 = 1;
      sub_18001E380();
      sub_1800093A0(a1, 0);
    }
    else
    {
      *(_DWORD *)(v3 + 340) = v4 | 4;
      sub_1800260A0(v3);
    }
  }
  return v2;
}

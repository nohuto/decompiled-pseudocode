/*
 * XREFs of sub_180074F4C @ 0x180074F4C
 * Callers:
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_180074FF4 @ 0x180074FF4 (sub_180074FF4.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180072E80 @ 0x180072E80 (sub_180072E80.c)
 */

char __fastcall sub_180074F4C(__int64 a1)
{
  int v2; // ebx
  char result; // al
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  sub_18001E380();
  v2 = sub_180072E80(*(_QWORD *)(*(_QWORD *)a1 + 24LL));
  result = (unsigned __int8)sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 5 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v2;
      v8 = 4;
      return sub_18002E278(v4, (unsigned __int8 *)dword_18009DF1E, 0LL, 0LL, 3u, &v6);
    }
  }
  return result;
}

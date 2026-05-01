/*
 * XREFs of sub_18006F310 @ 0x18006F310
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 */

char __fastcall sub_18006F310(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char result; // al
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF

  sub_18001E380();
  sub_18006D504(*(_QWORD **)(a1 + 120), v2, v3, v4);
  result = (unsigned __int8)sub_18000F390();
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
      return sub_18002E278(v6, (unsigned __int8 *)dword_18009CA86, 0LL, 0LL, 2u, &v7);
  }
  return result;
}

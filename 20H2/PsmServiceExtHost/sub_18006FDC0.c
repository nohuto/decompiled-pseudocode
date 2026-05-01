/*
 * XREFs of sub_18006FDC0 @ 0x18006FDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18004124C @ 0x18004124C (sub_18004124C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 *     sub_180078004 @ 0x180078004 (sub_180078004.c)
 */

char __fastcall sub_18006FDC0(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  char result; // al
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v2 = *(_DWORD *)(a2 + 140);
  if ( (v2 & 0x10) != 0 )
  {
    sub_180078004(*(HANDLE *)(a2 + 40));
    v2 = *(_DWORD *)(a2 + 140);
  }
  if ( (v2 & 4) != 0 )
    sub_18004124C(*(HANDLE *)(a2 + 40), 0LL);
  sub_18001E380();
  sub_18006D660(*a1 + 680LL, *(_QWORD *)(a2 + 152), 1);
  result = (unsigned __int8)sub_18000F390();
  *(_QWORD *)(a2 + 152) = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v7 = *(_DWORD *)(a2 + 108);
      v12 = 0;
      v8 = v7;
      v11 = 4;
      v10 = &v8;
      return sub_18002E278(v6, (unsigned __int8 *)dword_18009C8B3, 0LL, 0LL, 3u, &v9);
    }
  }
  return result;
}

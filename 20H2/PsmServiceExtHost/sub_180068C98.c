/*
 * XREFs of sub_180068C98 @ 0x180068C98
 * Callers:
 *     sub_180062EC0 @ 0x180062EC0 (sub_180062EC0.c)
 * Callees:
 *     sub_1800076D4 @ 0x1800076D4 (sub_1800076D4.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 */

__int64 __fastcall sub_180068C98(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B78E, 0LL, 0LL, 2u, &v16);
  sub_18000B63C(&v13, v15);
  sub_18001E380();
  v4 = *(_QWORD *)a1 + 48LL;
  v12 = a2;
  if ( (int)sub_1800076D4(v4, (__int64)&v12, (__int64)&v11) < 0 )
  {
    v5 = 0LL;
LABEL_6:
    v6 = -1073741584;
    goto LABEL_7;
  }
  v5 = (char *)v11;
  if ( !v11 || *(_QWORD *)(v11 + 48) != a1 )
    goto LABEL_6;
  sub_18006D660(*(_QWORD *)a1, v11, 1LL);
  v6 = 0;
LABEL_7:
  if ( v5 )
    sub_1800265B0(v5);
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    LODWORD(v11) = *(_DWORD *)(a1 + 56);
    v14 = a2;
    LODWORD(v12) = v6;
    sub_180067F74((__int64)&dword_1800B31E0, byte_18009BA07, v7, v8, (__int64)&v12, (__int64)&v11, (__int64)&v14);
  }
  if ( v13 )
  {
    v9 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return v6;
}

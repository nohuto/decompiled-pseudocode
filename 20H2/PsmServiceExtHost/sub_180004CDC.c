/*
 * XREFs of sub_180004CDC @ 0x180004CDC
 * Callers:
 *     sub_180004CD0 @ 0x180004CD0 (sub_180004CD0.c)
 * Callees:
 *     sub_180004DD8 @ 0x180004DD8 (sub_180004DD8.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 */

__int64 __fastcall sub_180004CDC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edi
  int v6; // r8d
  int v7; // r9d
  DWORD v8; // ebx
  int v10; // [rsp+40h] [rbp-F8h] BYREF
  int v11; // [rsp+44h] [rbp-F4h] BYREF
  int v12; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+F0h] [rbp-48h] BYREF

  sub_18000B63C(&v12, v14);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 1LL) )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009B39E, 0, 0, 2u, &v15);
  sub_18001E380(v4);
  v5 = sub_180004DD8(a1, a2);
  if ( v5 >= 0 )
    v5 = 0;
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v10 = *(_DWORD *)(a1 + 56);
    v13 = a2;
    v11 = v5;
    sub_180067F74(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009B244,
      v6,
      v7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v13);
  }
  if ( v12 )
  {
    v8 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  return (unsigned int)v5;
}

/*
 * XREFs of sub_18007B958 @ 0x18007B958
 * Callers:
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078C80 @ 0x180078C80 (sub_180078C80.c)
 */

__int64 __fastcall sub_18007B958(__int64 *a1, void *a2, int a3, unsigned __int8 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdx
  DWORD v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  _BYTE TlsValue[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+130h] [rbp+30h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F4FC, 0LL, 0LL, 2u, &v34);
  sub_18000B7F8(TlsValue);
  v8 = a1[21];
  v9 = *a1;
  v24 = 0LL;
  v28 = -1LL;
  v10 = 0LL;
  v29 = -1LL;
  *(_QWORD *)v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v11 = sub_1800283EC(v9, v8, (__int64 *)v25, &v27);
  v12 = *(_QWORD *)v25;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = *a1;
    v29 = *(_QWORD *)(*(_QWORD *)v25 - 32LL);
    v15 = sub_1800283EC(v14, (__int64)a2, &v24, &v26);
    v16 = v24;
    v13 = v15;
    v10 = v26;
    if ( v15 >= 0 )
    {
      v28 = *(_QWORD *)(v24 - 32);
      v13 = sub_180028478(v12, v27, v24, v26, a3, a4);
      if ( v13 >= 0 )
        v13 = 0;
    }
    if ( v16 )
    {
      sub_18001E380();
      v18 = (*(_QWORD *)(v16 + 592))-- == 1LL;
      if ( v18 )
        sub_18000A1AC(v16 - 64, v17);
      sub_18000F390();
    }
  }
  if ( v12 )
  {
    sub_18001E380();
    v18 = (*(_QWORD *)(v12 + 592))-- == 1LL;
    if ( v18 )
      sub_18000A1AC(v12 - 64, v19);
    sub_18000F390();
  }
  v20 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    LODWORD(v24) = GetProcessId(a2);
    v31 = v27;
    v32 = v29;
    v26 = v10;
    v30 = v28;
    v25[0] = v13;
    sub_180078C80(
      v28,
      byte_18009F821,
      v21,
      v22,
      (__int64)v25,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v24,
      (__int64)&v30,
      (__int64)&v26);
  }
  return (unsigned int)v13;
}

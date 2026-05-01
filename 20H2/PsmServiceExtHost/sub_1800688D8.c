/*
 * XREFs of sub_1800688D8 @ 0x1800688D8
 * Callers:
 *     sub_180062E80 @ 0x180062E80 (sub_180062E80.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800682F0 @ 0x1800682F0 (sub_1800682F0.c)
 *     sub_18006C2FC @ 0x18006C2FC (sub_18006C2FC.c)
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 */

__int64 __fastcall sub_1800688D8(_QWORD *a1, void *a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // r14
  __int64 v9; // r15
  DWORD ProcessId; // ebx
  int v11; // edi
  __int64 v12; // rax
  char *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  DWORD v16; // ebx
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  DWORD v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+110h] [rbp+10h] BYREF

  v22 = a3;
  sub_18000B63C(&v21, v25);
  v8 = 0LL;
  v9 = -1LL;
  v18 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B2F4, 0LL, 0LL, 2u, &v26);
  ProcessId = GetProcessId(a2);
  if ( ProcessId == GetCurrentProcessId() )
  {
    v11 = -1073741584;
    goto LABEL_17;
  }
  sub_18001E380();
  v12 = sub_18006C2FC(*a1, a3);
  v13 = (char *)v12;
  if ( !v12 || *(_QWORD **)(v12 + 56) != a1 || !*(_DWORD *)(v12 + 264) )
  {
    v11 = -1073741583;
LABEL_13:
    if ( v8 )
      sub_18006D660(*a1, v8, 1LL);
    goto LABEL_15;
  }
  v11 = sub_18006D300(a1, a2, v12, &v18);
  if ( v11 < 0 )
  {
    v8 = v18;
    goto LABEL_13;
  }
  v11 = 0;
  v9 = *(_QWORD *)(v18 + 32);
  *a4 = v9;
LABEL_15:
  if ( v13 )
    sub_1800265B0(v13);
LABEL_17:
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v19 = GetProcessId(a2);
    v20 = *((_DWORD *)a1 + 14);
    v23 = v22;
    v24 = v9;
    LODWORD(v18) = v11;
    sub_1800682F0(
      v22,
      byte_18009B328,
      v14,
      v15,
      (__int64)&v18,
      (__int64)&v24,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v23);
  }
  if ( v21 )
  {
    v16 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v16, 0LL);
    }
  }
  return (unsigned int)v11;
}

/*
 * XREFs of sub_18003489C @ 0x18003489C
 * Callers:
 *     sub_180034890 @ 0x180034890 (sub_180034890.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F450 @ 0x18000F450 (sub_18000F450.c)
 *     sub_18000F494 @ 0x18000F494 (sub_18000F494.c)
 *     sub_18000F990 @ 0x18000F990 (sub_18000F990.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 *     sub_180034AA0 @ 0x180034AA0 (sub_180034AA0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003489C(__int64 *a1, void *a2, unsigned int *a3, __int64 *a4)
{
  __int64 v4; // r14
  DWORD ProcessId; // eax
  int LastError; // ebx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  DWORD v17; // edi
  int v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  char *v23; // [rsp+80h] [rbp-80h]
  char *v24; // [rsp+88h] [rbp-78h]
  char v25[464]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+260h] [rbp+160h] BYREF
  int v27; // [rsp+2A8h] [rbp+1A8h]
  __int64 v28; // [rsp+2B0h] [rbp+1B0h]
  _BYTE TlsValue[144]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v4 = -1LL;
  v24 = 0LL;
  v19 = 0;
  v23 = 0LL;
  v22 = -1LL;
  sub_18000F450();
  sub_18000B7F8(TlsValue);
  if ( !(unsigned int)sub_180034AA0(a3) )
    goto LABEL_19;
  ProcessId = GetProcessId(a2);
  if ( !ProcessId )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_14;
  }
  LastError = sub_180031128(ProcessId, v25);
  if ( LastError < 0 )
    goto LABEL_14;
  v24 = v25;
  v19 = v27;
  v23 = &v26;
  v22 = v28;
  if ( !(unsigned int)sub_18000F494((__int64)v25, a3) )
  {
LABEL_19:
    LastError = -1073741583;
    goto LABEL_14;
  }
  v11 = sub_180022D04(*a1, (__int64)v25, &v20);
  v12 = v20;
  LastError = v11;
  if ( v11 >= 0 )
  {
    v13 = sub_180011AC0((__int64)a1, *a1, v20, (__int128 *)a3, 0, (__int64 *)&v21);
    v14 = v21;
    LastError = v13;
    if ( v13 >= 0 )
    {
      v4 = v21[5];
      LastError = 0;
      *a4 = v4;
    }
    if ( v14 )
      sub_1800274E0(v14);
  }
  if ( v12 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v12 + 592))-- == 1LL )
      sub_18000A1AC(v12 - 64, v15);
    sub_18000F390();
  }
LABEL_14:
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  sub_18000F990((unsigned int)LastError, v4, (__int64)a1, (__int64)v24, v19, (__int64)v23, v22, (__int64)a3);
  return (unsigned int)LastError;
}

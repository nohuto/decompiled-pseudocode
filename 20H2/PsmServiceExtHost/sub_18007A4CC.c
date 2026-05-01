/*
 * XREFs of sub_18007A4CC @ 0x18007A4CC
 * Callers:
 *     sub_1800804D0 @ 0x1800804D0 (sub_1800804D0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 */

__int64 __fastcall sub_18007A4CC(__int64 a1, void *a2, __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rdx
  DWORD v17; // ebx
  DWORD ProcessId; // eax
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  char TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  __int64 *v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  __int64 *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  HANDLE *p_Process; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  __int64 *v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  __int64 *v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+180h] [rbp+80h] BYREF

  Process = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A02FC, 0LL, 0LL, 2u, &v41);
  sub_18000B7F8(TlsValue);
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 168);
  v22 = 0LL;
  v7 = 0LL;
  v24 = -1LL;
  v21 = -1LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = sub_18000EE6C(v5, v6, &v22);
  v10 = v22;
  v11 = v9;
  if ( v9 < 0
    || (v24 = *(_QWORD *)(v22 - 32), v12 = sub_18000EE6C(v5, (__int64)Process, &v20), v7 = v20, v11 = v12, v12 < 0) )
  {
    v13 = v21;
  }
  else
  {
    v13 = *(_QWORD *)(v20 - 32);
    if ( *(_QWORD *)(*(_QWORD *)(v20 + 776) + 88LL) == *(_QWORD *)(*(_QWORD *)(v10 + 776) + 88LL) )
    {
      v8 = sub_18007D9F0(v20);
      *a3 = v8;
      v11 = 0;
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v10 )
  {
    sub_18001E380();
    v15 = (*(_QWORD *)(v10 + 592))-- == 1LL;
    if ( v15 )
      sub_18000A1AC(v10 - 64, v14);
    sub_18000F390();
  }
  if ( v7 )
  {
    sub_18001E380();
    v15 = (*(_QWORD *)(v7 + 592))-- == 1LL;
    if ( v15 )
      sub_18000A1AC(v7 - 64, v16);
    sub_18000F390();
  }
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    ProcessId = GetProcessId(Process);
    v25 = v8;
    LODWORD(v21) = ProcessId;
    LODWORD(v22) = *(_DWORD *)(a1 + 140);
    Process = (HANDLE)v24;
    v39 = &v21;
    v37 = &v22;
    p_Process = &Process;
    v33 = &v25;
    v31 = &v26;
    v29 = &v20;
    v26 = v13;
    LODWORD(v20) = v11;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 8LL;
    v34 = 8LL;
    v32 = 8LL;
    v30 = 4LL;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A005A, 0LL, 0LL, 8u, &v28);
  }
  return v11;
}

/*
 * XREFs of sub_180037BEC @ 0x180037BEC
 * Callers:
 *     sub_180037BE0 @ 0x180037BE0 (sub_180037BE0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180037D30 @ 0x180037D30 (sub_180037D30.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180037BEC(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r12
  int v7; // esi
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v13; // edx
  int v14; // r9d
  DWORD v15; // ebx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  char TlsValue[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v24; // [rsp+100h] [rbp+0h]
  int v25; // [rsp+108h] [rbp+8h]
  int v26; // [rsp+10Ch] [rbp+Ch]
  int *v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+118h] [rbp+18h]
  int v29; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  int *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+140h] [rbp+40h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0421, 0LL, 0LL, 2u, &v36);
  sub_18000B7F8(TlsValue);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)a1;
  v6 = -1LL;
  v18 = 0LL;
  v7 = 0;
  v8 = sub_18000EE6C(v5, v4, &v18);
  v9 = v18;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v6 = *(_QWORD *)(v18 - 32);
    v7 = sub_180037D30(v18);
    *a2 = v7;
    v10 = 0;
  }
  if ( v9 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v9 + 592))-- == 1LL )
      sub_18000A1AC(v9 - 64, v11);
    sub_18000F390();
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *(_DWORD *)(a1 + 140);
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v20 = v17;
    v33 = &v19;
    v30 = &v21;
    v27 = &v20;
    v24 = &v18;
    v34 = v14;
    v31 = v13;
    v28 = v14;
    v25 = v14;
    v19 = v7;
    v21 = v6;
    LODWORD(v18) = v10;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0199, 0LL, 0LL, 6u, &v23);
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return v10;
}

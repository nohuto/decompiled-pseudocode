/*
 * XREFs of sub_180028C4C @ 0x180028C4C
 * Callers:
 *     sub_180028EC0 @ 0x180028EC0 (sub_180028EC0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_180028E04 @ 0x180028E04 (sub_180028E04.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078C80 @ 0x180078C80 (sub_180078C80.c)
 */

__int64 __fastcall sub_180028C4C(__int64 *a1, __int64 a2, __int64 a3, void *a4, int a5, char a6)
{
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdx
  DWORD v20; // edi
  DWORD ProcessId; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  DWORD v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+110h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009F720, 0, 0, 2u, &v33);
  sub_18000B7F8(TlsValue);
  v10 = *a1;
  v28 = 0LL;
  *(_QWORD *)v27 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  v12 = sub_180022DB0(v10, a2, v27);
  v13 = *(_QWORD *)v27;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v14 = sub_180028E04(a4, &v26);
    if ( v14 >= 0 )
    {
      v14 = 0;
      if ( v26 )
      {
        v15 = sub_1800283EC(*a1, (__int64)a4, &v28, &v29);
        v16 = v28;
        v14 = v15;
        v11 = v29;
        if ( v15 >= 0 )
        {
          v14 = sub_180028478(v13, a3, v28, v29, a5, a6);
          if ( v14 >= 0 )
            v14 = 0;
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
    }
  }
  if ( v13 )
  {
    sub_18001E380();
    v18 = (*(_QWORD *)(v13 + 592))-- == 1LL;
    if ( v18 )
      sub_18000A1AC(v13 - 64, v19);
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
    ProcessId = GetProcessId(a4);
    v28 = -1LL;
    v26 = ProcessId;
    v29 = v11;
    v30 = a3;
    v31 = a2;
    v27[0] = v14;
    sub_180078C80(
      v23,
      (unsigned int)&unk_18009FA30,
      v24,
      v25,
      (__int64)v27,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v26,
      (__int64)&v28,
      (__int64)&v29);
  }
  return (unsigned int)v14;
}

/*
 * XREFs of sub_1800699BC @ 0x1800699BC
 * Callers:
 *     sub_180062BD0 @ 0x180062BD0 (sub_180062BD0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180068154 @ 0x180068154 (sub_180068154.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 */

__int64 __fastcall sub_1800699BC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdx
  DWORD v17; // ebx
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+110h] [rbp+10h] BYREF

  v4 = *(_QWORD *)&qword_1800B41A8;
  sub_18000B7F8(TlsValue);
  v19 = 0LL;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009B15A, 0LL, 0LL, 2u, &v26);
  v8 = sub_180022DB0(v4 + 1768, a2, &v19);
  v9 = v19;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v10 = sub_18007E180(v19, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v14 = (void *)(v9 + 24);
    if ( !v9 )
      v14 = 0LL;
    v24 = v14;
    v21 = 0x1000000LL;
    v22 = a4;
    v20 = a3;
    v23 = a2;
    LODWORD(v19) = v10;
    sub_180068154(
      v11,
      byte_18009BBFF,
      v12,
      v13,
      (__int64)&v19,
      &v24,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( v9 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v9 + 592))-- == 1LL )
      sub_18000A1AC(v9 - 64, v15);
    sub_18000F390();
  }
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  return (unsigned int)v10;
}

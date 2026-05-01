/*
 * XREFs of sub_18000294C @ 0x18000294C
 * Callers:
 *     sub_180002930 @ 0x180002930 (sub_180002930.c)
 * Callees:
 *     sub_180002A90 @ 0x180002A90 (sub_180002A90.c)
 *     sub_180002B74 @ 0x180002B74 (sub_180002B74.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078D30 @ 0x180078D30 (sub_180078D30.c)
 */

__int64 __fastcall sub_18000294C(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  _BYTE *v9; // rsi
  int v10; // ebx
  DWORD v11; // edi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int128 *v18; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+160h] [rbp+60h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A04B0, 0, 0, 2u, &v24);
  v21 = 0LL;
  if ( (int)sub_180002B74(a2) < 0 )
  {
    v10 = -1073741585;
    v9 = (_BYTE *)(a1 + 876);
  }
  else
  {
    v9 = v22;
    v10 = sub_180002A90((int)a1 + 544, (unsigned int)v22, a4, a5, (__int64)&v21);
    if ( v10 >= 0 )
    {
      v10 = 0;
      *a6 = v21;
    }
  }
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
  {
    v16 = a4;
    v18 = &v21;
    v19 = v9;
    v20 = a5;
    v17 = v10;
    sub_180078D30(
      v12,
      (unsigned int)&unk_18009F74B,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v16,
      (__int64)&v18);
  }
  return (unsigned int)v10;
}

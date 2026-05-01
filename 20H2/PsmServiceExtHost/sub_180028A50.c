/*
 * XREFs of sub_180028A50 @ 0x180028A50
 * Callers:
 *     sub_180028EA0 @ 0x180028EA0 (sub_180028EA0.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800784F4 @ 0x1800784F4 (sub_1800784F4.c)
 *     sub_180081948 @ 0x180081948 (sub_180081948.c)
 */

__int64 __fastcall sub_180028A50(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // r14d
  int v9; // ebx
  DWORD v10; // edi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+100h] [rbp+0h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009FF1F, 0, 0, 2u, &v22);
  sub_18000B7F8(TlsValue);
  if ( a4 )
  {
    v8 = *(_DWORD *)a4;
    if ( !(unsigned int)sub_180081948(a4) )
    {
      v9 = -1073741582;
      goto LABEL_8;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = sub_180026288(*(_QWORD *)a1, a2, a3, a4);
  if ( v9 >= 0 )
    v9 = 0;
LABEL_8:
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *(_DWORD *)(a1 + 140);
    v16 = v8;
    v15[0] = a4 != 0LL;
    v19 = a3;
    v20 = a2;
    v18 = v9;
    sub_1800784F4(
      v11,
      (unsigned int)&unk_1800A01F3,
      v12,
      v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)v15,
      (__int64)&v16);
  }
  return (unsigned int)v9;
}

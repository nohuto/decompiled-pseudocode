/*
 * XREFs of sub_18000B858 @ 0x18000B858
 * Callers:
 *     sub_18000B620 @ 0x18000B620 (sub_18000B620.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007876C @ 0x18007876C (sub_18007876C.c)
 */

__int64 __fastcall sub_18000B858(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  DWORD v10; // r14d
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+110h] [rbp+10h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A04D8, 0, 0, 2u, &v19);
  v6 = -1LL;
  v12 = -1LL;
  if ( (unsigned __int8)PsmIsValidKey(a2)
    && wcsnlen((const wchar_t *)(a2 + 536), 0x100uLL) != 256
    && RtlValidSid((PSID)(a2 + 464)) )
  {
    v8 = sub_18000E85C(a1 + 544, a2, &v12);
    v6 = v12;
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v12;
      v9 = 0;
    }
  }
  else
  {
    *(_WORD *)(a2 + 462) = 0;
    v9 = -1073741585;
    *(_WORD *)(a2 + 1046) = 0;
  }
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v13 = *(_DWORD *)(a2 + 532);
    v14 = a2 + 464;
    v16 = a2 + 536;
    v15 = v6;
    v17 = a2;
    LODWORD(v12) = v9;
    sub_18007876C(v7, &unk_18009F52B);
  }
  return v9;
}

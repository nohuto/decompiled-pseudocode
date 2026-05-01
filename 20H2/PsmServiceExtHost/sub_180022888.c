/*
 * XREFs of sub_180022888 @ 0x180022888
 * Callers:
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_18003474C @ 0x18003474C (sub_18003474C.c)
 * Callees:
 *     sub_18000B7C0 @ 0x18000B7C0 (sub_18000B7C0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180022888(__int64 a1, __int64 a2)
{
  DWORD v4; // ebx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rsi
  int v11; // ebx
  DWORD v12; // edi
  int v14; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0108, 0, 0, 2u, &v17);
  if ( sub_18000B7C0() )
  {
    v5 = 0;
  }
  else
  {
    memset(TlsValue, 0, 0x88uLL);
    v4 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v4, TlsValue);
    }
    v5 = 1;
  }
  v6 = sub_1800229F0(a1, a2);
  v10 = v6;
  if ( v6 )
  {
    v11 = sub_180020F50(v6, v7);
    if ( v11 >= 0 )
      v11 = 0;
    sub_1800274E0(v10);
  }
  else
  {
    v11 = -1073741275;
  }
  if ( v5 )
  {
    v12 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v15 = a2;
    v14 = v11;
    sub_180063424((unsigned int)&dword_1800B3218, (unsigned int)&unk_18009F91E, v8, v9, (__int64)&v14, (__int64)&v15);
  }
  return (unsigned int)v11;
}

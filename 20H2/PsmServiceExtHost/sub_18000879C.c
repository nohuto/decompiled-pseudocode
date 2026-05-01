/*
 * XREFs of sub_18000879C @ 0x18000879C
 * Callers:
 *     sub_180006EF0 @ 0x180006EF0 (sub_180006EF0.c)
 *     sub_180008BD0 @ 0x180008BD0 (sub_180008BD0.c)
 *     sub_180036A90 @ 0x180036A90 (sub_180036A90.c)
 *     sub_18003C6E0 @ 0x18003C6E0 (sub_18003C6E0.c)
 *     sub_18003DD30 @ 0x18003DD30 (sub_18003DD30.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_18003DF90 @ 0x18003DF90 (sub_18003DF90.c)
 *     sub_18003E090 @ 0x18003E090 (sub_18003E090.c)
 *     sub_1800801E0 @ 0x1800801E0 (sub_1800801E0.c)
 * Callees:
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078B40 @ 0x180078B40 (sub_180078B40.c)
 */

int __fastcall sub_18000879C(__int64 a1)
{
  int v2; // edi
  char v3; // si
  int v4; // ebp
  int result; // eax
  DWORD v6; // ebx
  int v7; // r8d
  int v8; // r9d
  _BYTE v9[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v10; // [rsp+44h] [rbp-D4h] BYREF
  int v11; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0325, 0, 0, 2u, &v13);
  sub_18000B7F8(TlsValue);
  v2 = *(_DWORD *)(a1 + 140);
  v3 = *(_BYTE *)(a1 + 136);
  v4 = *(_DWORD *)(a1 + 148);
  result = sub_180008894(a1);
  v6 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    result = TlsSetValue(v6, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470(&dword_1800B3218, 8LL);
    if ( (_BYTE)result )
    {
      v10 = v4;
      v9[0] = v3;
      v11 = v2;
      return sub_180078B40(
               (unsigned int)&dword_1800B3218,
               (unsigned int)&unk_18009F8E4,
               v7,
               v8,
               (__int64)&v11,
               (__int64)v9,
               (__int64)&v10);
    }
  }
  return result;
}

/*
 * XREFs of sub_18007FB44 @ 0x18007FB44
 * Callers:
 *     sub_180071DF0 @ 0x180071DF0 (sub_180071DF0.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 */

char __fastcall sub_18007FB44(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // edi
  char result; // al
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _BYTE v10[4]; // [rsp+50h] [rbp-58h] BYREF
  int v11; // [rsp+54h] [rbp-54h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h] BYREF
  __int64 v13; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+68h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A1935, 0LL, 0LL, 2u, &v15);
  sub_1800093A0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL), 0);
  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 == v4 )
  {
    sub_1800027E8(*(_QWORD *)(a1 + 8), 1u, 1, 0, 6912, 0, 0LL);
    v5 = 0;
  }
  else
  {
    v5 = -1073740007;
  }
  result = sub_18000A110(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL));
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10[0] = *(_BYTE *)(v9 + 548);
      v12 = v4;
      v13 = a2;
      v14 = *(_QWORD *)(v9 + 40);
      v11 = v5;
      return sub_18007F8D0(
               v9,
               byte_1800A19C3,
               v7,
               v8,
               (__int64)&v11,
               (__int64)&v14,
               (__int64)v10,
               (__int64)&v13,
               (__int64)&v12);
    }
  }
  return result;
}

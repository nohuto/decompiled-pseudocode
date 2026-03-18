/*
 * XREFs of sub_1C002F0A8 @ 0x1C002F0A8
 * Callers:
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F348 @ 0x1C002F348 (sub_1C002F348.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002F0A8(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // r10d
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+30h] [rbp-48h]
  __int16 v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF
  __int16 v17; // [rsp+9Ch] [rbp+24h]
  __int16 v18; // [rsp+9Eh] [rbp+26h]

  v3 = a2;
  v15 = 0;
  v14 = 0;
  v6 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v13 = v3;
    v12 = v6[344];
    sub_1C002E354((__int64)DeviceObject->DeviceExtension, v7, 1u, 0xAu, (__int64)&unk_1C0062C18, v12, v13);
  }
  sub_1C000FD80(a1, 0x8000, 1885957680, v3, 0LL);
  v16 = 1442595;
  v18 = 0;
  v17 = a3 | v3;
  v8 = (int)sub_1C000A740(a1, (__int64)&v16, 0LL, &v14, v11, &v15);
  sub_1C000FD80(a1, 8, 1937076273, v8, v15);
  if ( (v8 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v8) )
    sub_1C004A608(a1, (unsigned __int16)v3, 119, 0, 0, v8, v9, (__int64)aPindC, 96, 0);
  sub_1C000FD80(a1, 8, 1937077072, v8, v3);
  return (unsigned int)v8;
}

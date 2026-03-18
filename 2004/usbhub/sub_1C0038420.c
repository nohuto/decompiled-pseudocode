/*
 * XREFs of sub_1C0038420 @ 0x1C0038420
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0038420(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int16 v6; // ax
  unsigned __int16 v7; // di
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int16 v12; // [rsp+78h] [rbp+10h] BYREF
  __int16 v13; // [rsp+88h] [rbp+20h] BYREF
  unsigned __int16 v14; // [rsp+8Ah] [rbp+22h]
  int v15; // [rsp+8Ch] [rbp+24h]

  v12 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Du, (__int64)"FKh&");
  v6 = *(_WORD *)(a2 + 2);
  if ( (v6 & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 0LL;
    v7 = 0;
  }
  v13 = 288;
  v14 = v7;
  v15 = 0;
  v8 = (int)sub_1C000A740(a1, (__int64)&v13, 0LL, &v12, v10, a3);
  sub_1C000FD80(a1, 4, 1095460967, v7, v8);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v11) = v8;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Eu, (__int64)"FKh&", v11);
    }
  }
  return (unsigned int)v8;
}

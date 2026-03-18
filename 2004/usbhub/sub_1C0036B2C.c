/*
 * XREFs of sub_1C0036B2C @ 0x1C0036B2C
 * Callers:
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C001C46C @ 0x1C001C46C (sub_1C001C46C.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

void __fastcall sub_1C0036B2C(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // r14
  void *v7; // r10
  int v8; // edx
  int v9; // edx
  int v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+50h] [rbp-10h] BYREF
  _WORD v13[4]; // [rsp+58h] [rbp-8h] BYREF
  __int16 v14; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v12 = 0;
  v6 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1919243348, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x18u, (__int64)"FKh&", *(unsigned __int16 *)(a2 + 4));
  if ( (v6[640] & 0x80u) != 0 )
  {
    v14 = 0;
    v13[0] = 2083;
    sub_1C000FD80(a1, 4, 1920156737, v3, 0LL);
    v13[2] = *(_WORD *)(a2 + 4);
    v13[3] = 0;
    v13[1] = 16 * (v3 & 0x7F);
    v8 = sub_1C000A740(a1, (__int64)v13, 0LL, &v14, v10, &v12);
    if ( (v8 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v8) )
      sub_1C004A608(a1, *(unsigned __int16 *)(a2 + 4), 22, (unsigned int)v13, 8, v9, v12, (__int64)aBusC, 2412, 0);
  }
  else
  {
    sub_1C000FD80(a1, 4, 1851872340, a2, 0LL);
    if ( off_1C006B000 != v7 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
      {
        LODWORD(v11) = *(unsigned __int16 *)(a2 + 4);
        sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x19u, (__int64)"FKh&", v11);
      }
    }
  }
}

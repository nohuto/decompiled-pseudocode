/*
 * XREFs of sub_1C001C03C @ 0x1C001C03C
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C001C03C(__int64 a1, __int16 a2, __int16 *a3, _DWORD *a4)
{
  __int16 v8; // ax
  unsigned __int16 v9; // bx
  unsigned int v10; // edi
  int v11; // edx
  int v13; // [rsp+20h] [rbp-58h]
  _WORD v14[8]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 27, (__int64)"FKh&", a2);
  v8 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v9 = 16;
  }
  else if ( (v8 & 2) != 0 )
  {
    v9 = 17;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = 18;
  }
  else if ( (v8 & 8) != 0 )
  {
    v9 = 19;
  }
  else
  {
    if ( (v8 & 0x10) == 0 )
      return 0LL;
    v9 = 20;
  }
  v14[0] = 291;
  v14[1] = v9;
  v14[2] = a2;
  v14[3] = 0;
  v10 = sub_1C000A740(a1, (__int64)v14, 0LL, &v15, v13, a4);
  sub_1C000FD80(a1, 4, 1095459687, v9, (int)v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E354(DeviceObject->DeviceExtension, v11, 1, 28, (__int64)"FKh&", a2, v10);
  }
  return v10;
}

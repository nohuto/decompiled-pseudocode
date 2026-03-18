/*
 * XREFs of sub_1C00167EC @ 0x1C00167EC
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00167EC(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3, int *a4)
{
  __int16 v8; // bx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  unsigned __int16 v12; // cx
  int v14; // [rsp+A0h] [rbp+18h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0;
  v8 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 19, (__int64)"FKh&", a2);
  v15 = 0;
  v9 = sub_1C0016CA0(a1, a2);
  *a3 = 0;
  v10 = v9;
  v11 = sub_1C000A080(a1, a2, (__int64)&v14, &v15);
  if ( v11 >= 0 )
  {
    if ( (v14 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v8 *= 2;
        if ( (v8 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v8 & HIWORD(v14)) != 0 )
          goto LABEL_8;
      }
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 20, (__int64)"FKh&");
      sub_1C000FD80(a1, 4, 1666076515, 0LL, 0LL);
      if ( (sub_1C000F050(a1)[640] & 1) == 0 || (++*(_DWORD *)(v10 + 408), *(int *)(v10 + 408) >= 3) )
      {
        v15 = -1073704960;
        sub_1C004A608(a1, a2, 10, (unsigned int)&v14, 4, v11, -1073704960, (__int64)aBusC, 1463, 0);
        v8 = 0;
        v11 = -1073741823;
      }
    }
LABEL_8:
    if ( (v8 & 0x1F) != 0 )
      *a3 |= v8;
  }
  v12 = *a3;
  if ( *a3 )
  {
    *(_DWORD *)(v10 + 408) = 0;
    v12 = *a3;
  }
  sub_1C000FD80(a1, 4, 1348692071, v12, v11);
  if ( a4 )
    *a4 = v15;
  return (unsigned int)v11;
}

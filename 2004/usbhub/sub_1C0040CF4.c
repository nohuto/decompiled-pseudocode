/*
 * XREFs of sub_1C0040CF4 @ 0x1C0040CF4
 * Callers:
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003EC70 @ 0x1C003EC70 (sub_1C003EC70.c)
 *     sub_1C003EF34 @ 0x1C003EF34 (sub_1C003EF34.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FC88 @ 0x1C003FC88 (sub_1C003FC88.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040574 @ 0x1C0040574 (sub_1C0040574.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0040CF4(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  _DWORD *v10; // rax
  int v11; // r11d
  unsigned int v12; // r14d
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned int v15; // ebx
  _DWORD *v16; // rsi
  __int64 v17; // r14
  __int64 v19; // [rsp+28h] [rbp-51h]
  _DWORD v20[8]; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+70h] [rbp-9h]

  v20[0] = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x30u, (__int64)&unk_1C0062E18);
  v10 = sub_1C000F050(a1);
  v11 = *(_DWORD *)(a4 + 16);
  v12 = *(_DWORD *)(a4 + 8);
  v20[1] = a2;
  v20[3] = v11;
  v20[2] = v12;
  v20[4] = a5;
  v20[5] = a6;
  v20[6] = v10[610];
  v20[7] = v10[640];
  v21 = 0;
  sub_1C000FD80(a1, 32, 1768912433, a3, (__int64)v20);
  v15 = 0;
  if ( *(_DWORD *)(v14 + 2440) == 3 )
  {
    if ( (unsigned int)v13 >= a5 )
    {
      if ( v12 >= a6 )
      {
        if ( a5 >= 4 )
        {
          v16 = *(_DWORD **)(a3 + 24);
          v17 = v13;
          v20[0] = *v16;
          sub_1C000FD80(a1, 32, 1768912437, (__int64)v16, v13);
          if ( !*v16 || *v16 > (unsigned int)*((unsigned __int8 *)sub_1C000F050(a1) + 2938) )
          {
            sub_1C000FD80(a1, 32, 1768912437, (__int64)v16, v17);
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
              sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x34u, (__int64)&unk_1C0062E18);
            v15 = -1073741811;
            v21 = 2431;
          }
        }
      }
      else
      {
        sub_1C000FD80(a1, 32, 1768912436, 0LL, v13);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x33u, (__int64)&unk_1C0062E18);
        v15 = -1073741789;
        v21 = 2411;
      }
    }
    else
    {
      sub_1C000FD80(a1, 32, 1768912435, 0LL, v13);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x32u, (__int64)&unk_1C0062E18);
      v15 = -1073741811;
      v21 = 2402;
    }
  }
  else
  {
    sub_1C000FD80(a1, 32, 1768912434, 0LL, v13);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x31u, (__int64)&unk_1C0062E18);
    v15 = -1073741823;
    v21 = 2393;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v15) )
    sub_1C004A608(a1, 0, 90, (unsigned int)v20, 36, v15, 0, (__int64)aIoctlC, 2445, 0);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v19) = v15;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x35u, (__int64)&unk_1C0062E18, v19);
  }
  return v15;
}

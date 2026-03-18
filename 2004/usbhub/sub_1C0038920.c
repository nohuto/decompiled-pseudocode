/*
 * XREFs of sub_1C0038920 @ 0x1C0038920
 * Callers:
 *     sub_1C003A1BC @ 0x1C003A1BC (sub_1C003A1BC.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001BCC4 @ 0x1C001BCC4 (sub_1C001BCC4.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0038130 @ 0x1C0038130 (sub_1C0038130.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0038920(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  int v8; // eax
  int v9; // r10d
  unsigned int v10; // r10d
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  __int64 v16; // r9
  char v17; // r11
  int v18; // eax
  int v19; // ebp
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 4);
  v4 = 0;
  v22 = 0;
  v23 = 0;
  sub_1C000F050((__int64)DeviceObject);
  v8 = sub_1C000A080((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v23, &v22);
  sub_1C000FD80((__int64)DeviceObject, 16, 1920233265, v8, 0LL);
  if ( sub_1C001CEB4(v9) )
    return v10;
  sub_1C004A608((_DWORD)DeviceObject, *(unsigned __int16 *)(a3 + 4), 124, 0, 0, v10, v22, (__int64)aBusC, 7419, 0);
  v12 = (struct _DEVICE_OBJECT *)sub_1C0016B5C((__int64)DeviceObject, v3, 0LL, 0x7761726Du);
  sub_1C000FD80((__int64)DeviceObject, 16, 1920233266, v3, (__int64)v12);
  if ( v12 )
  {
    v15 = sub_1C0038130(v14, v13, (__int16 *)&v23, (__int64)v12);
    sub_1C000FD80((__int64)DeviceObject, 16, 1347899987, v15, v3);
    if ( v17 == 25 )
    {
      sub_1C000FD80((__int64)DeviceObject, 16, 1920233267, v16, 0LL);
    }
    else if ( v17 == 31 )
    {
      v4 = -1073741810;
      sub_1C000FD80((__int64)DeviceObject, 16, 1920233268, v16, -1073741810LL);
    }
    else
    {
      v18 = sub_1C00162A8(DeviceObject, a2, (__int64)v12);
      v19 = v18;
      if ( (v18 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C000FD80((__int64)DeviceObject, 16, 1920233269, 0LL, v18);
        sub_1C0034AF8((__int64)DeviceObject, v3, a2, 1);
        v20 = sub_1C0011220((__int64)v12);
        v20[355] &= ~0x4000u;
        sub_1C004A608((_DWORD)DeviceObject, 0, 125, 0, 0, v19, 0, (__int64)aBusC, 7479, 0);
      }
      else
      {
        v21 = sub_1C0011220((__int64)v12);
        v21[355] &= ~0x4000u;
        if ( (sub_1C0011220((__int64)v12)[355] & 4) != 0 )
          sub_1C001BCC4((__int64)DeviceObject, v12, 0x220FA7u);
      }
    }
    sub_1C00171A0((__int64)DeviceObject, (__int64)v12, 0LL, 0x7761726Du);
  }
  return v4;
}

/*
 * XREFs of sub_1C002BCB8 @ 0x1C002BCB8
 * Callers:
 *     sub_1C00139C0 @ 0x1C00139C0 (sub_1C00139C0.c)
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002B590 @ 0x1C002B590 (sub_1C002B590.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002BCB8(__int64 a1, __m128 *a2)
{
  _DWORD *v4; // rsi
  int v5; // ebx
  int v6; // r10d
  int v7; // r11d
  int v8; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  unsigned __int16 v11; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 23, (__int64)&unk_1C0062088);
  v12 = v4 + 734;
  sub_1C001D340(a2, 0, 0x47uLL);
  v11 = 71;
  v5 = sub_1C002B590(a1, &v11, (__int64)a2, 41, v10, 1);
  sub_1C000FD80(a1, 8, 1214475379, v5, v11);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    if ( !sub_1C001CEB4(v5) )
      sub_1C004A608(a1, 0, 14, (unsigned int)&v12, v8, v5, -1, (__int64)aHubC, 4089, 0);
  }
  else if ( *((_BYTE *)v12 + 2) )
  {
    v4[640] |= 0x400000u;
    sub_1C000FD80(a1, v7, 1214475364, (__int64)v12, *((unsigned __int8 *)v12 + 2));
  }
  else
  {
    v5 = -1073741811;
    sub_1C004A608(a1, 0, 15, (unsigned int)&v12, v6, -1073741811, -1, (__int64)aHubC, 4098, 0);
  }
  return (unsigned int)v5;
}

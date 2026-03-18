/*
 * XREFs of sub_1C0031548 @ 0x1C0031548
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0031548(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebp
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a3;
  sub_1C000F050((__int64)a1);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  sub_1C000FD80((__int64)a1, 2048, 1651724371, a2, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v8 = v3;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0062C48, v8);
  }
  return sub_1C0003300(a1, a2, v6);
}

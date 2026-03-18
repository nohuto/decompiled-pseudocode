/*
 * XREFs of sub_1C003148C @ 0x1C003148C
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C003148C(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi

  v4 = a3;
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  sub_1C000FD80((__int64)a1, 2048, 1651722574, a2, v4);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062C48, v4);
  if ( (_DWORD)v4 == 1 )
    v6 = 2;
  return sub_1C0003300(a1, a2, v6);
}

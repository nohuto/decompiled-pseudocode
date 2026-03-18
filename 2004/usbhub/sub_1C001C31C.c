/*
 * XREFs of sub_1C001C31C @ 0x1C001C31C
 * Callers:
 *     sub_1C001C2D0 @ 0x1C001C2D0 (sub_1C001C2D0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C001C31C(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax

  v4 = sub_1C000F050((__int64)a1);
  sub_1C0012810(a1, 8u, (__int64)(v4 + 478));
  sub_1C000FD80((__int64)a1, 32, 1734503506, (__int64)a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 2, 58, (__int64)&unk_1C0062E18, 0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}

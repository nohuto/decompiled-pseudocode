/*
 * XREFs of sub_1C004AF80 @ 0x1C004AF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 */

int __fastcall sub_1C004AF80(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _QWORD *v4; // rax
  PVOID EventData; // r10

  sub_1C000FD80((__int64)DeviceObject, 128, 1817531202, a2, 0LL);
  sub_1C000F050((__int64)DeviceObject);
  v4 = sub_1C0048A24((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  if ( v4 )
  {
    *(_DWORD *)v4 = 10;
    sub_1C000FD80((__int64)DeviceObject, 128, 2003659084, a2, (__int64)v4);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &stru_1C0062780, 0, 0x18u, EventData);
  }
  return (int)v4;
}

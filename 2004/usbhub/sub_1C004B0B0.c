/*
 * XREFs of sub_1C004B0B0 @ 0x1C004B0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 */

int __fastcall sub_1C004B0B0(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _QWORD *v4; // rax
  _DWORD *EventData; // rbx
  __int64 v6; // rax

  sub_1C000FD80((__int64)DeviceObject, 128, 1850758994, a2, 0LL);
  sub_1C000F050((__int64)DeviceObject);
  v4 = sub_1C0048A24((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  EventData = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 2;
    v6 = sub_1C0016CA0((__int64)DeviceObject, *(_WORD *)(a2 + 20));
    if ( v6 )
      EventData[4] = *(_DWORD *)(v6 + 432);
    sub_1C000FD80((__int64)DeviceObject, 128, 2003659088, a2, (__int64)EventData);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &stru_1C0062780, 0, 0x18u, EventData);
  }
  return (int)v4;
}

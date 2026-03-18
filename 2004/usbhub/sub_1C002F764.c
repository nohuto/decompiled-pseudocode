/*
 * XREFs of sub_1C002F764 @ 0x1C002F764
 * Callers:
 *     sub_1C002F830 @ 0x1C002F830 (sub_1C002F830.c)
 *     sub_1C004A3D0 @ 0x1C004A3D0 (sub_1C004A3D0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 */

NTSTATUS __fastcall sub_1C002F764(PDEVICE_OBJECT DeviceObject, unsigned __int16 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rax
  _DWORD *EventData; // rax
  __int64 v8; // rax

  sub_1C000F050((__int64)DeviceObject);
  v4 = sub_1C000F050((__int64)DeviceObject);
  v5 = sub_1C0016CA0((__int64)DeviceObject, a2);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 2832) = 500;
    *(_WORD *)(v5 + 2836) = 256;
    sub_1C002EC68((__int64)DeviceObject, v5, 4, (__int64)(v4 + 346));
  }
  EventData = (_DWORD *)sub_1C0048A24(DeviceObject, a2);
  if ( EventData )
  {
    *EventData = 3;
    return WmiFireEvent(DeviceObject, &stru_1C0062780, 0, 0x18u, EventData);
  }
  else
  {
    v8 = sub_1C0016CA0((__int64)DeviceObject, a2);
    return sub_1C002FE20(DeviceObject, v8, 0LL);
  }
}

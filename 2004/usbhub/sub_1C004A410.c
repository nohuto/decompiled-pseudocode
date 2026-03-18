/*
 * XREFs of sub_1C004A410 @ 0x1C004A410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 */

void __fastcall sub_1C004A410(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD *EventData; // rax
  __int64 v7; // rbx
  NTSTATUS v8; // eax

  v4 = sub_1C000F050((__int64)DeviceObject);
  v5 = *(unsigned __int16 *)(a2 + 20);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 377) + 4 * v5) & 0x10) == 0 || (v4[641] & 1) == 0 )
  {
    EventData = sub_1C0048A24((__int64)DeviceObject, v5);
    v7 = (__int64)EventData;
    if ( EventData )
    {
      *EventData = 0;
      EventData[3] = *(_DWORD *)(a2 + 16);
      v8 = WmiFireEvent(DeviceObject, &stru_1C0062780, 0, 0x18u, EventData);
      sub_1C000FD80((__int64)DeviceObject, 128, 1886351409, v8, v7);
    }
  }
}

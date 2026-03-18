/*
 * XREFs of sub_1C0033288 @ 0x1C0033288
 * Callers:
 *     sub_1C0056CF0 @ 0x1C0056CF0 (sub_1C0056CF0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003246C @ 0x1C003246C (sub_1C003246C.c)
 *     sub_1C0033580 @ 0x1C0033580 (sub_1C0033580.c)
 */

LONG __fastcall sub_1C0033288(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *v4; // rsi
  LONG result; // eax
  char v6; // bl
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  v4 = sub_1C0011220((__int64)a2);
  sub_1C0031714(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
  if ( sub_1C003246C(a2) || IoOpenDeviceRegistryKey(a2, 1u, 0x1F0000u, &DeviceRegKey) < 0 )
    return sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
  v6 = sub_1C0033580(DeviceRegKey);
  ZwClose(DeviceRegKey);
  result = sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
  if ( v6 == 1 )
    v4[355] |= 0x800u;
  return result;
}

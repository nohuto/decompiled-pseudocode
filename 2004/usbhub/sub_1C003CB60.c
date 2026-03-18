/*
 * XREFs of sub_1C003CB60 @ 0x1C003CB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 */

void __fastcall sub_1C003CB60(__int64 DeviceObject, PVOID Context)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r9

  v3 = sub_1C000F050(DeviceObject);
  v4 = sub_1C000F050(DeviceObject);
  sub_1C000FD80(DeviceObject, 4, 1919251287, (__int64)(v4 + 566), 0LL);
  sub_1C001A550(DeviceObject, v5, (v3[640] & 0x100000) != 0 ? 4 : 7);
}

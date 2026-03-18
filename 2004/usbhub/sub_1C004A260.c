/*
 * XREFs of sub_1C004A260 @ 0x1C004A260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

int __fastcall sub_1C004A260(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = sub_1C000F050((__int64)DeviceObject);
  v3 = v2;
  if ( (v2[640] & 2) != 0 )
  {
    LODWORD(v2) = IoWMIRegistrationControl(DeviceObject, 2u);
    v3[640] &= ~2u;
  }
  return (int)v2;
}

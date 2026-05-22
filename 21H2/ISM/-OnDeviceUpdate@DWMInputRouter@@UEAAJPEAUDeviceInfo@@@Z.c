/*
 * XREFs of ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180138D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnDeviceUpdate(DWMInputRouter *this, struct DeviceInfo *a2)
{
  return DWMInputRouter::OnDeviceChange(this, a2, 1);
}

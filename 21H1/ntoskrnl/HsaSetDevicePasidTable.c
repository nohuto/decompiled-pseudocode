/*
 * XREFs of HsaSetDevicePasidTable @ 0x1404DECE0
 * Callers:
 *     <none>
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x1404DEDC8 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaSetDevicePasidTable(int a1, int a2, int a3)
{
  return HsaUpdateDeviceTableEntry(a1, a2, a3, 0, 0LL, 0, 0);
}

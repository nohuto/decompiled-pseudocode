/*
 * XREFs of HsaSetDevicePasidTable @ 0x1404E4540
 * Callers:
 *     <none>
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaSetDevicePasidTable(int a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+54h] [rbp-14h]

  v4 = a2;
  v5 = 1LL;
  return HsaUpdateDeviceTableEntry(a1, (unsigned int)&v4, a3, 0, 0LL, 0, 0);
}

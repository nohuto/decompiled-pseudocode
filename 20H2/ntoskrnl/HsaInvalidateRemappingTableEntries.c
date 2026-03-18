/*
 * XREFs of HsaInvalidateRemappingTableEntries @ 0x1404E21F8
 * Callers:
 *     HsaInvalidateRemappingTableEntry @ 0x1404E2270 (HsaInvalidateRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x1404E2BE0 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E2F64 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x1404E2288 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntries(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v6[1] = 0LL;
  v6[0] = 0x8000000000000000uLL;
  HsaIommuSendCommand(a1, v6, a3);
  v7[1] = 0LL;
  v7[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v7, v3);
}

/*
 * XREFs of IvtInvalidateRemappingTableEntries @ 0x1404DB81C
 * Callers:
 *     IvtInvalidateRemappingTableEntry @ 0x1404DB870 (IvtInvalidateRemappingTableEntry.c)
 *     IvtUpdateRemappingDestination @ 0x1404DC1C0 (IvtUpdateRemappingDestination.c)
 *     IvtInitializeIommu @ 0x1409A6B10 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuSendCommand @ 0x1404DB890 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404DBA90 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateRemappingTableEntries(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = 0LL;
  v5[0] = 4LL;
  if ( a2 )
    v5[0] = ((unsigned __int64)(unsigned __int16)*a2 << 32) | 0x14;
  IvtIommuSendCommand(a1, v5, 0LL);
  return IvtIommuWaitCommand(a1, v3, 0LL);
}

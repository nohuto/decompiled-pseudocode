/*
 * XREFs of VfThunkFindExportAddressAllTables @ 0x140A4D930
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140A4D7D4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ViThunkFindAllExportAddresses @ 0x140A4D9CC (ViThunkFindAllExportAddresses.c)
 */

__int64 __fastcall VfThunkFindExportAddressAllTables(__int64 a1)
{
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, 48LL, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfOrderDependentThunks, 56LL, &VfOrderDependentThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, 48LL, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfMandatoryThunks, 48LL, 0LL);
  return ViThunkFindAllExportAddresses(a1, &VfXdvThunks, 48LL, &VfXdvThunksBitMapHeader);
}

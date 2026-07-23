/*
 * XREFs of PopBcdOpen @ 0x1408F1184
 * Callers:
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14076E658 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}

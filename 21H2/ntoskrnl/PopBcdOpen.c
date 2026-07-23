/*
 * XREFs of PopBcdOpen @ 0x1408F59C4
 * Callers:
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140783008 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}

/*
 * XREFs of PopBcdOpen @ 0x1408F2474
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}

/*
 * XREFs of PopBcdClose @ 0x1408F116C
 * Callers:
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}

/*
 * XREFs of PopBcdClose @ 0x1408F59AC
 * Callers:
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x1407825D4 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}

/*
 * XREFs of PopBcdClose @ 0x1408F806C
 * Callers:
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x14077E634 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}

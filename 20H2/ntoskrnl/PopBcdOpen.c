/*
 * XREFs of PopBcdOpen @ 0x1408F8084
 * Callers:
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14077F068 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}

/*
 * XREFs of PopBcdClose @ 0x1408F584C
 * Callers:
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}

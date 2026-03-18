/*
 * XREFs of PopBcdClose @ 0x1408F245C
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}

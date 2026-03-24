/*
 * XREFs of PopBcdOpen @ 0x1408F5864
 * Callers:
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140782E48 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}

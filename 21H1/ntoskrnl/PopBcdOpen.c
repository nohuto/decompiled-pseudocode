/*
 * XREFs of PopBcdOpen @ 0x1408F1184
 * Callers:
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14076E658 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}

/*
 * XREFs of PopBcdOpen @ 0x1408F2474
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}

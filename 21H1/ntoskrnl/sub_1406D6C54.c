/*
 * XREFs of sub_1406D6C54 @ 0x1406D6C54
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 *     WbGetWarbirdThread @ 0x14065EA7C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 *     WbAddLookupEntryEx @ 0x1406D6CB4 (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_1406D6C54(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_14065F0FC(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}

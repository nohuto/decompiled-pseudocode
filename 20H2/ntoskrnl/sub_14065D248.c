/*
 * XREFs of sub_14065D248 @ 0x14065D248
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D3D00 (WbAddWarbirdEncryptionSegment.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14065D374 (WbAddHeapExecutedBlockToCache.c)
 *     WbAllocateUserMemory @ 0x14065D5D8 (WbAllocateUserMemory.c)
 *     WbGetWarbirdThread @ 0x14065EEB0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065F2F4 (WbGetWarbirdProcess.c)
 * Callees:
 *     WbAddLookupEntryEx @ 0x14065D2A8 (WbAddLookupEntryEx.c)
 *     sub_14065F530 @ 0x14065F530 (sub_14065F530.c)
 */

__int64 __fastcall sub_14065D248(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  if ( a6 == -1 )
    sub_14065F530(a1, a4, a5, 0, (__int64)&a6);
  return WbAddLookupEntryEx(a1, a2);
}

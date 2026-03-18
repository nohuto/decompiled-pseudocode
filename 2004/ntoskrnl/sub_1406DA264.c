/*
 * XREFs of sub_1406DA264 @ 0x1406DA264
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x14061935C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406197A0 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406D9648 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406199DC @ 0x1406199DC (sub_1406199DC.c)
 *     WbAddLookupEntryEx @ 0x1406DA2C4 (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_1406DA264(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1406199DC(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}

/*
 * XREFs of _RtlFreeMemoryBlockLookaside@8 @ 0x4B3A2190
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((_DWORD *)Block - 1), (_DWORD *)Block - 4);
  return 0;
}

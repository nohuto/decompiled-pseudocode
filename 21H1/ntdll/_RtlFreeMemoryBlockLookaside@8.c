/*
 * XREFs of _RtlFreeMemoryBlockLookaside@8 @ 0x4B3A2190
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 */

int __stdcall RtlFreeMemoryBlockLookaside(int a1, int a2)
{
  RtlpInterlockedPushEntrySList(*(_DWORD *)(a2 - 4), (_DWORD *)(a2 - 16));
  return 0;
}

/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140392650
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140273E60 (ExCleanupAutoExpandPushLock.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}

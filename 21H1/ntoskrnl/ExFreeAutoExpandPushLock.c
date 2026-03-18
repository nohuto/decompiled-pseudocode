/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14038F060
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402D4DE0 (ExCleanupAutoExpandPushLock.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}

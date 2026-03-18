/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14038FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14026B440 (ExCleanupAutoExpandPushLock.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}

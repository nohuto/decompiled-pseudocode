/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140392090
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ExCleanupAutoExpandPushLock @ 0x140262F60 (ExCleanupAutoExpandPushLock.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}

/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14039EB60
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter3)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter3);
  return ExFreeHeapPool(BugCheckParameter3);
}

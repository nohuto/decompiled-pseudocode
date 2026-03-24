/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140392500
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140296D80 (ExCleanupAutoExpandPushLock.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9

  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2, v2, v3, v4);
}

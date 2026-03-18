/*
 * XREFs of VfFreeMemoryNotification @ 0x1409C8FF0
 * Callers:
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x1409D971C (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1409E0E40 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}

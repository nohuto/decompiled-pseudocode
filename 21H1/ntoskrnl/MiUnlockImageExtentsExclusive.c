/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408CB964
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CA954 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CB6C0 (MiDeleteImageExtentList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CBE8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CBE8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
}

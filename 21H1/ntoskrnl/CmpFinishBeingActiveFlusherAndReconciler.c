/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140781A00
 * Callers:
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1408790A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406E5DA8 (CmpWakeWriteQueueWaiters.c)
 */

char __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  struct _KEVENT *v2; // r14
  struct _KEVENT *v3; // rbp
  char v4; // al

  CmpLockRegistry();
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  v2 = *(struct _KEVENT **)(a1 + 4256);
  v3 = *(struct _KEVENT **)(a1 + 4240);
  *(_QWORD *)(a1 + 4240) = 0LL;
  *(_QWORD *)(a1 + 4232) = 0LL;
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4248) = 0LL;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 72);
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(a1 + 4232, v3, -1073741823);
  return CmpWakeWriteQueueWaiters(a1 + 4248, v2, -1073741823);
}

/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140795094
 * Callers:
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14087FF00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406DC018 (CmpWakeWriteQueueWaiters.c)
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
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(a1 + 4232, v3, -1073741823);
  return CmpWakeWriteQueueWaiters(a1 + 4248, v2, -1073741823);
}

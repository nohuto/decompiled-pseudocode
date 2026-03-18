/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140787384
 * Callers:
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14087A390 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpWakeWriteQueueWaiters @ 0x140709AC8 (CmpWakeWriteQueueWaiters.c)
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

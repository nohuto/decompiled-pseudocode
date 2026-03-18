/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4
 * Callers:
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14087A390 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     PoIsInitializedStopWatch @ 0x14026C5E4 (PoIsInitializedStopWatch.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmpAcquireWriteQueue @ 0x140357C40 (CmpAcquireWriteQueue.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbp
  char v4; // al
  _QWORD *v6; // rdx

  v2 = (volatile signed __int64 *)(a1 + 72);
  v3 = (_QWORD *)(a1 + 4248);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( PoIsInitializedStopWatch(v3) )
    {
      v6 = v3;
      goto LABEL_8;
    }
    if ( !PoIsInitializedStopWatch((_QWORD *)(a1 + 4232)) )
      break;
    v6 = (_QWORD *)(a1 + 4232);
LABEL_8:
    CmpWaitOnHiveWriteQueue(a1, v6);
  }
  CmpAcquireWriteQueue(v3);
  CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
  v4 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return CmpUnlockRegistry();
}

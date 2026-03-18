/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4
 * Callers:
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14087FF00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PoIsInitializedStopWatch @ 0x140244CA8 (PoIsInitializedStopWatch.c)
 *     CmpAcquireWriteQueue @ 0x140328410 (CmpAcquireWriteQueue.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140874DEC (CmpWaitOnHiveWriteQueue.c)
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

/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8
 * Callers:
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14087DA00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140247F50 (CmpAcquireWriteQueue.c)
 *     PoIsInitializedStopWatch @ 0x1402713C8 (PoIsInitializedStopWatch.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
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

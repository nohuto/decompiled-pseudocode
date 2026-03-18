/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x140781318
 * Callers:
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1408790A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PoIsInitializedStopWatch @ 0x1402D5F84 (PoIsInitializedStopWatch.c)
 *     CmpAcquireWriteQueue @ 0x14031A120 (CmpAcquireWriteQueue.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086D7DC (CmpWaitOnHiveWriteQueue.c)
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

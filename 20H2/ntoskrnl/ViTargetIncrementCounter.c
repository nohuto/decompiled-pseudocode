/*
 * XREFs of ViTargetIncrementCounter @ 0x1409DA51C
 * Callers:
 *     VfCheckImageCompliance @ 0x1409CA92C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409CAC24 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409CACCC (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409CAD74 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x1409D6200 (VerifierKeAcquireQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x1409D7900 (VerifierExAllocatePool.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DD5A8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1409DD690 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409DD778 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409DD878 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x1409DD930 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1409DDEC0 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x1409DE6E0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x1409DE760 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1409DE7F0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x1409DEAB0 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1409DEB40 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1409DEBD0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DEF00 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DF3E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409E018C (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A0BA4 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x1409CB8D0 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x1409DA7D8 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int updated; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v10 = 0LL;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    updated = VfDriverIsKernelImageAddress(v4);
    if ( !updated )
    {
      VfAvlInitializeLockContext((__int64)&v10, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v10, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      LOBYTE(updated) = VfAvlCleanupLockContext((__int64)&v10);
    }
  }
  return updated;
}

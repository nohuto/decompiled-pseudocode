/*
 * XREFs of ViTargetIncrementCounter @ 0x1409D449C
 * Callers:
 *     VfCheckImageCompliance @ 0x1409C48FC (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409C4BF4 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409C4C9C (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409C4D44 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x1409D01D0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x1409D18D0 (VerifierExAllocatePool.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7528 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1409D7610 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409D76F8 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409D77F8 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x1409D78B0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1409D7E40 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x1409D8660 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x1409D86E0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1409D8770 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x1409D8A30 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1409D8AC0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1409D8B50 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8E80 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D9360 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409DA10C (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059CA14 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C58A0 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x1409D4758 (ViTargetUpdateTreeAllowed.c)
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

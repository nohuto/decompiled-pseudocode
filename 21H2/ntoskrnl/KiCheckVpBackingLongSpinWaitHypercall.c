/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070
 * Callers:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     MiLockOwnedProtoPage @ 0x140325070 (MiLockOwnedProtoPage.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x1403466F0 (KiIpiSendRequestEx.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1404067C0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckVpBackingLongSpinWaitHypercall()
{
  char v0; // dl
  int v2; // ecx
  __int64 *i; // r8
  __int64 v4; // r10

  v0 = 1;
  if ( (KiVelocityFlags & 0x400) != 0 && KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
  {
    v2 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      for ( i = KiProcessorBlock; ; ++i )
      {
        if ( (*(_BYTE *)(*i + 35) & 1) != 0 )
        {
          v4 = *(_QWORD *)(*i + 33976);
          if ( !v4 || !*(_BYTE *)(v4 + 65) || !*(_BYTE *)(v4 + 64) )
            break;
        }
        if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v0;
}

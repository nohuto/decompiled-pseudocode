/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiIpiSendRequestEx @ 0x1402BF9B0 (KiIpiSendRequestEx.c)
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

char KiCheckVpBackingLongSpinWaitHypercall()
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

/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0
 * Callers:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     KiIpiSendRequestEx @ 0x1402932A0 (KiIpiSendRequestEx.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIdleLoop @ 0x1403F9910 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1403FCCC0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1403FCEA0 (SwapContext.c)
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
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

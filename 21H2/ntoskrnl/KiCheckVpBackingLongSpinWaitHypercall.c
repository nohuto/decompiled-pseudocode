/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10
 * Callers:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x140273EE0 (MiLockOwnedProtoPage.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KiWaitForContextSwap @ 0x140299240 (KiWaitForContextSwap.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
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
          v4 = *(_QWORD *)(*i + 35000);
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

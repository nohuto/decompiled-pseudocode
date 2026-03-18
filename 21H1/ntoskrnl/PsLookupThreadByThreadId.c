/*
 * XREFs of PsLookupThreadByThreadId @ 0x1405DFE40
 * Callers:
 *     PsLookupProcessThreadByCid @ 0x1405CEE90 (PsLookupProcessThreadByCid.c)
 *     NtAlertThreadByThreadId @ 0x1405E0420 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140765558 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x140905A50 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY *CurrentServerSilo; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v5 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v5 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( (*(_QWORD *)(v5 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v5 + 1280);
      if ( (*(_DWORD *)(v5 + 1296) & 2) == 0 )
        goto LABEL_10;
    }
    if ( !PsIsThreadInSilo(v5, (__int64)CurrentServerSilo) )
    {
LABEL_10:
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
      v5 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v4, v6, v7);
  if ( !v5 )
    return -1073741813;
  *v3 = (PETHREAD)v5;
  return 0;
}

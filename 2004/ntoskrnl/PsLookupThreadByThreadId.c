/*
 * XREFs of PsLookupThreadByThreadId @ 0x140666140
 * Callers:
 *     NtAlertThreadByThreadId @ 0x140666720 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x1406EFCC0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140766F18 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x140906D30 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsIsThreadInSilo @ 0x14027D7A8 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v4 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v7, 0);
      if ( (*(_QWORD *)(v4 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v4 + 1280));
      if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
        goto LABEL_10;
    }
    if ( !PsIsThreadInSilo(v4, CurrentServerSilo) )
    {
LABEL_10:
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
      v4 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *v3 = (PETHREAD)v4;
  return 0;
}

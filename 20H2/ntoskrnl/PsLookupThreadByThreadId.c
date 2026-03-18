/*
 * XREFs of PsLookupThreadByThreadId @ 0x14063AEE0
 * Callers:
 *     NtAlertThreadByThreadId @ 0x14063B510 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x14063BA80 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140775F48 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14090C950 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
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
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v4 + 544), CurrentServerSilo) )
    {
LABEL_7:
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

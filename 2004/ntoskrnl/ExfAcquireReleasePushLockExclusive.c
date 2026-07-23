/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140351244
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x14032D380 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140351204 (PspLockUnlockProcessExclusive.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PsLookupThreadByThreadId @ 0x140666140 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x140666370 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140666420 (PspThreadFromTicket.c)
 *     AlpcReferenceBlobByHandle @ 0x140688820 (AlpcReferenceBlobByHandle.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PfpRpCHashDeleteEntries @ 0x1406E9E00 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140904378 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14093DF9C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x140274990 (ExfReleasePushLockExclusive.c)
 */

char __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx
  char result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}

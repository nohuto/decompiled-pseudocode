/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1403217D4
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140301080 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140321794 (PspLockUnlockProcessExclusive.c)
 *     AlpcReferenceBlobByHandle @ 0x1405F2F30 (AlpcReferenceBlobByHandle.c)
 *     PsLookupThreadByThreadId @ 0x14063AEE0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14063B130 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14063B1E0 (PspThreadFromTicket.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PfpRpCHashDeleteEntries @ 0x1406F2F44 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140909F98 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140943D5C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x140242AF0 (ExfReleasePushLockExclusive.c)
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

/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140313394
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402F15E0 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140313354 (PspLockUnlockProcessExclusive.c)
 *     PfpRpCHashDeleteEntries @ 0x1405D1ED8 (PfpRpCHashDeleteEntries.c)
 *     PsLookupThreadByThreadId @ 0x1405DFE40 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1405E0070 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x1405E0120 (PspThreadFromTicket.c)
 *     AlpcReferenceBlobByHandle @ 0x1406106A0 (AlpcReferenceBlobByHandle.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140903098 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14093CD20 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x14035A630 (ExfReleasePushLockExclusive.c)
 */

char __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  char result; // al

  v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}

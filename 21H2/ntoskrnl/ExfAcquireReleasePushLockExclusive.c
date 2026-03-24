/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1402C3044
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402667AC (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1402C3004 (PspLockUnlockProcessExclusive.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PsLookupThreadByThreadId @ 0x140625630 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x140625880 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140625930 (PspThreadFromTicket.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x140660940 (AlpcReferenceBlobByHandle.c)
 *     PfpRpCHashDeleteEntries @ 0x1406DD16C (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140907748 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14094152C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x1402F1520 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}

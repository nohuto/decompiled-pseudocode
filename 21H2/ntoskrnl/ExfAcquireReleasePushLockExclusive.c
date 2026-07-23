/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140241564
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140241524 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x14025474C (EtwpLockUnlockBufferList.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PsLookupThreadByThreadId @ 0x14068F2A0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14068F5A0 (PspThreadFromTicket.c)
 *     PfpRpCHashDeleteEntries @ 0x1406B444C (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409078A8 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409416FC (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x1402FC270 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}

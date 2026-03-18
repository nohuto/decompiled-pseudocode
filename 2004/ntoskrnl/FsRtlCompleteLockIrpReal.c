/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1404EA500
 * Callers:
 *     FsRtlPrivateLock @ 0x1402D6BF0 (FsRtlPrivateLock.c)
 *     FsRtlUninitializeFileLock @ 0x14032CFE0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140330474 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA940 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlProcessFileLock @ 0x1404EAB60 (FsRtlProcessFileLock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

NTSTATUS *__fastcall FsRtlCompleteLockIrpReal(
        __int64 (__fastcall *a1)(__int64, IRP *),
        __int64 a2,
        IRP *a3,
        NTSTATUS a4,
        NTSTATUS *a5,
        __int64 a6)
{
  NTSTATUS v6; // ebx
  NTSTATUS *result; // rax

  v6 = a4;
  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    v6 = a1(a2, a3);
  }
  else
  {
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 1);
  }
  result = a5;
  *a5 = v6;
  return result;
}

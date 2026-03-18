/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1404E9ED0
 * Callers:
 *     FsRtlPrivateLock @ 0x1402E3940 (FsRtlPrivateLock.c)
 *     FsRtlUninitializeFileLock @ 0x1402F1240 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F3524 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F3874 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA310 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlProcessFileLock @ 0x1404EA530 (FsRtlProcessFileLock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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

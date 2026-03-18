/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x14069A1D0
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x14069A1D0 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x14069A1D0 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x14069A2D8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x1406F2690 (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _OWORD v7[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[285] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[285] + 432LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v5, 0LL);
    if ( a1 == PsIdleProcess )
      PopEtIsrDpcQuery(a1, v7);
    else
      PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[285] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}

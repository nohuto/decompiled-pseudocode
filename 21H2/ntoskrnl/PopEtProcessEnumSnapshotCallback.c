/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x140682C20
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x140682C20 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopEtIsrDpcQuery @ 0x140601940 (PopEtIsrDpcQuery.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140682C20 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x140682D28 (PopEtProcessSnapshotUpdate.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
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
      PopEtIsrDpcQuery((__int64)a1, v7);
    else
      PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[285] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}

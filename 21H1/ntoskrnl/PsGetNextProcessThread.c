/*
 * XREFs of PsGetNextProcessThread @ 0x14069A050
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406754D0 (PspBoostJobIoPriorityCallback.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140699F58 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     NtGetNextThread @ 0x1406E03F0 (NtGetNextThread.c)
 *     PsResumeProcess @ 0x1406E90D0 (PsResumeProcess.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x1407808E8 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140880A84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x140906C6C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1409081A0 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD **v3; // r13
  __int64 v4; // rbx
  _QWORD *v6; // r15
  int v7; // r14d
  signed __int64 *v8; // rbp
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1504);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[157];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 157;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 157)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}

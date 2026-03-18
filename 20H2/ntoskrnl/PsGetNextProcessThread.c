/*
 * XREFs of PsGetNextProcessThread @ 0x14069A900
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406996F0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14069A808 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PsResumeProcess @ 0x1406BC270 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x14078D818 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140888270 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14090DB3C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x14090F070 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}

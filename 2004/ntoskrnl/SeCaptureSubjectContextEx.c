/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14067AEC0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14034A120 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmpVEExecuteParseLogic @ 0x1405EDCA0 (CmpVEExecuteParseLogic.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtDuplicateToken @ 0x14062BB00 (NtDuplicateToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140636FA0 (EtwpCheckProviderLoggingAccess.c)
 *     SeCreateAccessStateEx @ 0x140668A70 (SeCreateAccessStateEx.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5DC (ObpCaptureBoundaryDescriptor.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406F4050 (ObpVerifyCreatorAccessCheck.c)
 *     ExpCheckWakeTimerAccess @ 0x14077C208 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37D4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // r14
  unsigned __int64 *v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v10; // r15
  signed __int64 *p_Lock; // rsi

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v6 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  SubjectContext->ClientToken = v6;
  v7 = &Process[1].Affinity.Bitmap[5];
  v8 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v8 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v10);
  }
  SubjectContext->PrimaryToken = v8;
  if ( SeTokenLeakTracking )
  {
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}

/*
 * XREFs of SeCaptureSubjectContextEx @ 0x140602DE0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140202268 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpVEExecuteParseLogic @ 0x1406232C0 (CmpVEExecuteParseLogic.c)
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14067DF00 (ObpVerifyCreatorAccessCheck.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14067F81C (EtwpCheckProviderLoggingAccess.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14070DD2C (ObpCaptureBoundaryDescriptor.c)
 *     ExpCheckWakeTimerAccess @ 0x140779DF8 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37C4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // r14
  unsigned __int64 *v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // r15
  signed __int64 *p_Lock; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
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
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v13, v15, v16, v17);
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

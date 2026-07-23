/*
 * XREFs of NtDeleteKey @ 0x140701FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032F6D4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140923BE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *v1; // rbx
  char v3; // r14
  char v4; // r12
  char v5; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  _DMA_OPERATIONS *v9; // rcx
  int v10; // edi
  PADAPTER_OBJECT v11; // rbx
  struct _KTHREAD *v12; // rax
  int v13; // edx
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  GUID *p_TransactionId; // r8
  BOOLEAN v20; // [rsp+48h] [rbp-89h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-81h] BYREF
  int v22; // [rsp+58h] [rbp-79h] BYREF
  __int64 v23; // [rsp+60h] [rbp-71h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-69h]
  __int64 v25; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  GUID v28[2]; // [rsp+A8h] [rbp-29h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  _OWORD v30[2]; // [rsp+E0h] [rbp+Fh] BYREF

  v1 = 0LL;
  v23 = 0LL;
  DmaOperations = 0LL;
  v3 = 0;
  v22 = 0;
  memset(v28, 0, sizeof(v28));
  v25 = 0LL;
  memset(v30, 0, sizeof(v30));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v30, 0x20000u);
  DmaAdapter = 0LL;
  v26[1] = v26;
  v4 = 0;
  v26[0] = v26;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v20 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
    goto LABEL_32;
  }
  v10 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v8, PreviousMode, &DmaAdapter, &v23);
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v10 = -1073741790;
      v11 = DmaAdapter;
      goto LABEL_40;
    }
    v17 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v16, PreviousMode, &DmaAdapter, &v23);
    v11 = DmaAdapter;
    v10 = v17;
    if ( v17 < 0 )
      goto LABEL_40;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter) )
    {
      v10 = -1073741790;
      goto LABEL_40;
    }
    v3 = 1;
  }
  else
  {
    v11 = DmaAdapter;
  }
  if ( v10 >= 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v11 = DmaAdapter;
    v10 = 0;
    v5 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v28[0].Data1 = v11;
      v10 = CmpCallCallBacksEx(0, (__int64)v28, 0LL, 1, 0xFu, (__int64)v11, (__int64)v26);
      if ( v10 < 0 )
      {
        if ( v10 == -1073740541 )
          v10 = 0;
        goto LABEL_24;
      }
      v4 = 1;
      v10 = 0;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v11 )
      DmaOperations = v11->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v11->DmaOperations == ExpControlKey->DmaOperations
      || ::DmaAdapter && v11->DmaOperations == ::DmaAdapter->DmaOperations )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v11 = DmaAdapter;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v11 = DmaAdapter;
      v9 = DmaAdapter->DmaOperations;
      if ( (LODWORD(v9->PutDmaAdapter) & 0x80u) != 0 )
        goto LABEL_55;
      GetDmaAlignment = v9->GetDmaAlignment;
      if ( GetDmaAlignment )
      {
        if ( (*((_DWORD *)GetDmaAlignment + 2) & 0x80u) != 0 )
          goto LABEL_55;
      }
      if ( !v3 )
        goto LABEL_22;
      LOBYTE(v13) = PreviousMode;
      v18 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v13,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v22);
      v11 = DmaAdapter;
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v10 = CmDeleteKey(v11);
        if ( v10 >= 0 && (v23 & 4) != 0 )
        {
          if ( v11[3].DmaOperations || *(_QWORD *)&v11[4].Version )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v11, &v25);
            TransactionId = *(GUID *)(v25 + 88);
            CmpUnlockRegistry();
            p_TransactionId = &TransactionId;
          }
          else
          {
            p_TransactionId = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v11, KeyHandle, p_TransactionId);
        }
      }
      else
      {
LABEL_55:
        v10 = -1073741790;
      }
    }
  }
LABEL_24:
  if ( v3 )
LABEL_40:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v4 )
    v10 = CmPostCallbackNotificationEx(0xFu, (__int64)v11, v10, (__int64)v28, 0LL, v26);
  if ( v5 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v11 = DmaAdapter;
  }
  if ( v11 )
    HalPutDmaAdapter(v11);
  v1 = DmaOperations;
LABEL_32:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v9) = 12;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v9,
      v30,
      (unsigned int)v10,
      0LL,
      v1,
      0LL);
  }
  if ( v20 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v10;
}

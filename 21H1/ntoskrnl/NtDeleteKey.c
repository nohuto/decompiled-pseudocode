/*
 * XREFs of NtDeleteKey @ 0x140692140
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091CCB0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *v1; // rbx
  char v3; // r14
  char v4; // r12
  char v5; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  _DMA_OPERATIONS *v12; // rcx
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  PADAPTER_OBJECT v16; // rbx
  struct _KTHREAD *v17; // rax
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  GUID *p_TransactionId; // r8
  BOOLEAN v27; // [rsp+48h] [rbp-89h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-81h] BYREF
  int v29; // [rsp+58h] [rbp-79h] BYREF
  __int64 v30; // [rsp+60h] [rbp-71h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-69h]
  __int64 v32; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  GUID v35[2]; // [rsp+A8h] [rbp-29h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  _OWORD v37[2]; // [rsp+E0h] [rbp+Fh] BYREF

  v1 = 0LL;
  v30 = 0LL;
  DmaOperations = 0LL;
  v3 = 0;
  v29 = 0;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  memset(v37, 0, sizeof(v37));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v37, 0x20000u);
  DmaAdapter = 0LL;
  v33[1] = v33;
  v4 = 0;
  v33[0] = v33;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v27 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v27 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v13 = -1073741431;
    goto LABEL_32;
  }
  v13 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v9, PreviousMode, &DmaAdapter, &v30);
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v13 = -1073741790;
      v16 = DmaAdapter;
      goto LABEL_40;
    }
    v24 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v23, PreviousMode, &DmaAdapter, &v30);
    v16 = DmaAdapter;
    v13 = v24;
    if ( v24 < 0 )
      goto LABEL_40;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
    {
      v13 = -1073741790;
      goto LABEL_40;
    }
    v3 = 1;
  }
  else
  {
    v16 = DmaAdapter;
  }
  if ( v13 >= 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v16 = DmaAdapter;
    v13 = 0;
    v5 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v35[0].Data1 = v16;
      v13 = CmpCallCallBacksEx(0, (__int64)v35, 0LL, 1, 0xFu, (__int64)v16, (__int64)v33);
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v13 = 0;
        goto LABEL_24;
      }
      v4 = 1;
      v13 = 0;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v16 )
      DmaOperations = v16->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v16->DmaOperations == ExpControlKey->DmaOperations
      || ::DmaAdapter && v16->DmaOperations == ::DmaAdapter->DmaOperations )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v16 = DmaAdapter;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v16 = DmaAdapter;
      v12 = DmaAdapter->DmaOperations;
      if ( (LODWORD(v12->PutDmaAdapter) & 0x80u) != 0 )
        goto LABEL_55;
      GetDmaAlignment = v12->GetDmaAlignment;
      if ( GetDmaAlignment )
      {
        if ( (*((_DWORD *)GetDmaAlignment + 2) & 0x80u) != 0 )
          goto LABEL_55;
      }
      if ( !v3 )
        goto LABEL_22;
      LOBYTE(v11) = PreviousMode;
      v25 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v11,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v29);
      v16 = DmaAdapter;
      v13 = v25;
      if ( v25 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v13 = CmDeleteKey(v16);
        if ( v13 >= 0 && (v30 & 4) != 0 )
        {
          if ( v16[3].DmaOperations || *(_QWORD *)&v16[4].Version )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v16, &v32);
            TransactionId = *(GUID *)(v32 + 88);
            CmpUnlockRegistry();
            p_TransactionId = &TransactionId;
          }
          else
          {
            p_TransactionId = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v16, KeyHandle, p_TransactionId);
        }
      }
      else
      {
LABEL_55:
        v13 = -1073741790;
      }
    }
  }
LABEL_24:
  if ( v3 )
LABEL_40:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v4 )
    v13 = CmPostCallbackNotificationEx(15, (__int64)v16, v13, (__int64)v35, 0LL, v33);
  if ( v5 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v14, v15);
    v16 = DmaAdapter;
  }
  if ( v16 )
    HalPutDmaAdapter(v16);
  v1 = DmaOperations;
LABEL_32:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v12) = 12;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v12,
      v37,
      (unsigned int)v13,
      0LL,
      v1,
      0LL);
  }
  if ( v27 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  }
  return v13;
}

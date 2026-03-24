/*
 * XREFs of NtDeleteKey @ 0x14066C210
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x1402D1684 (CmDoVirtualTest.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406C3180 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409213B0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

__int64 __fastcall NtDeleteKey(HANDLE Handle)
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
  int v13; // r9d
  int v14; // edx
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  GUID *p_TransactionId; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  BOOLEAN v23; // [rsp+48h] [rbp-89h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-81h] BYREF
  int v25; // [rsp+58h] [rbp-79h] BYREF
  __int64 v26; // [rsp+60h] [rbp-71h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-69h]
  __int64 v28; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  GUID v31[2]; // [rsp+A8h] [rbp-29h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  _OWORD v33[2]; // [rsp+E0h] [rbp+Fh] BYREF

  v1 = 0LL;
  v26 = 0LL;
  DmaOperations = 0LL;
  v3 = 0;
  v25 = 0;
  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  memset(v33, 0, sizeof(v33));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v33, 0x20000u);
  DmaAdapter = 0LL;
  v29[1] = v29;
  v4 = 0;
  v29[0] = v29;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v23 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
    goto LABEL_32;
  }
  v10 = CmObReferenceObjectByHandle(Handle, 0x10000u, v8, PreviousMode, &DmaAdapter, &v26);
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v25) )
    {
      v10 = -1073741790;
      v11 = DmaAdapter;
      goto LABEL_40;
    }
    v18 = CmObReferenceObjectByHandle(Handle, 0x20019u, v17, PreviousMode, &DmaAdapter, &v26);
    v11 = DmaAdapter;
    v10 = v18;
    if ( v18 < 0 )
      goto LABEL_40;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
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
      *(_QWORD *)&v31[0].Data1 = v11;
      LOBYTE(v13) = 1;
      v10 = CmpCallCallBacksEx(0, (unsigned int)v31, 0, v13, 15, (__int64)v11, (__int64)v29);
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
      LOBYTE(v14) = PreviousMode;
      v19 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v14,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v25);
      v11 = DmaAdapter;
      v10 = v19;
      if ( v19 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v10 = CmDeleteKey(v11);
        if ( v10 >= 0 && (v26 & 4) != 0 )
        {
          if ( v11[3].DmaOperations || *(_QWORD *)&v11[4].Version )
          {
            CmpLockRegistry(v9);
            CmpTransSearchAddTransFromKeyBody(v11, &v28);
            TransactionId = *(GUID *)(v28 + 88);
            CmpUnlockRegistry(v22, v21);
            p_TransactionId = &TransactionId;
          }
          else
          {
            p_TransactionId = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v11, Handle, p_TransactionId);
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
    v10 = CmPostCallbackNotificationEx(15, (_DWORD)v11, v10, (unsigned int)v31, 0LL, (__int64)v29);
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
      v33,
      (unsigned int)v10,
      0LL,
      v1,
      0LL);
  }
  if ( v23 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v10;
}

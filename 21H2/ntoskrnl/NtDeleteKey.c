/*
 * XREFs of NtDeleteKey @ 0x140661030
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x14024FB14 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140621E0C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140921510 (SeDeleteObjectAuditAlarmWithTransaction.c)
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
  NTSTATUS v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  PADAPTER_OBJECT v16; // rbx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  GUID *p_TransactionId; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  BOOLEAN v30; // [rsp+48h] [rbp-89h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-81h] BYREF
  int v32; // [rsp+58h] [rbp-79h] BYREF
  __int64 v33; // [rsp+60h] [rbp-71h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-69h]
  __int64 v35; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  GUID v38[2]; // [rsp+A8h] [rbp-29h] BYREF
  GUID TransactionId; // [rsp+D0h] [rbp-1h] BYREF
  _OWORD v40[2]; // [rsp+E0h] [rbp+Fh] BYREF

  v1 = 0LL;
  v33 = 0LL;
  DmaOperations = 0LL;
  v3 = 0;
  v32 = 0;
  memset(v38, 0, sizeof(v38));
  v35 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v40, 0x20000u);
  DmaAdapter = 0LL;
  v36[1] = v36;
  v4 = 0;
  v36[0] = v36;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v13 = -1073741431;
    goto LABEL_32;
  }
  v13 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v9, PreviousMode, &DmaAdapter, &v33);
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v13 = -1073741790;
      v16 = DmaAdapter;
      goto LABEL_40;
    }
    v25 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v24, PreviousMode, &DmaAdapter, &v33);
    v16 = DmaAdapter;
    v13 = v25;
    if ( v25 < 0 )
      goto LABEL_40;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter) )
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
      *(_QWORD *)&v38[0].Data1 = v16;
      LOBYTE(v18) = 1;
      v13 = CmpCallCallBacksEx(0, (unsigned int)v38, 0, v18, 15, (__int64)v16, (__int64)v36);
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
      v26 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v11,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v32);
      v16 = DmaAdapter;
      v13 = v26;
      if ( v26 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v13 = CmDeleteKey(v16);
        if ( v13 >= 0 && (v33 & 4) != 0 )
        {
          if ( v16[3].DmaOperations || *(_QWORD *)&v16[4].Version )
          {
            CmpLockRegistry(v12);
            CmpTransSearchAddTransFromKeyBody(v16, &v35);
            TransactionId = *(GUID *)(v35 + 88);
            CmpUnlockRegistry(v29, v28);
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
    v13 = CmPostCallbackNotificationEx(15, (_DWORD)v16, v13, (unsigned int)v38, 0LL, (__int64)v36);
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
      v40,
      (unsigned int)v13,
      0LL,
      v1,
      0LL);
  }
  if ( v30 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  return v13;
}

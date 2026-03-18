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

__int64 __fastcall NtDeleteKey(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  _DMA_OPERATIONS *v4; // rbx
  char v6; // r14
  char v7; // r12
  char v8; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DMA_OPERATIONS *v15; // rcx
  signed int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  PADAPTER_OBJECT v19; // rbx
  struct _KTHREAD *v20; // rax
  unsigned int (__fastcall *GetDmaAlignment)(_DMA_ADAPTER *); // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  GUID *p_TransactionId; // r8
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

  v4 = 0LL;
  v33 = 0LL;
  DmaOperations = 0LL;
  v6 = 0;
  v32 = 0;
  memset(v38, 0, sizeof(v38));
  v35 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v40, 0x20000LL, a3, a4);
  DmaAdapter = 0LL;
  v36[1] = v36;
  v7 = 0;
  v36[0] = v36;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
    v16 = -1073741431;
    goto LABEL_32;
  }
  v16 = CmObReferenceObjectByHandle(Handle, 0x10000u, v12, PreviousMode, &DmaAdapter, &v33);
  if ( v16 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v16 = -1073741790;
      v19 = DmaAdapter;
      goto LABEL_40;
    }
    v27 = CmObReferenceObjectByHandle(Handle, 0x20019u, v26, PreviousMode, &DmaAdapter, &v33);
    v19 = DmaAdapter;
    v16 = v27;
    if ( v27 < 0 )
      goto LABEL_40;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
    {
      v16 = -1073741790;
      goto LABEL_40;
    }
    v6 = 1;
  }
  else
  {
    v19 = DmaAdapter;
  }
  if ( v16 >= 0 )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v19 = DmaAdapter;
    v16 = 0;
    v8 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v38[0].Data1 = v19;
      v16 = CmpCallCallBacksEx(0, (__int64)v38, 0LL, 1, 0xFu, (__int64)v19, (__int64)v36);
      if ( v16 < 0 )
      {
        if ( v16 == -1073740541 )
          v16 = 0;
        goto LABEL_24;
      }
      v7 = 1;
      v16 = 0;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v19 )
      DmaOperations = v19->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v19->DmaOperations == ExpControlKey->DmaOperations
      || ::DmaAdapter && v19->DmaOperations == ::DmaAdapter->DmaOperations )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v19 = DmaAdapter;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v19 = DmaAdapter;
      v15 = DmaAdapter->DmaOperations;
      if ( (LODWORD(v15->PutDmaAdapter) & 0x80u) != 0 )
        goto LABEL_55;
      GetDmaAlignment = v15->GetDmaAlignment;
      if ( GetDmaAlignment )
      {
        if ( (*((_DWORD *)GetDmaAlignment + 2) & 0x80u) != 0 )
          goto LABEL_55;
      }
      if ( !v6 )
        goto LABEL_22;
      LOBYTE(v14) = PreviousMode;
      v28 = CmKeyBodyRemapToVirtual(
              (unsigned int)&DmaAdapter,
              v14,
              0x10000,
              (unsigned int)&SubjectContext,
              (__int64)&v32);
      v19 = DmaAdapter;
      v16 = v28;
      if ( v28 < 0 )
        goto LABEL_24;
      if ( CmpVEEnabled && ((__int64)DmaAdapter->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_22:
        v16 = CmDeleteKey(v19);
        if ( v16 >= 0 && (v33 & 4) != 0 )
        {
          if ( v19[3].DmaOperations || *(_QWORD *)&v19[4].Version )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v19, &v35);
            TransactionId = *(GUID *)(v35 + 88);
            CmpUnlockRegistry();
            p_TransactionId = &TransactionId;
          }
          else
          {
            p_TransactionId = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v19, Handle, p_TransactionId);
        }
      }
      else
      {
LABEL_55:
        v16 = -1073741790;
      }
    }
  }
LABEL_24:
  if ( v6 )
LABEL_40:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
    v16 = CmPostCallbackNotificationEx(15, (__int64)v19, v16, (__int64)v38, 0LL, v36);
  if ( v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v17, v18);
    v19 = DmaAdapter;
  }
  if ( v19 )
    HalPutDmaAdapter(v19);
  v4 = DmaOperations;
LABEL_32:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v15) = 12;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v15,
      v40,
      (unsigned int)v16,
      0LL,
      v4,
      0LL);
  }
  if ( v30 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  return (unsigned int)v16;
}

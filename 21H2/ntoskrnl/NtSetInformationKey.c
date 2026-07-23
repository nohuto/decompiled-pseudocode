/*
 * XREFs of NtSetInformationKey @ 0x1406E3160
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x14024FB14 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140621E0C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v6; // r13
  char v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOLEAN v12; // r12
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v14; // ecx
  char *v15; // rdx
  ACCESS_MASK v16; // edx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v22; // ebx
  struct _DMA_ADAPTER *v23; // rdi
  char v24; // r14
  KPROCESSOR_MODE v25; // r9
  KPROCESSOR_MODE v26; // r9
  _DMA_OPERATIONS *v27; // rcx
  __int32 v28; // r14d
  __int32 v29; // r14d
  __int32 v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rdx
  NTSTATUS v33; // eax
  _DMA_OPERATIONS *v34; // rcx
  char v35; // [rsp+40h] [rbp-158h]
  char v36; // [rsp+41h] [rbp-157h]
  KPROCESSOR_MODE v37; // [rsp+42h] [rbp-156h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-150h] BYREF
  __int64 v39; // [rsp+50h] [rbp-148h] BYREF
  ULONG v40; // [rsp+58h] [rbp-140h]
  int v41; // [rsp+5Ch] [rbp-13Ch]
  _DMA_OPERATIONS *DmaOperations; // [rsp+60h] [rbp-138h]
  HANDLE Handle; // [rsp+68h] [rbp-130h]
  _QWORD v44[2]; // [rsp+70h] [rbp-128h] BYREF
  PVOID v45; // [rsp+80h] [rbp-118h] BYREF
  PVOID v46; // [rsp+88h] [rbp-110h] BYREF
  PVOID Object; // [rsp+90h] [rbp-108h] BYREF
  PVOID v48; // [rsp+98h] [rbp-100h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-F0h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-C0h]
  __int128 v52; // [rsp+E8h] [rbp-B0h]
  __int64 v53; // [rsp+F8h] [rbp-A0h]
  struct _DMA_ADAPTER *v54; // [rsp+100h] [rbp-98h] BYREF
  NTSTATUS v55; // [rsp+108h] [rbp-90h]
  int v56; // [rsp+10Ch] [rbp-8Ch]
  __int128 *v57; // [rsp+110h] [rbp-88h]
  NTSTATUS v58; // [rsp+118h] [rbp-80h]
  __int128 v59; // [rsp+11Ch] [rbp-7Ch]
  __int64 v60; // [rsp+12Ch] [rbp-6Ch]
  int v61; // [rsp+134h] [rbp-64h]
  _OWORD v62[2]; // [rsp+138h] [rbp-60h] BYREF

  v40 = KeySetInformationLength;
  Handle = KeyHandle;
  v39 = 0LL;
  memset(v62, 0, sizeof(v62));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v62, 0x20000u);
  v36 = 0;
  DmaAdapter = 0LL;
  v6 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v44[1] = v44;
  v44[0] = v44;
  v41 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v22 = -1073741431;
    v23 = DmaAdapter;
    v24 = 0;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    goto LABEL_6;
  if ( KeySetInformationClass )
  {
    if ( KeySetInformationClass != KeyWow64FlagsInformation )
    {
      if ( KeySetInformationClass == KeyControlFlagsInformation
        || KeySetInformationClass == KeySetVirtualizationInformation )
      {
LABEL_6:
        v35 = 0;
LABEL_7:
        v14 = 4;
        goto LABEL_8;
      }
      if ( KeySetInformationClass != KeySetDebugInformation )
      {
        if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
        {
          if ( Handle )
          {
            v25 = KeGetCurrentThread()->PreviousMode;
            v45 = 0LL;
            if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v25, &v45, 0LL) >= 0 )
            {
              DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v45 + 1);
              HalPutDmaAdapter((PADAPTER_OBJECT)v45);
            }
          }
        }
        v22 = -1073741821;
        v23 = DmaAdapter;
        v24 = 0;
        goto LABEL_28;
      }
    }
    v35 = 1;
    goto LABEL_7;
  }
  v14 = 8;
  v35 = 1;
LABEL_8:
  if ( v40 != v14 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        v26 = KeGetCurrentThread()->PreviousMode;
        v46 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v26, &v46, 0LL) >= 0 )
        {
          DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v46 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v46);
        }
      }
    }
    v22 = -1073741820;
    v23 = DmaAdapter;
    v24 = 0;
    goto LABEL_28;
  }
  if ( PreviousMode )
  {
    v15 = (char *)KeySetInformation + v14;
    if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < KeySetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v39, KeySetInformation, v14);
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    v16 = 0;
  else
    v16 = 2;
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(Handle, v16, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v23 = (struct _DMA_ADAPTER *)Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  if ( v22 == -1073741790 )
  {
    if ( !v35 )
    {
      v22 = -1073741790;
      goto LABEL_67;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v7 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v22 = -1073741790;
      v24 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    v48 = 0LL;
    v22 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v37, &v48, 0LL);
    v23 = (struct _DMA_ADAPTER *)v48;
    DmaAdapter = (PADAPTER_OBJECT)v48;
    if ( v22 < 0 )
    {
LABEL_67:
      v24 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    if ( !CmKeyBodyNeedsVirtualImage((__int64)v48) )
    {
      v22 = -1073741790;
      v24 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    v22 = 0;
    v6 = 1;
  }
  v7 = v6;
  if ( v22 < 0 )
    goto LABEL_67;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v23 )
    DmaOperations = v23->DmaOperations;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
  {
LABEL_19:
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      v23 = DmaAdapter;
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(_QWORD *)&v50 = DmaAdapter;
        DWORD2(v50) = KeySetInformationClass;
        *(_QWORD *)&v51 = &v39;
        DWORD2(v51) = v40;
        LOBYTE(v11) = 1;
        v22 = CmpCallCallBacksEx(3, (unsigned int)&v50, 0, v11, 18, (__int64)DmaAdapter, (__int64)v44);
        if ( v22 < 0 )
        {
          if ( v22 == -1073740541 )
            v22 = 0;
          v24 = 0;
          goto LABEL_27;
        }
        v36 = 1;
      }
    }
    else
    {
      v23 = DmaAdapter;
    }
    if ( !v6
      || (v22 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v37, 2u, (__int64)&SubjectContext), v23 = DmaAdapter, v22 >= 0) )
    {
      v7 = v6;
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
      {
        if ( KeySetInformationClass )
        {
          v28 = KeySetInformationClass - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 != 1 )
                  goto LABEL_26;
                v31 = (unsigned int)v39;
                v32 = 4LL;
              }
              else
              {
                v31 = (unsigned int)v39;
                v32 = 3LL;
              }
            }
            else
            {
              v31 = (unsigned int)v39;
              v32 = 2LL;
            }
          }
          else
          {
            v31 = (unsigned int)v39;
            v32 = 1LL;
          }
          v33 = CmSetKeyFlags(v23, v32, v31);
        }
        else
        {
          v33 = CmSetLastWriteTimeKey(v23, &v39);
        }
        v22 = v33;
        goto LABEL_26;
      }
      v23[3].Size = v39;
      v22 = 0;
    }
LABEL_26:
    v24 = v36;
LABEL_27:
    v6 = 1;
    goto LABEL_28;
  }
  v27 = v23->DmaOperations;
  if ( (LODWORD(v27->PutDmaAdapter) & 0x80u) == 0 )
  {
    if ( (*((_DWORD *)v27->AllocateAdapterChannel + 40) & 0x100000) == 0 )
      goto LABEL_19;
    v22 = -1073741790;
    v24 = 0;
    v6 = 0;
  }
  else
  {
    v22 = -1073741790;
    v24 = 0;
    v6 = 0;
  }
LABEL_28:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v24
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v44[0] != v44 )
  {
    v56 = 0;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0;
    v54 = v23;
    v55 = v22;
    v58 = v22;
    v57 = &v50;
    CmpCallCallBacksEx(18, (unsigned int)&v54, 0, 0, 18, (__int64)v23, (__int64)v44);
    v22 = v58;
  }
  if ( v6 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v23 = DmaAdapter;
  }
  if ( v23 )
    HalPutDmaAdapter(v23);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v34 = DmaOperations;
    LOBYTE(v34) = 20;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v34,
      v62,
      (unsigned int)v22,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  return v22;
}

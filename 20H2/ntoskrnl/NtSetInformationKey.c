/*
 * XREFs of NtSetInformationKey @ 0x1406766B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032F6D4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // r13
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ecx
  char *v12; // rdx
  ACCESS_MASK v13; // edx
  char v14; // dl
  struct _KTHREAD *v15; // rax
  char v16; // r14
  char v17; // r12
  NTSTATUS v19; // ebx
  struct _DMA_ADAPTER *v20; // rdi
  KPROCESSOR_MODE v21; // r9
  KPROCESSOR_MODE v22; // r9
  _DMA_OPERATIONS *v23; // rcx
  __int32 v24; // r14d
  __int32 v25; // r14d
  __int32 v26; // r14d
  __int64 v27; // r8
  __int64 v28; // rdx
  NTSTATUS v29; // eax
  _DMA_OPERATIONS *v30; // rcx
  char v31; // [rsp+40h] [rbp-168h]
  char v32; // [rsp+41h] [rbp-167h]
  char v33; // [rsp+42h] [rbp-166h]
  unsigned __int8 v34; // [rsp+43h] [rbp-165h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-160h] BYREF
  __int64 v36; // [rsp+50h] [rbp-158h] BYREF
  int v37; // [rsp+58h] [rbp-150h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+60h] [rbp-148h]
  HANDLE Handle; // [rsp+68h] [rbp-140h]
  ULONG v40; // [rsp+70h] [rbp-138h]
  _QWORD v41[2]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v42; // [rsp+88h] [rbp-120h] BYREF
  PVOID v43; // [rsp+90h] [rbp-118h] BYREF
  PVOID Object; // [rsp+98h] [rbp-110h] BYREF
  PVOID v45; // [rsp+A0h] [rbp-108h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-C8h]
  __int128 v49; // [rsp+F0h] [rbp-B8h]
  __int64 v50; // [rsp+100h] [rbp-A8h]
  struct _DMA_ADAPTER *v51; // [rsp+108h] [rbp-A0h] BYREF
  NTSTATUS v52; // [rsp+110h] [rbp-98h]
  int v53; // [rsp+114h] [rbp-94h]
  __int128 *v54; // [rsp+118h] [rbp-90h]
  NTSTATUS v55; // [rsp+120h] [rbp-88h]
  __int128 v56; // [rsp+124h] [rbp-84h]
  __int64 v57; // [rsp+134h] [rbp-74h]
  int v58; // [rsp+13Ch] [rbp-6Ch]
  _OWORD v59[2]; // [rsp+140h] [rbp-68h] BYREF

  v40 = KeySetInformationLength;
  Handle = KeyHandle;
  memset(v59, 0, sizeof(v59));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v59, 0x20000u);
  v32 = 0;
  DmaAdapter = 0LL;
  v33 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v41[1] = v41;
  v41[0] = v41;
  v37 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = -1073741431;
    v20 = DmaAdapter;
LABEL_48:
    v16 = 0;
    v17 = 0;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
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
        v31 = 0;
LABEL_7:
        v11 = 4;
        goto LABEL_8;
      }
      if ( KeySetInformationClass != KeySetDebugInformation )
      {
        if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
        {
          if ( Handle )
          {
            v21 = KeGetCurrentThread()->PreviousMode;
            v42 = 0LL;
            if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v21, &v42, 0LL) >= 0 )
            {
              DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v42 + 1);
              HalPutDmaAdapter((PADAPTER_OBJECT)v42);
            }
          }
        }
        v19 = -1073741821;
        v20 = DmaAdapter;
        v16 = 0;
        v17 = 0;
        goto LABEL_29;
      }
    }
    v31 = 1;
    goto LABEL_7;
  }
  v11 = 8;
  v31 = 1;
LABEL_8:
  if ( KeySetInformationLength == v11 )
  {
    v36 = 0LL;
    if ( PreviousMode )
    {
      v12 = (char *)KeySetInformation + v11;
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < KeySetInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(&v36, KeySetInformation, v11);
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
      v13 = 0;
    else
      v13 = 2;
    Object = 0LL;
    v19 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
    v20 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v19 == -1073741790 )
    {
      if ( !v31 )
      {
        v19 = -1073741790;
        v16 = 0;
        v17 = 0;
        goto LABEL_29;
      }
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      {
        v19 = -1073741790;
        v16 = 0;
        v17 = 0;
        goto LABEL_29;
      }
      v45 = 0LL;
      v19 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v34, &v45, 0LL);
      v20 = (struct _DMA_ADAPTER *)v45;
      DmaAdapter = (PADAPTER_OBJECT)v45;
      if ( v19 < 0 )
        goto LABEL_48;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v45) )
      {
        v19 = -1073741790;
        v16 = 0;
        v17 = 0;
        goto LABEL_29;
      }
      v19 = 0;
      v14 = 1;
      v33 = 1;
    }
    else
    {
      v14 = 0;
    }
    v7 = v14;
    if ( v19 < 0 )
      goto LABEL_48;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v20 )
      DmaOperations = v20->DmaOperations;
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
    {
LABEL_20:
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      if ( CmpCallBackCount )
      {
        v20 = DmaAdapter;
        if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          *(_QWORD *)&v47 = DmaAdapter;
          DWORD2(v47) = KeySetInformationClass;
          *(_QWORD *)&v48 = KeySetInformation;
          DWORD2(v48) = v40;
          v19 = CmpCallCallBacksEx(3u, (__int64)&v47, 0LL, 1, 0x12u, (__int64)DmaAdapter, (__int64)v41);
          if ( v19 < 0 )
          {
            if ( v19 == -1073740541 )
              v19 = 0;
            v7 = v33;
            v16 = 0;
            goto LABEL_28;
          }
          v32 = 1;
        }
      }
      else
      {
        v20 = DmaAdapter;
      }
      if ( !v33
        || (v19 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v34, 2LL, &SubjectContext, &v37),
            v7 = v33,
            v20 = DmaAdapter,
            v19 >= 0) )
      {
        v7 = v33;
        if ( KeySetInformationClass != KeySetHandleTagsInformation )
        {
          if ( KeySetInformationClass )
          {
            v24 = KeySetInformationClass - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 != 1 )
                    goto LABEL_27;
                  v27 = (unsigned int)v36;
                  v28 = 4LL;
                }
                else
                {
                  v27 = (unsigned int)v36;
                  v28 = 3LL;
                }
              }
              else
              {
                v27 = (unsigned int)v36;
                v28 = 2LL;
              }
            }
            else
            {
              v27 = (unsigned int)v36;
              v28 = 1LL;
            }
            v29 = CmSetKeyFlags(v20, v28, v27);
          }
          else
          {
            v29 = CmSetLastWriteTimeKey(v20, &v36);
          }
          v19 = v29;
          goto LABEL_27;
        }
        v20[3].Size = v36;
        v19 = 0;
      }
LABEL_27:
      v16 = v32;
LABEL_28:
      v17 = 1;
      goto LABEL_29;
    }
    v23 = v20->DmaOperations;
    if ( (LODWORD(v23->PutDmaAdapter) & 0x80u) == 0 )
    {
      if ( (*((_DWORD *)v23->AllocateAdapterChannel + 40) & 0x100000) == 0 )
        goto LABEL_20;
      v19 = -1073741790;
      v16 = 0;
      v17 = 0;
    }
    else
    {
      v19 = -1073741790;
      v16 = 0;
      v17 = 0;
    }
  }
  else
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        v22 = KeGetCurrentThread()->PreviousMode;
        v43 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v22, &v43, 0LL) >= 0 )
        {
          DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v43 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v43);
        }
      }
    }
    v19 = -1073741820;
    v20 = DmaAdapter;
    v16 = 0;
    v17 = 0;
  }
LABEL_29:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v16
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v41[0] != v41 )
  {
    v53 = 0;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0;
    v51 = v20;
    v52 = v19;
    v55 = v19;
    v54 = &v47;
    CmpCallCallBacksEx(0x12u, (__int64)&v51, 0LL, 0, 0x12u, (__int64)v20, (__int64)v41);
    v19 = v55;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = DmaAdapter;
  }
  if ( v20 )
    HalPutDmaAdapter(v20);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v30 = DmaOperations;
    LOBYTE(v30) = 20;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v30,
      v59,
      (unsigned int)v19,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v19;
}

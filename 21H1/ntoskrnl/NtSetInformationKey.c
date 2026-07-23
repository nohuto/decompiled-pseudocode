/*
 * XREFs of NtSetInformationKey @ 0x1405FA5C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOLEAN v12; // r13
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v14; // ecx
  char *v15; // rdx
  ACCESS_MASK v16; // edx
  struct _KTHREAD *v17; // rax
  char v18; // r14
  char v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // ebx
  struct _DMA_ADAPTER *v25; // rdi
  KPROCESSOR_MODE v26; // r9
  KPROCESSOR_MODE v27; // r9
  _DMA_OPERATIONS *v28; // rcx
  __int32 v29; // r14d
  __int32 v30; // r14d
  __int32 v31; // r14d
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // eax
  _DMA_OPERATIONS *v35; // rcx
  char v36; // [rsp+40h] [rbp-168h]
  char v37; // [rsp+41h] [rbp-167h]
  char v38; // [rsp+42h] [rbp-166h]
  unsigned __int8 v39; // [rsp+43h] [rbp-165h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-160h] BYREF
  __int64 v41; // [rsp+50h] [rbp-158h] BYREF
  int v42; // [rsp+58h] [rbp-150h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+60h] [rbp-148h]
  HANDLE Handle; // [rsp+68h] [rbp-140h]
  ULONG v45; // [rsp+70h] [rbp-138h]
  _QWORD v46[2]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v47; // [rsp+88h] [rbp-120h] BYREF
  PVOID v48; // [rsp+90h] [rbp-118h] BYREF
  PVOID Object; // [rsp+98h] [rbp-110h] BYREF
  PVOID v50; // [rsp+A0h] [rbp-108h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-C8h]
  __int128 v54; // [rsp+F0h] [rbp-B8h]
  __int64 v55; // [rsp+100h] [rbp-A8h]
  struct _DMA_ADAPTER *v56; // [rsp+108h] [rbp-A0h] BYREF
  int v57; // [rsp+110h] [rbp-98h]
  int v58; // [rsp+114h] [rbp-94h]
  __int128 *v59; // [rsp+118h] [rbp-90h]
  int v60; // [rsp+120h] [rbp-88h]
  __int128 v61; // [rsp+124h] [rbp-84h]
  __int64 v62; // [rsp+134h] [rbp-74h]
  int v63; // [rsp+13Ch] [rbp-6Ch]
  _OWORD v64[2]; // [rsp+140h] [rbp-68h] BYREF

  v45 = KeySetInformationLength;
  Handle = KeyHandle;
  memset(v64, 0, sizeof(v64));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v64, 0x20000u);
  v37 = 0;
  DmaAdapter = 0LL;
  v38 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v46[1] = v46;
  v46[0] = v46;
  v42 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v24 = -1073741431;
    v25 = DmaAdapter;
LABEL_48:
    v18 = 0;
    v19 = 0;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
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
        v36 = 0;
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
            v26 = KeGetCurrentThread()->PreviousMode;
            v47 = 0LL;
            if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v26, &v47, 0LL) >= 0 )
            {
              DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v47 + 1);
              HalPutDmaAdapter((PADAPTER_OBJECT)v47);
            }
          }
        }
        v24 = -1073741821;
        v25 = DmaAdapter;
        v18 = 0;
        v19 = 0;
        goto LABEL_29;
      }
    }
    v36 = 1;
    goto LABEL_7;
  }
  v14 = 8;
  v36 = 1;
LABEL_8:
  if ( KeySetInformationLength == v14 )
  {
    v41 = 0LL;
    if ( PreviousMode )
    {
      v15 = (char *)KeySetInformation + v14;
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < KeySetInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(&v41, KeySetInformation, v14);
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
      v16 = 0;
    else
      v16 = 2;
    Object = 0LL;
    v24 = ObReferenceObjectByHandle(Handle, v16, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
    v25 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v24 == -1073741790 )
    {
      if ( !v36 )
      {
        v24 = -1073741790;
        v18 = 0;
        v19 = 0;
        goto LABEL_29;
      }
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      {
        v24 = -1073741790;
        v18 = 0;
        v19 = 0;
        goto LABEL_29;
      }
      v50 = 0LL;
      v24 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v39, &v50, 0LL);
      v25 = (struct _DMA_ADAPTER *)v50;
      DmaAdapter = (PADAPTER_OBJECT)v50;
      if ( v24 < 0 )
        goto LABEL_48;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v50) )
      {
        v24 = -1073741790;
        v18 = 0;
        v19 = 0;
        goto LABEL_29;
      }
      v24 = 0;
      v9 = 1LL;
      v38 = 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    v7 = v9;
    if ( v24 < 0 )
      goto LABEL_48;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v25 )
      DmaOperations = v25->DmaOperations;
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
    {
LABEL_20:
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      if ( CmpCallBackCount )
      {
        v25 = DmaAdapter;
        if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          *(_QWORD *)&v52 = DmaAdapter;
          DWORD2(v52) = KeySetInformationClass;
          *(_QWORD *)&v53 = KeySetInformation;
          DWORD2(v53) = v45;
          LOBYTE(v11) = 1;
          v24 = CmpCallCallBacksEx(3, (unsigned int)&v52, 0, v11, 18, (__int64)DmaAdapter, (__int64)v46);
          if ( v24 < 0 )
          {
            if ( v24 == -1073740541 )
              v24 = 0;
            v7 = v38;
            v18 = 0;
            goto LABEL_28;
          }
          v37 = 1;
        }
      }
      else
      {
        v25 = DmaAdapter;
      }
      if ( !v38
        || (v24 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v39, 2LL, &SubjectContext, &v42),
            v7 = v38,
            v25 = DmaAdapter,
            v24 >= 0) )
      {
        v7 = v38;
        if ( KeySetInformationClass != KeySetHandleTagsInformation )
        {
          if ( KeySetInformationClass )
          {
            v29 = KeySetInformationClass - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  if ( v31 != 1 )
                    goto LABEL_27;
                  v32 = (unsigned int)v41;
                  v33 = 4LL;
                }
                else
                {
                  v32 = (unsigned int)v41;
                  v33 = 3LL;
                }
              }
              else
              {
                v32 = (unsigned int)v41;
                v33 = 2LL;
              }
            }
            else
            {
              v32 = (unsigned int)v41;
              v33 = 1LL;
            }
            v34 = CmSetKeyFlags(v25, v33, v32);
          }
          else
          {
            v34 = CmSetLastWriteTimeKey(v25, &v41);
          }
          v24 = v34;
          goto LABEL_27;
        }
        v25[3].Size = v41;
        v24 = 0;
      }
LABEL_27:
      v18 = v37;
LABEL_28:
      v19 = 1;
      goto LABEL_29;
    }
    v28 = v25->DmaOperations;
    if ( (LODWORD(v28->PutDmaAdapter) & 0x80u) == 0 )
    {
      if ( (*((_DWORD *)v28->AllocateAdapterChannel + 40) & 0x100000) == 0 )
        goto LABEL_20;
      v24 = -1073741790;
      v18 = 0;
      v19 = 0;
    }
    else
    {
      v24 = -1073741790;
      v18 = 0;
      v19 = 0;
    }
  }
  else
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        v27 = KeGetCurrentThread()->PreviousMode;
        v48 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v27, &v48, 0LL) >= 0 )
        {
          DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v48 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v48);
        }
      }
    }
    v24 = -1073741820;
    v25 = DmaAdapter;
    v18 = 0;
    v19 = 0;
  }
LABEL_29:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v46[0] != v46 )
  {
    v58 = 0;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0;
    v56 = v25;
    v57 = v24;
    v60 = v24;
    v59 = &v52;
    CmpCallCallBacksEx(18, (unsigned int)&v56, 0, 0, 18, (__int64)v25, (__int64)v46);
    v24 = v60;
  }
  if ( v19 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v25 = DmaAdapter;
  }
  if ( v25 )
    HalPutDmaAdapter(v25);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v35 = DmaOperations;
    LOBYTE(v35) = 20;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v35,
      v64,
      (unsigned int)v24,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  return v24;
}

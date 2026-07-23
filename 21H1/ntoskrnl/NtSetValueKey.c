/*
 * XREFs of NtSetValueKey @ 0x140618C70
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A3E62C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A51024 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140A8A2D0 (InitSafeBoot.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x14061949C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  char v7; // r13
  char v8; // r12
  unsigned __int8 v9; // di
  char v10; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOLEAN v15; // r14
  signed __int8 v16; // al
  unsigned __int16 Length; // di
  ULONG v18; // ebx
  void *v19; // r15
  unsigned int v20; // r13d
  unsigned int v21; // r14d
  unsigned int v22; // esi
  unsigned int v23; // r12d
  __int64 v24; // rcx
  PPRIVILEGE_SET v25; // rsi
  size_t v26; // r8
  wchar_t *v27; // rdi
  char v28; // bl
  struct _KTHREAD *v29; // rax
  int v30; // r9d
  void *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // edi
  bool v40; // zf
  _DMA_OPERATIONS *v41; // rcx
  int v42; // [rsp+30h] [rbp-1A8h]
  unsigned __int8 v43; // [rsp+40h] [rbp-198h]
  BOOLEAN v44; // [rsp+41h] [rbp-197h]
  char v45; // [rsp+42h] [rbp-196h]
  NTSTATUS v46; // [rsp+44h] [rbp-194h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-188h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  void *Src; // [rsp+68h] [rbp-170h]
  void *v50; // [rsp+70h] [rbp-168h]
  int v51; // [rsp+78h] [rbp-160h] BYREF
  ULONG v52; // [rsp+7Ch] [rbp-15Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-158h]
  ULONG v54; // [rsp+88h] [rbp-150h]
  __int64 v55; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v56; // [rsp+98h] [rbp-140h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-138h]
  _QWORD v58[2]; // [rsp+A8h] [rbp-130h] BYREF
  struct _PRIVILEGE_SET *v59; // [rsp+B8h] [rbp-120h]
  __int128 v60; // [rsp+C0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v62[8]; // [rsp+F0h] [rbp-E8h] BYREF
  _OWORD v63[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v64[64]; // [rsp+150h] [rbp-88h] BYREF

  v52 = Type;
  v54 = TitleIndex;
  v56 = KeyHandle;
  Src = Data;
  DestinationString = 0LL;
  v55 = 0LL;
  memset(v63, 0, sizeof(v63));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v63, 0x20000u);
  v7 = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  v45 = 0;
  v58[1] = v58;
  v58[0] = v58;
  memset(v62, 0, sizeof(v62));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v50 = 0LL;
  v59 = 0LL;
  v51 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v43 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v44 = v15;
  if ( !v15 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    v39 = -1073741431;
    v46 = -1073741431;
LABEL_97:
    v28 = 0;
    goto LABEL_74;
  }
  v39 = CmObReferenceObjectByHandle((_DWORD)v56, 2, v13, v9, (__int64)&DmaAdapter, (__int64)&v55);
  v46 = v39;
  if ( v39 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v39 < 0 )
      goto LABEL_97;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v16 = v43;
    if ( v43 == 1 )
    {
      v60 = 0LL;
      v37 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v60) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v60 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v60;
      DestinationString.MaximumLength = v60;
      Length = v60;
      if ( (_WORD)v60 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v36 = (unsigned __int64)DestinationString.Buffer + (unsigned __int16)v60;
        if ( v36 > 0x7FFFFFFF0000LL || (wchar_t *)v36 < DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v18 = DataSize;
      v19 = Src;
      if ( DataSize && ((unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        Length = DestinationString.Length;
      }
    }
    else
    {
      DestinationString = *ValueName;
      v50 = 0LL;
      v18 = DataSize;
      if ( !DataSize )
      {
        Length = DestinationString.Length;
        v19 = Src;
        goto LABEL_19;
      }
      Length = DestinationString.Length;
      v19 = Src;
    }
    v16 = v43;
LABEL_19:
    if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v18 > 0x7FFFF000 )
    {
      v39 = -1073741811;
      v46 = -1073741811;
      v10 = v8;
      v28 = 0;
      goto LABEL_74;
    }
    v20 = Length;
    v21 = (Length + 7) & 0xFFFFFFF8;
    v22 = v21 + v18;
    if ( v21 + v18 < v18 )
    {
      v39 = -1073741811;
      v46 = -1073741811;
      v10 = v8;
      v15 = v44;
      v7 = 0;
      v28 = 0;
      goto LABEL_74;
    }
    v23 = v16;
    if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v16, DestinationString.Buffer)
      || (unsigned __int8)CmpDoesBufferRequireCapturing(v23, v19) )
    {
      if ( v22 )
      {
        if ( v22 <= 0x40 )
          goto LABEL_26;
        if ( v18 <= 0x40 )
        {
          if ( Length <= 0x40u && v18 < Length )
            v20 = v18;
        }
        else
        {
          v20 = Length > 0x40u ? v21 + v18 : v18;
        }
        if ( v20 )
        {
          Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v24, v20, 0x6E566D43u);
          if ( !Privileges )
          {
            v39 = -1073741670;
            v46 = -1073741670;
            v10 = v45;
            v15 = v44;
            v7 = 0;
            v28 = 0;
            goto LABEL_74;
          }
          Length = DestinationString.Length;
          if ( v20 == v18 )
          {
            v50 = v64;
            v25 = Privileges;
          }
          else
          {
            v50 = Privileges;
            if ( v20 == DestinationString.Length )
              v25 = (PPRIVILEGE_SET)v64;
            else
              v25 = (PPRIVILEGE_SET)((char *)Privileges + v21);
          }
        }
        else
        {
LABEL_26:
          v50 = v64;
          v25 = (PPRIVILEGE_SET)&v64[v21];
        }
      }
      else
      {
        v25 = v59;
      }
      if ( Length )
      {
        v26 = Length;
        v27 = (wchar_t *)v50;
        memmove(v50, DestinationString.Buffer, v26);
        DestinationString.Buffer = v27;
        Length = DestinationString.Length;
      }
      else
      {
        DestinationString.Buffer = 0LL;
      }
      if ( v18 )
      {
        memmove(v25, v19, v18);
        Src = v25;
        Length = DestinationString.Length;
      }
      else
      {
        Src = 0LL;
      }
    }
    if ( Length )
    {
      v36 = 65534LL;
      do
      {
        if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        v40 = Length == 2;
        Length -= 2;
        DestinationString.Length = Length;
      }
      while ( !v40 );
    }
    if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) != 0 )
    {
      v39 = -1073741790;
      v46 = -1073741790;
      v10 = v45;
      v7 = 0;
      v28 = 0;
      goto LABEL_73;
    }
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v31 = Src;
      v7 = 0;
    }
    else
    {
      v62[0] = DmaAdapter;
      v62[1] = &DestinationString;
      v62[2] = __PAIR64__(v52, v54);
      v31 = Src;
      v62[3] = Src;
      LODWORD(v62[4]) = v18;
      LOBYTE(v30) = 1;
      v39 = CmpCallCallBacksEx(1, (unsigned int)v62, 0, v30, 16, (__int64)DmaAdapter, (__int64)v58);
      if ( v39 < 0 )
      {
        if ( v39 == -1073740541 )
          v39 = 0;
        v46 = v39;
        v10 = v45;
        v7 = 0;
        goto LABEL_72;
      }
      v7 = 1;
    }
    if ( !v45
      || (v39 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v43, 2LL, &SubjectContext, &v51), v46 = v39,
                                                                                           v10 = v45,
                                                                                           v39 >= 0) )
    {
      LOBYTE(v42) = (v55 & 4) != 0;
      v39 = CmSetValueKey(DmaAdapter, &DestinationString, v52, v31, v18, v56, v42);
      v46 = v39;
      v10 = v45;
    }
LABEL_72:
    v28 = 1;
LABEL_73:
    v15 = v44;
    goto LABEL_74;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext) )
  {
    v39 = -1073741790;
    v46 = -1073741790;
    v28 = 0;
    goto LABEL_74;
  }
  v39 = CmObReferenceObjectByHandle((_DWORD)v56, 131097, v37, v43, (__int64)&DmaAdapter, (__int64)&v55);
  v46 = v39;
  if ( v39 < 0 )
    goto LABEL_97;
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
  {
    v8 = 1;
    v45 = 1;
    goto LABEL_6;
  }
  v39 = -1073741790;
  v46 = -1073741790;
  v28 = 0;
LABEL_74:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v39 = CmPostCallbackNotificationEx(16, (__int64)DmaAdapter, v39, (__int64)v62, 0LL, v58);
    v46 = v39;
  }
  if ( v28 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37, v38);
    v39 = v46;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v41 = DmaOperations;
    LOBYTE(v41) = 14;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v41,
      v63,
      (unsigned int)v39,
      0LL,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v15 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
    return v46;
  }
  return v39;
}

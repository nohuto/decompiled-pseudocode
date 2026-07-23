/*
 * XREFs of NtSetValueKey @ 0x14066DEB0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4A130 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A573A4 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140A5A548 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140A8F570 (InitSafeBoot.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032F6D4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x14066E6DC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
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
  int v12; // r8d
  BOOLEAN v13; // r14
  signed __int8 v14; // al
  unsigned __int16 Length; // di
  ULONG v16; // ebx
  void *v17; // r15
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // rcx
  PPRIVILEGE_SET v23; // rsi
  size_t v24; // r8
  wchar_t *v25; // rdi
  char v26; // bl
  struct _KTHREAD *v27; // rax
  void *v28; // r14
  int v30; // r8d
  int v31; // edi
  bool v32; // zf
  _DMA_OPERATIONS *v33; // rcx
  int v34; // [rsp+30h] [rbp-1A8h]
  unsigned __int8 v35; // [rsp+40h] [rbp-198h]
  BOOLEAN v36; // [rsp+41h] [rbp-197h]
  char v37; // [rsp+42h] [rbp-196h]
  NTSTATUS v38; // [rsp+44h] [rbp-194h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-188h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  void *Src; // [rsp+68h] [rbp-170h]
  void *v42; // [rsp+70h] [rbp-168h]
  int v43; // [rsp+78h] [rbp-160h] BYREF
  ULONG v44; // [rsp+7Ch] [rbp-15Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-158h]
  ULONG v46; // [rsp+88h] [rbp-150h]
  __int64 v47; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v48; // [rsp+98h] [rbp-140h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-138h]
  _QWORD v50[2]; // [rsp+A8h] [rbp-130h] BYREF
  struct _PRIVILEGE_SET *v51; // [rsp+B8h] [rbp-120h]
  __int128 v52; // [rsp+C0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v54[8]; // [rsp+F0h] [rbp-E8h] BYREF
  _OWORD v55[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v56[64]; // [rsp+150h] [rbp-88h] BYREF

  v44 = Type;
  v46 = TitleIndex;
  v48 = KeyHandle;
  Src = Data;
  DestinationString = 0LL;
  v47 = 0LL;
  memset(v55, 0, sizeof(v55));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v55, 0x20000u);
  v7 = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  v37 = 0;
  v50[1] = v50;
  v50[0] = v50;
  memset(v54, 0, sizeof(v54));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v42 = 0LL;
  v51 = 0LL;
  v43 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v35 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v36 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v31 = -1073741431;
    v38 = -1073741431;
LABEL_96:
    v26 = 0;
    goto LABEL_73;
  }
  v31 = CmObReferenceObjectByHandle((_DWORD)v48, 2, v12, v9, (__int64)&DmaAdapter, (__int64)&v47);
  v38 = v31;
  if ( v31 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v31 < 0 )
      goto LABEL_96;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v14 = v35;
    if ( v35 == 1 )
    {
      v52 = 0LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v52) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v52 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v52;
      DestinationString.MaximumLength = v52;
      Length = v52;
      if ( (_WORD)v52 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v52) > (wchar_t *)0x7FFFFFFF0000LL
          || (char *)DestinationString.Buffer + (unsigned __int16)v52 < (char *)DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v16 = DataSize;
      v17 = Src;
      if ( DataSize && ((unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        Length = DestinationString.Length;
      }
    }
    else
    {
      DestinationString = *ValueName;
      v42 = 0LL;
      v16 = DataSize;
      if ( !DataSize )
      {
        Length = DestinationString.Length;
        v17 = Src;
        goto LABEL_19;
      }
      Length = DestinationString.Length;
      v17 = Src;
    }
    v14 = v35;
LABEL_19:
    if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
    {
      v31 = -1073741811;
      v38 = -1073741811;
      v10 = v8;
      v26 = 0;
      goto LABEL_73;
    }
    v18 = Length;
    v19 = (Length + 7) & 0xFFFFFFF8;
    v20 = v19 + v16;
    if ( v19 + v16 < v16 )
    {
      v31 = -1073741811;
      v38 = -1073741811;
      v10 = v8;
      v13 = v36;
      v7 = 0;
      v26 = 0;
      goto LABEL_73;
    }
    v21 = v14;
    if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v14, DestinationString.Buffer)
      || (unsigned __int8)CmpDoesBufferRequireCapturing(v21, v17) )
    {
      if ( v20 )
      {
        if ( v20 <= 0x40 )
          goto LABEL_26;
        if ( v16 <= 0x40 )
        {
          if ( Length <= 0x40u && v16 < Length )
            v18 = v16;
        }
        else
        {
          v18 = Length > 0x40u ? v19 + v16 : v16;
        }
        if ( v18 )
        {
          Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v22, v18, 0x6E566D43u);
          if ( !Privileges )
          {
            v31 = -1073741670;
            v38 = -1073741670;
            v10 = v37;
            v13 = v36;
            v7 = 0;
            v26 = 0;
            goto LABEL_73;
          }
          Length = DestinationString.Length;
          if ( v18 == v16 )
          {
            v42 = v56;
            v23 = Privileges;
          }
          else
          {
            v42 = Privileges;
            if ( v18 == DestinationString.Length )
              v23 = (PPRIVILEGE_SET)v56;
            else
              v23 = (PPRIVILEGE_SET)((char *)Privileges + v19);
          }
        }
        else
        {
LABEL_26:
          v42 = v56;
          v23 = (PPRIVILEGE_SET)&v56[v19];
        }
      }
      else
      {
        v23 = v51;
      }
      if ( Length )
      {
        v24 = Length;
        v25 = (wchar_t *)v42;
        memmove(v42, DestinationString.Buffer, v24);
        DestinationString.Buffer = v25;
        Length = DestinationString.Length;
      }
      else
      {
        DestinationString.Buffer = 0LL;
      }
      if ( v16 )
      {
        memmove(v23, v17, v16);
        Src = v23;
        Length = DestinationString.Length;
      }
      else
      {
        Src = 0LL;
      }
    }
    if ( Length )
    {
      do
      {
        if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        v32 = Length == 2;
        Length -= 2;
        DestinationString.Length = Length;
      }
      while ( !v32 );
    }
    if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) != 0 )
    {
      v31 = -1073741790;
      v38 = -1073741790;
      v10 = v37;
      v7 = 0;
      v26 = 0;
      goto LABEL_72;
    }
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v28 = Src;
      v7 = 0;
    }
    else
    {
      v54[0] = DmaAdapter;
      v54[1] = &DestinationString;
      v54[2] = __PAIR64__(v44, v46);
      v28 = Src;
      v54[3] = Src;
      LODWORD(v54[4]) = v16;
      v31 = CmpCallCallBacksEx(1u, (__int64)v54, 0LL, 1, 0x10u, (__int64)DmaAdapter, (__int64)v50);
      if ( v31 < 0 )
      {
        if ( v31 == -1073740541 )
          v31 = 0;
        v38 = v31;
        v10 = v37;
        v7 = 0;
        goto LABEL_71;
      }
      v7 = 1;
    }
    if ( !v37
      || (v31 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v35, 2LL, &SubjectContext, &v43), v38 = v31,
                                                                                           v10 = v37,
                                                                                           v31 >= 0) )
    {
      LOBYTE(v34) = (v47 & 4) != 0;
      v31 = CmSetValueKey(DmaAdapter, &DestinationString, v44, v28, v16, v48, v34);
      v38 = v31;
      v10 = v37;
    }
LABEL_71:
    v26 = 1;
LABEL_72:
    v13 = v36;
    goto LABEL_73;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext) )
  {
    v31 = -1073741790;
    v38 = -1073741790;
    v26 = 0;
    goto LABEL_73;
  }
  v31 = CmObReferenceObjectByHandle((_DWORD)v48, 131097, v30, v35, (__int64)&DmaAdapter, (__int64)&v47);
  v38 = v31;
  if ( v31 < 0 )
    goto LABEL_96;
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
  {
    v8 = 1;
    v37 = 1;
    goto LABEL_6;
  }
  v31 = -1073741790;
  v38 = -1073741790;
  v26 = 0;
LABEL_73:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v31 = CmPostCallbackNotificationEx(0x10u, (__int64)DmaAdapter, v31, (__int64)v54, 0LL, v50);
    v38 = v31;
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v31 = v38;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v33 = DmaOperations;
    LOBYTE(v33) = 14;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v33,
      v55,
      (unsigned int)v31,
      0LL,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v13 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v38;
  }
  return v31;
}

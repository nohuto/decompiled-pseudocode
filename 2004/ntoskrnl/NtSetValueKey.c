/*
 * XREFs of NtSetValueKey @ 0x1405E3650
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x140948A40 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A43E90 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A56D24 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140A66F78 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140A89860 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14035E9E4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405E3E7C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140710CFC (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
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
  int v28; // r9d
  void *v29; // r14
  int v31; // r8d
  NTSTATUS v32; // edi
  bool v33; // zf
  _DMA_OPERATIONS *v34; // rcx
  int v35; // [rsp+30h] [rbp-1A8h]
  unsigned __int8 v36; // [rsp+40h] [rbp-198h]
  BOOLEAN v37; // [rsp+41h] [rbp-197h]
  char v38; // [rsp+42h] [rbp-196h]
  NTSTATUS v39; // [rsp+44h] [rbp-194h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-188h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  void *Src; // [rsp+68h] [rbp-170h]
  void *v43; // [rsp+70h] [rbp-168h]
  int v44; // [rsp+78h] [rbp-160h] BYREF
  ULONG v45; // [rsp+7Ch] [rbp-15Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-158h]
  ULONG v47; // [rsp+88h] [rbp-150h]
  __int64 v48; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v49; // [rsp+98h] [rbp-140h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-138h]
  _QWORD v51[2]; // [rsp+A8h] [rbp-130h] BYREF
  struct _PRIVILEGE_SET *v52; // [rsp+B8h] [rbp-120h]
  __int128 v53; // [rsp+C0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v55[8]; // [rsp+F0h] [rbp-E8h] BYREF
  _OWORD v56[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v57[64]; // [rsp+150h] [rbp-88h] BYREF

  v45 = Type;
  v47 = TitleIndex;
  v49 = KeyHandle;
  Src = Data;
  DestinationString = 0LL;
  v48 = 0LL;
  memset(v56, 0, sizeof(v56));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v56, 0x20000u);
  v7 = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  v38 = 0;
  v51[1] = v51;
  v51[0] = v51;
  memset(v55, 0, sizeof(v55));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v43 = 0LL;
  v52 = 0LL;
  v44 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v36 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v37 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v32 = -1073741431;
    v39 = -1073741431;
LABEL_96:
    v26 = 0;
    goto LABEL_73;
  }
  v32 = CmObReferenceObjectByHandle((_DWORD)v49, 2, v12, v9, (__int64)&DmaAdapter, (__int64)&v48);
  v39 = v32;
  if ( v32 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v32 < 0 )
      goto LABEL_96;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v14 = v36;
    if ( v36 == 1 )
    {
      v53 = 0LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v53) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v53 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v53;
      DestinationString.MaximumLength = v53;
      Length = v53;
      if ( (_WORD)v53 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v53) > (wchar_t *)0x7FFFFFFF0000LL
          || (char *)DestinationString.Buffer + (unsigned __int16)v53 < (char *)DestinationString.Buffer )
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
      v43 = 0LL;
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
    v14 = v36;
LABEL_19:
    if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
    {
      v32 = -1073741811;
      v39 = -1073741811;
      v10 = v8;
      v26 = 0;
      goto LABEL_73;
    }
    v18 = Length;
    v19 = (Length + 7) & 0xFFFFFFF8;
    v20 = v19 + v16;
    if ( v19 + v16 < v16 )
    {
      v32 = -1073741811;
      v39 = -1073741811;
      v10 = v8;
      v13 = v37;
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
            v32 = -1073741670;
            v39 = -1073741670;
            v10 = v38;
            v13 = v37;
            v7 = 0;
            v26 = 0;
            goto LABEL_73;
          }
          Length = DestinationString.Length;
          if ( v18 == v16 )
          {
            v43 = v57;
            v23 = Privileges;
          }
          else
          {
            v43 = Privileges;
            if ( v18 == DestinationString.Length )
              v23 = (PPRIVILEGE_SET)v57;
            else
              v23 = (PPRIVILEGE_SET)((char *)Privileges + v19);
          }
        }
        else
        {
LABEL_26:
          v43 = v57;
          v23 = (PPRIVILEGE_SET)&v57[v19];
        }
      }
      else
      {
        v23 = v52;
      }
      if ( Length )
      {
        v24 = Length;
        v25 = (wchar_t *)v43;
        memmove(v43, DestinationString.Buffer, v24);
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
        v33 = Length == 2;
        Length -= 2;
        DestinationString.Length = Length;
      }
      while ( !v33 );
    }
    if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) != 0 )
    {
      v32 = -1073741790;
      v39 = -1073741790;
      v10 = v38;
      v7 = 0;
      v26 = 0;
      goto LABEL_72;
    }
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v29 = Src;
      v7 = 0;
    }
    else
    {
      v55[0] = DmaAdapter;
      v55[1] = &DestinationString;
      v55[2] = __PAIR64__(v45, v47);
      v29 = Src;
      v55[3] = Src;
      LODWORD(v55[4]) = v16;
      LOBYTE(v28) = 1;
      v32 = CmpCallCallBacksEx(1, (unsigned int)v55, 0, v28, 16, (__int64)DmaAdapter, (__int64)v51);
      if ( v32 < 0 )
      {
        if ( v32 == -1073740541 )
          v32 = 0;
        v39 = v32;
        v10 = v38;
        v7 = 0;
        goto LABEL_71;
      }
      v7 = 1;
    }
    if ( !v38
      || (v32 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v36, 2LL, &SubjectContext, &v44), v39 = v32,
                                                                                           v10 = v38,
                                                                                           v32 >= 0) )
    {
      LOBYTE(v35) = (v48 & 4) != 0;
      v32 = CmSetValueKey(DmaAdapter, &DestinationString, v45, v29, v16, v49, v35);
      v39 = v32;
      v10 = v38;
    }
LABEL_71:
    v26 = 1;
LABEL_72:
    v13 = v37;
    goto LABEL_73;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext) )
  {
    v32 = -1073741790;
    v39 = -1073741790;
    v26 = 0;
    goto LABEL_73;
  }
  v32 = CmObReferenceObjectByHandle((_DWORD)v49, 131097, v31, v36, (__int64)&DmaAdapter, (__int64)&v48);
  v39 = v32;
  if ( v32 < 0 )
    goto LABEL_96;
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter) )
  {
    v8 = 1;
    v38 = 1;
    goto LABEL_6;
  }
  v32 = -1073741790;
  v39 = -1073741790;
  v26 = 0;
LABEL_73:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v32 = CmPostCallbackNotificationEx(16, (_DWORD)DmaAdapter, v32, (unsigned int)v55, 0LL, (__int64)v51);
    v39 = v32;
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v32 = v39;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v34 = DmaOperations;
    LOBYTE(v34) = 14;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v34,
      v56,
      (unsigned int)v32,
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
    return v39;
  }
  return v32;
}

/*
 * XREFs of NtSetValueKey @ 0x140658BE0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4308C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A599C8 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140A625B8 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140A8D3D0 (InitSafeBoot.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x14024FB14 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140621E0C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x14065940C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  NTSTATUS v39; // edi
  bool v40; // zf
  _DMA_OPERATIONS *v41; // rcx
  unsigned __int8 v42; // [rsp+40h] [rbp-198h]
  BOOLEAN v43; // [rsp+41h] [rbp-197h]
  char v44; // [rsp+42h] [rbp-196h]
  NTSTATUS v45; // [rsp+44h] [rbp-194h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-188h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  void *Src; // [rsp+68h] [rbp-170h]
  void *v49; // [rsp+70h] [rbp-168h]
  int v50; // [rsp+78h] [rbp-160h]
  ULONG v51; // [rsp+7Ch] [rbp-15Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-158h]
  ULONG v53; // [rsp+88h] [rbp-150h]
  __int64 v54; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v55; // [rsp+98h] [rbp-140h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-138h]
  _QWORD v57[2]; // [rsp+A8h] [rbp-130h] BYREF
  struct _PRIVILEGE_SET *v58; // [rsp+B8h] [rbp-120h]
  __int128 v59; // [rsp+C0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v61[8]; // [rsp+F0h] [rbp-E8h] BYREF
  _OWORD v62[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v63[64]; // [rsp+150h] [rbp-88h] BYREF

  v51 = Type;
  v53 = TitleIndex;
  v55 = KeyHandle;
  Src = Data;
  DestinationString = 0LL;
  v54 = 0LL;
  memset(v62, 0, sizeof(v62));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v62, 0x20000u);
  v7 = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  v44 = 0;
  v57[1] = v57;
  v57[0] = v57;
  memset(v61, 0, sizeof(v61));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v49 = 0LL;
  v58 = 0LL;
  v50 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v42 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v43 = v15;
  if ( !v15 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    v39 = -1073741431;
    v45 = -1073741431;
LABEL_97:
    v28 = 0;
    goto LABEL_74;
  }
  v39 = CmObReferenceObjectByHandle((_DWORD)v55, 2, v13, v9, (__int64)&DmaAdapter, (__int64)&v54);
  v45 = v39;
  if ( v39 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v39 < 0 )
      goto LABEL_97;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v16 = v42;
    if ( v42 == 1 )
    {
      v59 = 0LL;
      v37 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v59) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v59 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v59;
      DestinationString.MaximumLength = v59;
      Length = v59;
      if ( (_WORD)v59 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v36 = (unsigned __int64)DestinationString.Buffer + (unsigned __int16)v59;
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
      v49 = 0LL;
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
    v16 = v42;
LABEL_19:
    if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v18 > 0x7FFFF000 )
    {
      v39 = -1073741811;
      v45 = -1073741811;
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
      v45 = -1073741811;
      v10 = v8;
      v15 = v43;
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
            v45 = -1073741670;
            v10 = v44;
            v15 = v43;
            v7 = 0;
            v28 = 0;
            goto LABEL_74;
          }
          Length = DestinationString.Length;
          if ( v20 == v18 )
          {
            v49 = v63;
            v25 = Privileges;
          }
          else
          {
            v49 = Privileges;
            if ( v20 == DestinationString.Length )
              v25 = (PPRIVILEGE_SET)v63;
            else
              v25 = (PPRIVILEGE_SET)((char *)Privileges + v21);
          }
        }
        else
        {
LABEL_26:
          v49 = v63;
          v25 = (PPRIVILEGE_SET)&v63[v21];
        }
      }
      else
      {
        v25 = v58;
      }
      if ( Length )
      {
        v26 = Length;
        v27 = (wchar_t *)v49;
        memmove(v49, DestinationString.Buffer, v26);
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
      v45 = -1073741790;
      v10 = v44;
      v7 = 0;
      v28 = 0;
      goto LABEL_73;
    }
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v31 = (int)Src;
      v7 = 0;
    }
    else
    {
      v61[0] = DmaAdapter;
      v61[1] = &DestinationString;
      v61[2] = __PAIR64__(v51, v53);
      v31 = (int)Src;
      v61[3] = Src;
      LODWORD(v61[4]) = v18;
      LOBYTE(v30) = 1;
      v39 = CmpCallCallBacksEx(1, (unsigned int)v61, 0, v30, 16, (__int64)DmaAdapter, (__int64)v57);
      if ( v39 < 0 )
      {
        if ( v39 == -1073740541 )
          v39 = 0;
        v45 = v39;
        v10 = v44;
        v7 = 0;
        goto LABEL_72;
      }
      v7 = 1;
    }
    if ( !v44
      || (v39 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v42, 2u, (__int64)&SubjectContext),
          v45 = v39,
          v10 = v44,
          v39 >= 0) )
    {
      v39 = CmSetValueKey(
              (_DWORD)DmaAdapter,
              (unsigned int)&DestinationString,
              v51,
              v31,
              v18,
              (__int64)v55,
              (v54 & 4) != 0);
      v45 = v39;
      v10 = v44;
    }
LABEL_72:
    v28 = 1;
LABEL_73:
    v15 = v43;
    goto LABEL_74;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext) )
  {
    v39 = -1073741790;
    v45 = -1073741790;
    v28 = 0;
    goto LABEL_74;
  }
  v39 = CmObReferenceObjectByHandle((_DWORD)v55, 131097, v37, v42, (__int64)&DmaAdapter, (__int64)&v54);
  v45 = v39;
  if ( v39 < 0 )
    goto LABEL_97;
  if ( CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter) )
  {
    v8 = 1;
    v44 = 1;
    goto LABEL_6;
  }
  v39 = -1073741790;
  v45 = -1073741790;
  v28 = 0;
LABEL_74:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v39 = CmPostCallbackNotificationEx(16, (_DWORD)DmaAdapter, v39, (unsigned int)v61, 0LL, (__int64)v57);
    v45 = v39;
  }
  if ( v28 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37, v38);
    v39 = v45;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v41 = DmaOperations;
    LOBYTE(v41) = 14;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v41,
      v62,
      (unsigned int)v39,
      0LL,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v15 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
    return v45;
  }
  return v39;
}

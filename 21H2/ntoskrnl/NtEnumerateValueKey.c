/*
 * XREFs of NtEnumerateValueKey @ 0x1406E4050
 * Callers:
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1406E45D0 (CmpBounceContextCleanup.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F570 (CmEnumerateValueKeyFromMergedView.c)
 */

NTSTATUS __cdecl NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  BOOLEAN v12; // di
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r15d
  struct _DMA_ADAPTER *v16; // rcx
  ULONG v17; // edi
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // r9d
  int v21; // eax
  ULONG v22; // eax
  struct _KTHREAD *v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  NTSTATUS v30; // ebx
  _DMA_OPERATIONS *v31; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  BOOLEAN v33; // [rsp+50h] [rbp-1E8h]
  char v34; // [rsp+51h] [rbp-1E7h]
  char v35; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  ULONG v40; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v41; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v42; // [rsp+80h] [rbp-1B8h]
  _QWORD v43[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v44; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v46; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v47; // [rsp+B0h] [rbp-188h] BYREF
  NTSTATUS v48; // [rsp+B8h] [rbp-180h]
  int v49; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v50; // [rsp+C0h] [rbp-178h]
  NTSTATUS v51; // [rsp+C8h] [rbp-170h]
  __int128 v52; // [rsp+CCh] [rbp-16Ch]
  __int64 v53; // [rsp+DCh] [rbp-15Ch]
  int v54; // [rsp+E4h] [rbp-154h]
  _QWORD v55[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v56[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v57[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v59; // [rsp+1A0h] [rbp-98h]
  _BYTE v60[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = Index;
  v40 = Index;
  memset(v57, 0, sizeof(v57));
  memset(v60, 0, sizeof(v60));
  memset(v56, 0, sizeof(v56));
  DmaOperations = 0LL;
  v42 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v56, 0x20000u);
  v34 = 0;
  v35 = 0;
  memset(v55, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v38) = 0;
  *(_OWORD *)Src = 0LL;
  v59 = 0;
  v43[1] = v43;
  v43[0] = v43;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v33 = v12;
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, v14);
    v30 = -1073741431;
    v31 = 0LL;
    goto LABEL_39;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v44 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v44, 0LL) >= 0) )
    {
      v31 = (_DMA_OPERATIONS *)*((_QWORD *)v44 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v44);
    }
    else
    {
      v31 = 0LL;
    }
    v30 = -1073741811;
    goto LABEL_39;
  }
  v15 = KeGetCurrentThread()->PreviousMode;
  v55[8] = 0LL;
  Object = 0LL;
  v30 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v15, &Object, 0LL);
  v16 = (struct _DMA_ADAPTER *)Object;
  v46 = Object;
  if ( v30 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v16 = 0LL;
      v46 = 0LL;
      v30 = 0;
    }
    else
    {
      v30 = -1073741816;
    }
  }
  if ( v16 )
    HalPutDmaAdapter(v16);
  if ( v30 < 0 )
  {
    v8 = Index;
    v31 = 0LL;
    goto LABEL_39;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v42 = DmaOperations;
  }
  if ( (_BYTE)v15 == 1 )
  {
    v17 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v18 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    v17 = Length;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v35 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v55[0] = DmaAdapter;
    v55[1] = __PAIR64__(KeyValueInformationClass, Index);
    v55[2] = KeyValueInformation;
    LODWORD(v55[3]) = v17;
    v55[4] = ResultLength;
    LOBYTE(v20) = 1;
    v21 = CmpCallCallBacksEx(6, (unsigned int)v55, 0, v20, 21, (__int64)DmaAdapter, (__int64)v43);
    v30 = v21;
    if ( v21 < 0 )
    {
      v12 = v33;
      v8 = Index;
      v31 = DmaOperations;
      if ( v21 == -1073740541 )
        v30 = 0;
      goto LABEL_39;
    }
    v34 = 1;
  }
  v30 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, v15, 1, &v41);
  if ( v30 < 0
    || (v30 = CmpBounceContextStart((__int64)Src, (unsigned __int64)KeyValueInformation, v17, v15, 1), v30 < 0) )
  {
    v8 = Index;
LABEL_57:
    v31 = DmaOperations;
    v12 = v33;
    goto LABEL_39;
  }
  if ( v41 )
  {
    CmpAttachToRegistryProcess(v57);
    v8 = Index;
    v30 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v41,
            0,
            Index,
            KeyValueInformationClass,
            (size_t)Src[1],
            v17,
            (__int64)&v38,
            0LL);
    KiUnstackDetachProcess((__int64)v57, 0LL);
  }
  else
  {
    v8 = Index;
    v30 = CmEnumerateValueKey(DmaAdapter, Index, (unsigned int)KeyValueInformationClass, Src[1], v17, &v38);
  }
  if ( v30 < 0 && v30 != -2147483643 && v30 != -1073741789 )
    goto LABEL_57;
  v22 = v38;
  *ResultLength = v38;
  if ( v30 != -1073741789 )
  {
    if ( v17 >= v22 )
      v17 = v22;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v17);
  }
  v12 = v33;
  v31 = DmaOperations;
LABEL_39:
  if ( v41 )
    HalPutDmaAdapter(v41);
  if ( v34
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v43[0] != v43 )
  {
    v49 = 0;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0;
    v47 = DmaAdapter;
    v48 = v30;
    v51 = v30;
    v50 = v55;
    CmpCallCallBacksEx(21, (unsigned int)&v47, 0, 0, 21, (__int64)DmaAdapter, (__int64)v43);
    v30 = v51;
  }
  if ( v35 )
  {
    v23 = KeGetCurrentThread();
    if ( v23->KernelApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v25) = 18;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v25,
      v56,
      (unsigned int)v30,
      v8,
      v31,
      0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
  }
  return v30;
}

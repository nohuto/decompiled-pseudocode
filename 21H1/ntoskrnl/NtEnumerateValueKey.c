/*
 * XREFs of NtEnumerateValueKey @ 0x14061E420
 * Callers:
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x14061E9A0 (CmpBounceContextCleanup.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
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
  void *v11; // rdx
  BOOLEAN v12; // di
  __int64 v13; // r8
  _DWORD *v14; // r9
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
  __int64 v33; // r8
  _DWORD *v34; // r9
  BOOLEAN v35; // [rsp+50h] [rbp-1E8h]
  char v36; // [rsp+51h] [rbp-1E7h]
  char v37; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  ULONG v42; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v43; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v44; // [rsp+80h] [rbp-1B8h]
  _QWORD v45[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v46; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v48; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v49; // [rsp+B0h] [rbp-188h] BYREF
  NTSTATUS v50; // [rsp+B8h] [rbp-180h]
  int v51; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v52; // [rsp+C0h] [rbp-178h]
  NTSTATUS v53; // [rsp+C8h] [rbp-170h]
  __int128 v54; // [rsp+CCh] [rbp-16Ch]
  __int64 v55; // [rsp+DCh] [rbp-15Ch]
  int v56; // [rsp+E4h] [rbp-154h]
  _QWORD v57[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v58[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v59[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v61; // [rsp+1A0h] [rbp-98h]
  _BYTE v62[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = Index;
  v42 = Index;
  memset(v59, 0, sizeof(v59));
  memset(v62, 0, sizeof(v62));
  memset(v58, 0, sizeof(v58));
  DmaOperations = 0LL;
  v44 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v58, 0x20000u);
  v36 = 0;
  v37 = 0;
  memset(v57, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v40) = 0;
  *(_OWORD *)Src = 0LL;
  v61 = 0;
  v45[1] = v45;
  v45[0] = v45;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v35 = v12;
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v11, v13, (__int64)v14);
    v30 = -1073741431;
    v31 = 0LL;
    goto LABEL_39;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v46 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v46, 0LL) >= 0) )
    {
      v31 = (_DMA_OPERATIONS *)*((_QWORD *)v46 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v46);
    }
    else
    {
      v31 = 0LL;
    }
    v30 = -1073741811;
    goto LABEL_39;
  }
  v15 = KeGetCurrentThread()->PreviousMode;
  v57[8] = 0LL;
  Object = 0LL;
  v30 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v15, &Object, 0LL);
  v16 = (struct _DMA_ADAPTER *)Object;
  v48 = Object;
  if ( v30 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v16 = 0LL;
      v48 = 0LL;
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
    v44 = DmaOperations;
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
  v37 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v57[0] = DmaAdapter;
    v57[1] = __PAIR64__(KeyValueInformationClass, Index);
    v57[2] = KeyValueInformation;
    LODWORD(v57[3]) = v17;
    v57[4] = ResultLength;
    LOBYTE(v20) = 1;
    v21 = CmpCallCallBacksEx(6, (unsigned int)v57, 0, v20, 21, (__int64)DmaAdapter, (__int64)v45);
    v30 = v21;
    if ( v21 < 0 )
    {
      v12 = v35;
      v8 = Index;
      v31 = DmaOperations;
      if ( v21 == -1073740541 )
        v30 = 0;
      goto LABEL_39;
    }
    v36 = 1;
  }
  v30 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v15, 1, &v43);
  if ( v30 < 0 || (v30 = CmpBounceContextStart((__int64)Src, KeyValueInformation, v17, v15, 1), v30 < 0) )
  {
    v8 = Index;
LABEL_57:
    v31 = DmaOperations;
    v12 = v35;
    goto LABEL_39;
  }
  if ( v43 )
  {
    CmpAttachToRegistryProcess(v59);
    v8 = Index;
    v30 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v43,
            0,
            Index,
            KeyValueInformationClass,
            (size_t)Src[1],
            v17,
            (__int64)&v40,
            0LL);
    KiUnstackDetachProcess((__int64)v59, 0LL, v33, v34);
  }
  else
  {
    v8 = Index;
    v30 = CmEnumerateValueKey(DmaAdapter, Index, (unsigned int)KeyValueInformationClass, Src[1], v17, &v40);
  }
  if ( v30 < 0 && v30 != -2147483643 && v30 != -1073741789 )
    goto LABEL_57;
  v22 = v40;
  *ResultLength = v40;
  if ( v30 != -1073741789 )
  {
    if ( v17 >= v22 )
      v17 = v22;
    v11 = Src[1];
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v17);
  }
  v12 = v35;
  v31 = DmaOperations;
LABEL_39:
  if ( v43 )
    HalPutDmaAdapter(v43);
  if ( v36
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v45[0] != v45 )
  {
    v51 = 0;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0;
    v49 = DmaAdapter;
    v50 = v30;
    v53 = v30;
    v52 = v57;
    CmpCallCallBacksEx(21, (unsigned int)&v49, 0, 0, 21, (__int64)DmaAdapter, (__int64)v45);
    v30 = v53;
  }
  if ( v37 )
  {
    v23 = KeGetCurrentThread();
    if ( v23->KernelApcDisable++ == -1
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v23, (__int64)v11, v13, v14);
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
      v58,
      (unsigned int)v30,
      v8,
      v31,
      0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
  }
  return v30;
}

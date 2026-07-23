/*
 * XREFs of NtEnumerateValueKey @ 0x1406775B0
 * Callers:
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x140677B30 (CmpBounceContextCleanup.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
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
  BOOLEAN v11; // di
  int v12; // r15d
  struct _DMA_ADAPTER *v13; // rcx
  ULONG v14; // edi
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  int v17; // eax
  ULONG v18; // eax
  struct _KTHREAD *v19; // rcx
  __int64 v21; // rcx
  NTSTATUS v23; // ebx
  _DMA_OPERATIONS *v24; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  BOOLEAN v26; // [rsp+50h] [rbp-1E8h]
  char v27; // [rsp+51h] [rbp-1E7h]
  char v28; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  ULONG v33; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v34; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v35; // [rsp+80h] [rbp-1B8h]
  _QWORD v36[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v37; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v39; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v40; // [rsp+B0h] [rbp-188h] BYREF
  NTSTATUS v41; // [rsp+B8h] [rbp-180h]
  int v42; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v43; // [rsp+C0h] [rbp-178h]
  NTSTATUS v44; // [rsp+C8h] [rbp-170h]
  __int128 v45; // [rsp+CCh] [rbp-16Ch]
  __int64 v46; // [rsp+DCh] [rbp-15Ch]
  int v47; // [rsp+E4h] [rbp-154h]
  _QWORD v48[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v49[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v50[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v52; // [rsp+1A0h] [rbp-98h]
  _BYTE v53[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = Index;
  v33 = Index;
  memset(v50, 0, sizeof(v50));
  memset(v53, 0, sizeof(v53));
  memset(v49, 0, sizeof(v49));
  DmaOperations = 0LL;
  v35 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v49, 0x20000u);
  v27 = 0;
  v28 = 0;
  memset(v48, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v31) = 0;
  *(_OWORD *)Src = 0LL;
  v52 = 0;
  v36[1] = v36;
  v36[0] = v36;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v26 = v11;
  if ( !v11 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = -1073741431;
    v24 = 0LL;
    goto LABEL_39;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v37 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v37, 0LL) >= 0) )
    {
      v24 = (_DMA_OPERATIONS *)*((_QWORD *)v37 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v37);
    }
    else
    {
      v24 = 0LL;
    }
    v23 = -1073741811;
    goto LABEL_39;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v48[8] = 0LL;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v12, &Object, 0LL);
  v13 = (struct _DMA_ADAPTER *)Object;
  v39 = Object;
  if ( v23 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v13 = 0LL;
      v39 = 0LL;
      v23 = 0;
    }
    else
    {
      v23 = -1073741816;
    }
  }
  if ( v13 )
    HalPutDmaAdapter(v13);
  if ( v23 < 0 )
  {
    v8 = Index;
    v24 = 0LL;
    goto LABEL_39;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v35 = DmaOperations;
  }
  if ( (_BYTE)v12 == 1 )
  {
    v14 = Length;
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
    v15 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = Length;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v28 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v48[0] = DmaAdapter;
    v48[1] = __PAIR64__(KeyValueInformationClass, Index);
    v48[2] = KeyValueInformation;
    LODWORD(v48[3]) = v14;
    v48[4] = ResultLength;
    v17 = CmpCallCallBacksEx(6u, (__int64)v48, 0LL, 1, 0x15u, (__int64)DmaAdapter, (__int64)v36);
    v23 = v17;
    if ( v17 < 0 )
    {
      v11 = v26;
      v8 = Index;
      v24 = DmaOperations;
      if ( v17 == -1073740541 )
        v23 = 0;
      goto LABEL_39;
    }
    v27 = 1;
  }
  v23 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v12, 1, &v34);
  if ( v23 < 0 || (v23 = CmpBounceContextStart((__int64)Src, KeyValueInformation, v14, v12, 1), v23 < 0) )
  {
    v8 = Index;
LABEL_57:
    v24 = DmaOperations;
    v11 = v26;
    goto LABEL_39;
  }
  if ( v34 )
  {
    CmpAttachToRegistryProcess(v50);
    v8 = Index;
    v23 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v34,
            0,
            Index,
            KeyValueInformationClass,
            (size_t)Src[1],
            v14,
            (__int64)&v31,
            0LL);
    KiUnstackDetachProcess((__int64)v50, 0);
  }
  else
  {
    v8 = Index;
    v23 = CmEnumerateValueKey(DmaAdapter, Index, (unsigned int)KeyValueInformationClass, Src[1], v14, &v31);
  }
  if ( v23 < 0 && v23 != -2147483643 && v23 != -1073741789 )
    goto LABEL_57;
  v18 = v31;
  *ResultLength = v31;
  if ( v23 != -1073741789 )
  {
    if ( v14 >= v18 )
      v14 = v18;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v14);
  }
  v11 = v26;
  v24 = DmaOperations;
LABEL_39:
  if ( v34 )
    HalPutDmaAdapter(v34);
  if ( v27
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v36[0] != v36 )
  {
    v42 = 0;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    v40 = DmaAdapter;
    v41 = v23;
    v44 = v23;
    v43 = v48;
    CmpCallCallBacksEx(0x15u, (__int64)&v40, 0LL, 0, 0x15u, (__int64)DmaAdapter, (__int64)v36);
    v23 = v44;
  }
  if ( v28 )
  {
    v19 = KeGetCurrentThread();
    if ( v19->KernelApcDisable++ == -1
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v19);
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v21) = 18;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v21,
      v49,
      (unsigned int)v23,
      v8,
      v24,
      0LL);
  }
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v23;
}

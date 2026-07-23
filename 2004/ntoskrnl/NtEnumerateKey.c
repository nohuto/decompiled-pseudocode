/*
 * XREFs of NtEnumerateKey @ 0x140672B00
 * Callers:
 *     AdtpObjsInitialize @ 0x1407AAC70 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x140948A40 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpBounceContextStart @ 0x1405E8CC0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405E9380 (CmpBounceContextCleanup.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r14d
  struct _DMA_ADAPTER *v12; // rcx
  ULONG v13; // edi
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rax
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  NTSTATUS v20; // ebx
  _DMA_OPERATIONS *v21; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  char v23; // [rsp+40h] [rbp-1B8h]
  char v24; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v25; // [rsp+42h] [rbp-1B6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1B0h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+50h] [rbp-1A8h]
  unsigned int v29[4]; // [rsp+58h] [rbp-1A0h] BYREF
  _DMA_OPERATIONS *v30; // [rsp+68h] [rbp-190h]
  PADAPTER_OBJECT v31; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v33; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v35; // [rsp+98h] [rbp-160h]
  PADAPTER_OBJECT v36; // [rsp+A0h] [rbp-158h] BYREF
  NTSTATUS v37; // [rsp+A8h] [rbp-150h]
  int v38; // [rsp+ACh] [rbp-14Ch]
  _QWORD *v39; // [rsp+B0h] [rbp-148h]
  NTSTATUS v40; // [rsp+B8h] [rbp-140h]
  __int128 v41; // [rsp+BCh] [rbp-13Ch]
  __int64 v42; // [rsp+CCh] [rbp-12Ch]
  int v43; // [rsp+D4h] [rbp-124h]
  _QWORD v44[9]; // [rsp+E0h] [rbp-118h] BYREF
  _OWORD v45[2]; // [rsp+128h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+150h] [rbp-A8h] BYREF
  char v47; // [rsp+160h] [rbp-98h]
  _BYTE v48[71]; // [rsp+161h] [rbp-97h] BYREF

  v8 = Index;
  v29[2] = Index;
  memset(v48, 0, sizeof(v48));
  memset(v45, 0, sizeof(v45));
  DmaOperations = 0LL;
  v30 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v45, 0x20000u);
  v23 = 0;
  v24 = 0;
  memset(v44, 0, 0x40uLL);
  DmaAdapter = 0LL;
  v29[0] = 0;
  *(_OWORD *)Src = 0LL;
  v47 = 0;
  v32[1] = v32;
  v32[0] = v32;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v25 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = -1073741431;
    v21 = 0LL;
    goto LABEL_30;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v33 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v33, 0LL) >= 0) )
    {
      v21 = (_DMA_OPERATIONS *)*((_QWORD *)v33 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v33);
    }
    else
    {
      v21 = 0LL;
    }
    v20 = -1073741811;
    goto LABEL_30;
  }
  v11 = KeGetCurrentThread()->PreviousMode;
  v44[8] = 0LL;
  Object = 0LL;
  v20 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, v11, &Object, 0LL);
  v12 = (struct _DMA_ADAPTER *)Object;
  v35 = Object;
  if ( v20 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v12 = 0LL;
      v35 = 0LL;
      v20 = 0;
    }
    else
    {
      v20 = -1073741816;
    }
  }
  if ( v12 )
    HalPutDmaAdapter(v12);
  if ( v20 < 0 )
  {
    v8 = Index;
    v21 = 0LL;
    goto LABEL_30;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v30 = DmaOperations;
  }
  if ( (_BYTE)v11 == 1 )
  {
    v13 = Length;
    ProbeForWrite(KeyInformation, Length, 4u);
    v14 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    v13 = Length;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v24 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v44[0] = DmaAdapter;
    v44[1] = __PAIR64__(KeyInformationClass, Index);
    v44[2] = KeyInformation;
    LODWORD(v44[3]) = v13;
    v44[4] = ResultLength;
    v16 = CmpCallCallBacksEx(5u, (__int64)v44, 0LL, 1, 0x14u, (__int64)DmaAdapter, (__int64)v32);
    v20 = v16;
    if ( v16 < 0 )
    {
      v8 = Index;
      v21 = DmaOperations;
      if ( v16 == -1073740541 )
        v20 = 0;
      goto LABEL_30;
    }
    v23 = 1;
  }
  v20 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v11, 8LL, &v31);
  if ( v20 < 0 || (v20 = CmpBounceContextStart((__int64)Src, KeyInformation, v13, v11, 0), v20 < 0) )
  {
    v8 = Index;
LABEL_48:
    v21 = DmaOperations;
    goto LABEL_30;
  }
  v8 = Index;
  v20 = CmEnumerateKey(DmaAdapter, (__int64)v31, Index, KeyInformationClass, (__int64)Src[1], v13, v29);
  if ( v20 < 0 && v20 != -2147483643 && v20 != -1073741789 )
    goto LABEL_48;
  v17 = v29[0];
  *ResultLength = v29[0];
  if ( v20 != -1073741789 )
  {
    if ( v13 >= v17 )
      v13 = v17;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v13);
  }
  v21 = DmaOperations;
LABEL_30:
  if ( v31 )
    HalPutDmaAdapter(v31);
  if ( v23
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v32[0] != v32 )
  {
    v38 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0;
    v36 = DmaAdapter;
    v37 = v20;
    v40 = v20;
    v39 = v44;
    CmpCallCallBacksEx(0x14u, (__int64)&v36, 0LL, 0, 0x14u, (__int64)DmaAdapter, (__int64)v32);
    v20 = v40;
  }
  if ( v24 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup((__int64)Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v18) = 17;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v18,
      v45,
      (unsigned int)v20,
      v8,
      v21,
      0LL);
  }
  if ( v25 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v20;
}

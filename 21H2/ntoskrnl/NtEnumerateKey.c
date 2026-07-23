/*
 * XREFs of NtEnumerateKey @ 0x1406E35B0
 * Callers:
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1406E45D0 (CmpBounceContextCleanup.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
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
  void *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  struct _DMA_ADAPTER *v15; // rcx
  ULONG v16; // edi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  int v19; // r9d
  int v20; // eax
  ULONG v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  NTSTATUS v27; // ebx
  _DMA_OPERATIONS *v28; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  char v30; // [rsp+40h] [rbp-1B8h]
  char v31; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v32; // [rsp+42h] [rbp-1B6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1B0h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+50h] [rbp-1A8h]
  _DWORD v36[4]; // [rsp+58h] [rbp-1A0h] BYREF
  _DMA_OPERATIONS *v37; // [rsp+68h] [rbp-190h]
  PADAPTER_OBJECT v38; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v40; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v42; // [rsp+98h] [rbp-160h]
  PADAPTER_OBJECT v43; // [rsp+A0h] [rbp-158h] BYREF
  NTSTATUS v44; // [rsp+A8h] [rbp-150h]
  int v45; // [rsp+ACh] [rbp-14Ch]
  _QWORD *v46; // [rsp+B0h] [rbp-148h]
  NTSTATUS v47; // [rsp+B8h] [rbp-140h]
  __int128 v48; // [rsp+BCh] [rbp-13Ch]
  __int64 v49; // [rsp+CCh] [rbp-12Ch]
  int v50; // [rsp+D4h] [rbp-124h]
  _QWORD v51[9]; // [rsp+E0h] [rbp-118h] BYREF
  _OWORD v52[2]; // [rsp+128h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+150h] [rbp-A8h] BYREF
  char v54; // [rsp+160h] [rbp-98h]
  _BYTE v55[71]; // [rsp+161h] [rbp-97h] BYREF

  v8 = Index;
  v36[2] = Index;
  memset(v55, 0, sizeof(v55));
  memset(v52, 0, sizeof(v52));
  DmaOperations = 0LL;
  v37 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v52, 0x20000u);
  v30 = 0;
  v31 = 0;
  memset(v51, 0, 0x40uLL);
  DmaAdapter = 0LL;
  v36[0] = 0;
  *(_OWORD *)Src = 0LL;
  v54 = 0;
  v39[1] = v39;
  v39[0] = v39;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v32 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v11, v12, v13);
    v27 = -1073741431;
    v28 = 0LL;
    goto LABEL_30;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v40 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v40, 0LL) >= 0) )
    {
      v28 = (_DMA_OPERATIONS *)*((_QWORD *)v40 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v40);
    }
    else
    {
      v28 = 0LL;
    }
    v27 = -1073741811;
    goto LABEL_30;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  v51[8] = 0LL;
  Object = 0LL;
  v27 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, v14, &Object, 0LL);
  v15 = (struct _DMA_ADAPTER *)Object;
  v42 = Object;
  if ( v27 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v15 = 0LL;
      v42 = 0LL;
      v27 = 0;
    }
    else
    {
      v27 = -1073741816;
    }
  }
  if ( v15 )
    HalPutDmaAdapter(v15);
  if ( v27 < 0 )
  {
    v8 = Index;
    v28 = 0LL;
    goto LABEL_30;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v37 = DmaOperations;
  }
  if ( (_BYTE)v14 == 1 )
  {
    v16 = Length;
    ProbeForWrite(KeyInformation, Length, 4u);
    v17 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  else
  {
    v16 = Length;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v31 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v51[0] = DmaAdapter;
    v51[1] = __PAIR64__(KeyInformationClass, Index);
    v51[2] = KeyInformation;
    LODWORD(v51[3]) = v16;
    v51[4] = ResultLength;
    LOBYTE(v19) = 1;
    v20 = CmpCallCallBacksEx(5, (unsigned int)v51, 0, v19, 20, (__int64)DmaAdapter, (__int64)v39);
    v27 = v20;
    if ( v20 < 0 )
    {
      v8 = Index;
      v28 = DmaOperations;
      if ( v20 == -1073740541 )
        v27 = 0;
      goto LABEL_30;
    }
    v30 = 1;
  }
  v27 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, v14, 8, &v38);
  if ( v27 < 0 || (v27 = CmpBounceContextStart(Src, KeyInformation, v16, v14, 0), v27 < 0) )
  {
    v8 = Index;
LABEL_48:
    v28 = DmaOperations;
    goto LABEL_30;
  }
  v8 = Index;
  v27 = CmEnumerateKey((_DWORD)DmaAdapter, (_DWORD)v38, Index, KeyInformationClass, (__int64)Src[1], v16, (__int64)v36);
  if ( v27 < 0 && v27 != -2147483643 && v27 != -1073741789 )
    goto LABEL_48;
  v21 = v36[0];
  *ResultLength = v36[0];
  if ( v27 != -1073741789 )
  {
    if ( v16 >= v21 )
      v16 = v21;
    v11 = Src[1];
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v16);
  }
  v28 = DmaOperations;
LABEL_30:
  if ( v38 )
    HalPutDmaAdapter(v38);
  if ( v30
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v39[0] != v39 )
  {
    v45 = 0;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v43 = DmaAdapter;
    v44 = v27;
    v47 = v27;
    v46 = v51;
    CmpCallCallBacksEx(20, (unsigned int)&v43, 0, 0, 20, (__int64)DmaAdapter, (__int64)v39);
    v27 = v47;
  }
  if ( v31 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v11, v12, v13);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v22) = 17;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v52,
      (unsigned int)v27,
      v8,
      v28,
      0LL);
  }
  if ( v32 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
  }
  return v27;
}

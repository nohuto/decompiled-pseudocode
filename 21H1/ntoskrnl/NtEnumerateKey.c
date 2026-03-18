/*
 * XREFs of NtEnumerateKey @ 0x1405FAA20
 * Callers:
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x14061E9A0 (CmpBounceContextCleanup.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        ULONG a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        _DWORD *a6)
{
  ULONG v8; // r14d
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  struct _DMA_ADAPTER *v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rax
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // ebx
  _DMA_OPERATIONS *v30; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  char v32; // [rsp+40h] [rbp-1B8h]
  char v33; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v34; // [rsp+42h] [rbp-1B6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1B0h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+50h] [rbp-1A8h]
  unsigned int v38[4]; // [rsp+58h] [rbp-1A0h] BYREF
  _DMA_OPERATIONS *v39; // [rsp+68h] [rbp-190h]
  PADAPTER_OBJECT v40; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v42; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v44; // [rsp+98h] [rbp-160h]
  PADAPTER_OBJECT v45; // [rsp+A0h] [rbp-158h] BYREF
  int v46; // [rsp+A8h] [rbp-150h]
  int v47; // [rsp+ACh] [rbp-14Ch]
  _QWORD *v48; // [rsp+B0h] [rbp-148h]
  int v49; // [rsp+B8h] [rbp-140h]
  __int128 v50; // [rsp+BCh] [rbp-13Ch]
  __int64 v51; // [rsp+CCh] [rbp-12Ch]
  int v52; // [rsp+D4h] [rbp-124h]
  _QWORD v53[9]; // [rsp+E0h] [rbp-118h] BYREF
  _OWORD v54[2]; // [rsp+128h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+150h] [rbp-A8h] BYREF
  char v56; // [rsp+160h] [rbp-98h]
  _BYTE v57[71]; // [rsp+161h] [rbp-97h] BYREF

  v8 = a2;
  v38[2] = a2;
  memset(v57, 0, sizeof(v57));
  memset(v54, 0, sizeof(v54));
  DmaOperations = 0LL;
  v39 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v54, 0x20000LL, v10, v11);
  v32 = 0;
  v33 = 0;
  memset(v53, 0, 0x40uLL);
  DmaAdapter = 0LL;
  v38[0] = 0;
  *(_OWORD *)Src = 0LL;
  v56 = 0;
  v41[1] = v41;
  v41[0] = v41;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v34 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v34 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v13, v14, v15);
    v29 = -1073741431;
    v30 = 0LL;
    goto LABEL_30;
  }
  if ( a3 > 2 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v42 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v42, 0LL) >= 0) )
    {
      v30 = (_DMA_OPERATIONS *)*((_QWORD *)v42 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v42);
    }
    else
    {
      v30 = 0LL;
    }
    v29 = -1073741811;
    goto LABEL_30;
  }
  v16 = KeGetCurrentThread()->PreviousMode;
  v53[8] = 0LL;
  Object = 0LL;
  v29 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)CmKeyObjectType, v16, &Object, 0LL);
  v17 = (struct _DMA_ADAPTER *)Object;
  v44 = Object;
  if ( v29 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v17 = 0LL;
      v44 = 0LL;
      v29 = 0;
    }
    else
    {
      v29 = -1073741816;
    }
  }
  if ( v17 )
    HalPutDmaAdapter(v17);
  if ( v29 < 0 )
  {
    v8 = a2;
    v30 = 0LL;
    goto LABEL_30;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v39 = DmaOperations;
  }
  if ( (_BYTE)v16 == 1 )
  {
    v18 = Length;
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v19 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
  }
  else
  {
    v18 = Length;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v33 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v53[0] = DmaAdapter;
    v53[1] = __PAIR64__(a3, a2);
    v53[2] = a4;
    LODWORD(v53[3]) = v18;
    v53[4] = a6;
    LOBYTE(v21) = 1;
    v22 = CmpCallCallBacksEx(5, (unsigned int)v53, 0, v21, 20, (__int64)DmaAdapter, (__int64)v41);
    v29 = v22;
    if ( v22 < 0 )
    {
      v8 = a2;
      v30 = DmaOperations;
      if ( v22 == -1073740541 )
        v29 = 0;
      goto LABEL_30;
    }
    v32 = 1;
  }
  v29 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v16, 8, &v40);
  if ( v29 < 0 || (v29 = CmpBounceContextStart(Src, a4, v18, v16, 0), v29 < 0) )
  {
    v8 = a2;
LABEL_48:
    v30 = DmaOperations;
    goto LABEL_30;
  }
  v8 = a2;
  v29 = CmEnumerateKey(DmaAdapter, (__int64)v40, a2, a3, (__int64)Src[1], v18, v38);
  if ( v29 < 0 && v29 != -2147483643 && v29 != -1073741789 )
    goto LABEL_48;
  v23 = v38[0];
  *a6 = v38[0];
  if ( v29 != -1073741789 )
  {
    if ( v18 >= v23 )
      v18 = v23;
    v13 = Src[1];
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v18);
  }
  v30 = DmaOperations;
LABEL_30:
  if ( v40 )
    HalPutDmaAdapter(v40);
  if ( v32
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v41[0] != v41 )
  {
    v47 = 0;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v45 = DmaAdapter;
    v46 = v29;
    v49 = v29;
    v48 = v53;
    CmpCallCallBacksEx(20, (unsigned int)&v45, 0, 0, 20, (__int64)DmaAdapter, (__int64)v41);
    v29 = v49;
  }
  if ( v33 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v13, v14, v15);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v24) = 17;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v24,
      v54,
      (unsigned int)v29,
      v8,
      v30,
      0LL);
  }
  if ( v34 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
  }
  return (unsigned int)v29;
}

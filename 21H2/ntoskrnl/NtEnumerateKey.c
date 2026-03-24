/*
 * XREFs of NtEnumerateKey @ 0x1405F3E50
 * Callers:
 *     AdtpObjsInitialize @ 0x14079E4C0 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x14094BFD0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        _DWORD *a6)
{
  unsigned int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r14d
  struct _DMA_ADAPTER *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  NTSTATUS v21; // ebx
  _DMA_OPERATIONS *v22; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  char v24; // [rsp+40h] [rbp-1B8h]
  char v25; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v26; // [rsp+42h] [rbp-1B6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1B0h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+50h] [rbp-1A8h]
  _DWORD v30[4]; // [rsp+58h] [rbp-1A0h] BYREF
  _DMA_OPERATIONS *v31; // [rsp+68h] [rbp-190h]
  PADAPTER_OBJECT v32; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v34; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v36; // [rsp+98h] [rbp-160h]
  PADAPTER_OBJECT v37; // [rsp+A0h] [rbp-158h] BYREF
  NTSTATUS v38; // [rsp+A8h] [rbp-150h]
  int v39; // [rsp+ACh] [rbp-14Ch]
  _QWORD *v40; // [rsp+B0h] [rbp-148h]
  NTSTATUS v41; // [rsp+B8h] [rbp-140h]
  __int128 v42; // [rsp+BCh] [rbp-13Ch]
  __int64 v43; // [rsp+CCh] [rbp-12Ch]
  int v44; // [rsp+D4h] [rbp-124h]
  _QWORD v45[9]; // [rsp+E0h] [rbp-118h] BYREF
  _OWORD v46[2]; // [rsp+128h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+150h] [rbp-A8h] BYREF
  char v48; // [rsp+160h] [rbp-98h]
  _BYTE v49[71]; // [rsp+161h] [rbp-97h] BYREF

  v8 = a2;
  v30[2] = a2;
  memset(v49, 0, sizeof(v49));
  memset(v46, 0, sizeof(v46));
  DmaOperations = 0LL;
  v31 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v46, 0x20000u);
  v24 = 0;
  v25 = 0;
  memset(v45, 0, 0x40uLL);
  DmaAdapter = 0LL;
  v30[0] = 0;
  *(_OWORD *)Src = 0LL;
  v48 = 0;
  v33[1] = v33;
  v33[0] = v33;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = -1073741431;
    v22 = 0LL;
    goto LABEL_30;
  }
  if ( a3 > 2 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v34 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v34, 0LL) >= 0) )
    {
      v22 = (_DMA_OPERATIONS *)*((_QWORD *)v34 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v34);
    }
    else
    {
      v22 = 0LL;
    }
    v21 = -1073741811;
    goto LABEL_30;
  }
  v11 = KeGetCurrentThread()->PreviousMode;
  v45[8] = 0LL;
  Object = 0LL;
  v21 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)CmKeyObjectType, v11, &Object, 0LL);
  v12 = (struct _DMA_ADAPTER *)Object;
  v36 = Object;
  if ( v21 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v12 = 0LL;
      v36 = 0LL;
      v21 = 0;
    }
    else
    {
      v21 = -1073741816;
    }
  }
  if ( v12 )
    HalPutDmaAdapter(v12);
  if ( v21 < 0 )
  {
    v8 = a2;
    v22 = 0LL;
    goto LABEL_30;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v31 = DmaOperations;
  }
  if ( (_BYTE)v11 == 1 )
  {
    v13 = Length;
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v14 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    v13 = Length;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v25 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v45[0] = DmaAdapter;
    v45[1] = __PAIR64__(a3, a2);
    v45[2] = a4;
    LODWORD(v45[3]) = v13;
    v45[4] = a6;
    LOBYTE(v16) = 1;
    v17 = CmpCallCallBacksEx(5, (unsigned int)v45, 0, v16, 20, (__int64)DmaAdapter, (__int64)v33);
    v21 = v17;
    if ( v17 < 0 )
    {
      v8 = a2;
      v22 = DmaOperations;
      if ( v17 == -1073740541 )
        v21 = 0;
      goto LABEL_30;
    }
    v24 = 1;
  }
  v21 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v11, 8LL, &v32);
  if ( v21 < 0 || (v21 = CmpBounceContextStart(Src, a4, v13, v11, 0), v21 < 0) )
  {
    v8 = a2;
LABEL_48:
    v22 = DmaOperations;
    goto LABEL_30;
  }
  v8 = a2;
  v21 = CmEnumerateKey((_DWORD)DmaAdapter, (_DWORD)v32, a2, a3, (__int64)Src[1], v13, (__int64)v30);
  if ( v21 < 0 && v21 != -2147483643 && v21 != -1073741789 )
    goto LABEL_48;
  v18 = v30[0];
  *a6 = v30[0];
  if ( v21 != -1073741789 )
  {
    if ( v13 >= v18 )
      v13 = v18;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v13);
  }
  v22 = DmaOperations;
LABEL_30:
  if ( v32 )
    HalPutDmaAdapter(v32);
  if ( v24
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v33[0] != v33 )
  {
    v39 = 0;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0;
    v37 = DmaAdapter;
    v38 = v21;
    v41 = v21;
    v40 = v45;
    CmpCallCallBacksEx(20, (unsigned int)&v37, 0, 0, 20, (__int64)DmaAdapter, (__int64)v33);
    v21 = v41;
  }
  if ( v25 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v19) = 17;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v19,
      v46,
      (unsigned int)v21,
      v8,
      v22,
      0LL);
  }
  if ( v26 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v21;
}

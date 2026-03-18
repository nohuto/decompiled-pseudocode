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

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        size_t Size,
        _DWORD *a6)
{
  unsigned int v8; // r15d
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rdx
  BOOLEAN v14; // di
  __int64 v15; // r8
  _DWORD *v16; // r9
  int v17; // r15d
  struct _DMA_ADAPTER *v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  int v22; // r9d
  int v23; // eax
  unsigned int v24; // eax
  struct _KTHREAD *v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // ebx
  _DMA_OPERATIONS *v33; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v35; // r8
  _DWORD *v36; // r9
  BOOLEAN v37; // [rsp+50h] [rbp-1E8h]
  char v38; // [rsp+51h] [rbp-1E7h]
  char v39; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  unsigned int v44; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v45; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v46; // [rsp+80h] [rbp-1B8h]
  _QWORD v47[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v48; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v50; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v51; // [rsp+B0h] [rbp-188h] BYREF
  int v52; // [rsp+B8h] [rbp-180h]
  int v53; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v54; // [rsp+C0h] [rbp-178h]
  int v55; // [rsp+C8h] [rbp-170h]
  __int128 v56; // [rsp+CCh] [rbp-16Ch]
  __int64 v57; // [rsp+DCh] [rbp-15Ch]
  int v58; // [rsp+E4h] [rbp-154h]
  _QWORD v59[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v60[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v61[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v63; // [rsp+1A0h] [rbp-98h]
  _BYTE v64[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = a2;
  v44 = a2;
  memset(v61, 0, sizeof(v61));
  memset(v64, 0, sizeof(v64));
  memset(v60, 0, sizeof(v60));
  DmaOperations = 0LL;
  v46 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v60, 0x20000LL, v10, v11);
  v38 = 0;
  v39 = 0;
  memset(v59, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v42) = 0;
  *(_OWORD *)Src = 0LL;
  v63 = 0;
  v47[1] = v47;
  v47[0] = v47;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v37 = v14;
  if ( !v14 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v13, v15, (__int64)v16);
    v32 = -1073741431;
    v33 = 0LL;
    goto LABEL_39;
  }
  if ( a3 > 2 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v48 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v48, 0LL) >= 0) )
    {
      v33 = (_DMA_OPERATIONS *)*((_QWORD *)v48 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v48);
    }
    else
    {
      v33 = 0LL;
    }
    v32 = -1073741811;
    goto LABEL_39;
  }
  v17 = KeGetCurrentThread()->PreviousMode;
  v59[8] = 0LL;
  Object = 0LL;
  v32 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)CmKeyObjectType, v17, &Object, 0LL);
  v18 = (struct _DMA_ADAPTER *)Object;
  v50 = Object;
  if ( v32 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v18 = 0LL;
      v50 = 0LL;
      v32 = 0;
    }
    else
    {
      v32 = -1073741816;
    }
  }
  if ( v18 )
    HalPutDmaAdapter(v18);
  if ( v32 < 0 )
  {
    v8 = a2;
    v33 = 0LL;
    goto LABEL_39;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v46 = DmaOperations;
  }
  if ( (_BYTE)v17 == 1 )
  {
    v19 = Size;
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v20 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  else
  {
    v19 = Size;
  }
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v39 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v59[0] = DmaAdapter;
    v59[1] = __PAIR64__(a3, a2);
    v59[2] = a4;
    LODWORD(v59[3]) = v19;
    v59[4] = a6;
    LOBYTE(v22) = 1;
    v23 = CmpCallCallBacksEx(6, (unsigned int)v59, 0, v22, 21, (__int64)DmaAdapter, (__int64)v47);
    v32 = v23;
    if ( v23 < 0 )
    {
      v14 = v37;
      v8 = a2;
      v33 = DmaOperations;
      if ( v23 == -1073740541 )
        v32 = 0;
      goto LABEL_39;
    }
    v38 = 1;
  }
  v32 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v17, 1, &v45);
  if ( v32 < 0 || (v32 = CmpBounceContextStart((__int64)Src, a4, v19, v17, 1), v32 < 0) )
  {
    v8 = a2;
LABEL_57:
    v33 = DmaOperations;
    v14 = v37;
    goto LABEL_39;
  }
  if ( v45 )
  {
    CmpAttachToRegistryProcess(v61);
    v8 = a2;
    v32 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v45,
            0,
            a2,
            a3,
            (size_t)Src[1],
            v19,
            (__int64)&v42,
            0LL);
    KiUnstackDetachProcess((__int64)v61, 0LL, v35, v36);
  }
  else
  {
    v8 = a2;
    v32 = CmEnumerateValueKey(DmaAdapter, a2, a3, Src[1], v19, &v42);
  }
  if ( v32 < 0 && v32 != -2147483643 && v32 != -1073741789 )
    goto LABEL_57;
  v24 = v42;
  *a6 = v42;
  if ( v32 != -1073741789 )
  {
    if ( v19 >= v24 )
      v19 = v24;
    v13 = Src[1];
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v19);
  }
  v14 = v37;
  v33 = DmaOperations;
LABEL_39:
  if ( v45 )
    HalPutDmaAdapter(v45);
  if ( v38
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v47[0] != v47 )
  {
    v53 = 0;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0;
    v51 = DmaAdapter;
    v52 = v32;
    v55 = v32;
    v54 = v59;
    CmpCallCallBacksEx(21, (unsigned int)&v51, 0, 0, 21, (__int64)DmaAdapter, (__int64)v47);
    v32 = v55;
  }
  if ( v39 )
  {
    v25 = KeGetCurrentThread();
    if ( v25->KernelApcDisable++ == -1
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v25, (__int64)v13, v15, v16);
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v27) = 18;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v27,
      v60,
      (unsigned int)v32,
      v8,
      v33,
      0LL);
  }
  if ( v14 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
  }
  return (unsigned int)v32;
}

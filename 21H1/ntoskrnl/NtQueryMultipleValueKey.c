/*
 * XREFs of NtQueryMultipleValueKey @ 0x1406572C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x14061E9A0 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1406577F4 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x140657D1C (CmpCaptureKeyValueArray.c)
 */

__int64 __fastcall NtQueryMultipleValueKey(
        void *a1,
        volatile void *a2,
        unsigned int a3,
        volatile void *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  BOOLEAN v12; // di
  __int64 v13; // r8
  _DWORD *v14; // r9
  int PreviousMode; // r14d
  signed int MultipleValueKey; // edi
  __int64 v17; // rax
  SIZE_T v18; // rdi
  __int64 v19; // rcx
  SIZE_T v20; // rdx
  volatile void *v21; // rdi
  struct _KTHREAD *v22; // rax
  int v23; // eax
  __int64 v24; // r8
  _DWORD *v25; // r9
  unsigned int v26; // r10d
  __int64 i; // r9
  __int64 v28; // r8
  PPRIVILEGE_SET v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v36; // [rsp+40h] [rbp-1B8h]
  char v37; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v38; // [rsp+42h] [rbp-1B6h]
  _DWORD v39[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-1A8h] BYREF
  int v41; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v44; // [rsp+70h] [rbp-188h]
  PADAPTER_OBJECT v45; // [rsp+78h] [rbp-180h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET v47; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v49; // [rsp+A0h] [rbp-158h]
  volatile void *v50; // [rsp+A8h] [rbp-150h]
  _QWORD v51[10]; // [rsp+B0h] [rbp-148h] BYREF
  _OWORD v52[2]; // [rsp+100h] [rbp-F8h] BYREF
  _OWORD v53[3]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v54[12]; // [rsp+150h] [rbp-A8h] BYREF

  Address = a4;
  v6 = a3;
  v49 = a1;
  v50 = a2;
  v39[1] = a3;
  v41 = 0;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, 0x58uLL);
  memset(v52, 0, sizeof(v52));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v52, 0x20000LL, v8, v9);
  v36 = 0;
  v37 = 0;
  DmaAdapter = 0LL;
  memset(v51, 0, 0x48uLL);
  v48[1] = v48;
  v48[0] = v48;
  v45 = 0LL;
  Privileges = 0LL;
  v47 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, (__int64)v14);
  v38 = v12;
  if ( !v12 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v49, 1u, v13, PreviousMode, &DmaAdapter, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_33;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
    DmaOperations = DmaAdapter->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v17 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v18 = *(unsigned int *)v17;
    v39[0] = *(_DWORD *)v17;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(0xC000009A);
    ProbeForWrite(a2, 24 * v6, 4u);
    if ( a6 )
    {
      v19 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v19 = *(_DWORD *)v19;
    }
    v20 = v18;
    v21 = Address;
    ProbeForWrite(Address, v20, 4u);
  }
  else
  {
    v39[0] = *a5;
    v21 = Address;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v37 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  v51[0] = DmaAdapter;
  v51[1] = a2;
  LODWORD(v51[2]) = v6;
  v51[3] = v21;
  v51[4] = a5;
  v51[5] = a6;
  v23 = CmpCallCallBacksEx(9u, (__int64)v51, 0LL, 1, 0x18u, (__int64)DmaAdapter, (__int64)v48);
  MultipleValueKey = v23;
  if ( v23 >= 0 )
  {
    v36 = 1;
LABEL_23:
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, PreviousMode, 1, &v45);
    if ( MultipleValueKey >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      MultipleValueKey = CmpCaptureKeyValueArray((_DWORD)a2, v6, v13, (unsigned int)&Privileges, (__int64)&v47);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmpBounceContextStart((__int64)v54, (void *)Address, v39[0], PreviousMode, 4);
        if ( MultipleValueKey >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v53, v11, v13, v14);
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)DmaAdapter,
                               (_DWORD)v45,
                               (_DWORD)Privileges,
                               v6,
                               v54[1],
                               (__int64)v39,
                               (__int64)&v41);
          LODWORD(Address) = MultipleValueKey;
          KiUnstackDetachProcess((__int64)v53, 0LL, v24, v25);
          v26 = v39[0];
          *a5 = v39[0];
          if ( a6 )
            *a6 = v41;
          if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v44 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v28 = 32LL * (unsigned int)i;
              v29 = Privileges;
              v30 = 3 * i;
              *((_DWORD *)a2 + 2 * v30 + 2) = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v28);
              *((_DWORD *)a2 + 2 * v30 + 3) = *(ULONG *)((char *)&v29[1].PrivilegeCount + v28);
              *((_DWORD *)a2 + 2 * v30 + 4) = *(ULONG *)((char *)&v29[1].Control + v28);
            }
            CmpBounceContextCopyDataToCallerBuffer(v54, v26);
          }
        }
      }
    }
    goto LABEL_33;
  }
  if ( v23 == -1073740541 )
    MultipleValueKey = 0;
LABEL_33:
  if ( v45 )
    HalPutDmaAdapter(v45);
  if ( v36 )
    MultipleValueKey = CmPostCallbackNotificationEx(24, (__int64)DmaAdapter, MultipleValueKey, (__int64)v51, 0LL, v48);
  if ( v37 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, (__int64)v14);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup((__int64)v54);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v31) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v31,
      v52,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( v38 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v47 )
    CmSiFreeMemory(v47);
  return (unsigned int)MultipleValueKey;
}

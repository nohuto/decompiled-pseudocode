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

NTSTATUS __cdecl NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  BOOLEAN v10; // di
  __int64 v11; // r8
  _DWORD *v12; // r9
  int PreviousMode; // r14d
  int MultipleValueKey; // edi
  __int64 v15; // rax
  SIZE_T v16; // rdi
  __int64 v17; // rcx
  SIZE_T v18; // rdx
  volatile void *v19; // rdi
  struct _KTHREAD *v20; // rax
  int v21; // eax
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned int v24; // r10d
  __int64 i; // r9
  __int64 v26; // r8
  PPRIVILEGE_SET v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  char v34; // [rsp+40h] [rbp-1B8h]
  char v35; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v36; // [rsp+42h] [rbp-1B6h]
  _DWORD v37[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-1A8h] BYREF
  ULONG v39; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v42; // [rsp+70h] [rbp-188h]
  PADAPTER_OBJECT v43; // [rsp+78h] [rbp-180h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET v45; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v46[2]; // [rsp+90h] [rbp-168h] BYREF
  HANDLE v47; // [rsp+A0h] [rbp-158h]
  PKEY_VALUE_ENTRY v48; // [rsp+A8h] [rbp-150h]
  _QWORD v49[10]; // [rsp+B0h] [rbp-148h] BYREF
  _OWORD v50[2]; // [rsp+100h] [rbp-F8h] BYREF
  _OWORD v51[3]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v52[12]; // [rsp+150h] [rbp-A8h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v47 = KeyHandle;
  v48 = ValueEntries;
  v37[1] = EntryCount;
  v39 = 0;
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, 0x58uLL);
  memset(v50, 0, sizeof(v50));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v50, 0x20000u);
  v34 = 0;
  v35 = 0;
  DmaAdapter = 0LL;
  memset(v49, 0, 0x48uLL);
  v46[1] = v46;
  v46[0] = v46;
  v43 = 0LL;
  Privileges = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v10 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, (__int64)v12);
  v36 = v10;
  if ( !v10 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v47, 1u, v11, PreviousMode, &DmaAdapter, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_33;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
    DmaOperations = DmaAdapter->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v15 = (__int64)BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v16 = *(unsigned int *)v15;
    v37[0] = *(_DWORD *)v15;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    ProbeForWrite(ValueEntries, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v17 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    v18 = v16;
    v19 = Address;
    ProbeForWrite(Address, v18, 4u);
  }
  else
  {
    v37[0] = *BufferLength;
    v19 = Address;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v35 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  v49[0] = DmaAdapter;
  v49[1] = ValueEntries;
  LODWORD(v49[2]) = v6;
  v49[3] = v19;
  v49[4] = BufferLength;
  v49[5] = RequiredBufferLength;
  v21 = CmpCallCallBacksEx(9u, (__int64)v49, 0LL, 1, 0x18u, (__int64)DmaAdapter, (__int64)v46);
  MultipleValueKey = v21;
  if ( v21 >= 0 )
  {
    v34 = 1;
LABEL_23:
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, PreviousMode, 1, &v43);
    if ( MultipleValueKey >= 0 )
    {
      LOBYTE(v11) = PreviousMode;
      MultipleValueKey = CmpCaptureKeyValueArray(
                           (_DWORD)ValueEntries,
                           v6,
                           v11,
                           (unsigned int)&Privileges,
                           (__int64)&v45);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmpBounceContextStart((__int64)v52, (void *)Address, v37[0], PreviousMode, 4);
        if ( MultipleValueKey >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v51, v9, v11, v12);
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)DmaAdapter,
                               (_DWORD)v43,
                               (_DWORD)Privileges,
                               v6,
                               v52[1],
                               (__int64)v37,
                               (__int64)&v39);
          LODWORD(Address) = MultipleValueKey;
          KiUnstackDetachProcess((__int64)v51, 0LL, v22, v23);
          v24 = v37[0];
          *BufferLength = v37[0];
          if ( RequiredBufferLength )
            *RequiredBufferLength = v39;
          if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v42 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v26 = 32LL * (unsigned int)i;
              v27 = Privileges;
              v28 = i;
              ValueEntries[v28].DataLength = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v26);
              ValueEntries[v28].DataOffset = *(ULONG *)((char *)&v27[1].PrivilegeCount + v26);
              ValueEntries[v28].Type = *(ULONG *)((char *)&v27[1].Control + v26);
            }
            CmpBounceContextCopyDataToCallerBuffer(v52, v24);
          }
        }
      }
    }
    goto LABEL_33;
  }
  if ( v21 == -1073740541 )
    MultipleValueKey = 0;
LABEL_33:
  if ( v43 )
    HalPutDmaAdapter(v43);
  if ( v34 )
    MultipleValueKey = CmPostCallbackNotificationEx(24, (__int64)DmaAdapter, MultipleValueKey, (__int64)v49, 0LL, v46);
  if ( v35 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, (__int64)v12);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup((__int64)v52);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v29) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v29,
      v50,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( v36 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v45 )
    CmSiFreeMemory(v45);
  return MultipleValueKey;
}

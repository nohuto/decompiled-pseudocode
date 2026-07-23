/*
 * XREFs of NtQueryMultipleValueKey @ 0x1406A4AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     CmpCaptureKeyValueArray @ 0x14066BFC0 (CmpCaptureKeyValueArray.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x140677B30 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1406A5014 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
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
  BOOLEAN v9; // di
  __int64 v10; // r8
  int PreviousMode; // r14d
  int MultipleValueKey; // edi
  __int64 v13; // rax
  SIZE_T v14; // rdi
  __int64 v15; // rcx
  SIZE_T v16; // rdx
  volatile void *v17; // rdi
  struct _KTHREAD *v18; // rax
  int v19; // eax
  unsigned int v20; // r10d
  __int64 i; // r9
  __int64 v22; // r8
  PPRIVILEGE_SET v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+40h] [rbp-1B8h]
  char v28; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v29; // [rsp+42h] [rbp-1B6h]
  _DWORD v30[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-1A8h] BYREF
  ULONG v32; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v35; // [rsp+70h] [rbp-188h]
  PADAPTER_OBJECT v36; // [rsp+78h] [rbp-180h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET v38; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-168h] BYREF
  HANDLE v40; // [rsp+A0h] [rbp-158h]
  PKEY_VALUE_ENTRY v41; // [rsp+A8h] [rbp-150h]
  _QWORD v42[10]; // [rsp+B0h] [rbp-148h] BYREF
  _OWORD v43[2]; // [rsp+100h] [rbp-F8h] BYREF
  _OWORD v44[3]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v45[12]; // [rsp+150h] [rbp-A8h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v40 = KeyHandle;
  v41 = ValueEntries;
  v30[1] = EntryCount;
  v32 = 0;
  memset(v44, 0, sizeof(v44));
  memset(v45, 0, 0x58uLL);
  memset(v43, 0, sizeof(v43));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v43, 0x20000u);
  v27 = 0;
  v28 = 0;
  DmaAdapter = 0LL;
  memset(v42, 0, 0x48uLL);
  v39[1] = v39;
  v39[0] = v39;
  v36 = 0LL;
  Privileges = 0LL;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v29 = v9;
  if ( !v9 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v40, 1u, v10, PreviousMode, &DmaAdapter, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_33;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
    DmaOperations = DmaAdapter->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v13 = (__int64)BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v14 = *(unsigned int *)v13;
    v30[0] = *(_DWORD *)v13;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    ProbeForWrite(ValueEntries, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v15 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    v16 = v14;
    v17 = Address;
    ProbeForWrite(Address, v16, 4u);
  }
  else
  {
    v30[0] = *BufferLength;
    v17 = Address;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v28 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  v42[0] = DmaAdapter;
  v42[1] = ValueEntries;
  LODWORD(v42[2]) = v6;
  v42[3] = v17;
  v42[4] = BufferLength;
  v42[5] = RequiredBufferLength;
  v19 = CmpCallCallBacksEx(9u, (__int64)v42, 0LL, 1, 0x18u, (__int64)DmaAdapter, (__int64)v39);
  MultipleValueKey = v19;
  if ( v19 >= 0 )
  {
    v27 = 1;
LABEL_23:
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, PreviousMode, 1, &v36);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpCaptureKeyValueArray((__int64)ValueEntries, v6, PreviousMode, &Privileges, &v38);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmpBounceContextStart((__int64)v45, (void *)Address, v30[0], PreviousMode, 4);
        if ( MultipleValueKey >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v44);
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)DmaAdapter,
                               (_DWORD)v36,
                               (_DWORD)Privileges,
                               v6,
                               v45[1],
                               (__int64)v30,
                               (__int64)&v32);
          LODWORD(Address) = MultipleValueKey;
          KiUnstackDetachProcess((__int64)v44, 0);
          v20 = v30[0];
          *BufferLength = v30[0];
          if ( RequiredBufferLength )
            *RequiredBufferLength = v32;
          if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v35 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v22 = 32LL * (unsigned int)i;
              v23 = Privileges;
              v24 = i;
              ValueEntries[v24].DataLength = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v22);
              ValueEntries[v24].DataOffset = *(ULONG *)((char *)&v23[1].PrivilegeCount + v22);
              ValueEntries[v24].Type = *(ULONG *)((char *)&v23[1].Control + v22);
            }
            CmpBounceContextCopyDataToCallerBuffer(v45, v20);
          }
        }
      }
    }
    goto LABEL_33;
  }
  if ( v19 == -1073740541 )
    MultipleValueKey = 0;
LABEL_33:
  if ( v36 )
    HalPutDmaAdapter(v36);
  if ( v27 )
    MultipleValueKey = CmPostCallbackNotificationEx(
                         0x18u,
                         (__int64)DmaAdapter,
                         MultipleValueKey,
                         (__int64)v42,
                         0LL,
                         v39);
  if ( v28 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup((__int64)v45);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v25) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v25,
      v43,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( v29 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v38 )
    CmSiFreeMemory(v38);
  return MultipleValueKey;
}

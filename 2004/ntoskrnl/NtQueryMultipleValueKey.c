/*
 * XREFs of NtQueryMultipleValueKey @ 0x140654D60
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpCaptureKeyValueArray @ 0x1405E0B70 (CmpCaptureKeyValueArray.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpBounceContextStart @ 0x1405E8CC0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405E9380 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x140655294 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
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
  __int64 v12; // rdx
  NTSTATUS MultipleValueKey; // edi
  __int64 v14; // rax
  SIZE_T v15; // rdi
  __int64 v16; // rcx
  SIZE_T v17; // rdx
  volatile void *v18; // rdi
  struct _KTHREAD *v19; // rax
  int v20; // eax
  unsigned int v21; // r10d
  __int64 i; // r9
  __int64 v23; // r8
  PPRIVILEGE_SET v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v28; // [rsp+40h] [rbp-1B8h]
  char v29; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v30; // [rsp+42h] [rbp-1B6h]
  _DWORD v31[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-1A8h] BYREF
  ULONG v33; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v36; // [rsp+70h] [rbp-188h]
  PADAPTER_OBJECT v37; // [rsp+78h] [rbp-180h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET v39; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-168h] BYREF
  HANDLE v41; // [rsp+A0h] [rbp-158h]
  PKEY_VALUE_ENTRY v42; // [rsp+A8h] [rbp-150h]
  _QWORD v43[10]; // [rsp+B0h] [rbp-148h] BYREF
  _OWORD v44[2]; // [rsp+100h] [rbp-F8h] BYREF
  _OWORD v45[3]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v46[12]; // [rsp+150h] [rbp-A8h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v41 = KeyHandle;
  v42 = ValueEntries;
  v31[1] = EntryCount;
  v33 = 0;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, 0x58uLL);
  memset(v44, 0, sizeof(v44));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v44, 0x20000u);
  v28 = 0;
  v29 = 0;
  DmaAdapter = 0LL;
  memset(v43, 0, 0x48uLL);
  v40[1] = v40;
  v40[0] = v40;
  v37 = 0LL;
  Privileges = 0LL;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v30 = v9;
  if ( !v9 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v41, 1u, v10, PreviousMode, &DmaAdapter, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_33;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
    DmaOperations = DmaAdapter->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v14 = (__int64)BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v15 = *(unsigned int *)v14;
    v31[0] = *(_DWORD *)v14;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    ProbeForWrite(ValueEntries, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v16 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
    }
    v17 = v15;
    v18 = Address;
    ProbeForWrite(Address, v17, 4u);
  }
  else
  {
    v31[0] = *BufferLength;
    v18 = Address;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v29 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  v43[0] = DmaAdapter;
  v43[1] = ValueEntries;
  LODWORD(v43[2]) = v6;
  v43[3] = v18;
  v43[4] = BufferLength;
  v43[5] = RequiredBufferLength;
  v20 = CmpCallCallBacksEx(9u, (__int64)v43, 0LL, 1, 0x18u, (__int64)DmaAdapter, (__int64)v40);
  MultipleValueKey = v20;
  if ( v20 >= 0 )
  {
    v28 = 1;
LABEL_23:
    LOBYTE(v12) = PreviousMode;
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, v12, 1LL, &v37);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpCaptureKeyValueArray((__int64)ValueEntries, v6, PreviousMode, &Privileges, &v39);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmpBounceContextStart((__int64)v46, (void *)Address, v31[0], PreviousMode, 4);
        if ( MultipleValueKey >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v45);
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)DmaAdapter,
                               (_DWORD)v37,
                               (_DWORD)Privileges,
                               v6,
                               v46[1],
                               (__int64)v31,
                               (__int64)&v33);
          LODWORD(Address) = MultipleValueKey;
          KiUnstackDetachProcess((__int64)v45, 0LL);
          v21 = v31[0];
          *BufferLength = v31[0];
          if ( RequiredBufferLength )
            *RequiredBufferLength = v33;
          if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v36 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v23 = 32LL * (unsigned int)i;
              v24 = Privileges;
              v25 = i;
              ValueEntries[v25].DataLength = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v23);
              ValueEntries[v25].DataOffset = *(ULONG *)((char *)&v24[1].PrivilegeCount + v23);
              ValueEntries[v25].Type = *(ULONG *)((char *)&v24[1].Control + v23);
            }
            CmpBounceContextCopyDataToCallerBuffer(v46, v21);
          }
        }
      }
    }
    goto LABEL_33;
  }
  if ( v20 == -1073740541 )
    MultipleValueKey = 0;
LABEL_33:
  if ( v37 )
    HalPutDmaAdapter(v37);
  if ( v28 )
    MultipleValueKey = CmPostCallbackNotificationEx(
                         24,
                         (_DWORD)DmaAdapter,
                         MultipleValueKey,
                         (unsigned int)v43,
                         0LL,
                         (__int64)v40);
  if ( v29 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup((__int64)v46);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v26) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v26,
      v44,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( v30 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v39 )
    CmSiFreeMemory(v39);
  return MultipleValueKey;
}

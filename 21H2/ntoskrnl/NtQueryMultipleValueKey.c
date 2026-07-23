/*
 * XREFs of NtQueryMultipleValueKey @ 0x140601D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x140602364 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpCaptureKeyValueArray @ 0x14065BF20 (CmpCaptureKeyValueArray.c)
 *     CmQueryMultipleValueKey @ 0x14065E494 (CmQueryMultipleValueKey.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1406E45D0 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 */

NTSTATUS __cdecl NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  BOOLEAN v10; // di
  __int64 i; // r8
  __int64 v12; // r9
  NTSTATUS MultipleValueKey; // edi
  unsigned int PreviousMode; // esi
  PULONG v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  int v19; // r9d
  int v20; // eax
  PPRIVILEGE_SET v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char v27; // [rsp+40h] [rbp-1D8h]
  char v28; // [rsp+41h] [rbp-1D7h]
  ULONG Length; // [rsp+44h] [rbp-1D4h] BYREF
  BOOLEAN Length_4; // [rsp+48h] [rbp-1D0h]
  ULONG v31; // [rsp+50h] [rbp-1C8h]
  PADAPTER_OBJECT v32; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  ULONG v34; // [rsp+68h] [rbp-1B0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  int v36; // [rsp+78h] [rbp-1A0h]
  volatile void *v37; // [rsp+80h] [rbp-198h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+88h] [rbp-190h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-178h]
  PPRIVILEGE_SET v40; // [rsp+A8h] [rbp-170h] BYREF
  PPRIVILEGE_SET v41; // [rsp+B0h] [rbp-168h] BYREF
  _QWORD v42[3]; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD v43[9]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v44[2]; // [rsp+120h] [rbp-F8h] BYREF
  _OWORD v45[3]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v46[12]; // [rsp+170h] [rbp-A8h] BYREF

  v37 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v7 = (int)KeyHandle;
  DmaAdapter[1] = (PADAPTER_OBJECT)ValueEntries;
  v31 = EntryCount;
  DmaAdapter[2] = (PADAPTER_OBJECT)BufferLength;
  Length = 0;
  v34 = 0;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, 0x58uLL);
  memset(v44, 0, sizeof(v44));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v44, 0x20000u);
  v27 = 0;
  v28 = 0;
  v32 = 0LL;
  memset(v43, 0, sizeof(v43));
  v42[1] = v42;
  v42[0] = v42;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v10 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, i, v12);
  Length_4 = v10;
  if ( !v10 )
  {
    MultipleValueKey = -1073741431;
LABEL_36:
    v16 = Address;
    goto LABEL_37;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v12) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v7, 1, i, v12, (__int64)&v32, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_36;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v32 )
    DmaOperations = v32->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v15 = BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v15 = (PULONG)0x7FFFFFFF0000LL;
    Length = *v15;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v16 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v17 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    ProbeForWrite(v37, Length, 4u);
  }
  else
  {
    Length = *BufferLength;
    v16 = Address;
  }
  LOBYTE(i) = PreviousMode;
  MultipleValueKey = CmpCaptureKeyValueArray(
                       (_DWORD)v16,
                       v6,
                       i,
                       (unsigned int)&Privileges,
                       (__int64)&v40,
                       (__int64)&v41);
  if ( MultipleValueKey >= 0 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v28 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v43[0] = v32;
      v43[1] = Privileges;
      LODWORD(v43[2]) = v6;
      v43[3] = v37;
      v43[4] = &Length;
      v43[5] = RequiredBufferLength;
      LOBYTE(v19) = 1;
      v20 = CmpCallCallBacksEx(9, (unsigned int)v43, 0, v19, 24, (__int64)v32, (__int64)v42);
      MultipleValueKey = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          MultipleValueKey = 0;
        goto LABEL_37;
      }
      v27 = 1;
    }
    LOBYTE(v9) = PreviousMode;
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v32, v9, 1LL, DmaAdapter);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpBounceContextStart(v46, v37, Length, PreviousMode, 4);
      if ( MultipleValueKey >= 0 )
      {
        CmpAttachToRegistryProcess(v45);
        MultipleValueKey = CmQueryMultipleValueKey(
                             (_DWORD)v32,
                             DmaAdapter[0],
                             (_DWORD)Privileges,
                             v6,
                             v46[1],
                             (__int64)&Length,
                             (__int64)&v34);
        KiUnstackDetachProcess((__int64)v45, 0LL);
        if ( RequiredBufferLength )
          *RequiredBufferLength = v34;
        if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          CmpBounceContextCopyDataToCallerBuffer(v46, Length);
      }
    }
  }
LABEL_37:
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v27 )
    MultipleValueKey = CmPostCallbackNotificationEx(
                         24,
                         (_DWORD)v32,
                         MultipleValueKey,
                         (unsigned int)v43,
                         0LL,
                         (__int64)v42);
  if ( Privileges )
  {
    *BufferLength = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v36 = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v9 = 3 * i;
        v21 = Privileges;
        v16[2 * v9 + 2] = Privileges->Privilege[2 * i].Luid.LowPart;
        v16[2 * v9 + 3] = v21->Privilege[2 * i].Luid.HighPart;
        v16[2 * v9 + 4] = v21->Privilege[2 * i].Attributes;
      }
    }
  }
  if ( v28 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, i, v12);
  if ( v32 )
    HalPutDmaAdapter(v32);
  CmpBounceContextCleanup(v46);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v22) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v44,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( Length_4 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v40 )
    CmSiFreeMemory(v40);
  if ( v41 )
    CmSiFreeMemory(v41);
  return MultipleValueKey;
}

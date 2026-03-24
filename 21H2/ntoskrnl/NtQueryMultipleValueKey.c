/*
 * XREFs of NtQueryMultipleValueKey @ 0x1406A1E20
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmpCaptureKeyValueArray @ 0x140667100 (CmpCaptureKeyValueArray.c)
 *     CmQueryMultipleValueKey @ 0x140669674 (CmQueryMultipleValueKey.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1406A2434 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall NtQueryMultipleValueKey(
        void *a1,
        struct _DMA_ADAPTER *a2,
        unsigned int a3,
        volatile void *a4,
        struct _DMA_ADAPTER *a5,
        _DWORD *a6)
{
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // di
  __int64 v10; // r8
  int v11; // edi
  int PreviousMode; // esi
  __int64 v13; // rax
  _DWORD *v14; // r12
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 i; // r8
  __int64 v23; // rdx
  PPRIVILEGE_SET v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+40h] [rbp-1D8h]
  char v28; // [rsp+41h] [rbp-1D7h]
  unsigned int Length; // [rsp+44h] [rbp-1D4h] BYREF
  BOOLEAN Length_4; // [rsp+48h] [rbp-1D0h]
  unsigned int v31; // [rsp+50h] [rbp-1C8h]
  PADAPTER_OBJECT v32; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-1B0h] BYREF
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

  v37 = a4;
  v6 = a3;
  Address = a2;
  DmaAdapter[1] = a2;
  v31 = a3;
  DmaAdapter[2] = a5;
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
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  Length_4 = v9;
  if ( !v9 )
  {
    v11 = -1073741431;
LABEL_36:
    v14 = Address;
    goto LABEL_37;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = CmObReferenceObjectByHandle(a1, 1u, v10, PreviousMode, &v32, 0LL);
  if ( v11 < 0 )
    goto LABEL_36;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v32 )
    DmaOperations = v32->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v13 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    Length = *(_DWORD *)v13;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(0xC000009A);
    v14 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( a6 )
    {
      v15 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    ProbeForWrite(v37, Length, 4u);
  }
  else
  {
    Length = *(_DWORD *)&a5->Version;
    v14 = Address;
  }
  v11 = CmpCaptureKeyValueArray((__int64)v14, v6, PreviousMode, &Privileges, &v40, &v41);
  if ( v11 >= 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v28 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v43[0] = v32;
      v43[1] = Privileges;
      LODWORD(v43[2]) = v6;
      v43[3] = v37;
      v43[4] = &Length;
      v43[5] = a6;
      LOBYTE(v17) = 1;
      v18 = CmpCallCallBacksEx(9, (unsigned int)v43, 0, v17, 24, (__int64)v32, (__int64)v42);
      v11 = v18;
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v11 = 0;
        goto LABEL_37;
      }
      v27 = 1;
    }
    v11 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&v32, PreviousMode, 1, DmaAdapter);
    if ( v11 >= 0 )
    {
      v11 = CmpBounceContextStart((__int64)v46, (void *)v37, Length, PreviousMode, 4);
      if ( v11 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v45, v19, v20, v21);
        v11 = CmQueryMultipleValueKey(
                (__int64)v32,
                (__int64)DmaAdapter[0],
                (__int64)Privileges,
                v6,
                v46[1],
                &Length,
                &v34);
        KiUnstackDetachProcess((__int64)v45, 0);
        if ( a6 )
          *a6 = v34;
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
          CmpBounceContextCopyDataToCallerBuffer(v46, Length);
      }
    }
  }
LABEL_37:
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v27 )
    v11 = CmPostCallbackNotificationEx(24, (_DWORD)v32, v11, (unsigned int)v43, 0LL, (__int64)v42);
  if ( Privileges )
  {
    *(_DWORD *)&a5->Version = Length;
    if ( ((v11 + 0x80000000) & 0x80000000) != 0 || v11 == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v36 = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v23 = 3 * i;
        v24 = Privileges;
        v14[2 * v23 + 2] = Privileges->Privilege[2 * i].Luid.LowPart;
        v14[2 * v23 + 3] = v24->Privilege[2 * i].Luid.HighPart;
        v14[2 * v23 + 4] = v24->Privilege[2 * i].Attributes;
      }
    }
  }
  if ( v28 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v32 )
    HalPutDmaAdapter(v32);
  CmpBounceContextCleanup((__int64)v46);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v25) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v25,
      v44,
      (unsigned int)v11,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( Length_4 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v40 )
    CmSiFreeMemory(v40);
  if ( v41 )
    CmSiFreeMemory(v41);
  return (unsigned int)v11;
}

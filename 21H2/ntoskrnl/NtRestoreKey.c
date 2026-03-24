/*
 * XREFs of NtRestoreKey @ 0x1408694D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x14066F600 (CmCheckNoTxContext.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A4C0 (IoConvertFileHandleToKernelHandle.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 */

__int64 __fastcall NtRestoreKey(void *a1, void *a2, unsigned int a3)
{
  char v3; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  signed int v9; // ebx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  void *v12; // rdi
  int v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _DMA_ADAPTER *DmaOperations; // rdx
  struct _KTHREAD *v17; // rax
  _DMA_OPERATIONS *v18; // rdi
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r9
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v25; // [rsp+60h] [rbp-49h] BYREF
  __int128 v26; // [rsp+70h] [rbp-39h]
  __int128 v27; // [rsp+80h] [rbp-29h]
  _OWORD v28[3]; // [rsp+90h] [rbp-19h] BYREF

  Handle.DmaOperations = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  v24[1] = v24;
  v25 = 0LL;
  v3 = 0;
  v24[0] = v24;
  v26 = 0LL;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)v9;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v11 = IoConvertFileHandleToKernelHandle(a2, 1, 1u, 0, &Handle);
      v12 = *(void **)&Handle.Version;
      v9 = v11;
      if ( v11 < 0 )
      {
LABEL_24:
        if ( v12 && v12 != a2 )
          ZwClose(v12);
        goto LABEL_27;
      }
    }
    else
    {
      v12 = a2;
      *(_QWORD *)&Handle.Version = a2;
    }
    v13 = CmObReferenceObjectByHandle(a1, 0, v10, PreviousMode, (struct _DMA_ADAPTER **)&Handle.DmaOperations, 0LL);
    DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
    v9 = v13;
    if ( v13 < 0 )
    {
LABEL_22:
      if ( DmaOperations )
        HalPutDmaAdapter(DmaOperations);
      goto LABEL_24;
    }
    if ( (*((_DWORD *)Handle.DmaOperations->PutDmaAdapter + 2) & 0x80u) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_22;
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = Handle.DmaOperations;
    v19 = *(_QWORD *)&Handle.Version;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v25 = v18;
      *((_QWORD *)&v25 + 1) = v19;
      LODWORD(v26) = a3;
      v20 = CmpCallCallBacksEx(0x29u, (__int64)&v25, 0LL, 1, 0x2Au, 0LL, (__int64)v24);
      v9 = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          v9 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
        v12 = *(void **)&Handle.Version;
        goto LABEL_22;
      }
      v3 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v28, (__int64)DmaOperations, v14, v15);
    LOBYTE(v21) = PreviousMode;
    v9 = CmRestoreKey(v18, v19, a3, v21);
    KiUnstackDetachProcess((__int64)v28, 0);
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)v18, v9, (__int64)&v25, 0LL, v24);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)-1073741431;
}

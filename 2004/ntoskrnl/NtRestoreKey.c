/*
 * XREFs of NtRestoreKey @ 0x140865E80
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmCheckNoTxContext @ 0x140651F20 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1407189B0 (IoConvertFileHandleToKernelHandle.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  char v3; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  HANDLE v12; // rdi
  int v13; // eax
  struct _DMA_ADAPTER *DmaOperations; // rdx
  struct _KTHREAD *v15; // rax
  _DMA_OPERATIONS *v16; // rdi
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // r9
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v23; // [rsp+60h] [rbp-49h] BYREF
  __int128 v24; // [rsp+70h] [rbp-39h]
  __int128 v25; // [rsp+80h] [rbp-29h]
  _OWORD v26[3]; // [rsp+90h] [rbp-19h] BYREF

  Handle.DmaOperations = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  v22[1] = v22;
  v23 = 0LL;
  v3 = 0;
  v22[0] = v22;
  v24 = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
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
      return v9;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v11 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 1u, 0, &Handle);
      v12 = *(HANDLE *)&Handle.Version;
      v9 = v11;
      if ( v11 < 0 )
      {
LABEL_24:
        if ( v12 && v12 != FileHandle )
          ZwClose(v12);
        goto LABEL_27;
      }
    }
    else
    {
      v12 = FileHandle;
      *(_QWORD *)&Handle.Version = FileHandle;
    }
    v13 = CmObReferenceObjectByHandle(
            KeyHandle,
            0,
            v10,
            PreviousMode,
            (struct _DMA_ADAPTER **)&Handle.DmaOperations,
            0LL);
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
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = Handle.DmaOperations;
    v17 = *(_QWORD *)&Handle.Version;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v23 = v16;
      *((_QWORD *)&v23 + 1) = v17;
      LODWORD(v24) = Flags;
      v18 = CmpCallCallBacksEx(0x29u, (__int64)&v23, 0LL, 1, 0x2Au, 0LL, (__int64)v22);
      v9 = v18;
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v9 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
        v12 = *(HANDLE *)&Handle.Version;
        goto LABEL_22;
      }
      v3 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v26);
    LOBYTE(v19) = PreviousMode;
    v9 = CmRestoreKey(v16, v17, Flags, v19);
    KiUnstackDetachProcess((__int64)v26, 0LL);
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)v16, v9, (__int64)&v23, 0LL, v22);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}

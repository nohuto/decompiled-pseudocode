/*
 * XREFs of NtRestoreKey @ 0x140864B60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmCheckNoTxContext @ 0x14068D8B0 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140716620 (IoConvertFileHandleToKernelHandle.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  char v3; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r8
  NTSTATUS v14; // eax
  HANDLE v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  _DWORD *v18; // r9
  struct _DMA_ADAPTER *DmaOperations; // rdx
  struct _KTHREAD *v20; // rax
  _DMA_OPERATIONS *v21; // rdi
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v33; // [rsp+60h] [rbp-49h] BYREF
  __int128 v34; // [rsp+70h] [rbp-39h]
  __int128 v35; // [rsp+80h] [rbp-29h]
  _OWORD v36[3]; // [rsp+90h] [rbp-19h] BYREF

  Handle.DmaOperations = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  v32[1] = v32;
  v33 = 0LL;
  v3 = 0;
  v32[0] = v32;
  v34 = 0LL;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v12 = CmCheckNoTxContext();
    if ( v12 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
      return v12;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v12 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v14 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 1u, 0, &Handle);
      v15 = *(HANDLE *)&Handle.Version;
      v12 = v14;
      if ( v14 < 0 )
      {
LABEL_24:
        if ( v15 && v15 != FileHandle )
          ZwClose(v15);
        goto LABEL_27;
      }
    }
    else
    {
      v15 = FileHandle;
      *(_QWORD *)&Handle.Version = FileHandle;
    }
    v16 = CmObReferenceObjectByHandle(
            KeyHandle,
            0,
            v13,
            PreviousMode,
            (struct _DMA_ADAPTER **)&Handle.DmaOperations,
            0LL);
    DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
    v12 = v16;
    if ( v16 < 0 )
    {
LABEL_22:
      if ( DmaOperations )
        HalPutDmaAdapter(DmaOperations);
      goto LABEL_24;
    }
    if ( (*((_DWORD *)Handle.DmaOperations->PutDmaAdapter + 2) & 0x80u) != 0 )
    {
      v12 = -1073741790;
      goto LABEL_22;
    }
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = Handle.DmaOperations;
    v22 = *(_QWORD *)&Handle.Version;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v33 = v21;
      *((_QWORD *)&v33 + 1) = v22;
      LODWORD(v34) = Flags;
      v23 = CmpCallCallBacksEx(0x29u, (__int64)&v33, 0LL, 1, 0x2Au, 0LL, (__int64)v32);
      v12 = v23;
      if ( v23 < 0 )
      {
        if ( v23 == -1073740541 )
          v12 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)DmaOperations, v17, (__int64)v18);
        DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
        v15 = *(HANDLE *)&Handle.Version;
        goto LABEL_22;
      }
      v3 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v36, (__int64)DmaOperations, v17, v18);
    LOBYTE(v24) = PreviousMode;
    v12 = CmRestoreKey(v21, v22, Flags, v24);
    KiUnstackDetachProcess((__int64)v36, 0LL, v25, v26);
    if ( v3 )
      v12 = CmPostCallbackNotificationEx(42, (__int64)v21, v12, (__int64)&v33, 0LL, v32);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return -1073741431;
}

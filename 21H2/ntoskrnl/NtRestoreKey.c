/*
 * XREFs of NtRestoreKey @ 0x140869630
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x140665AE0 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
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
  struct _DMA_ADAPTER *DmaOperations; // rdx
  struct _KTHREAD *v18; // rax
  _DMA_OPERATIONS *v19; // rdi
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v32; // [rsp+60h] [rbp-49h] BYREF
  __int128 v33; // [rsp+70h] [rbp-39h]
  __int128 v34; // [rsp+80h] [rbp-29h]
  _OWORD v35[3]; // [rsp+90h] [rbp-19h] BYREF

  Handle.DmaOperations = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  v31[1] = v31;
  v32 = 0LL;
  v3 = 0;
  v31[0] = v31;
  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v12 = CmCheckNoTxContext();
    if ( v12 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
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
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = Handle.DmaOperations;
    v20 = *(_QWORD *)&Handle.Version;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v32 = v19;
      *((_QWORD *)&v32 + 1) = v20;
      LODWORD(v33) = Flags;
      v21 = CmpCallCallBacksEx(0x29u, (__int64)&v32, 0LL, 1, 0x2Au, 0LL, (__int64)v31);
      v12 = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          v12 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
        DmaOperations = (struct _DMA_ADAPTER *)Handle.DmaOperations;
        v15 = *(HANDLE *)&Handle.Version;
        goto LABEL_22;
      }
      v3 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v35);
    LOBYTE(v25) = PreviousMode;
    v12 = CmRestoreKey(v19, v20, Flags, v25);
    KiUnstackDetachProcess((__int64)v35, 0LL);
    if ( v3 )
      v12 = CmPostCallbackNotificationEx(0x2Au, (__int64)v19, v12, (__int64)&v32, 0LL, v31);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return -1073741431;
}

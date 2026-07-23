/*
 * XREFs of NtSaveMergedKeys @ 0x14086BB70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403FB210 (ZwSaveMergedKeys.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmConvertHandleToKernelHandle @ 0x1406FEE94 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1406FF270 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140726970 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 */

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v15; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER FileHandlea; // [rsp+40h] [rbp-19h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v18[3]; // [rsp+58h] [rbp-1h] BYREF

  FileHandlea.DmaOperations = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  v15 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&FileHandlea.Version = 0LL;
  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(
                   LowPrecedenceKeyHandle,
                   v11,
                   PreviousMode,
                   0,
                   (PHANDLE)&FileHandlea.DmaOperations);
            if ( v7 >= 0 )
            {
              v7 = IoConvertFileHandleToKernelHandle(FileHandle, PreviousMode, 2u, 0, &FileHandlea);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys(
                       HighPrecedenceKeyHandlea,
                       FileHandlea.DmaOperations,
                       *(HANDLE *)&FileHandlea.Version);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, 0, &v15, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v12, 0, &DmaAdapter, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v18);
              v7 = CmSaveMergedKeys(v15, DmaAdapter, FileHandle, 0LL);
              KiUnstackDetachProcess((__int64)v18, 0);
            }
          }
        }
      }
      else
      {
        v7 = -1073741727;
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v15 )
      HalPutDmaAdapter(v15);
    if ( *(_QWORD *)&FileHandlea.Version )
      ZwClose(*(HANDLE *)&FileHandlea.Version);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( FileHandlea.DmaOperations )
    ZwClose(FileHandlea.DmaOperations);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  return v7;
}

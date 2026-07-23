/*
 * XREFs of NtSaveMergedKeys @ 0x140869900
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403FD640 (ZwSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x140665704 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140665AE0 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 */

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v12; // rdx
  __int64 v13; // r8
  void *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v21; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER FileHandlea; // [rsp+40h] [rbp-19h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v24[3]; // [rsp+58h] [rbp-1h] BYREF

  FileHandlea.DmaOperations = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  v21 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&FileHandlea.Version = 0LL;
  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v10 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v12, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v10 >= 0 )
          {
            v10 = CmConvertHandleToKernelHandle(
                    LowPrecedenceKeyHandle,
                    v14,
                    PreviousMode,
                    0,
                    (PHANDLE)&FileHandlea.DmaOperations);
            if ( v10 >= 0 )
            {
              v10 = IoConvertFileHandleToKernelHandle(FileHandle, PreviousMode, 2u, 0, &FileHandlea);
              if ( v10 >= 0 )
                v10 = ZwSaveMergedKeys(
                        HighPrecedenceKeyHandlea,
                        FileHandlea.DmaOperations,
                        *(HANDLE *)&FileHandlea.Version);
            }
          }
        }
        else
        {
          v10 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v13, 0, &v21, 0LL);
          if ( v10 >= 0 )
          {
            v10 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v15, 0, &DmaAdapter, 0LL);
            if ( v10 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v24);
              v10 = CmSaveMergedKeys(v21, DmaAdapter, FileHandle, 0LL);
              KiUnstackDetachProcess((__int64)v24, 0LL);
            }
          }
        }
      }
      else
      {
        v10 = -1073741727;
      }
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v21 )
      HalPutDmaAdapter(v21);
    if ( *(_QWORD *)&FileHandlea.Version )
      ZwClose(*(HANDLE *)&FileHandlea.Version);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v10 = -1073741431;
  }
  if ( FileHandlea.DmaOperations )
    ZwClose(FileHandlea.DmaOperations);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  return v10;
}

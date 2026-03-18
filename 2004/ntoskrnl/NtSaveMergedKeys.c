/*
 * XREFs of NtSaveMergedKeys @ 0x140866150
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403F6640 (ZwSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmConvertHandleToKernelHandle @ 0x140651B44 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140651F20 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1407189B0 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 */

__int64 __fastcall NtSaveMergedKeys(void *a1, void *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v15; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v18[3]; // [rsp+58h] [rbp-1h] BYREF

  Handle.DmaOperations = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
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
          v7 = CmConvertHandleToKernelHandle(a1, v9, PreviousMode, 0, &v17);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(a2, v11, PreviousMode, 0, (PHANDLE)&Handle.DmaOperations);
            if ( v7 >= 0 )
            {
              v7 = IoConvertFileHandleToKernelHandle(a3, PreviousMode, 2u, 0, &Handle);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys((__int64)v17, (__int64)Handle.DmaOperations);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(a1, 0, v10, 0, &v15, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(a2, 0, v12, 0, &DmaAdapter, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v18);
              v7 = CmSaveMergedKeys(v15, DmaAdapter, a3, 0LL);
              KiUnstackDetachProcess((__int64)v18, 0LL);
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
    if ( *(_QWORD *)&Handle.Version )
      ZwClose(*(HANDLE *)&Handle.Version);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( Handle.DmaOperations )
    ZwClose(Handle.DmaOperations);
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)v7;
}

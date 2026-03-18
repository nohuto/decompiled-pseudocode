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

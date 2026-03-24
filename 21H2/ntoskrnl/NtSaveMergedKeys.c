/*
 * XREFs of NtSaveMergedKeys @ 0x1408697A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403FD460 (ZwSaveMergedKeys.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x14066F224 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14066F600 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A4C0 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v18; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v21[3]; // [rsp+58h] [rbp-1h] BYREF

  Handle.DmaOperations = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  memset(v21, 0, sizeof(v21));
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
          v7 = CmConvertHandleToKernelHandle(a1, v9, PreviousMode, 0, &v20);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(a2, v11, PreviousMode, 0, (PHANDLE)&Handle.DmaOperations);
            if ( v7 >= 0 )
            {
              v7 = IoConvertFileHandleToKernelHandle(a3, PreviousMode, 2u, 0, &Handle);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys((__int64)v20, (__int64)Handle.DmaOperations);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(a1, 0, v10, 0, &v18, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(a2, 0, v12, 0, &DmaAdapter, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v21, v13, v14, v15);
              v7 = CmSaveMergedKeys(v18, DmaAdapter, a3, 0LL);
              KiUnstackDetachProcess((__int64)v21, 0);
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
    if ( v18 )
      HalPutDmaAdapter(v18);
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
  if ( v20 )
    ZwClose(v20);
  return (unsigned int)v7;
}

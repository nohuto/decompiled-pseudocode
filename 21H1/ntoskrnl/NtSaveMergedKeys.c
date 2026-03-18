/*
 * XREFs of NtSaveMergedKeys @ 0x140864E30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1403F53B0 (ZwSaveMergedKeys.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmConvertHandleToKernelHandle @ 0x14068D4D4 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14068D8B0 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140716620 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 */

__int64 __fastcall NtSaveMergedKeys(void *a1, void *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v12; // rdx
  __int64 v13; // r8
  void *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-29h] BYREF
  PADAPTER_OBJECT v26; // [rsp+38h] [rbp-21h] BYREF
  struct _DMA_ADAPTER Handle; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v28; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v29[3]; // [rsp+58h] [rbp-1h] BYREF

  Handle.DmaOperations = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  DmaAdapter = 0LL;
  *(_QWORD *)&Handle.Version = 0LL;
  memset(v29, 0, sizeof(v29));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v10 = CmConvertHandleToKernelHandle(a1, v12, PreviousMode, 0, &v28);
          if ( v10 >= 0 )
          {
            v10 = CmConvertHandleToKernelHandle(a2, v14, PreviousMode, 0, (PHANDLE)&Handle.DmaOperations);
            if ( v10 >= 0 )
            {
              v10 = IoConvertFileHandleToKernelHandle(a3, PreviousMode, 2u, 0, &Handle);
              if ( v10 >= 0 )
                v10 = ZwSaveMergedKeys((__int64)v28, (__int64)Handle.DmaOperations);
            }
          }
        }
        else
        {
          v10 = CmObReferenceObjectByHandle(a1, 0, v13, 0, &v26, 0LL);
          if ( v10 >= 0 )
          {
            v10 = CmObReferenceObjectByHandle(a2, 0, v15, 0, &DmaAdapter, 0LL);
            if ( v10 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v29, v16, v17, v18);
              v10 = CmSaveMergedKeys(v26, DmaAdapter, a3, 0LL);
              KiUnstackDetachProcess((__int64)v29, 0LL, v19, v20);
            }
          }
        }
      }
      else
      {
        v10 = -1073741727;
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v26 )
      HalPutDmaAdapter(v26);
    if ( *(_QWORD *)&Handle.Version )
      ZwClose(*(HANDLE *)&Handle.Version);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v10 = -1073741431;
  }
  if ( Handle.DmaOperations )
    ZwClose(Handle.DmaOperations);
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)v10;
}

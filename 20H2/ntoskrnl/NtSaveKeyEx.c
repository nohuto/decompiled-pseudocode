/*
 * XREFs of NtSaveKeyEx @ 0x140724EC0
 * Callers:
 *     NtSaveKey @ 0x14086BB50 (NtSaveKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmCheckNoTxContext @ 0x1406FF270 (CmCheckNoTxContext.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140726970 (IoConvertFileHandleToKernelHandle.c)
 *     CmDumpKey @ 0x14087E390 (CmDumpKey.c)
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  struct _KTHREAD *v13; // rax
  PADAPTER_OBJECT v14; // rdi
  HANDLE v15; // r15
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v26; // [rsp+60h] [rbp-49h] BYREF
  __int128 v27; // [rsp+70h] [rbp-39h]
  __int128 v28; // [rsp+80h] [rbp-29h]
  _OWORD v29[3]; // [rsp+90h] [rbp-19h] BYREF

  DmaAdapter = 0LL;
  Handle = 0LL;
  v25[1] = v25;
  v26 = 0LL;
  v25[0] = v25;
  v27 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v8 = CmCheckNoTxContext();
  if ( v8 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((Format - 1) & 0xFFFFFFFC) == 0 && Format != 3 )
      {
        if ( PreviousMode == 1 )
        {
          LOBYTE(v9) = 1;
          v11 = IoConvertFileHandleToKernelHandle(FileHandle, v9, 2LL, 0LL, &Handle);
          v12 = Handle;
          v8 = v11;
          if ( v11 < 0 )
          {
LABEL_20:
            if ( v12 && v12 != FileHandle )
              ZwClose(v12);
            goto LABEL_23;
          }
        }
        else
        {
          v12 = FileHandle;
          Handle = FileHandle;
        }
        v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &DmaAdapter, 0LL);
        if ( v8 >= 0 )
        {
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          v14 = DmaAdapter;
          v15 = Handle;
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (*(_QWORD *)&v26 = v14,
                *((_QWORD *)&v26 + 1) = v15,
                LODWORD(v27) = Format,
                v16 = CmpCallCallBacksEx(0x2Bu, (__int64)&v26, 0LL, 1, 0x2Cu, 0LL, (__int64)v25),
                v8 = v16,
                v16 < 0) )
          {
            if ( v16 == -1073740541 )
              v8 = 0;
          }
          else
          {
            CmpAttachToRegistryProcess((__int64)v29);
            if ( Format == 4 )
            {
              LOBYTE(v17) = PreviousMode;
              v20 = CmDumpKey(v14, v15, v17);
            }
            else
            {
              v19 = 5LL;
              LOBYTE(v18) = PreviousMode;
              if ( Format != 2 )
                v19 = 3LL;
              v20 = CmSaveKey(v14, v15, v19, v18);
            }
            v21 = v20;
            KiUnstackDetachProcess((__int64)v29, 0);
            v8 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v14, v21, (__int64)&v26, 0LL, v25);
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v12 = Handle;
        }
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_20;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741727;
    }
  }
LABEL_23:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}

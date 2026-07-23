/*
 * XREFs of NtSaveKeyEx @ 0x140714B70
 * Callers:
 *     NtSaveKey @ 0x140864E10 (NtSaveKey.c)
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
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140716620 (IoConvertFileHandleToKernelHandle.c)
 *     CmDumpKey @ 0x140877530 (CmDumpKey.c)
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  HANDLE v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  struct _KTHREAD *v19; // rax
  PADAPTER_OBJECT v20; // rdi
  HANDLE v21; // r15
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v37; // [rsp+60h] [rbp-49h] BYREF
  __int128 v38; // [rsp+70h] [rbp-39h]
  __int128 v39; // [rsp+80h] [rbp-29h]
  _OWORD v40[3]; // [rsp+90h] [rbp-19h] BYREF

  DmaAdapter = 0LL;
  Handle = 0LL;
  v36[1] = v36;
  v37 = 0LL;
  v36[0] = v36;
  v38 = 0LL;
  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    return -1073741431;
  }
  v11 = CmCheckNoTxContext();
  if ( v11 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((Format - 1) & 0xFFFFFFFC) == 0 && Format != 3 )
      {
        if ( PreviousMode == 1 )
        {
          LOBYTE(v12) = 1;
          v14 = IoConvertFileHandleToKernelHandle(FileHandle, v12, 2LL, 0LL, &Handle);
          v15 = Handle;
          v11 = v14;
          if ( v14 < 0 )
          {
LABEL_20:
            if ( v15 && v15 != FileHandle )
              ZwClose(v15);
            goto LABEL_23;
          }
        }
        else
        {
          v15 = FileHandle;
          Handle = FileHandle;
        }
        v11 = CmObReferenceObjectByHandle(KeyHandle, 0, v13, PreviousMode, &DmaAdapter, 0LL);
        if ( v11 >= 0 )
        {
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          v20 = DmaAdapter;
          v21 = Handle;
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (*(_QWORD *)&v37 = v20,
                *((_QWORD *)&v37 + 1) = v21,
                LODWORD(v38) = Format,
                v22 = CmpCallCallBacksEx(0x2Bu, (__int64)&v37, 0LL, 1, 0x2Cu, 0LL, (__int64)v36),
                v11 = v22,
                v22 < 0) )
          {
            if ( v22 == -1073740541 )
              v11 = 0;
          }
          else
          {
            CmpAttachToRegistryProcess((__int64)v40, v16, v17, v18);
            if ( Format == 4 )
            {
              LOBYTE(v23) = PreviousMode;
              v26 = CmDumpKey(v20, v21, v23);
            }
            else
            {
              v25 = 5LL;
              LOBYTE(v24) = PreviousMode;
              if ( Format != 2 )
                v25 = 3LL;
              v26 = CmSaveKey(v20, v21, v25, v24);
            }
            v29 = v26;
            KiUnstackDetachProcess((__int64)v40, 0LL, v27, v28);
            v11 = CmPostCallbackNotificationEx(44, (__int64)v20, v29, (__int64)&v37, 0LL, v36);
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, (__int64)v18);
          v15 = Handle;
        }
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_20;
      }
      v11 = -1073741811;
    }
    else
    {
      v11 = -1073741727;
    }
  }
LABEL_23:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
  return v11;
}

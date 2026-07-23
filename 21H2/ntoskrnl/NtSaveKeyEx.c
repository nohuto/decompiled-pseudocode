/*
 * XREFs of NtSaveKeyEx @ 0x140728E00
 * Callers:
 *     NtSaveKey @ 0x1408698E0 (NtSaveKey.c)
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
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
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
  struct _KTHREAD *v16; // rax
  PADAPTER_OBJECT v17; // rdi
  HANDLE v18; // r15
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v35; // [rsp+60h] [rbp-49h] BYREF
  __int128 v36; // [rsp+70h] [rbp-39h]
  __int128 v37; // [rsp+80h] [rbp-29h]
  _OWORD v38[3]; // [rsp+90h] [rbp-19h] BYREF

  DmaAdapter = 0LL;
  Handle = 0LL;
  v34[1] = v34;
  v35 = 0LL;
  v34[0] = v34;
  v36 = 0LL;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
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
          v16 = KeGetCurrentThread();
          --v16->KernelApcDisable;
          v17 = DmaAdapter;
          v18 = Handle;
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (*(_QWORD *)&v35 = v17,
                *((_QWORD *)&v35 + 1) = v18,
                LODWORD(v36) = Format,
                v19 = CmpCallCallBacksEx(0x2Bu, (__int64)&v35, 0LL, 1, 0x2Cu, 0LL, (__int64)v34),
                v11 = v19,
                v19 < 0) )
          {
            if ( v19 == -1073740541 )
              v11 = 0;
          }
          else
          {
            CmpAttachToRegistryProcess((__int64)v38);
            if ( Format == 4 )
            {
              LOBYTE(v23) = PreviousMode;
              v26 = CmDumpKey(v17, v18, v23);
            }
            else
            {
              v25 = 5LL;
              LOBYTE(v24) = PreviousMode;
              if ( Format != 2 )
                v25 = 3LL;
              v26 = CmSaveKey(v17, v18, v25, v24);
            }
            v27 = v26;
            KiUnstackDetachProcess((__int64)v38, 0LL);
            v11 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v17, v27, (__int64)&v35, 0LL, v34);
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
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
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
  return v11;
}

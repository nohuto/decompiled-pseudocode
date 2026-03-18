/*
 * XREFs of NtSaveKeyEx @ 0x14065A1F0
 * Callers:
 *     NtSaveKey @ 0x14065A1D0 (NtSaveKey.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14067DE4C (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSaveKeyEx(int a1, void *a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v13; // rdi
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  int v20; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-79h]
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v25; // [rsp+60h] [rbp-59h] BYREF
  __int128 v26; // [rsp+70h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-39h]
  __int128 v28; // [rsp+90h] [rbp-29h]
  _OWORD v29[3]; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v24[1] = v24;
  v24[0] = v24;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  CmpInitializeThreadInfo((__int64)&v25);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v7 = -1073741431;
    goto LABEL_24;
  }
  v7 = CmCheckNoTxContext();
  if ( v7 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
      {
        if ( PreviousMode == 1 )
        {
          LOBYTE(v8) = 1;
          v11 = 0LL;
          v7 = IoConvertFileHandleToKernelHandle(a2, v8, 2LL);
          if ( v7 < 0 )
          {
LABEL_20:
            if ( v11 && v11 != a2 )
              ZwClose(v11);
            goto LABEL_23;
          }
        }
        else
        {
          v11 = a2;
          Handle = a2;
        }
        LOBYTE(v10) = PreviousMode;
        v7 = CmObReferenceObjectByHandle(a1, 0, v9, v10, (__int64)&Object, 0LL);
        if ( v7 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v13 = Object;
          if ( CmpCallBackCount
            && !CmpIsRegistryLockAcquired()
            && (*(_QWORD *)&v26 = v13,
                *((_QWORD *)&v26 + 1) = Handle,
                LOBYTE(v14) = 1,
                LODWORD(v27) = a3,
                v15 = CmpCallCallBacksEx(43, (unsigned int)&v26, 0, v14, 44, 0LL, (__int64)v24),
                v7 = v15,
                v15 < 0) )
          {
            if ( v15 == -1073740541 )
              v7 = 0;
          }
          else
          {
            CmpAttachToRegistryProcess(v29);
            if ( a3 == 4 )
            {
              LOBYTE(v16) = PreviousMode;
              v19 = CmDumpKeyToFile(v13, v16, Handle);
            }
            else
            {
              v18 = 5LL;
              LOBYTE(v17) = PreviousMode;
              if ( a3 != 2 )
                v18 = 3LL;
              v19 = CmSaveKey(v13, Handle, v18, v17);
            }
            v20 = v19;
            CmpDetachFromRegistryProcess(v29);
            v7 = CmPostCallbackNotificationEx(44, (_DWORD)v13, v20, (unsigned int)&v26, 0LL, (__int64)v24);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v11 = Handle;
        }
        if ( Object )
          ObfDereferenceObject(Object);
        goto LABEL_20;
      }
      v7 = -1073741811;
    }
    else
    {
      v7 = -1073741727;
    }
  }
LABEL_23:
  CmpReleaseShutdownRundown();
LABEL_24:
  CmCleanupThreadInfo((__int64 *)&v25);
  return (unsigned int)v7;
}

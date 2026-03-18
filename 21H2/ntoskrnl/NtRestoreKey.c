/*
 * XREFs of NtRestoreKey @ 0x14090F750
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14067DE4C (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtRestoreKey(int a1, HANDLE a2, unsigned int a3)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  signed int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  NTSTATUS v16; // eax
  HANDLE v17; // rdi
  int v18; // eax
  _QWORD *v19; // rsi
  struct _KTHREAD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  HANDLE Handle; // [rsp+30h] [rbp-79h] BYREF
  PVOID Object; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v27; // [rsp+50h] [rbp-59h] BYREF
  __int128 v28; // [rsp+60h] [rbp-49h] BYREF
  __int128 v29; // [rsp+70h] [rbp-39h]
  __int128 v30; // [rsp+80h] [rbp-29h]
  _OWORD v31[3]; // [rsp+90h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v26[1] = v26;
  v26[0] = v26;
  v27 = 0LL;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  CmpInitializeThreadInfo((__int64)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v9, v10) )
  {
    v11 = CmCheckNoTxContext();
    if ( v11 < 0 )
    {
LABEL_27:
      CmpReleaseShutdownRundown(v13, v12, v14);
      goto LABEL_28;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v11 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v16 = IoConvertFileHandleToKernelHandle(a2, 1, 1u, 0, &Handle);
      v17 = Handle;
      v11 = v16;
      if ( v16 < 0 )
      {
LABEL_24:
        if ( v17 && v17 != a2 )
          ZwClose(v17);
        goto LABEL_27;
      }
    }
    else
    {
      v17 = a2;
      Handle = a2;
    }
    LOBYTE(v15) = PreviousMode;
    v18 = CmObReferenceObjectByHandle(a1, 0, v14, v15, (__int64)&Object, 0LL);
    v19 = Object;
    v11 = v18;
    if ( v18 < 0 )
    {
LABEL_22:
      if ( v19 )
        ObfDereferenceObject(v19);
      goto LABEL_24;
    }
    v13 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
    if ( (v13 & 0x80u) != 0LL )
    {
      v11 = -1073741790;
      goto LABEL_22;
    }
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v19 = Object;
    v17 = Handle;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v28 = v19;
      *((_QWORD *)&v28 + 1) = v17;
      LODWORD(v29) = a3;
      v22 = CmpCallCallBacks(0x29u, (__int64)&v28, v21, 0x2Au, 0LL, (__int64)v26);
      v11 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v11 = 0;
LABEL_21:
        KeLeaveCriticalRegion();
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess(v31);
    v11 = CmRestoreKey(v19, (ULONG_PTR)v17, a3);
    CmpDetachFromRegistryProcess(v31);
    if ( v6 )
      v11 = CmPostCallbackNotification(0x2Au, (__int64)v19, v11, (__int64)&v28, v26);
    goto LABEL_21;
  }
  v11 = -1073741431;
LABEL_28:
  CmCleanupThreadInfo((__int64 *)&v27);
  return (unsigned int)v11;
}

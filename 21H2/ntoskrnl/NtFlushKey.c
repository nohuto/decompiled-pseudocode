/*
 * XREFs of NtFlushKey @ 0x1406A5C00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x14022EA80 (CmpDoFlushAll.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtFlushKey(int a1)
{
  __int64 v1; // r12
  char v3; // r14
  PVOID v4; // rcx
  int v5; // r8d
  int v6; // r9d
  char v7; // r15
  signed int v8; // ebx
  char PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PVOID Object; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v33; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v34[2]; // [rsp+70h] [rbp-49h] BYREF
  _OWORD v35[3]; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v36[2]; // [rsp+C0h] [rbp+7h] BYREF

  v31 = 0LL;
  v1 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, sizeof(v36));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v36, 0x20000uLL);
  Object = 0LL;
  v32[1] = v32;
  v3 = 0;
  v32[0] = v32;
  CmpInitializeThreadInfo((__int64)&v33);
  v7 = CmpAcquireShutdownRundown();
  if ( !v7 )
  {
    v8 = -1073741431;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v6) = PreviousMode;
  v8 = CmObReferenceObjectByHandle(a1, 0, v5, v6, (__int64)&Object, (__int64)&v31);
  if ( v8 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v1 = *((_QWORD *)Object + 1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = Object;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 32LL) + 160LL) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v31) & 0x20006) != 0 )
    {
      v8 = -1073741790;
LABEL_26:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_27;
    }
    if ( CmpCallBackCount )
    {
      if ( !CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v34[0] = v11;
        v3 = 1;
        LOBYTE(v12) = 1;
        v13 = CmpCallCallBacksEx(30, (unsigned int)v34, 0, v12, 31, (__int64)v11, (__int64)v32);
        v8 = v13;
        if ( v13 < 0 )
        {
          if ( v13 == -1073740541 )
            v8 = 0;
          goto LABEL_26;
        }
      }
    }
    CmpLockRegistryFreezeAware(0);
    CmpLockKcbShared(v11[1]);
    v8 = CmpPerformKeyBodyDeletionCheck(v11, 0LL);
    if ( v8 >= 0 )
    {
      v14 = v11[1];
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 32);
      if ( v15 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v14);
        CmpUnlockRegistry(v17, v16, v18, v19);
        CmpAttachToRegistryProcess(v35);
        CmpDoFlushAll();
        CmpDetachFromRegistryProcess(v35);
        v8 = 0;
        goto LABEL_24;
      }
      v20 = v15 + 205;
      if ( ExAcquireRundownProtection(v15 + 205) )
      {
        CmpUnlockKcb(v11[1]);
        CmpUnlockRegistry(v27, v26, v28, v29);
        CmpAttachToRegistryProcess(v35);
        v8 = CmpFlushHive((ULONG_PTR)v15, 0);
        if ( v8 < 0 )
          v8 = -1073741491;
        CmpDetachFromRegistryProcess(v35);
        ExReleaseRundownProtection(v20);
        goto LABEL_24;
      }
      v8 = -1073740763;
    }
    CmpUnlockKcb(v11[1]);
    CmpUnlockRegistry(v22, v21, v23, v24);
LABEL_24:
    if ( v3 )
      v8 = CmPostCallbackNotificationEx(31, (__int64)v11, v8, (__int64)v34, 0LL, v32);
    goto LABEL_26;
  }
LABEL_27:
  v4 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_29:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v4) = 21;
    CmpTraceRoutine(v4, v36, (unsigned int)v8, 0LL, v1, 0LL);
  }
  if ( v7 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v33);
  return (unsigned int)v8;
}

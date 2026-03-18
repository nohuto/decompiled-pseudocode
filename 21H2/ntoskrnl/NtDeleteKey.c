/*
 * XREFs of NtDeleteKey @ 0x14067DE90
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtDeleteKey(HANDLE Handle)
{
  __int64 v2; // rsi
  char v3; // r13
  char v4; // r12
  char PreviousMode; // r15
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  char v9; // bl
  int v10; // eax
  int v11; // edi
  char v12; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rbx
  int v15; // r9d
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  int v20; // r8d
  int v21; // r9d
  GUID *p_TransactionId; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D8h]
  char v29; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+88h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-70h] BYREF
  GUID v38[2]; // [rsp+B8h] [rbp-50h] BYREF
  GUID TransactionId; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v40[2]; // [rsp+F0h] [rbp-18h] BYREF

  v32 = 0LL;
  v36 = 0LL;
  LODWORD(v31) = 0;
  v2 = 0LL;
  memset(v38, 0, sizeof(v38));
  v34 = 0LL;
  v33 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v40, 0x20000uLL);
  CmpInitializeThreadInfo((__int64)&v36);
  Object = 0LL;
  v3 = 0;
  v35[1] = v35;
  v4 = 0;
  v35[0] = v35;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = CmpAcquireShutdownRundown();
  v9 = v29;
  if ( !v29 )
  {
    v11 = -1073741431;
    goto LABEL_33;
  }
  LOBYTE(v8) = PreviousMode;
  v10 = CmObReferenceObjectByHandle((_DWORD)Handle, 0x10000, v7, v8, (__int64)&Object, (__int64)&v32);
  v11 = v10;
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v31) )
    {
      LOBYTE(v21) = PreviousMode;
      v11 = CmObReferenceObjectByHandle((_DWORD)Handle, 131097, v20, v21, (__int64)&Object, (__int64)&v32);
      if ( v11 < 0 )
        goto LABEL_57;
      v14 = Object;
      v11 = 0;
      if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        v12 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v14 = Object;
    }
    v11 = -1073741790;
    goto LABEL_41;
  }
  v12 = 0;
  if ( v10 < 0 )
    goto LABEL_29;
  v11 = 0;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = 1;
  v14 = Object;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v38[0].Data1 = v14;
    LOBYTE(v15) = 1;
    v16 = CmpCallCallBacksEx(0, (unsigned int)v38, 0, v15, 15, (__int64)v14, (__int64)v35);
    v11 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073740541 )
        v11 = 0;
      goto LABEL_24;
    }
    v3 = 1;
    v11 = 0;
  }
  if ( CmpTraceRoutine && v14 )
    v33 = v14[1];
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( (!ExpControlKey || v14[1] != *((_QWORD *)ExpControlKey + 1))
    && (!qword_140C15968 || v14[1] != *((_QWORD *)qword_140C15968 + 1)) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v14 = Object;
    v6 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v6 + 8) & 0x80u) != 0 || (v18 = *(_QWORD *)(v6 + 72)) != 0 && (*(_DWORD *)(v18 + 8) & 0x80u) != 0 )
    {
      v11 = -1073741790;
      goto LABEL_24;
    }
    if ( !v12 )
      goto LABEL_22;
    LOBYTE(v17) = PreviousMode;
    v11 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v17, 0x10000, (unsigned int)&SubjectContext, (__int64)&v31);
    if ( v11 >= 0 )
    {
      v14 = Object;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
      {
        v11 = -1073741790;
        goto LABEL_41;
      }
LABEL_22:
      v11 = CmDeleteKey(v14);
      if ( v11 >= 0 && (v32 & 4) != 0 )
      {
        if ( v14[7] || v14[8] )
        {
          CmpLockRegistry();
          CmpTransSearchAddTransFromKeyBody(v14, &v34);
          TransactionId = *(GUID *)(v34 + 88);
          CmpUnlockRegistry(v24, v23, v25, v26, v27, v28);
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v14, Handle, p_TransactionId);
      }
      goto LABEL_24;
    }
LABEL_57:
    v14 = Object;
    goto LABEL_41;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
  KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  v14 = Object;
LABEL_24:
  if ( v12 )
LABEL_41:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = CmPostCallbackNotificationEx(15, (_DWORD)v14, v11, (unsigned int)v38, 0LL, (__int64)v35);
  if ( !v4 )
    goto LABEL_30;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_29:
  v14 = Object;
LABEL_30:
  if ( v14 )
    ObfDereferenceObject(v14);
  v2 = v33;
  v9 = v29;
LABEL_33:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v6) = 12;
    CmpTraceRoutine(v6, v40, (unsigned int)v11, 0LL, v2, 0LL);
  }
  if ( v9 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v36);
  return (unsigned int)v11;
}

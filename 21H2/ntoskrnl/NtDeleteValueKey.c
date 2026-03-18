/*
 * XREFs of NtDeleteValueKey @ 0x140714980
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x140720224 (CmpDoesBufferRequireCapturing.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtDeleteValueKey(__int64 a1, _OWORD *a2)
{
  int v3; // edi
  char v4; // r14
  char v5; // r13
  unsigned int PreviousMode; // r12d
  char v7; // si
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rdx
  signed int v11; // edi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  char *v15; // rsi
  __int64 v16; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v18; // r15
  char *i; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // [rsp+44h] [rbp-144h]
  char v28; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v31; // [rsp+70h] [rbp-118h] BYREF
  __int64 v32; // [rsp+78h] [rbp-110h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-108h]
  __int64 v34; // [rsp+88h] [rbp-100h]
  __int64 v35; // [rsp+90h] [rbp-F8h]
  _QWORD v36[2]; // [rsp+98h] [rbp-F0h] BYREF
  int v37; // [rsp+A8h] [rbp-E0h]
  __int128 v38; // [rsp+B0h] [rbp-D8h]
  __int128 v39; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-B8h] BYREF
  _OWORD v41[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v42; // [rsp+110h] [rbp-78h]
  __int128 v43; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v44[32]; // [rsp+130h] [rbp-58h] BYREF

  v3 = a1;
  v34 = a1;
  v39 = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v32 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v31 = 0;
  v37 = 0;
  memset(v44, 0, sizeof(v44));
  v35 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v44, 0x20000uLL);
  v5 = 0;
  Object[0] = 0LL;
  v36[1] = v36;
  v36[0] = v36;
  CmpInitializeThreadInfo((__int64)&v39);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28 = CmpAcquireShutdownRundown();
  if ( !v28 )
  {
    v11 = -1073741431;
    goto LABEL_52;
  }
  LOBYTE(v9) = PreviousMode;
  v11 = CmObReferenceObjectByHandle(v3, 2, v8, v9, (__int64)Object, (__int64)&v32);
  v27 = v11;
  if ( v11 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v31) )
    goto LABEL_51;
  LOBYTE(v25) = PreviousMode;
  v11 = CmObReferenceObjectByHandle(v34, 131097, v24, v25, (__int64)Object, (__int64)&v32);
  v27 = v11;
  if ( v11 < 0 )
    goto LABEL_53;
  if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
  {
LABEL_51:
    v11 = -1073741790;
LABEL_52:
    v27 = v11;
    goto LABEL_53;
  }
  v4 = 1;
LABEL_5:
  v7 = v4;
  if ( v11 < 0 )
  {
LABEL_53:
    v18 = 0;
    goto LABEL_34;
  }
  if ( CmpTraceRoutine && Object[0] )
    v35 = *((_QWORD *)Object[0] + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v38 = 0LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    LODWORD(v10) = *(_DWORD *)v12;
    LODWORD(v38) = v10;
    v13 = *(_QWORD *)(v12 + 8);
    *((_QWORD *)&v38 + 1) = v13;
    *(_OWORD *)Src = v38;
    if ( (_WORD)v10 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v13 + (unsigned __int16)v10;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v14 = LOWORD(Src[0]);
  v15 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v15;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, v15) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v16, v14, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v11 = -1073741670;
      v27 = -1073741670;
      v7 = v4;
      v18 = 0;
      goto LABEL_34;
    }
    v15 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v15;
    LOWORD(v14) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v11 = -1073741811;
LABEL_63:
    v27 = v11;
    v7 = v4;
    v18 = 0;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 8LL) & 0x80u) != 0 )
  {
    v11 = -1073741790;
    goto LABEL_63;
  }
  for ( i = &v15[2 * ((unsigned __int64)(unsigned __int16)v14 >> 1) - 2]; (_WORD)v14 && !*(_WORD *)i; i -= 2 )
  {
    LOWORD(v14) = v14 - 2;
    LOWORD(Src[0]) = v14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v18 = 0;
    goto LABEL_31;
  }
  *(PVOID *)&v41[0] = Object[0];
  *((_QWORD *)&v41[0] + 1) = Src;
  LOBYTE(v21) = 1;
  v11 = CmpCallCallBacksEx(2, (unsigned int)v41, 0, v21, 17, (__int64)Object[0], (__int64)v36);
  if ( v11 < 0 )
  {
    if ( v11 == -1073740541 )
      v11 = 0;
    goto LABEL_63;
  }
  v18 = 1;
LABEL_31:
  if ( !v4 )
    goto LABEL_32;
  LOBYTE(v10) = PreviousMode;
  v11 = CmKeyBodyRemapToVirtual((unsigned int)Object, v10, 2, (unsigned int)&SubjectContext, (__int64)&v31);
  v27 = v11;
  v7 = v4;
  if ( v11 >= 0 )
  {
    if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 184LL) & 0x1000000) == 0 )
    {
      v11 = -1073741790;
      v27 = -1073741790;
      goto LABEL_33;
    }
LABEL_32:
    v43 = *(_OWORD *)Src;
    v22 = (unsigned int)v32 >> 2;
    LOBYTE(v22) = (v32 & 4) != 0;
    v11 = CmDeleteValueKey(Object[0], &v43, v34, v22);
    v27 = v11;
LABEL_33:
    v7 = v4;
  }
LABEL_34:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v11 = CmPostCallbackNotificationEx(17, (__int64)Object[0], v11, (__int64)v41, 0LL, v36);
    v27 = v11;
  }
  if ( v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = v27;
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( CmpTraceRoutine )
  {
    v26 = v35;
    LOBYTE(v26) = 15;
    CmpTraceRoutine(v26, v44, (unsigned int)v11, 0LL, v35, Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v39);
  return (unsigned int)v11;
}

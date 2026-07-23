/*
 * XREFs of NtRenameKey @ 0x1408642D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x14061949C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // ebx
  char v13; // si
  int v14; // eax
  wchar_t *Buffer; // rcx
  unsigned __int16 v16; // bx
  PPRIVILEGE_SET v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // eax
  void *v20; // rsi
  struct _KTHREAD *v21; // rax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  NTSTATUS v30; // [rsp+44h] [rbp-134h]
  BOOLEAN v31; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v34; // [rsp+70h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-100h]
  _QWORD v36[2]; // [rsp+80h] [rbp-F8h] BYREF
  HANDLE v37; // [rsp+90h] [rbp-E8h]
  __int128 v38; // [rsp+A0h] [rbp-D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-C8h] BYREF
  _OWORD v40[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-88h]
  __int128 v42; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v43[48]; // [rsp+110h] [rbp-68h] BYREF

  v37 = KeyHandle;
  *(_OWORD *)Src = 0LL;
  memset(v43, 0, sizeof(v43));
  v3 = 0;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v36[1] = v36;
  v36[0] = v36;
  v34 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v31 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v31 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v12 = -1073741431;
    v30 = -1073741431;
    v13 = 0;
    goto LABEL_43;
  }
  v11 = 1LL;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v38 = 0LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v14 = *(_DWORD *)&NewName->Length;
    LODWORD(v38) = v14;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v38 + 1) = Buffer;
    *(_OWORD *)Src = v38;
    if ( (_WORD)v14 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (unsigned __int64)Buffer + (unsigned __int16)v14;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v16 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
  {
    v12 = -1073741811;
    v30 = -1073741811;
    v13 = 0;
    goto LABEL_43;
  }
  v17 = (PPRIVILEGE_SET)Src[1];
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v12 = -1073741670;
      v30 = -1073741670;
      v13 = 0;
      goto LABEL_43;
    }
    v17 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v16 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v19 = 0;
  if ( v16 >> 1 )
  {
    while ( LOWORD(v17->PrivilegeCount) != 92 )
    {
      ++v19;
      v17 = (PPRIVILEGE_SET)((char *)v17 + 2);
      if ( v19 >= v16 >> 1 )
        goto LABEL_22;
    }
    v12 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  v20 = v37;
  v12 = CmObReferenceObjectByHandle(v37, 0x20006u, v11, PreviousMode, DmaAdapter, 0LL);
  v30 = v12;
  if ( v12 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_24;
    v12 = CmObReferenceObjectByHandle(v20, 0x20019u, v11, PreviousMode, DmaAdapter, 0LL);
    v30 = v12;
    if ( v12 < 0 )
      goto LABEL_27;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_24:
      v12 = -1073741790;
LABEL_26:
      v30 = v12;
LABEL_27:
      v13 = 0;
      goto LABEL_43;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v12 < 0 )
    goto LABEL_27;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v13 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    *(PADAPTER_OBJECT *)&v40[0] = DmaAdapter[0];
    *((_QWORD *)&v40[0] + 1) = Src;
    v22 = CmpCallCallBacksEx(4u, (__int64)v40, 0LL, 1, 0x13u, (__int64)DmaAdapter[0], (__int64)v36);
    v12 = v22;
    if ( v22 < 0 )
    {
      if ( v22 == -1073740541 )
        v12 = 0;
      v30 = v12;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (v12 = CmKeyBodyReplicateToVirtual((__int64 *)DmaAdapter, PreviousMode, 0x20006u, (__int64)&SubjectContext),
        v30 = v12,
        v12 >= 0) )
  {
    CmpAttachToRegistryProcess((__int64)v43, v8, v11, (_DWORD *)v10);
    v42 = *(_OWORD *)Src;
    LOBYTE(v23) = PreviousMode;
    v12 = CmRenameKey(DmaAdapter[0], &v42, v23);
    v30 = v12;
    KiUnstackDetachProcess((__int64)v43, 0LL, v24, v25);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v12 = CmPostCallbackNotificationEx(19, (__int64)DmaAdapter[0], v12, (__int64)v40, 0LL, v36);
    v30 = v12;
  }
  if ( v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v11, v10);
    v12 = v30;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v31 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
    return v30;
  }
  return v12;
}

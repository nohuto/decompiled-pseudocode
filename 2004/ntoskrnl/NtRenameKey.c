/*
 * XREFs of NtRenameKey @ 0x1408655F0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     CmDoVirtualTest @ 0x14035E9E4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405E3E7C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140710CFC (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  char v9; // si
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // bx
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  void *v18; // rsi
  __int64 v19; // r8
  struct _KTHREAD *v20; // rax
  int v21; // eax
  __int64 v22; // r8
  NTSTATUS v24; // [rsp+44h] [rbp-134h]
  BOOLEAN v25; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v28; // [rsp+70h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-100h]
  _QWORD v30[2]; // [rsp+80h] [rbp-F8h] BYREF
  HANDLE v31; // [rsp+90h] [rbp-E8h]
  __int128 v32; // [rsp+A0h] [rbp-D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-C8h] BYREF
  _OWORD v34[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-88h]
  __int128 v36; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v37[48]; // [rsp+110h] [rbp-68h] BYREF

  v31 = KeyHandle;
  *(_OWORD *)Src = 0LL;
  memset(v37, 0, sizeof(v37));
  v3 = 0;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  v30[1] = v30;
  v30[0] = v30;
  v28 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v25 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
    v24 = -1073741431;
    v9 = 0;
    goto LABEL_43;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v32 = 0LL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)&NewName->Length;
    LODWORD(v32) = v10;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v32 + 1) = Buffer;
    *(_OWORD *)Src = v32;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v13 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
  {
    v8 = -1073741811;
    v24 = -1073741811;
    v9 = 0;
    goto LABEL_43;
  }
  v14 = (PPRIVILEGE_SET)Src[1];
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v8 = -1073741670;
      v24 = -1073741670;
      v9 = 0;
      goto LABEL_43;
    }
    v14 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v13 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v17 = 0;
  if ( v13 >> 1 )
  {
    while ( LOWORD(v14->PrivilegeCount) != 92 )
    {
      ++v17;
      v14 = (PPRIVILEGE_SET)((char *)v14 + 2);
      if ( v17 >= v13 >> 1 )
        goto LABEL_22;
    }
    v8 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  v18 = v31;
  v8 = CmObReferenceObjectByHandle(v31, 0x20006u, v16, PreviousMode, DmaAdapter, 0LL);
  v24 = v8;
  if ( v8 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_24;
    v8 = CmObReferenceObjectByHandle(v18, 0x20019u, v19, PreviousMode, DmaAdapter, 0LL);
    v24 = v8;
    if ( v8 < 0 )
      goto LABEL_27;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_24:
      v8 = -1073741790;
LABEL_26:
      v24 = v8;
LABEL_27:
      v9 = 0;
      goto LABEL_43;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v8 < 0 )
    goto LABEL_27;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v9 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    *(PADAPTER_OBJECT *)&v34[0] = DmaAdapter[0];
    *((_QWORD *)&v34[0] + 1) = Src;
    v21 = CmpCallCallBacksEx(4u, (__int64)v34, 0LL, 1, 0x13u, (__int64)DmaAdapter[0], (__int64)v30);
    v8 = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1073740541 )
        v8 = 0;
      v24 = v8;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (v8 = CmKeyBodyReplicateToVirtual(DmaAdapter, PreviousMode, 0x20006u, (__int64)&SubjectContext), v24 = v8, v8 >= 0) )
  {
    CmpAttachToRegistryProcess((__int64)v37);
    v36 = *(_OWORD *)Src;
    LOBYTE(v22) = PreviousMode;
    v8 = CmRenameKey(DmaAdapter[0], &v36, v22);
    v24 = v8;
    KiUnstackDetachProcess((__int64)v37, 0LL);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v8 = CmPostCallbackNotificationEx(0x13u, (__int64)DmaAdapter[0], v8, (__int64)v34, 0LL, v30);
    v24 = v8;
  }
  if ( v9 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = v24;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v25 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v24;
  }
  return v8;
}

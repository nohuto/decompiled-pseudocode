/*
 * XREFs of NtRenameKey @ 0x140868D90
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x14024FB14 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140621E0C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x14065940C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  NTSTATUS v28; // [rsp+44h] [rbp-134h]
  BOOLEAN v29; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v32; // [rsp+70h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-100h]
  _QWORD v34[2]; // [rsp+80h] [rbp-F8h] BYREF
  HANDLE v35; // [rsp+90h] [rbp-E8h]
  __int128 v36; // [rsp+A0h] [rbp-D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-C8h] BYREF
  _OWORD v38[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-88h]
  __int128 v40; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v41[48]; // [rsp+110h] [rbp-68h] BYREF

  v35 = KeyHandle;
  *(_OWORD *)Src = 0LL;
  memset(v41, 0, sizeof(v41));
  v3 = 0;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  v32 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v29 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v29 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v12 = -1073741431;
    v28 = -1073741431;
    v13 = 0;
    goto LABEL_43;
  }
  v11 = 1LL;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v36 = 0LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v14 = *(_DWORD *)&NewName->Length;
    LODWORD(v36) = v14;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v36 + 1) = Buffer;
    *(_OWORD *)Src = v36;
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
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v17 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v12 = -1073741811;
    v28 = -1073741811;
    v13 = 0;
    goto LABEL_43;
  }
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v12 = -1073741670;
      v28 = -1073741670;
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
  v20 = v35;
  v12 = CmObReferenceObjectByHandle(v35, 0x20006u, v11, PreviousMode, DmaAdapter, 0LL);
  v28 = v12;
  if ( v12 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_24;
    v12 = CmObReferenceObjectByHandle(v20, 0x20019u, v11, PreviousMode, DmaAdapter, 0LL);
    v28 = v12;
    if ( v12 < 0 )
      goto LABEL_27;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_24:
      v12 = -1073741790;
LABEL_26:
      v28 = v12;
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
    *(PADAPTER_OBJECT *)&v38[0] = DmaAdapter[0];
    *((_QWORD *)&v38[0] + 1) = Src;
    v22 = CmpCallCallBacksEx(4u, (__int64)v38, 0LL, 1, 0x13u, (__int64)DmaAdapter[0], (__int64)v34);
    v12 = v22;
    if ( v22 < 0 )
    {
      if ( v22 == -1073740541 )
        v12 = 0;
      v28 = v12;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (v12 = CmKeyBodyReplicateToVirtual(DmaAdapter, PreviousMode, 0x20006u, (__int64)&SubjectContext),
        v28 = v12,
        v12 >= 0) )
  {
    CmpAttachToRegistryProcess((__int64)v41);
    v40 = *(_OWORD *)Src;
    LOBYTE(v23) = PreviousMode;
    v12 = CmRenameKey(DmaAdapter[0], &v40, v23);
    v28 = v12;
    KiUnstackDetachProcess((__int64)v41, 0LL);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v12 = CmPostCallbackNotificationEx(0x13u, (__int64)DmaAdapter[0], v12, (__int64)v38, 0LL, v34);
    v28 = v12;
  }
  if ( v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v11, v10);
    v12 = v28;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
    return v28;
  }
  return v12;
}

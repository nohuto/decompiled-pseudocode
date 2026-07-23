/*
 * XREFs of NtDeleteValueKey @ 0x140693CE0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x14061949C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 */

NTSTATUS __cdecl NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v3; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  int PreviousMode; // r12d
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  wchar_t *Buffer; // rcx
  unsigned int v13; // ebx
  char *v14; // rsi
  __int64 v15; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v17; // r15
  char v18; // r14
  char *i; // rcx
  struct _KTHREAD *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  void **v30; // rcx
  char v31; // [rsp+40h] [rbp-138h]
  NTSTATUS v32; // [rsp+44h] [rbp-134h]
  BOOLEAN v33; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v36; // [rsp+70h] [rbp-108h] BYREF
  __int64 v37; // [rsp+78h] [rbp-100h] BYREF
  HANDLE v38; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v40; // [rsp+90h] [rbp-E8h]
  _QWORD v41[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v44[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v45; // [rsp+100h] [rbp-78h]
  __int128 v46; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v47[4]; // [rsp+120h] [rbp-58h] BYREF

  v38 = KeyHandle;
  memset(v44, 0, sizeof(v44));
  v45 = 0LL;
  v37 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v36 = 0;
  memset(v47, 0, sizeof(v47));
  DmaOperations = 0LL;
  v40 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v47, 0x20000u);
  v31 = 0;
  DmaAdapter[0] = 0LL;
  v41[1] = v41;
  v41[0] = v41;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v33 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v33 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v29 = -1073741431;
LABEL_53:
    v32 = v29;
    goto LABEL_54;
  }
  v29 = CmObReferenceObjectByHandle(v38, 2u, v9, PreviousMode, DmaAdapter, &v37);
  v32 = v29;
  if ( v29 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    v29 = CmObReferenceObjectByHandle(v38, 0x20019u, v27, PreviousMode, DmaAdapter, &v37);
    v32 = v29;
    if ( v29 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter[0]) )
    {
LABEL_52:
      v29 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v29 < 0 )
  {
LABEL_54:
    v17 = 0;
    v18 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v40 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v42 = 0LL;
    v27 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)&ValueName->Length;
    LODWORD(v42) = v11;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v42 + 1) = Buffer;
    *(_OWORD *)Src = v42;
    if ( (_WORD)v11 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = (unsigned __int64)Buffer + (unsigned __int16)v11;
      if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v13 = LOWORD(Src[0]);
  v14 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v14;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (__int64)v14) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v15, v13, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v29 = -1073741670;
      v32 = -1073741670;
      v6 = v3;
      v17 = 0;
      v18 = 0;
      goto LABEL_36;
    }
    v14 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v14;
    LOWORD(v13) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v29 = -1073741811;
  }
  else
  {
    if ( (LODWORD(DmaAdapter[0]->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
    {
      for ( i = &v14[2 * ((unsigned __int64)(unsigned __int16)v13 >> 1) - 2]; (_WORD)v13 && !*(_WORD *)i; i -= 2 )
      {
        LOWORD(v13) = v13 - 2;
        LOWORD(Src[0]) = v13;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v17 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(PADAPTER_OBJECT *)&v44[0] = DmaAdapter[0];
        *((_QWORD *)&v44[0] + 1) = Src;
        v29 = CmpCallCallBacksEx(2u, (__int64)v44, 0LL, 1, 0x11u, (__int64)DmaAdapter[0], (__int64)v41);
        if ( v29 < 0 )
        {
          if ( v29 == -1073740541 )
            v29 = 0;
          goto LABEL_68;
        }
        v31 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v26) = PreviousMode;
      v29 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v26, 2, (unsigned int)&SubjectContext, (__int64)&v36);
      v32 = v29;
      v6 = v3;
      if ( v29 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v46 = *(_OWORD *)Src;
        v21 = (unsigned int)v37 >> 2;
        LOBYTE(v21) = (v37 & 4) != 0;
        v29 = CmDeleteValueKey(DmaAdapter[0], &v46, v38, v21);
        v32 = v29;
LABEL_34:
        v6 = v3;
LABEL_35:
        v18 = v31;
        goto LABEL_36;
      }
      v29 = -1073741790;
LABEL_68:
      v32 = v29;
      goto LABEL_34;
    }
    v29 = -1073741790;
  }
  v32 = v29;
  v6 = v3;
  v17 = 0;
  v18 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v29 = CmPostCallbackNotificationEx(17, (__int64)DmaAdapter[0], v29, (__int64)v44, 0LL, v41);
    v32 = v29;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
    v29 = v32;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v30 = Src;
    LOBYTE(v30) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v30,
      v47,
      (unsigned int)v29,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v33 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    return v32;
  }
  return v29;
}

/*
 * XREFs of NtDeleteValueKey @ 0x140668FB0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032F6D4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140618F00 (CmPostCallbackNotificationEx.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x14066E6DC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 */

NTSTATUS __cdecl NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v3; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  unsigned int PreviousMode; // r12d
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rdx
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
  int v23; // r8d
  int v24; // r9d
  int v25; // ebx
  void **v26; // rcx
  char v27; // [rsp+40h] [rbp-138h]
  NTSTATUS v28; // [rsp+44h] [rbp-134h]
  BOOLEAN v29; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v32; // [rsp+70h] [rbp-108h] BYREF
  __int64 v33; // [rsp+78h] [rbp-100h] BYREF
  HANDLE v34; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v36; // [rsp+90h] [rbp-E8h]
  _QWORD v37[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v40[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v41; // [rsp+100h] [rbp-78h]
  __int128 v42; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v43[4]; // [rsp+120h] [rbp-58h] BYREF

  v34 = KeyHandle;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v33 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v32 = 0;
  memset(v43, 0, sizeof(v43));
  DmaOperations = 0LL;
  v36 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v43, 0x20000u);
  v27 = 0;
  DmaAdapter[0] = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v29 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v29 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v25 = -1073741431;
LABEL_53:
    v28 = v25;
    goto LABEL_54;
  }
  LOBYTE(v9) = PreviousMode;
  v25 = CmObReferenceObjectByHandle((_DWORD)v34, 2, v8, v9, (__int64)DmaAdapter, (__int64)&v33);
  v28 = v25;
  if ( v25 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    LOBYTE(v24) = PreviousMode;
    v25 = CmObReferenceObjectByHandle((_DWORD)v34, 131097, v23, v24, (__int64)DmaAdapter, (__int64)&v33);
    v28 = v25;
    if ( v25 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter[0]) )
    {
LABEL_52:
      v25 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v25 < 0 )
  {
LABEL_54:
    v17 = 0;
    v18 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v36 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v38 = 0LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)&ValueName->Length;
    LODWORD(v38) = v11;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v38 + 1) = Buffer;
    *(_OWORD *)Src = v38;
    if ( (_WORD)v11 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)Buffer + (unsigned __int16)v11;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)Buffer )
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
  if ( LOWORD(Src[0]) && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, v14) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v15, v13, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v25 = -1073741670;
      v28 = -1073741670;
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
    v25 = -1073741811;
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
        *(PADAPTER_OBJECT *)&v40[0] = DmaAdapter[0];
        *((_QWORD *)&v40[0] + 1) = Src;
        v25 = CmpCallCallBacksEx(2u, (__int64)v40, 0LL, 1, 0x11u, (__int64)DmaAdapter[0], (__int64)v37);
        if ( v25 < 0 )
        {
          if ( v25 == -1073740541 )
            v25 = 0;
          goto LABEL_68;
        }
        v27 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v10) = PreviousMode;
      v25 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v10, 2, (unsigned int)&SubjectContext, (__int64)&v32);
      v28 = v25;
      v6 = v3;
      if ( v25 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v42 = *(_OWORD *)Src;
        v21 = (unsigned int)v33 >> 2;
        LOBYTE(v21) = (v33 & 4) != 0;
        v25 = CmDeleteValueKey(DmaAdapter[0], &v42, v34, v21);
        v28 = v25;
LABEL_34:
        v6 = v3;
LABEL_35:
        v18 = v27;
        goto LABEL_36;
      }
      v25 = -1073741790;
LABEL_68:
      v28 = v25;
      goto LABEL_34;
    }
    v25 = -1073741790;
  }
  v28 = v25;
  v6 = v3;
  v17 = 0;
  v18 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v25 = CmPostCallbackNotificationEx(0x11u, (__int64)DmaAdapter[0], v25, (__int64)v40, 0LL, v37);
    v28 = v25;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v25 = v28;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v26 = Src;
    LOBYTE(v26) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v26,
      v43,
      (unsigned int)v25,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v28;
  }
  return v25;
}

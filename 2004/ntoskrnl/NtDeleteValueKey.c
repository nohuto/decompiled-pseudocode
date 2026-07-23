/*
 * XREFs of NtDeleteValueKey @ 0x1405DD640
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14035E9E4 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405E3E7C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140710CFC (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
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
  int v21; // r9d
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  NTSTATUS v26; // ebx
  void **v27; // rcx
  char v28; // [rsp+40h] [rbp-138h]
  NTSTATUS v29; // [rsp+44h] [rbp-134h]
  BOOLEAN v30; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v33; // [rsp+70h] [rbp-108h] BYREF
  __int64 v34; // [rsp+78h] [rbp-100h] BYREF
  HANDLE v35; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v37; // [rsp+90h] [rbp-E8h]
  _QWORD v38[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v41[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v42; // [rsp+100h] [rbp-78h]
  __int128 v43; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v44[4]; // [rsp+120h] [rbp-58h] BYREF

  v35 = KeyHandle;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v34 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v33 = 0;
  memset(v44, 0, sizeof(v44));
  DmaOperations = 0LL;
  v37 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v44, 0x20000u);
  v28 = 0;
  DmaAdapter[0] = 0LL;
  v38[1] = v38;
  v38[0] = v38;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26 = -1073741431;
LABEL_53:
    v29 = v26;
    goto LABEL_54;
  }
  LOBYTE(v9) = PreviousMode;
  v26 = CmObReferenceObjectByHandle((_DWORD)v35, 2, v8, v9, (__int64)DmaAdapter, (__int64)&v34);
  v29 = v26;
  if ( v26 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    LOBYTE(v25) = PreviousMode;
    v26 = CmObReferenceObjectByHandle((_DWORD)v35, 131097, v24, v25, (__int64)DmaAdapter, (__int64)&v34);
    v29 = v26;
    if ( v26 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter[0]) )
    {
LABEL_52:
      v26 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v26 < 0 )
  {
LABEL_54:
    v17 = 0;
    v18 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v37 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v39 = 0LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)&ValueName->Length;
    LODWORD(v39) = v11;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v39 + 1) = Buffer;
    *(_OWORD *)Src = v39;
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
      v26 = -1073741670;
      v29 = -1073741670;
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
    v26 = -1073741811;
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
        *(PADAPTER_OBJECT *)&v41[0] = DmaAdapter[0];
        *((_QWORD *)&v41[0] + 1) = Src;
        LOBYTE(v21) = 1;
        v26 = CmpCallCallBacksEx(2, (unsigned int)v41, 0, v21, 17, (__int64)DmaAdapter[0], (__int64)v38);
        if ( v26 < 0 )
        {
          if ( v26 == -1073740541 )
            v26 = 0;
          goto LABEL_68;
        }
        v28 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v10) = PreviousMode;
      v26 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v10, 2, (unsigned int)&SubjectContext, (__int64)&v33);
      v29 = v26;
      v6 = v3;
      if ( v26 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v43 = *(_OWORD *)Src;
        v22 = (unsigned int)v34 >> 2;
        LOBYTE(v22) = (v34 & 4) != 0;
        v26 = CmDeleteValueKey(DmaAdapter[0], &v43, v35, v22);
        v29 = v26;
LABEL_34:
        v6 = v3;
LABEL_35:
        v18 = v28;
        goto LABEL_36;
      }
      v26 = -1073741790;
LABEL_68:
      v29 = v26;
      goto LABEL_34;
    }
    v26 = -1073741790;
  }
  v29 = v26;
  v6 = v3;
  v17 = 0;
  v18 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v26 = CmPostCallbackNotificationEx(17, DmaAdapter[0], v26, (unsigned int)v41, 0LL, (__int64)v38);
    v29 = v26;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26 = v29;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v27 = Src;
    LOBYTE(v27) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v27,
      v44,
      (unsigned int)v26,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v29;
  }
  return v26;
}

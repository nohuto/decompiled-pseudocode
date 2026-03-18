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

__int64 __fastcall NtDeleteValueKey(void *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  int PreviousMode; // r12d
  char v8; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  char *v16; // rsi
  __int64 v17; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v19; // r15
  char v20; // r14
  char *i; // rcx
  struct _KTHREAD *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  signed int v31; // ebx
  void **v32; // rcx
  char v33; // [rsp+40h] [rbp-138h]
  unsigned int v34; // [rsp+44h] [rbp-134h]
  BOOLEAN v35; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v38; // [rsp+70h] [rbp-108h] BYREF
  __int64 v39; // [rsp+78h] [rbp-100h] BYREF
  void *v40; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v42; // [rsp+90h] [rbp-E8h]
  _QWORD v43[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v46[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+100h] [rbp-78h]
  __int128 v48; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v49[4]; // [rsp+120h] [rbp-58h] BYREF

  v40 = a1;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  v39 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v5 = 0;
  v38 = 0;
  memset(v49, 0, sizeof(v49));
  DmaOperations = 0LL;
  v42 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v49, 0x20000LL, a3, a4);
  v33 = 0;
  DmaAdapter[0] = 0LL;
  v43[1] = v43;
  v43[0] = v43;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v35 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v35 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v31 = -1073741431;
LABEL_53:
    v34 = v31;
    goto LABEL_54;
  }
  v31 = CmObReferenceObjectByHandle(v40, 2u, v11, PreviousMode, DmaAdapter, &v39);
  v34 = v31;
  if ( v31 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v8 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    v31 = CmObReferenceObjectByHandle(v40, 0x20019u, v29, PreviousMode, DmaAdapter, &v39);
    v34 = v31;
    if ( v31 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter[0]) )
    {
LABEL_52:
      v31 = -1073741790;
      goto LABEL_53;
    }
    v5 = 1;
  }
  v8 = v5;
  if ( v31 < 0 )
  {
LABEL_54:
    v19 = 0;
    v20 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v42 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v44 = 0LL;
    v29 = 0x7FFFFFFF0000LL;
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v13 = *(_DWORD *)a2;
    LODWORD(v44) = v13;
    v14 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v44 + 1) = v14;
    *(_OWORD *)Src = v44;
    if ( (_WORD)v13 )
    {
      if ( (v14 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = v14 + (unsigned __int16)v13;
      if ( v28 > 0x7FFFFFFF0000LL || v28 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a2;
  }
  v15 = LOWORD(Src[0]);
  v16 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v16;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (__int64)v16) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v17, v15, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v31 = -1073741670;
      v34 = -1073741670;
      v8 = v5;
      v19 = 0;
      v20 = 0;
      goto LABEL_36;
    }
    v16 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v16;
    LOWORD(v15) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v31 = -1073741811;
  }
  else
  {
    if ( (LODWORD(DmaAdapter[0]->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
    {
      for ( i = &v16[2 * ((unsigned __int64)(unsigned __int16)v15 >> 1) - 2]; (_WORD)v15 && !*(_WORD *)i; i -= 2 )
      {
        LOWORD(v15) = v15 - 2;
        LOWORD(Src[0]) = v15;
      }
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v19 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(PADAPTER_OBJECT *)&v46[0] = DmaAdapter[0];
        *((_QWORD *)&v46[0] + 1) = Src;
        v31 = CmpCallCallBacksEx(2u, (__int64)v46, 0LL, 1, 0x11u, (__int64)DmaAdapter[0], (__int64)v43);
        if ( v31 < 0 )
        {
          if ( v31 == -1073740541 )
            v31 = 0;
          goto LABEL_68;
        }
        v33 = 1;
      }
      if ( !v5 )
        goto LABEL_33;
      LOBYTE(v28) = PreviousMode;
      v31 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v28, 2, (unsigned int)&SubjectContext, (__int64)&v38);
      v34 = v31;
      v8 = v5;
      if ( v31 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v48 = *(_OWORD *)Src;
        v23 = (unsigned int)v39 >> 2;
        LOBYTE(v23) = (v39 & 4) != 0;
        v31 = CmDeleteValueKey(DmaAdapter[0], &v48, v40, v23);
        v34 = v31;
LABEL_34:
        v8 = v5;
LABEL_35:
        v20 = v33;
        goto LABEL_36;
      }
      v31 = -1073741790;
LABEL_68:
      v34 = v31;
      goto LABEL_34;
    }
    v31 = -1073741790;
  }
  v34 = v31;
  v8 = v5;
  v19 = 0;
  v20 = 0;
LABEL_36:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v20 )
  {
    v31 = CmPostCallbackNotificationEx(17, (__int64)DmaAdapter[0], v31, (__int64)v46, 0LL, v43);
    v34 = v31;
  }
  if ( v19 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
    v31 = v34;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v32 = Src;
    LOBYTE(v32) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v32,
      v49,
      (unsigned int)v31,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v35 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
    return v34;
  }
  return (unsigned int)v31;
}

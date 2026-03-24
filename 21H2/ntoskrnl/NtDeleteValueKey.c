/*
 * XREFs of NtDeleteValueKey @ 0x140669100
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406B3870 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14027EF58 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmDoVirtualTest @ 0x1402D1684 (CmDoVirtualTest.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406645EC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406C3180 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 */

__int64 __fastcall NtDeleteValueKey(void *a1, unsigned __int64 a2)
{
  char v3; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  int PreviousMode; // r12d
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebx
  char *v13; // rsi
  __int64 v14; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v16; // r15
  char v17; // r14
  char *i; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // r9d
  __int64 v22; // r8
  int v23; // ebx
  void **v24; // rcx
  char v25; // [rsp+40h] [rbp-138h]
  unsigned int v26; // [rsp+44h] [rbp-134h]
  BOOLEAN v27; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v30; // [rsp+70h] [rbp-108h] BYREF
  __int64 v31; // [rsp+78h] [rbp-100h] BYREF
  void *v32; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v34; // [rsp+90h] [rbp-E8h]
  _QWORD v35[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v38[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v39; // [rsp+100h] [rbp-78h]
  __int128 v40; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v41[4]; // [rsp+120h] [rbp-58h] BYREF

  v32 = a1;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v31 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v30 = 0;
  memset(v41, 0, sizeof(v41));
  DmaOperations = 0LL;
  v34 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v41, 0x20000u);
  v25 = 0;
  DmaAdapter[0] = 0LL;
  v35[1] = v35;
  v35[0] = v35;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v27 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v27 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = -1073741431;
LABEL_53:
    v26 = v23;
    goto LABEL_54;
  }
  v23 = CmObReferenceObjectByHandle(v32, 2u, v8, PreviousMode, DmaAdapter, &v31);
  v26 = v23;
  if ( v23 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v30) )
      goto LABEL_52;
    v23 = CmObReferenceObjectByHandle(v32, 0x20019u, v22, PreviousMode, DmaAdapter, &v31);
    v26 = v23;
    if ( v23 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(DmaAdapter[0]) )
    {
LABEL_52:
      v23 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v23 < 0 )
  {
LABEL_54:
    v16 = 0;
    v17 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v34 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v36 = 0LL;
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)a2;
    LODWORD(v36) = v10;
    v11 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v36 + 1) = v11;
    *(_OWORD *)Src = v36;
    if ( (_WORD)v10 )
    {
      if ( (v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = v11 + (unsigned __int16)v10;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a2;
  }
  v12 = LOWORD(Src[0]);
  v13 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v13;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (__int64)v13) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v14, v12, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v23 = -1073741670;
      v26 = -1073741670;
      v6 = v3;
      v16 = 0;
      v17 = 0;
      goto LABEL_36;
    }
    v13 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v13;
    LOWORD(v12) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v23 = -1073741811;
  }
  else
  {
    if ( (LODWORD(DmaAdapter[0]->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
    {
      for ( i = &v13[2 * ((unsigned __int64)(unsigned __int16)v12 >> 1) - 2]; (_WORD)v12 && !*(_WORD *)i; i -= 2 )
      {
        LOWORD(v12) = v12 - 2;
        LOWORD(Src[0]) = v12;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v16 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(PADAPTER_OBJECT *)&v38[0] = DmaAdapter[0];
        *((_QWORD *)&v38[0] + 1) = Src;
        LOBYTE(v20) = 1;
        v23 = CmpCallCallBacksEx(2, (unsigned int)v38, 0, v20, 17, (__int64)DmaAdapter[0], (__int64)v35);
        if ( v23 < 0 )
        {
          if ( v23 == -1073740541 )
            v23 = 0;
          goto LABEL_68;
        }
        v25 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v9) = PreviousMode;
      v23 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v9, 2, (unsigned int)&SubjectContext, (__int64)&v30);
      v26 = v23;
      v6 = v3;
      if ( v23 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v40 = *(_OWORD *)Src;
        v23 = CmDeleteValueKey((__int64)DmaAdapter[0], (__int64)&v40, (__int64)v32, (v31 & 4) != 0);
        v26 = v23;
LABEL_34:
        v6 = v3;
LABEL_35:
        v17 = v25;
        goto LABEL_36;
      }
      v23 = -1073741790;
LABEL_68:
      v26 = v23;
      goto LABEL_34;
    }
    v23 = -1073741790;
  }
  v26 = v23;
  v6 = v3;
  v16 = 0;
  v17 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v17 )
  {
    v23 = CmPostCallbackNotificationEx(17, DmaAdapter[0], v23, (unsigned int)v38, 0LL, (__int64)v35);
    v26 = v23;
  }
  if ( v16 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = v26;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v24 = Src;
    LOBYTE(v24) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v24,
      v41,
      (unsigned int)v23,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v27 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v26;
  }
  return (unsigned int)v23;
}

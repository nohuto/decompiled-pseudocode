/*
 * XREFs of ObInsertObjectEx @ 0x140601DC0
 * Callers:
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     EtwpAddUmRegEntry @ 0x1405F3230 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x140601020 (NtCreateEvent.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     WmipCreateGuidObject @ 0x140668338 (WmipCreateGuidObject.c)
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     NtCreateSemaphore @ 0x140684EE0 (NtCreateSemaphore.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     NtFilterToken @ 0x1406A83E0 (NtFilterToken.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 *     NtCreateWaitCompletionPacket @ 0x1406BA7F0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406C01A8 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406C0380 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406C5B80 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x1406CD198 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x1406CE1FC (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406D5520 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406DDFB0 (NtCreateRegistryTransaction.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 *     ObInsertObject @ 0x1407096B0 (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x14070AB40 (NtCreateTimer2.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x140713620 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x14071B370 (NtCreatePrivateNamespace.c)
 *     PopPowerRequestCreateInfo @ 0x14072030C (PopPowerRequestCreateInfo.c)
 *     PspCreateActivityReference @ 0x14072D168 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407617BC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407BF2A8 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C0EE0 (NtCreateKeyedEvent.c)
 *     SeFilterToken @ 0x1407C2500 (SeFilterToken.c)
 *     PopEtEnergyTrackerCreate @ 0x1407C7758 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x1408885E0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140896330 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x1409251E0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14020F820 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14020F980 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpChargeQuotaForObject @ 0x1405F6F70 (ObpChargeQuotaForObject.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406B4DD0 (RtlValidSecurityDescriptor.c)
 *     ObpAdjustCreatorAccessState @ 0x1406BD90C (ObpAdjustCreatorAccessState.c)
 *     SeDeassignSecurity @ 0x1406C4020 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406C9C04 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        PADAPTER_OBJECT DmaAdapter,
        struct _ACCESS_STATE *a2,
        ACCESS_MASK a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _SLIST_ENTRY *v9; // rsi
  PADAPTER_OBJECT v10; // r15
  __int64 v11; // r9
  char *v12; // rdx
  int Handle; // ebx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // r13
  struct _DMA_ADAPTER *v16; // rax
  char *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  int v20; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  _SLIST_ENTRY *v25; // rbx
  _SLIST_ENTRY *v26; // rcx
  __int64 v27; // rdx
  int v28; // ebx
  PSECURITY_DESCRIPTOR v29; // rdx
  _SLIST_ENTRY *v30; // rcx
  bool v31; // zf
  int v32; // ecx
  _SLIST_ENTRY *v33; // rax
  int v34; // r15d
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KTHREAD *v37; // rax
  int v38; // eax
  ULONG_PTR v39; // rcx
  _SLIST_ENTRY *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  char PreviousMode; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+6Ch] [rbp-94h]
  ULONG Index[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  _SLIST_ENTRY *v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v57[20]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v58[28]; // [rsp+160h] [rbp+60h] BYREF

  v55 = a6;
  v50 = a4;
  memset(v58, 0, sizeof(v58));
  memset(v57, 0, sizeof(v57));
  v9 = *(_SLIST_ENTRY **)&DmaAdapter[-1].Version;
  v10 = DmaAdapter - 3;
  v11 = 0LL;
  v12 = 0LL;
  Handle = 0;
  v14 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
  v54 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (BYTE2(DmaAdapter[-2].DmaOperations) & 2) != 0 )
  {
    v16 = (struct _DMA_ADAPTER *)ObpInfoMaskToOffset[BYTE2(DmaAdapter[-2].DmaOperations) & 3];
    v17 = (char *)((char *)v10 - (char *)v16);
    if ( v10 != v16 )
    {
      v12 = v17 + 8;
      v54 = (_SLIST_ENTRY *)(v17 + 8);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = (unsigned __int8)CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  PreviousMode = CurrentThread->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !v9[2].Next )
  {
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v20 = v50 + 1;
      v45 = v55;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, DmaAdapter, a3, 0LL, v20, v9->Next, (_BYTE)v19, 0LL, 0, v45, a7);
    }
    Next = v9[2].Next;
    if ( Next )
    {
      LOBYTE(v19) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v9[1].Next), v19, v11);
      v9[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
    {
      ++L->FreeMisses;
      L = CurrentPrcb->PPLookasideList[4].L;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v9);
        HalPutDmaAdapter(DmaAdapter);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&L->ListHead, v9);
    goto LABEL_15;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v57;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v57, v58, a3, &v15->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_15:
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)Handle;
    }
  }
  v25 = v9[2].Next;
  a2->SecurityDescriptor = v25;
  if ( !v25 )
  {
LABEL_23:
    v26 = v54;
    if ( !v54 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || v9[2].Next != v54) )
    {
      v27 = (__int64)a2->SecurityDescriptor;
      Index[1] = 0;
      v49 = 0;
      SecurityDescriptor = 0LL;
      P = 0LL;
      Index[0] = 8;
      v28 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, v27, 0LL, &v49, Index);
      if ( v28 < 0 )
      {
LABEL_32:
        HalPutDmaAdapter(DmaAdapter);
        if ( a2 == (struct _ACCESS_STATE *)v57 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(&a2->SubjectSecurityContext);
        }
        return (unsigned int)v28;
      }
      LODWORD(v29) = (_DWORD)P;
      if ( !P )
        v29 = a2->SecurityDescriptor;
      v28 = SeAssignSecurityEx2(
              0,
              (int)v29,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v49,
              Index,
              (__int64)&a2->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v28 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_32;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      LOBYTE(v44) = KeGetCurrentThread()->PreviousMode;
      v28 = v15->TypeInfo.SecurityProcedure(
              DmaAdapter,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v44);
      if ( v28 < 0 )
      {
        SeDeassignSecurity(&SecurityDescriptor);
        goto LABEL_32;
      }
      v30 = v9[2].Next;
      if ( LOBYTE(v9[1].Next) <= 1u && v30 )
        ExFreePoolWithTag(v30, 0);
      v26 = v54;
      v10 = DmaAdapter - 3;
      v9[2].Next = 0LL;
      a2->SecurityDescriptor = 0LL;
    }
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v31 = v26 == 0LL;
      v32 = v50;
      v33 = 0LL;
      if ( !v31 )
        v33 = v9;
      v46 = v55;
      LOBYTE(v43) = PreviousMode;
      *a7 = 0LL;
      v34 = ObpCreateHandle(0LL, DmaAdapter, 0LL, a2, v32 + 1, v9->Next, v43, v33, 0, v46, a7);
      HalPutDmaAdapter(DmaAdapter);
      goto LABEL_55;
    }
    if ( a2 != (struct _ACCESS_STATE *)v57 )
    {
      v34 = ObpAdjustCreatorAccessState(a2);
      if ( v34 < 0 )
        goto LABEL_54;
      v10 = DmaAdapter - 3;
    }
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[1], 0LL);
    v38 = ObpChargeQuotaForObject((__int64)v10, (__int64)KeGetCurrentThread()->ApcState.Process);
    v39 = (ULONG_PTR)&v10[1];
    v34 = v38;
    ExReleasePushLockEx(v39, 0LL);
    KeLeaveCriticalRegion();
    if ( v34 >= 0 )
    {
LABEL_55:
      v40 = v9[2].Next;
      if ( v40 )
      {
        LOBYTE(v35) = 1;
        SeReleaseSecurityDescriptor(v40, LOBYTE(v9[1].Next), v35, v36);
        v9[2].Next = 0LL;
      }
      v41 = KeGetCurrentPrcb();
      v42 = v41->PPLookasideList[4].P;
      ++v42->TotalFrees;
      if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
        || (++v42->FreeMisses,
            v42 = v41->PPLookasideList[4].L,
            ++v42->TotalFrees,
            LOWORD(v42->ListHead.Alignment) < v42->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v42->ListHead, v9);
      }
      else
      {
        ++v42->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))v42->FreeEx)(v9);
      }
      if ( a2 == (struct _ACCESS_STATE *)v57 )
      {
        SepDeleteAccessState((__int64)a2);
        SeReleaseSubjectContext(&a2->SubjectSecurityContext);
      }
      return (unsigned int)v34;
    }
LABEL_54:
    HalPutDmaAdapter(DmaAdapter);
    goto LABEL_55;
  }
  if ( RtlValidSecurityDescriptor(v25) )
  {
    if ( (BYTE2(v25->Next) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v25);
    goto LABEL_23;
  }
  HalPutDmaAdapter(DmaAdapter);
  if ( a2 == (struct _ACCESS_STATE *)v57 )
  {
    SepDeleteAccessState((__int64)a2);
    SeReleaseSubjectContext(&a2->SubjectSecurityContext);
  }
  return 3221225593LL;
}

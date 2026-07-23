/*
 * XREFs of ObInsertObjectEx @ 0x14067A230
 * Callers:
 *     WmipCreateGuidObject @ 0x1405DC758 (WmipCreateGuidObject.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x14062BB00 (NtDuplicateToken.c)
 *     NtFilterToken @ 0x1406322B0 (NtFilterToken.c)
 *     IoCreateDevice @ 0x140634290 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     PopPowerRequestCreateInfo @ 0x14064E220 (PopPowerRequestCreateInfo.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     EtwpAddUmRegEntry @ 0x14066E008 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x140679490 (NtCreateEvent.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     NtCreateIoCompletion @ 0x1406A7090 (NtCreateIoCompletion.c)
 *     NtCreateTimer @ 0x1406AC2A0 (NtCreateTimer.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     NtCreateSemaphore @ 0x1406B04A0 (NtCreateSemaphore.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x1406CB4F0 (NtCreateMutant.c)
 *     SeCopyClientToken @ 0x1406E2A38 (SeCopyClientToken.c)
 *     NtCreateWaitCompletionPacket @ 0x1406E3A00 (NtCreateWaitCompletionPacket.c)
 *     ObpCreateDirectoryObject @ 0x1406F27E0 (ObpCreateDirectoryObject.c)
 *     NtCreatePrivateNamespace @ 0x1406F3DE0 (NtCreatePrivateNamespace.c)
 *     AlpcpCreateConnectionPort @ 0x1406FA218 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x1406FB8CC (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x140701EC0 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x14070BE70 (NtCreateRegistryTransaction.c)
 *     EtwpCreateUmReplyObject @ 0x14070FC0C (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x14071F118 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140752BDC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     SeFilterToken @ 0x140781950 (SeFilterToken.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407B2F90 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B8EC8 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140882A90 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140890840 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140902028 (TtmiCreateEventQueue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x14091F560 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     SeAssignSecurityEx2 @ 0x1402946F0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140294850 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     ObpAdjustCreatorAccessState @ 0x14066844C (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x14066A670 (ObpChargeQuotaForObject.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     SeDeassignSecurity @ 0x1406F0530 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406F6D74 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        PADAPTER_OBJECT DmaAdapter,
        PACCESS_STATE AccessState,
        ACCESS_MASK a3,
        int a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v9; // rsi
  PADAPTER_OBJECT v10; // r15
  char *v11; // rdx
  int Handle; // ebx
  unsigned __int64 v13; // rcx
  POBJECT_TYPE v14; // r13
  struct _DMA_ADAPTER *v15; // rax
  char *v16; // rcx
  char PreviousMode; // r8
  unsigned int v18; // ecx
  void *v19; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  _BYTE *v23; // rbx
  char *v24; // rcx
  PSECURITY_DESCRIPTOR v25; // rdx
  int v26; // ebx
  PSECURITY_DESCRIPTOR v27; // rdx
  void *v28; // rcx
  bool v29; // zf
  int v30; // ecx
  __int64 v31; // rax
  int v32; // r15d
  KPROCESSOR_MODE v33; // al
  struct _KTHREAD *CurrentThread; // rax
  int v35; // eax
  ULONG_PTR v36; // rcx
  void *v37; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  int v40; // [rsp+40h] [rbp-C0h]
  PVOID *v41; // [rsp+48h] [rbp-B8h]
  PVOID *v42; // [rsp+48h] [rbp-B8h]
  char v43; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h]
  ULONG Index[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  char *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v53[20]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[28]; // [rsp+160h] [rbp+60h] BYREF

  v51 = a6;
  v46 = a4;
  memset(v54, 0, sizeof(v54));
  memset(v53, 0, sizeof(v53));
  v9 = *(_QWORD *)&DmaAdapter[-1].Version;
  v10 = DmaAdapter - 3;
  v11 = 0LL;
  Handle = 0;
  v13 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
  v50 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v13];
  if ( (BYTE2(DmaAdapter[-2].DmaOperations) & 2) != 0 )
  {
    v15 = (struct _DMA_ADAPTER *)ObpInfoMaskToOffset[BYTE2(DmaAdapter[-2].DmaOperations) & 3];
    v16 = (char *)((char *)v10 - (char *)v15);
    if ( v10 != v15 )
    {
      v11 = v16 + 8;
      v50 = v16 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v11 && !*(_QWORD *)(v9 + 32) )
  {
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v18 = v46 + 1;
      v41 = (PVOID *)v51;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, DmaAdapter, a3, 0LL, v18, *(_DWORD *)v9, PreviousMode, 0LL, 0, v41, a7);
    }
    v19 = *(void **)(v9 + 32);
    if ( v19 )
    {
      SeReleaseSecurityDescriptor(v19, *(_BYTE *)(v9 + 16), 1);
      *(_QWORD *)(v9 + 32) = 0LL;
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
        ((void (__fastcall *)(__int64))L->FreeEx)(v9);
        HalPutDmaAdapter(DmaAdapter);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v9);
    goto LABEL_15;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v53;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v53, v54, a3, &v14->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_15:
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)Handle;
    }
  }
  v23 = *(_BYTE **)(v9 + 32);
  AccessState->SecurityDescriptor = v23;
  if ( !v23 )
  {
LABEL_23:
    v24 = v50;
    if ( !v50 && ((v14->TypeInfo.ObjectTypeFlags & 8) != 0 || *(char **)(v9 + 32) != v50) )
    {
      v25 = AccessState->SecurityDescriptor;
      Index[1] = 0;
      v45 = 0;
      SecurityDescriptor = 0LL;
      P = 0LL;
      Index[0] = 8;
      v26 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, (__int64)v25, 0LL, &v45, Index);
      if ( v26 < 0 )
      {
LABEL_32:
        HalPutDmaAdapter(DmaAdapter);
        if ( AccessState == (PACCESS_STATE)v53 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
        return (unsigned int)v26;
      }
      LODWORD(v27) = (_DWORD)P;
      if ( !P )
        v27 = AccessState->SecurityDescriptor;
      v26 = SeAssignSecurityEx2(
              0,
              (int)v27,
              (int)&SecurityDescriptor,
              0LL,
              v14 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v45,
              Index,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)&v14->TypeInfo.GenericMapping);
      if ( v26 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_32;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      LOBYTE(v40) = KeGetCurrentThread()->PreviousMode;
      v26 = v14->TypeInfo.SecurityProcedure(
              DmaAdapter,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v14->TypeInfo.GenericMapping,
              v40);
      if ( v26 < 0 )
      {
        SeDeassignSecurity(&SecurityDescriptor);
        goto LABEL_32;
      }
      v28 = *(void **)(v9 + 32);
      if ( *(_BYTE *)(v9 + 16) <= 1u && v28 )
        ExFreePoolWithTag(v28, 0);
      v24 = v50;
      v10 = DmaAdapter - 3;
      *(_QWORD *)(v9 + 32) = 0LL;
      AccessState->SecurityDescriptor = 0LL;
    }
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v29 = v24 == 0LL;
      v30 = v46;
      v31 = 0LL;
      if ( !v29 )
        v31 = v9;
      v42 = (PVOID *)v51;
      *a7 = 0LL;
      v32 = ObpCreateHandle(0, DmaAdapter, 0, AccessState, v30 + 1, *(_DWORD *)v9, v43, v31, 0, v42, a7);
      HalPutDmaAdapter(DmaAdapter);
      goto LABEL_57;
    }
    if ( AccessState != (PACCESS_STATE)v53 )
    {
      v33 = v43;
      if ( (*(_DWORD *)v9 & 0x400) != 0 )
        v33 = 1;
      v32 = ObpAdjustCreatorAccessState(AccessState, v33, (__int64)v14, (__int64)DmaAdapter);
      if ( v32 < 0 )
        goto LABEL_56;
      v10 = DmaAdapter - 3;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[1], 0LL);
    v35 = ObpChargeQuotaForObject((__int64)v10, (__int64)KeGetCurrentThread()->ApcState.Process);
    v36 = (ULONG_PTR)&v10[1];
    v32 = v35;
    ExReleasePushLockEx(v36, 0LL);
    KeLeaveCriticalRegion();
    if ( v32 >= 0 )
    {
LABEL_57:
      v37 = *(void **)(v9 + 32);
      if ( v37 )
      {
        SeReleaseSecurityDescriptor(v37, *(_BYTE *)(v9 + 16), 1);
        *(_QWORD *)(v9 + 32) = 0LL;
      }
      v38 = KeGetCurrentPrcb();
      v39 = v38->PPLookasideList[4].P;
      ++v39->TotalFrees;
      if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
        || (++v39->FreeMisses,
            v39 = v38->PPLookasideList[4].L,
            ++v39->TotalFrees,
            LOWORD(v39->ListHead.Alignment) < v39->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)v9);
      }
      else
      {
        ++v39->FreeMisses;
        ((void (__fastcall *)(__int64))v39->FreeEx)(v9);
      }
      if ( AccessState == (PACCESS_STATE)v53 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return (unsigned int)v32;
    }
LABEL_56:
    HalPutDmaAdapter(DmaAdapter);
    goto LABEL_57;
  }
  if ( RtlValidSecurityDescriptor(v23) )
  {
    if ( (v23[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v23);
    goto LABEL_23;
  }
  HalPutDmaAdapter(DmaAdapter);
  if ( AccessState == (PACCESS_STATE)v53 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return 3221225593LL;
}

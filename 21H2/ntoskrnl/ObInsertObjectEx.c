/*
 * XREFs of ObInsertObjectEx @ 0x140704A20
 * Callers:
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     PspInsertProcess @ 0x140607710 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x140608784 (MmCreateSpecialImageSection.c)
 *     WmipCreateGuidObject @ 0x14063F798 (WmipCreateGuidObject.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     NtCreateTimer @ 0x14064CD60 (NtCreateTimer.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     SeCopyClientToken @ 0x140661D04 (SeCopyClientToken.c)
 *     PopPowerRequestCreateInfo @ 0x14067CFCC (PopPowerRequestCreateInfo.c)
 *     NtCreateWaitCompletionPacket @ 0x140693F90 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x14069C0FC (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x14069C2D0 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406A1B60 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x1406AA7A8 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x1406AC26C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406B3300 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1406BD240 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406BE000 (NtCreateRegistryTransaction.c)
 *     ObInsertObject @ 0x1406D41C0 (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x1406D4930 (NtCreateTimer2.c)
 *     NtCreateMutant @ 0x1406DDC40 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x1406E4E80 (NtCreatePrivateNamespace.c)
 *     NtCreateEvent @ 0x140703CD0 (NtCreateEvent.c)
 *     NtCreateSemaphore @ 0x140705010 (NtCreateSemaphore.c)
 *     NtDuplicateToken @ 0x140705150 (NtDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140705F00 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140707430 (MiCreateSectionCommon.c)
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     PspCreateActivityReference @ 0x140731498 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764A8C (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C36A8 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C5210 (NtCreateKeyedEvent.c)
 *     SeFilterToken @ 0x1407C6800 (SeFilterToken.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBA48 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140885B80 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140893900 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FD52C (TtmiCreateTerminal.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x1409229B0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14027C800 (SepCreateAccessStateFromSubjectContext.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     SeAssignSecurityEx2 @ 0x140355E90 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140355F20 (SeComputeAutoInheritByObjectTypeEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140657C60 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSecurityDescriptor @ 0x14065C750 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14065EF00 (RtlValidSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x140660238 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140662D98 (ObpAdjustCreatorAccessState.c)
 *     SeDeassignSecurity @ 0x14069F9F0 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406A6CE4 (SeObjectCreateSaclAccessBits.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *DmaAdapter,
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
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
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
  v9 = *((_QWORD *)DmaAdapter - 2);
  v10 = (PADAPTER_OBJECT)(DmaAdapter - 48);
  v11 = 0LL;
  Handle = 0;
  v13 = (unsigned __int8)*(DmaAdapter - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
  v50 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v13];
  if ( (*(DmaAdapter - 22) & 2) != 0 )
  {
    v15 = (struct _DMA_ADAPTER *)ObpInfoMaskToOffset[*(DmaAdapter - 22) & 3];
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
        HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
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
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
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
      v45 = 0;
      SecurityDescriptor = 0LL;
      P = 0LL;
      v47 = 8LL;
      v26 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, (__int64)v25, 0LL, &v45, &v47);
      if ( v26 < 0 )
      {
LABEL_32:
        HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
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
              (16 * (a5 & 1)) | v45,
              &v47,
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
      v10 = (PADAPTER_OBJECT)(DmaAdapter - 48);
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
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
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
      v10 = (PADAPTER_OBJECT)(DmaAdapter - 48);
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
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
    goto LABEL_57;
  }
  if ( RtlValidSecurityDescriptor(v23) )
  {
    if ( (v23[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v23);
    goto LABEL_23;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  if ( AccessState == (PACCESS_STATE)v53 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return 3221225593LL;
}

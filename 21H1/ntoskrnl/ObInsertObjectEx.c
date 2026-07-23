/*
 * XREFs of ObInsertObjectEx @ 0x140602150
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     EtwpAddUmRegEntry @ 0x1405F4F98 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x1406013B0 (NtCreateEvent.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x140643D60 (NtCreateTimer2.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x140679390 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x14067DC90 (NtCreatePrivateNamespace.c)
 *     WmipCreateGuidObject @ 0x140682008 (WmipCreateGuidObject.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C4090 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 *     ObpCreateDirectoryObject @ 0x1406D1820 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x1406D6E78 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x1406D7F7C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406DF130 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406E8070 (NtCreateRegistryTransaction.c)
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406F0D20 (NtCreateIoCompletion.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     PopPowerRequestCreateInfo @ 0x1406FF504 (PopPowerRequestCreateInfo.c)
 *     NtFilterToken @ 0x1407016F0 (NtFilterToken.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140702350 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     NtCreateSemaphore @ 0x140706360 (NtCreateSemaphore.c)
 *     PspCreateActivityReference @ 0x14071D498 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x14074E54C (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     SeFilterToken @ 0x140787370 (SeFilterToken.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407AE208 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407AFE20 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B5D58 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407B65E8 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140881770 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14088F520 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140900D38 (TtmiCreateEventQueue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x14091E2B0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     SeAssignSecurityEx2 @ 0x140257E70 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140257FD0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     ObpChargeQuotaForObject @ 0x140615390 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140616FB4 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     SeDeassignSecurity @ 0x1406CF230 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D3F84 (SeObjectCreateSaclAccessBits.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _DWORD *v9; // rbx
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  POBJECT_TYPE v12; // rdi
  char PreviousMode; // r14
  int v14; // ecx
  unsigned int Handle; // edi
  void *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  void *v20; // rax
  char *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  PSECURITY_DESCRIPTOR v24; // rdx
  int v25; // r14d
  void *v26; // rcx
  bool v27; // zf
  int v28; // ecx
  _DWORD *v29; // rax
  int v30; // eax
  void *v31; // rcx
  struct _KPRCB *v32; // rdx
  _GENERAL_LOOKASIDE *v33; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v35; // rax
  char *v36; // rcx
  int v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  char v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+64h] [rbp-9Ch]
  int v44; // [rsp+6Ch] [rbp-94h] BYREF
  int v45; // [rsp+70h] [rbp-90h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  ULONG Index[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  char *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v52[20]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[28]; // [rsp+160h] [rbp+60h] BYREF

  v50 = a6;
  v45 = a4;
  memset(v53, 0, sizeof(v53));
  memset(v52, 0, sizeof(v52));
  v9 = *(_DWORD **)&DmaAdapter[-1].Version;
  v10 = 0LL;
  v11 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
  v49 = 0LL;
  v12 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v11];
  if ( (BYTE2(DmaAdapter[-2].DmaOperations) & 2) != 0 )
  {
    v35 = (struct _DMA_ADAPTER *)ObpInfoMaskToOffset[BYTE2(DmaAdapter[-2].DmaOperations) & 3];
    v36 = (char *)((char *)&DmaAdapter[-3] - (char *)v35);
    if ( &DmaAdapter[-3] != v35 )
    {
      v10 = v36 + 8;
      v49 = v36 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = PreviousMode;
  if ( (v12->TypeInfo.ObjectTypeFlags & 8) == 0 && !v10 && !*((_QWORD *)v9 + 4) )
  {
    *(_QWORD *)&DmaAdapter[-1].Version = 0LL;
    if ( a7 )
    {
      v14 = v45 + 1;
      v39 = v50;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, DmaAdapter, a3, 0LL, v14, *v9, PreviousMode, 0LL, 0, v39, a7);
    }
    else
    {
      Handle = 0;
    }
    v16 = (void *)*((_QWORD *)v9 + 4);
    if ( v16 )
    {
      SeReleaseSecurityDescriptor(v16, *((_BYTE *)v9 + 16), 1);
      *((_QWORD *)v9 + 4) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[4].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v9);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(_DWORD *))L->FreeEx)(v9);
    }
    HalPutDmaAdapter(DmaAdapter);
    return Handle;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v52;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    v42 = SepCreateAccessStateFromSubjectContext(&SubjectContext, v52, v53, a3, &v12->TypeInfo.GenericMapping);
    if ( v42 < 0 )
    {
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)v42;
    }
  }
  v20 = (void *)*((_QWORD *)v9 + 4);
  SecurityDescriptor = v20;
  a2->SecurityDescriptor = v20;
  if ( !v20 )
  {
LABEL_15:
    v21 = v49;
    if ( v49 || (v12->TypeInfo.ObjectTypeFlags & 8) == 0 && !*((_QWORD *)v9 + 4) )
      goto LABEL_28;
    v22 = (__int64)a2->SecurityDescriptor;
    Index[1] = 0;
    v44 = 0;
    SecurityDescriptor = 0LL;
    P = 0LL;
    Index[0] = 8;
    v23 = SeComputeAutoInheritByObjectTypeEx((__int64)v12, v22, 0LL, &v44, Index);
    if ( v23 < 0 )
    {
      v25 = v23;
    }
    else
    {
      LODWORD(v24) = (_DWORD)P;
      if ( !P )
        v24 = a2->SecurityDescriptor;
      v25 = SeAssignSecurityEx2(
              0,
              (int)v24,
              (int)&SecurityDescriptor,
              0LL,
              v12 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v44,
              Index,
              (__int64)&a2->SubjectSecurityContext,
              (__int64)&v12->TypeInfo.GenericMapping);
      if ( v25 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      else
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        LOBYTE(v38) = KeGetCurrentThread()->PreviousMode;
        v25 = v12->TypeInfo.SecurityProcedure(
                DmaAdapter,
                AssignSecurityDescriptor,
                0LL,
                SecurityDescriptor,
                0LL,
                0LL,
                PagedPool,
                &v12->TypeInfo.GenericMapping,
                v38);
        if ( v25 >= 0 )
        {
          v26 = (void *)*((_QWORD *)v9 + 4);
          if ( *((_BYTE *)v9 + 16) <= 1u && v26 )
            ExFreePoolWithTag(v26, 0);
          PreviousMode = v41;
          v21 = v49;
          *((_QWORD *)v9 + 4) = 0LL;
          a2->SecurityDescriptor = 0LL;
LABEL_28:
          *(_QWORD *)&DmaAdapter[-1].Version = 0LL;
          if ( a7 )
          {
            v27 = v21 == 0LL;
            v28 = v45;
            v29 = 0LL;
            if ( !v27 )
              v29 = v9;
            v40 = v50;
            *a7 = 0LL;
            LOBYTE(v37) = PreviousMode;
            v30 = ObpCreateHandle(0LL, DmaAdapter, 0LL, a2, v28 + 1, *v9, v37, v29, 0, v40, a7);
            v25 = v30;
            if ( v30 >= 0 && v12 == ObpSymbolicLinkObjectType && v30 != 0x40000000 )
              ObpCreateSymbolicLinkName(DmaAdapter);
          }
          else if ( a2 == (struct _ACCESS_STATE *)v52 || (v25 = ObpAdjustCreatorAccessState(a2), v25 >= 0) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&DmaAdapter[-2], 0LL);
            v25 = ObpChargeQuotaForObject(&DmaAdapter[-3], KeGetCurrentThread()->ApcState.Process, 0LL);
            ExReleasePushLockEx((ULONG_PTR)&DmaAdapter[-2], 0LL);
            KeLeaveCriticalRegion();
            if ( v25 >= 0 )
            {
LABEL_34:
              v31 = (void *)*((_QWORD *)v9 + 4);
              if ( v31 )
              {
                SeReleaseSecurityDescriptor(v31, *((_BYTE *)v9 + 16), 1);
                *((_QWORD *)v9 + 4) = 0LL;
              }
              v32 = KeGetCurrentPrcb();
              v33 = v32->PPLookasideList[4].P;
              ++v33->TotalFrees;
              if ( LOWORD(v33->ListHead.Alignment) < v33->Depth
                || (++v33->FreeMisses,
                    v33 = v32->PPLookasideList[4].L,
                    ++v33->TotalFrees,
                    LOWORD(v33->ListHead.Alignment) < v33->Depth) )
              {
                RtlpInterlockedPushEntrySList(&v33->ListHead, (PSLIST_ENTRY)v9);
              }
              else
              {
                ++v33->FreeMisses;
                ((void (__fastcall *)(_DWORD *))v33->FreeEx)(v9);
              }
              if ( a2 != (struct _ACCESS_STATE *)v52 )
                return (unsigned int)v25;
LABEL_39:
              SepDeleteAccessState((__int64)a2);
              SeReleaseSubjectContext(&a2->SubjectSecurityContext);
              return (unsigned int)v25;
            }
          }
          HalPutDmaAdapter(DmaAdapter);
          goto LABEL_34;
        }
        SeDeassignSecurity(&SecurityDescriptor);
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    if ( a2 != (struct _ACCESS_STATE *)v52 )
      return (unsigned int)v25;
    goto LABEL_39;
  }
  if ( RtlValidSecurityDescriptor(v20) )
  {
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
    goto LABEL_15;
  }
  HalPutDmaAdapter(DmaAdapter);
  if ( a2 == (struct _ACCESS_STATE *)v52 )
  {
    SepDeleteAccessState((__int64)a2);
    SeReleaseSubjectContext(&a2->SubjectSecurityContext);
  }
  return 3221225593LL;
}

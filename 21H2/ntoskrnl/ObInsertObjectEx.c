/*
 * XREFs of ObInsertObjectEx @ 0x140729C30
 * Callers:
 *     NtFilterToken @ 0x1406623D0 (NtFilterToken.c)
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     NtCreateWaitCompletionPacket @ 0x1406AFD10 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1406B4B90 (NtCreateTimer.c)
 *     NtCreateIoCompletion @ 0x1406B8FE0 (NtCreateIoCompletion.c)
 *     NtCreatePrivateNamespace @ 0x1406C08F0 (NtCreatePrivateNamespace.c)
 *     ObpCreateDirectoryObject @ 0x1406C2A70 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406C505C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406D9390 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406E1214 (PspCreateActivityReference.c)
 *     NtCreateRegistryTransaction @ 0x1406E2A70 (NtCreateRegistryTransaction.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x1406F0080 (NtCreateMutant.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     NtCreateSemaphore @ 0x14072A4C0 (NtCreateSemaphore.c)
 *     WmipCreateGuidObject @ 0x140782F2C (WmipCreateGuidObject.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     EtwpAddUmRegEntry @ 0x140796F10 (EtwpAddUmRegEntry.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1407D53D0 (NtCreateTimer2.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140846BEC (HalpDmaAllocateChildAdapterV2.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x140854BB0 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x140861240 (IoCreateController.c)
 *     NtCreateDebugObject @ 0x140928A50 (NtCreateDebugObject.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     NtCreateProcessStateChange @ 0x1409AEFF0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AF200 (NtCreateThreadStateChange.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x1409CC3A0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A062C8 (ExpProfileCreate.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x1402A49D0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402A4A60 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406C8634 (SeObjectCreateSaclAccessBits.c)
 *     ObpAdjustCreatorAccessState @ 0x1407227B0 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x140726394 (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *Object,
        PACCESS_STATE AccessState,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _SLIST_ENTRY *v9; // rsi
  char *v10; // r15
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // rdi
  KPROCESSOR_MODE PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // r8
  PVOID v19; // rax
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *v21; // r14
  char *v22; // rcx
  PSECURITY_DESCRIPTOR v23; // rdx
  int v24; // eax
  int v25; // r14d
  _SLIST_ENTRY *v26; // rcx
  bool v27; // zf
  int v28; // ecx
  struct _SLIST_ENTRY *v29; // rax
  PVOID v30; // rdx
  int v31; // r12d
  __int64 v32; // r8
  __int64 v33; // r9
  _SLIST_ENTRY *v34; // rcx
  struct _KPRCB *v35; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  unsigned __int64 v37; // r8
  _KPROCESS *v38; // rdx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  PACCESS_TOKEN v41; // rcx
  __int64 v43; // r8
  int v44; // ecx
  unsigned int Handle; // ebx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  PVOID v49; // r14
  struct _KTHREAD *v50; // rax
  char *v51; // rax
  char *v52; // rcx
  ULONG_PTR v53; // rcx
  _QWORD *ClientToken; // rax
  _QWORD *v55; // rax
  _QWORD *PrimaryToken; // rax
  int v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  unsigned int v61; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v62; // [rsp+68h] [rbp-98h]
  PVOID Objecta; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp-78h] BYREF
  char *v67; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v68; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int128 v71; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  _QWORD v76[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v77[28]; // [rsp+180h] [rbp+80h] BYREF

  v61 = a3;
  Objecta = Object;
  v70 = a6;
  v64 = a4;
  memset(v77, 0, sizeof(v77));
  memset(v76, 0, sizeof(v76));
  v9 = (struct _SLIST_ENTRY *)*((_QWORD *)Object - 2);
  v10 = Object - 48;
  v11 = 0LL;
  v12 = 0x140000000uLL;
  v13 = 0LL;
  v14 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v67 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (*(Object - 22) & 2) != 0 )
  {
    v51 = (char *)ObpInfoMaskToOffset[*(Object - 22) & 3];
    v52 = (char *)(v10 - v51);
    if ( v10 != v51 )
    {
      v13 = v52 + 8;
      v67 = v52 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !v9[2].Next )
  {
    *((_QWORD *)v10 + 4) = 0LL;
    if ( a7 )
    {
      v43 = v61;
      v44 = v64 + 1;
      v60 = v70;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, v43, 0LL, v44, v9->Next, PreviousMode, 0LL, 0, v60, a7);
    }
    else
    {
      Handle = 0;
    }
    Next = v9[2].Next;
    if ( Next )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v9[1].Next), v12, v11);
      v9[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v76;
    CurrentThread = KeGetCurrentThread();
    v68 = CurrentThread;
    *((_QWORD *)&v71 + 1) = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v75 = Process;
    v73 = *(_QWORD *)(Process + 1088);
    if ( CurrentThread )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&v68[1].SwapListEntry + 1) & 8) != 0 )
        {
          v62 = (PVOID)(*(_QWORD *)((char *)&v68[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v62, 0x75536553u);
          DWORD2(v71) = *((_DWORD *)&v68[1].0 + 1) & 3;
        }
        else
        {
          v62 = 0LL;
        }
        v53 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v53 = BugCheckParameter2;
        }
        KeAbPostRelease(v53);
        KeLeaveCriticalRegionThread((__int64)v74);
        Process = v75;
        v19 = v62;
      }
      else
      {
        v19 = 0LL;
        v62 = 0LL;
      }
    }
    else
    {
      v19 = 0LL;
      v62 = 0LL;
    }
    *(_QWORD *)&v71 = v19;
    v20 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    v72 = v20;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
        if ( v72 == SepTokenLeakToken )
          __debugbreak();
        v55 = (_QWORD *)v71;
      }
      else
      {
        v55 = v62;
      }
      if ( v55 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v55[143] + 284LL));
        if ( (_QWORD)v71 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v62) = SepCreateAccessStateFromSubjectContext(&v71, v76, v77, v61, &v15->TypeInfo.GenericMapping);
    if ( (int)v62 < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v62;
    }
  }
  v21 = v9[2].Next;
  AccessState->SecurityDescriptor = v21;
  if ( v21 )
  {
    if ( !RtlValidSecurityDescriptor(v21) )
    {
      ObfDereferenceObject(Objecta);
      if ( AccessState == (PACCESS_STATE)v76 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (BYTE2(v21->Next) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v21);
  }
  v22 = v67;
  if ( !v67 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || v9[2].Next) )
  {
    v23 = AccessState->SecurityDescriptor;
    v61 = 0;
    SecurityDescriptor = 0LL;
    v65 = 8LL;
    v24 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, (__int64)v23, 0LL, &v61, &v65);
    if ( v24 < 0 )
    {
      v25 = v24;
    }
    else
    {
      v61 |= 16 * (a5 & 1);
      v25 = SeAssignSecurityEx2(
              0,
              (int)AccessState->SecurityDescriptor,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              v61,
              &v65,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v25 >= 0 )
      {
        LOBYTE(v58) = KeGetCurrentThread()->PreviousMode;
        v25 = v15->TypeInfo.SecurityProcedure(
                Objecta,
                AssignSecurityDescriptor,
                0LL,
                SecurityDescriptor,
                0LL,
                0LL,
                PagedPool,
                &v15->TypeInfo.GenericMapping,
                v58);
        if ( v25 >= 0 )
        {
          v26 = v9[2].Next;
          if ( LOBYTE(v9[1].Next) <= 1u && v26 )
            ExFreePoolWithTag(v26, 0);
          v22 = v67;
          v9[2].Next = 0LL;
          AccessState->SecurityDescriptor = 0LL;
          goto LABEL_19;
        }
        SeDeassignSecurity(&SecurityDescriptor);
      }
    }
    ObfDereferenceObject(Objecta);
    if ( AccessState == (PACCESS_STATE)v76 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
    return (unsigned int)v25;
  }
LABEL_19:
  *((_QWORD *)v10 + 4) = 0LL;
  if ( a7 )
  {
    v27 = v22 == 0LL;
    v28 = v64;
    v29 = v9;
    if ( v27 )
      v29 = 0LL;
    v59 = v70;
    v30 = Objecta;
    *a7 = 0LL;
    LOBYTE(v57) = PreviousMode;
    v31 = ObpCreateHandle(0LL, v30, 0LL, AccessState, v28 + 1, v9->Next, v57, v29, 0, v59, a7);
    ObfDereferenceObject(Objecta);
    goto LABEL_23;
  }
  if ( AccessState == (PACCESS_STATE)v76 )
  {
    v49 = Objecta;
    goto LABEL_50;
  }
  if ( ((__int64)v9->Next & 0x400) != 0 )
    PreviousMode = 1;
  v49 = Objecta;
  v31 = ObpAdjustCreatorAccessState(AccessState, PreviousMode, (__int64)v15, (__int64)Objecta);
  if ( v31 >= 0 )
  {
LABEL_50:
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 16), 0LL);
    v31 = ObpChargeQuotaForObject((__int64)v10, (__int64)KeGetCurrentThread()->ApcState.Process);
    ExReleasePushLockEx((ULONG_PTR)(v10 + 16), 0LL);
    KeLeaveCriticalRegion();
    if ( v31 >= 0 )
      goto LABEL_23;
  }
  ObfDereferenceObject(v49);
LABEL_23:
  v34 = v9[2].Next;
  if ( v34 )
  {
    LOBYTE(v32) = 1;
    SeReleaseSecurityDescriptor(v34, LOBYTE(v9[1].Next), v32, v33);
    v9[2].Next = 0LL;
  }
  v35 = KeGetCurrentPrcb();
  L = v35->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v35->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, v9);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(struct _SLIST_ENTRY *))L->FreeEx)(v9);
  }
  if ( AccessState == (PACCESS_STATE)v76 )
  {
    SepDeleteAccessState((__int64)AccessState);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = AccessState->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v37 = (unsigned __int64)AccessState->SubjectSecurityContext.PrimaryToken;
    v38 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v38[1].Affinity.StaticBitmap[5]);
    v39 = v38[1].Affinity.StaticBitmap[5];
    if ( (v37 ^ v39) >= 0xF )
    {
LABEL_68:
      ObfDereferenceObjectWithTag((PVOID)v37, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)&v38[1].Affinity.StaticBitmap[5], v39 + 1, v39);
        if ( v40 == v39 )
          break;
        if ( (v37 ^ v39) >= 0xF )
          goto LABEL_68;
      }
      ObpTraceObjectDereferenceIfActive(v37 - 48);
    }
    v41 = AccessState->SubjectSecurityContext.ClientToken;
    AccessState->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v41 )
      ObfDereferenceObjectWithTag(v41, 0x75536553u);
    AccessState->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v31;
}

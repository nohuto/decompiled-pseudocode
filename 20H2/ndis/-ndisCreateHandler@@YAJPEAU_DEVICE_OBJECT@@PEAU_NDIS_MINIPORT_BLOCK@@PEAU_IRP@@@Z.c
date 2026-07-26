/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006020
 * Callers:
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006000 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfCreateIrpHandler @ 0x1C0061AC0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     NdisMSleep @ 0x1C00172E0 (NdisMSleep.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C006B090 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE480 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE604 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  _QWORD *v5; // r12
  int *v7; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *SecurityDescriptor; // r15
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v11; // rdi
  KPROCESSOR_MODE AccessMode; // r14
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v14; // r14
  signed __int32 v15; // eax
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  __int64 v18; // rcx
  int v19; // esi
  unsigned int v20; // edi
  PACCESS_TOKEN v21; // rax
  void *v22; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v25; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v26; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v27; // r8
  _NDIS_IF_BLOCK *IfBlock; // rdi
  KIRQL v29; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  char v31; // r14
  KIRQL v32; // al
  _NDIS_IF_BLOCK *v33; // rsi
  KIRQL v34; // r15
  ULONG_PTR MpRefCountTracker; // r8
  int v36; // ecx
  __int64 v37; // r10
  unsigned __int8 v38; // r9
  _BYTE *v39; // rdx
  KIRQL v41; // al
  BOOLEAN v42; // r14
  KIRQL v43; // dl
  unsigned int NumAdminOpens; // ecx
  unsigned __int8 CurrentIrql; // al
  char v46; // r15
  int v47; // edx
  KIRQL v48; // di
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  int v51; // edi
  unsigned __int64 *p_Lock; // rcx
  KIRQL v53; // dl
  _QWORD *PoolWithTag; // rax
  char v55; // r15
  _OID_LIST *OidList; // rax
  int v57; // edx
  unsigned int NumUserOpens; // eax
  NTSTATUS v60; // edi
  KIRQL v61; // al
  __int64 v62; // rdx
  ULONG_PTR v63; // rdi
  unsigned int v64; // edx
  int v65; // ecx
  char v66; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  KIRQL v70; // al
  KIRQL v71; // al
  KIRQL v72; // dl
  unsigned __int8 v73; // [rsp+50h] [rbp-39h] BYREF
  char v74; // [rsp+51h] [rbp-38h]
  char v75; // [rsp+52h] [rbp-37h]
  char v76; // [rsp+53h] [rbp-36h]
  char v77; // [rsp+54h] [rbp-35h]
  BOOLEAN EffectiveOnly; // [rsp+55h] [rbp-34h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+56h] [rbp-33h] BYREF
  BOOLEAN v80; // [rsp+57h] [rbp-32h]
  char v81[8]; // [rsp+58h] [rbp-31h]
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-29h] BYREF
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-25h] BYREF
  NTSTATUS AccessStatus; // [rsp+68h] [rbp-21h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+6Ch] [rbp-1Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-19h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-11h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-9h] BYREF
  _IO_STACK_LOCATION *v89; // [rsp+88h] [rbp-1h]
  __int64 v90; // [rsp+90h] [rbp+7h]
  __int128 v91; // [rsp+98h] [rbp+Fh]

  v3 = a1;
  *(_QWORD *)v81 = a1;
  v5 = 0LL;
  v73 = 0;
  v74 = 0;
  v77 = 0;
  v75 = 0;
  v76 = 0;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v7,
      11,
      15,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a1,
      (char)a3);
    v3 = *(struct _DEVICE_OBJECT **)v81;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v89 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(v3, &a2->Header, a3);
  SecurityDescriptor = a2->SecurityDescriptor;
  AccessStatus = 0;
  Privileges = 0LL;
  GrantedAccess = 0;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v11 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
  SeLockSubjectContext(&v11->SubjectSecurityContext);
  if ( (CurrentStackLocation->Flags & 1) != 0 )
    AccessMode = 1;
  else
    AccessMode = a3->RequestorMode;
  GenericMapping = IoGetFileObjectGenericMapping();
  v14 = SeAccessCheck(
          SecurityDescriptor,
          &v11->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          GenericMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  v80 = v14;
  if ( Privileges )
  {
    SeAppendPrivileges(v11, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v14 )
  {
    v11->PreviouslyGrantedAccess |= GrantedAccess;
    v11->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v11->SubjectSecurityContext);
  v15 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v15 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v19 = *ThreadProperty;
    LODWORD(v90) = ThreadProperty[1];
    HIDWORD(v90) = v19;
    ObfDereferenceObject(ThreadProperty);
    v20 = v19;
  }
  else
  {
    v19 = 0;
    v90 = 0LL;
    v20 = 0;
  }
  if ( !v20 )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
    }
    else
    {
      v21 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v22 = v21;
      if ( v21 )
      {
        v60 = SeQueryInformationToken(v21, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v22);
        if ( v60 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_19;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_19:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00E6190 )
    {
      v19 = 0;
      v61 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
      if ( ThreadSessionId < dword_1C00E6190 )
        v19 = *((_DWORD *)P + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00E4B20, v61);
      if ( !v19 )
        v19 = 1;
    }
    else
    {
      v19 = 1;
    }
    HIDWORD(v90) = v19;
    v20 = v19;
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v26 = qword_1C00E4B30;
  v27 = 0LL;
  if ( qword_1C00E4B30 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
  {
    while ( *((_DWORD *)v26 + 4) != v20 )
    {
      if ( *((_DWORD *)v26 + 4) <= v20 )
      {
        v26 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v26;
        if ( v26 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
          continue;
      }
      goto LABEL_27;
    }
    v27 = v26;
  }
LABEL_27:
  v91 = *(_OWORD *)((char *)v27 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v25);
  IfBlock = 0LL;
  v29 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( a2->IfBlockAvailable )
  {
    IfBlock = a2->IfBlock;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&SpinLock, v29);
  if ( !IfBlock )
    goto LABEL_116;
  Compartment = IfBlock->Compartment;
  if ( v19 == *((_DWORD *)Compartment + 4) )
    goto LABEL_31;
  v62 = v91 - *(_QWORD *)((char *)Compartment + 1684);
  if ( (_QWORD)v91 == *(_QWORD *)((char *)Compartment + 1684) )
    v62 = *((_QWORD *)&v91 + 1) - *(_QWORD *)((char *)Compartment + 1692);
  if ( !v62 || (*((_DWORD *)Compartment + 420) & 2) == 0 && v19 == 1 )
LABEL_31:
    v31 = 1;
  else
    v31 = 0;
  v32 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v33 = a2->IfBlock;
  v34 = v32;
  MpRefCountTracker = (ULONG_PTR)v33->MpRefCountTracker;
  if ( MpRefCountTracker - 2 <= 1 )
    goto LABEL_41;
  if ( MpRefCountTracker <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
  if ( *(_BYTE *)(MpRefCountTracker + 2) <= 0x16u )
    ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 0x16uLL);
  v36 = *(unsigned __int8 *)(MpRefCountTracker + 1);
  if ( *(_BYTE *)(MpRefCountTracker + 1) )
  {
    if ( v36 != 1 )
      goto LABEL_41;
    v63 = MpRefCountTracker + 1416;
    v64 = *(_DWORD *)(MpRefCountTracker + 1472);
    v65 = (unsigned __int16)v64 >> 1;
    if ( v64 >> 17 < 0x3FFE && v65 == (v64 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 1416));
      *(_DWORD *)(v63 + 56) &= 0x10001u;
      goto LABEL_41;
    }
    if ( v65 != 0 || (v64 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 1416), 0);
      goto LABEL_41;
    }
    goto LABEL_101;
  }
  v37 = *(_QWORD *)(MpRefCountTracker + 8);
  if ( !v37 || (v38 = *(_BYTE *)(MpRefCountTracker + 3)) == 0 )
  {
LABEL_40:
    if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 0x16u) )
      goto LABEL_41;
LABEL_101:
    ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 0x16uLL);
  }
  while ( 1 )
  {
    v39 = (_BYTE *)(v37 + 2LL * (unsigned __int8)v36);
    if ( *v39 == 22 )
    {
      v66 = v39[1];
      if ( v66 )
        break;
    }
    LOBYTE(v36) = v36 + 1;
    if ( (unsigned __int8)v36 >= v38 )
      goto LABEL_40;
  }
  v39[1] = v66 - 1;
LABEL_41:
  if ( v33->MiniportLinkReference-- == 1 )
  {
    Miniport = v33->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v34);
  if ( !v31 )
  {
LABEL_116:
    v51 = -1073741772;
    goto LABEL_117;
  }
  v41 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v42 = v80;
  v43 = v41;
  v73 = v41;
  if ( v80 )
  {
    NumAdminOpens = a2->NumAdminOpens;
    if ( NumAdminOpens < 0x1000000 )
    {
      v75 = 1;
      a2->NumAdminOpens = NumAdminOpens + 1;
      goto LABEL_46;
    }
LABEL_105:
    v51 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v43);
LABEL_117:
    v55 = v81[0];
    goto LABEL_59;
  }
  NumUserOpens = a2->NumUserOpens;
  if ( NumUserOpens >= 0x1000000 )
    goto LABEL_105;
  v76 = 1;
  a2->NumUserOpens = NumUserOpens + 1;
LABEL_46:
  KeReleaseSpinLock(&a2->Ref.SpinLock, v43);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v51 = -1073741823;
    goto LABEL_117;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
  v46 = 1;
  v74 = 1;
  v48 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
    goto LABEL_109;
  RefCountTracker = a2->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
  ReferenceCount = a2->Ref.ReferenceCount;
  a2->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    a2->Ref.ReferenceCount = -1;
LABEL_109:
    v46 = 0;
    v74 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v47) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v47,
      20,
      12,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a2,
      a2->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v48);
  if ( !v46 )
  {
    v51 = -1073676282;
    goto LABEL_117;
  }
  v73 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v51 = 0;
  p_Lock = &a2->Lock;
  a2->MiniportThread = 0LL;
  v53 = v73;
  if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
  {
    v51 = -1073676282;
    KeReleaseSpinLock(p_Lock, v73);
    goto LABEL_117;
  }
  ++a2->UserModeOpenReferences;
  v77 = 1;
  KeReleaseSpinLock(p_Lock, v53);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
  v55 = v81[0];
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_QWORD *)v81;
    PoolWithTag[1] = a2;
    PoolWithTag[2] = 0LL;
    *((_BYTE *)PoolWithTag + 24) = v42;
    v89->FileObject->FsContext = PoolWithTag;
    OidList = a2->OidList;
    if ( OidList )
    {
      v5[2] = OidList;
    }
    else if ( a3->RequestorMode == 1 )
    {
      v51 = -1073741823;
    }
  }
  else
  {
    v51 = -1073741670;
  }
LABEL_59:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v51 < 0 )
    goto LABEL_121;
  if ( (a2->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a2->BusInterface;
    if ( BusInterface )
    {
      BusInterface[4](BusInterface[1]);
      goto LABEL_61;
    }
    v51 = -1073741823;
LABEL_121:
    if ( v75 )
    {
      v70 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumAdminOpens;
      v73 = v70;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v70);
    }
    if ( v76 )
    {
      v71 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumUserOpens;
      v73 = v71;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v71);
    }
    if ( v77 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v73);
      v72 = v73;
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v72);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    }
    if ( v74 )
      ndisDereferenceMiniport(a2, MPREF_UM_HANDLE);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
LABEL_61:
  a3->IoStatus.Status = v51;
  IofCompleteRequest(a3, 2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v57) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v57,
      11,
      16,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      v55,
      (char)a3,
      v51);
  }
  return (unsigned int)v51;
}

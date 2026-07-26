/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017204 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035B44 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B1080 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00B19C4 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00B4690 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C00B56CC (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE480 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE604 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE7B0 (NdisFreeRefCount.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C00F8900 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C00F8C10 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C00F97E0 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C00F9C30 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C00F9F50 (ndisNsiGetInterfaceRwInformation.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // r12
  struct _NDIS_IF_BLOCK *IfBlock; // r15
  struct _NM_REQUEST_GET_PARAMETER *v3; // r13
  _NDIS_MINIPORT_BLOCK *Miniport; // r14
  struct _KTHREAD *CurrentThread; // rsi
  union _NET_LUID_LH v6; // rbx
  int *ThreadProperty; // rax
  int *v8; // rcx
  int v9; // ebp
  unsigned int v10; // edi
  PACCESS_TOKEN v11; // rax
  void *v12; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rax
  KIRQL v19; // al
  int v20; // ecx
  KIRQL v21; // di
  _LIST_ENTRY *Flink; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  KIRQL v24; // bl
  struct _NDIS_REFCOUNT_BLOCK *MpRefCountTracker; // rcx
  _NDIS_MINIPORT_BLOCK *v26; // rbp
  KIRQL v27; // al
  struct _NDIS_M_DRIVER_BLOCK *v28; // r15
  KIRQL v29; // si
  _REFERENCE_EX *p_Ref; // r13
  int v31; // ebx
  KIRQL v32; // di
  unsigned __int16 ReferenceCount; // cx
  KIRQL v34; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v36; // r13d
  struct _NDIS_MINIPORT_BLOCK *v37; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v39; // rcx
  bool v40; // zf
  char v41; // si
  KIRQL v42; // r14
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v44; // ecx
  unsigned int *p_Number; // rax
  KIRQL v46; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // r14
  __int64 v51; // r10
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // cl
  _BYTE *v54; // rdx
  char v55; // bl
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  int v57; // esi
  KIRQL v58; // r15
  unsigned __int16 v59; // cx
  KIRQL v60; // di
  ULONG_PTR NsiRefCountTracker; // r8
  int v62; // ecx
  __int64 v63; // r9
  unsigned __int8 v64; // dl
  _BYTE *v65; // r10
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v67; // si
  KIRQL v68; // al
  ULONG_PTR v69; // r8
  KIRQL v70; // r14
  int v71; // ecx
  __int64 v72; // r10
  unsigned __int8 v73; // r9
  _BYTE *v74; // rdx
  KIRQL v75; // al
  ULONG_PTR v76; // r8
  KIRQL v77; // bl
  int v78; // ecx
  __int64 v79; // r9
  unsigned __int8 v80; // dl
  _BYTE *v81; // r10
  __int64 v82; // rax
  int v83; // eax
  int InterfaceRodInformation; // eax
  KIRQL v85; // bp
  __int64 p_DeferredContext; // rbx
  KIRQL v87; // al
  ULONG_PTR v88; // r8
  KIRQL v89; // di
  int v90; // ecx
  __int64 v91; // r10
  unsigned __int8 v92; // r9
  _BYTE *v93; // rdx
  char v94; // al
  ULONG_PTR v95; // r8
  int v96; // ecx
  __int64 v97; // r9
  unsigned __int8 v98; // dl
  _BYTE *v99; // r10
  ULONG_PTR v100; // r8
  int v101; // ecx
  __int64 v102; // r10
  unsigned __int8 v103; // r9
  _BYTE *v104; // rdx
  char v106; // al
  char v107; // al
  char v108; // al
  NTSTATUS v109; // edi
  KIRQL v110; // r8
  int v111; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v113; // rdx
  ULONG_PTR v114; // rbx
  unsigned int v115; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v116; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v122; // rbx
  unsigned int v123; // edx
  int v124; // ecx
  char v125; // al
  ULONG_PTR v126; // rdi
  unsigned int v127; // edx
  int v128; // ecx
  char v129; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v131; // rdi
  unsigned int v132; // edx
  int v133; // ecx
  char v134; // al
  _NDIS_MINIPORT_BLOCK *v135; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v137; // eax
  ULONG_PTR v138; // rsi
  unsigned int v139; // edx
  int v140; // ecx
  ULONG_PTR v141; // rbx
  unsigned int v142; // edx
  int v143; // ecx
  _LIST_ENTRY *v144; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v146; // rdx
  _LIST_ENTRY *v147; // rcx
  _LIST_ENTRY *v148; // rdx
  _LIST_ENTRY *v149; // rcx
  ULONG_PTR v150; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v154; // rbx
  unsigned int v155; // edx
  int v156; // ecx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  _LIST_ENTRY *v159; // rdx
  _LIST_ENTRY *v160; // rcx
  _LIST_ENTRY *v161; // rdx
  _LIST_ENTRY *v162; // rcx
  ULONG_PTR v163; // rcx
  _IF_COUNTED_STRING_LH *v164; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v165; // rcx
  struct _KEVENT *v166; // rcx
  __int64 v167; // [rsp+30h] [rbp-A8h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-98h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+41h] [rbp-97h] BYREF
  KIRQL v170; // [rsp+42h] [rbp-96h]
  KIRQL v171; // [rsp+43h] [rbp-95h]
  _NDIS_MINIPORT_BLOCK *v172; // [rsp+48h] [rbp-90h]
  int v173; // [rsp+50h] [rbp-88h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+54h] [rbp-84h] BYREF
  int v175; // [rsp+58h] [rbp-80h]
  struct _NDIS_MINIPORT_BLOCK *v176; // [rsp+60h] [rbp-78h]
  struct _NDIS_IF_BLOCK *v177; // [rsp+68h] [rbp-70h]
  PVOID TokenInformation; // [rsp+70h] [rbp-68h] BYREF
  struct _NDIS_M_DRIVER_BLOCK *v179; // [rsp+78h] [rbp-60h]
  _REFERENCE_EX *v180; // [rsp+80h] [rbp-58h]
  struct _NM_REQUEST_GET_PARAMETER *v181; // [rsp+88h] [rbp-50h]
  __int64 v182; // [rsp+90h] [rbp-48h] BYREF
  __int128 v183; // [rsp+98h] [rbp-40h]

  v1 = 0LL;
  v181 = a1;
  IfBlock = 0LL;
  v3 = a1;
  Miniport = 0LL;
  v175 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    LODWORD(Miniport) = -1073741808;
    goto LABEL_140;
  }
  if ( !*((_DWORD *)v3 + 12) )
  {
    LODWORD(Miniport) = -1073741808;
    goto LABEL_140;
  }
  if ( !*((_QWORD *)v3 + 5) )
  {
    LODWORD(Miniport) = -1073741808;
    goto LABEL_140;
  }
  CurrentThread = KeGetCurrentThread();
  v6.Value = (*((union _NET_LUID_LH **)v3 + 2))->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = ThreadProperty;
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    LODWORD(v182) = ThreadProperty[1];
    HIDWORD(v182) = v9;
    ObfDereferenceObject(ThreadProperty);
    v10 = v9;
  }
  else
  {
    v9 = 0;
    v182 = 0LL;
    v10 = 0;
  }
  if ( !v10 )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v11 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v12 = v11;
      if ( v11 )
      {
        v109 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v12);
        if ( v109 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00E6190 )
    {
      v9 = 0;
      v110 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
      if ( ThreadSessionId < dword_1C00E6190 )
        v9 = *((_DWORD *)P + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00E4B20, v110);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    HIDWORD(v182) = v9;
    v10 = v9;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  v18 = qword_1C00E4B30;
  if ( qword_1C00E4B30 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
  {
    while ( *((_DWORD *)v18 + 4) != v10 )
    {
      if ( *((_DWORD *)v18 + 4) <= v10 )
      {
        v18 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v18;
        if ( v18 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
          continue;
      }
      goto LABEL_21;
    }
    v16 = v18;
  }
LABEL_21:
  v183 = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = *((_DWORD *)v3 + 14);
  v21 = v19;
  v171 = v19;
  if ( v20 )
  {
    v111 = v20 - 1;
    if ( v111 )
    {
      if ( v111 == 1 )
        goto LABEL_216;
      LODWORD(Miniport) = -1073741808;
    }
    else
    {
      v6.Value = 0LL;
LABEL_216:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v6);
        v177 = NextInterfaceByNetLuid;
        v1 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v6.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( ndisIsCompartmentAccessibleByClient(
               NextInterfaceByNetLuid->Compartment,
               (const struct _NDIS_NSI_CLIENT_INFO *)&v182,
               0) )
        {
          goto LABEL_30;
        }
      }
    }
  }
  else
  {
    Flink = ndisIfList.Flink;
    v177 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( Flink[5].Flink != (_LIST_ENTRY *)v6.Value )
      {
        if ( Flink[5].Flink <= (_LIST_ENTRY *)v6.Value )
        {
          Flink = Flink->Flink;
          if ( Flink != &ndisIfList )
            continue;
        }
        goto LABEL_28;
      }
      v1 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
      v177 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
    }
LABEL_28:
    if ( v1 )
    {
      Compartment = v1->Compartment;
      if ( v9 != *((_DWORD *)Compartment + 4) )
      {
        v113 = v183 - *(_QWORD *)((char *)Compartment + 1684);
        if ( (_QWORD)v183 == *(_QWORD *)((char *)Compartment + 1684) )
          v113 = *((_QWORD *)&v183 + 1) - *(_QWORD *)((char *)Compartment + 1692);
        if ( v113 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || v9 != 1) )
        {
          v1 = 0LL;
          goto LABEL_132;
        }
      }
LABEL_30:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker, 1u);
      ++v1->Ref;
      if ( v1->bNdisIsProvider && *((_QWORD *)v3 + 1) < 2uLL )
      {
        v172 = 0LL;
        v24 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
        if ( v1->MiniportAvailable )
        {
          Miniport = v1->Miniport;
          MpRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v1->MpRefCountTracker;
          v172 = Miniport;
          NdisReferenceWithTag(MpRefCountTracker, 3u);
          ++v1->MiniportLinkReference;
        }
        KeReleaseSpinLock(&SpinLock, v24);
        if ( Miniport )
        {
          v26 = 0LL;
          v173 = 1;
          v176 = 0LL;
          if ( !Miniport->BindPaths )
            goto LABEL_194;
          v27 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          v28 = ndisMiniDriverList;
          v29 = v27;
          v179 = ndisMiniDriverList;
          if ( !ndisMiniDriverList )
            goto LABEL_79;
          while ( 1 )
          {
            p_Ref = &v28->Ref;
            v180 = &v28->Ref;
            v31 = 1;
            v32 = KeAcquireSpinLockRaiseToDpc(&v28->Ref.SpinLock);
            if ( !v28->Ref.Closing )
            {
              ReferenceCount = v28->Ref.ReferenceCount;
              if ( ReferenceCount >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v31 = 2;
              }
              else
              {
                v28->Ref.ReferenceCount = ReferenceCount + 1;
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v28->Ref.RefCountTracker, 8u);
                v31 = 0;
              }
            }
            KeReleaseSpinLock(&v28->Ref.SpinLock, v32);
            if ( v31 )
            {
              NextDriver = v28->NextDriver;
              goto LABEL_77;
            }
            KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
            v34 = KeAcquireSpinLockRaiseToDpc(&v28->Ref.SpinLock);
            MiniportQueue = v28->MiniportQueue;
            v170 = v34;
            if ( !MiniportQueue )
              goto LABEL_64;
            v36 = v173;
            v37 = v176;
            do
            {
              BindPaths = MiniportQueue->BindPaths;
              if ( !BindPaths )
                goto LABEL_62;
              if ( BindPaths->Number < v36 )
                goto LABEL_62;
              v39 = Miniport->BindPaths;
              if ( v39->Paths[0].Length != BindPaths->Paths[0].Length
                || memcmp(v39->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v39->Paths[0].Length) )
              {
                goto LABEL_62;
              }
              KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
              v40 = (MiniportQueue->Flags & 0x80200020) == 0;
              MiniportQueue->MiniportThread = KeGetCurrentThread();
              if ( v40
                && (MiniportQueue->PnPFlags & 0x1084110) == 0
                && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
              {
                v41 = 1;
                v42 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
                if ( !MiniportQueue->Ref.Closing )
                {
                  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
                  if ( RefCountTracker )
                    NdisReferenceWithTag(RefCountTracker, 0x3Cu);
                  v44 = MiniportQueue->Ref.ReferenceCount;
                  MiniportQueue->Ref.ReferenceCount = v44 + 1;
                  if ( v44 != -1 )
                    goto LABEL_55;
                  MiniportQueue->Ref.ReferenceCount = -1;
                }
                v41 = 0;
LABEL_55:
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v167) = MiniportQueue->Ref.ReferenceCount;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x14u,
                    0xCu,
                    (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
                    (char)MiniportQueue,
                    v167);
                }
                KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v42);
                if ( v41 )
                {
                  v37 = v26;
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 2u);
                  p_Number = &MiniportQueue->BindPaths->Number;
                  v26 = MiniportQueue;
                  ++MiniportQueue->NsiOpenReferences;
                  v36 = *p_Number;
                }
                Miniport = v172;
              }
              MiniportQueue->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
              if ( v37 )
              {
                ndisDereferenceMiniportForNsi(v37, NSIREF_IFTOP, 0x3Cu);
                v37 = 0LL;
              }
LABEL_62:
              MiniportQueue = MiniportQueue->NextMiniport;
            }
            while ( MiniportQueue );
            v34 = v170;
            v28 = v179;
            v176 = v37;
            v1 = v177;
            v173 = v36;
            p_Ref = v180;
LABEL_64:
            KeReleaseSpinLock(&p_Ref->SpinLock, v34);
            v46 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v28->NextDriver;
            v29 = v46;
            v48 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
            v49 = (ULONG_PTR)p_Ref->RefCountTracker;
            v50 = v48;
            if ( v49 - 2 > 1 )
            {
              if ( v49 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v49, 0LL);
              if ( *(_BYTE *)(v49 + 2) <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v49, 8uLL);
              if ( *(_BYTE *)(v49 + 1) )
              {
                if ( *(_BYTE *)(v49 + 1) != 1 )
                  goto LABEL_73;
                v114 = v49 + 520;
                v115 = *(_DWORD *)(v49 + 576);
                if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 520));
                  *(_DWORD *)(v114 + 56) &= 0x10001u;
                  goto LABEL_73;
                }
                if ( (unsigned __int16)v115 >> 1 != 0 || (v115 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 520), 0);
                  goto LABEL_73;
                }
              }
              else
              {
                v51 = *(_QWORD *)(v49 + 8);
                if ( v51 )
                {
                  v52 = *(_BYTE *)(v49 + 3);
                  v53 = 0;
                  if ( v52 )
                  {
                    while ( 1 )
                    {
                      v54 = (_BYTE *)(v51 + 2LL * v53);
                      if ( *v54 == 8 )
                      {
                        v106 = v54[1];
                        if ( v106 )
                          break;
                      }
                      if ( ++v53 >= v52 )
                        goto LABEL_72;
                    }
                    v54[1] = v106 - 1;
                    goto LABEL_73;
                  }
                }
LABEL_72:
                if ( _bittestandreset((signed __int32 *)(v49 + 16), 8u) )
                  goto LABEL_73;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v49, 8uLL);
            }
LABEL_73:
            v40 = p_Ref->ReferenceCount-- == 1;
            if ( v40 )
            {
              v55 = 1;
              if ( !p_Ref->ZeroBased )
              {
                NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
                p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
            }
            else
            {
              v55 = 0;
            }
            KeReleaseSpinLock(&p_Ref->SpinLock, v50);
            if ( v55 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x17u,
                  (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                  v28);
              v116 = ndisMiniDriverList;
              p_NextDriver = &ndisMiniDriverList;
              if ( ndisMiniDriverList )
              {
                while ( v116 != v28 )
                {
                  p_NextDriver = &v116->NextDriver;
                  v116 = v116->NextDriver;
                  if ( !v116 )
                    goto LABEL_243;
                }
                *p_NextDriver = v28->NextDriver;
                ObfDereferenceObject(ndisDriverObject);
              }
LABEL_243:
              Buffer = v28->ImageName.Buffer;
              if ( Buffer )
              {
                ExFreePoolWithTag(Buffer, 0);
                v28->ImageName.Buffer = 0LL;
              }
              NdisDriverInfo = v28->NdisDriverInfo;
              if ( NdisDriverInfo )
              {
                ExFreePoolWithTag(NdisDriverInfo, 0);
                v28->NdisDriverInfo = 0LL;
              }
              if ( (v28->Flags & 1) != 0 )
              {
                PendingDeviceList = v28->PendingDeviceList;
                if ( PendingDeviceList )
                {
                  do
                  {
                    Next = PendingDeviceList->Next;
                    ExFreePoolWithTag(PendingDeviceList, 0);
                    PendingDeviceList = Next;
                  }
                  while ( Next );
                }
              }
              KeSetEvent(&v28->MiniportsRemovedEvent, 0, 0);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x18u,
                  (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                  v28);
            }
            Miniport = v172;
LABEL_77:
            v179 = NextDriver;
            v28 = NextDriver;
            if ( !NextDriver )
            {
              v3 = v181;
LABEL_79:
              KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
              if ( v26 )
              {
                KeAcquireSpinLockAtDpcLevel(&v26->Lock);
                HighestFilter = v26->HighestFilter;
                v26->MiniportThread = KeGetCurrentThread();
                if ( HighestFilter )
                {
                  while ( 1 )
                  {
                    v57 = 1;
                    v58 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
                    if ( !HighestFilter->PnPRef.Closing )
                    {
                      v59 = HighestFilter->PnPRef.ReferenceCount;
                      if ( v59 >= 0xFFEBu )
                      {
                        ndisRefCountReferenceCountOverflow = 1;
                        v57 = 2;
                      }
                      else
                      {
                        HighestFilter->PnPRef.ReferenceCount = v59 + 1;
                        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker, 0xBu);
                        v57 = 0;
                      }
                    }
                    KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v58);
                    if ( !v57 )
                      break;
                    HighestFilter = HighestFilter->LowerFilter;
                    if ( !HighestFilter )
                      goto LABEL_199;
                  }
                  IfBlock = HighestFilter->IfBlock;
                }
                else
                {
LABEL_199:
                  IfBlock = v26->IfBlock;
                }
                v26->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&v26->Lock);
                v60 = KeAcquireSpinLockRaiseToDpc(&v26->Lock);
                NsiRefCountTracker = (ULONG_PTR)v26->NsiRefCountTracker;
                v26->MiniportThread = KeGetCurrentThread();
                if ( NsiRefCountTracker - 2 > 1 )
                {
                  if ( NsiRefCountTracker <= 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
                  if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
                  v62 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
                  if ( *(_BYTE *)(NsiRefCountTracker + 1) )
                  {
                    if ( v62 != 1 )
                      goto LABEL_95;
                    v122 = NsiRefCountTracker + 136;
                    v123 = *(_DWORD *)(NsiRefCountTracker + 192);
                    v124 = (unsigned __int16)v123 >> 1;
                    if ( v123 >> 17 < 0x3FFE && v124 == (v123 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                      *(_DWORD *)(v122 + 56) &= 0x10001u;
                      goto LABEL_95;
                    }
                    if ( v124 != 0 || (v123 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                      goto LABEL_95;
                    }
                  }
                  else
                  {
                    v63 = *(_QWORD *)(NsiRefCountTracker + 8);
                    if ( v63 )
                    {
                      v64 = *(_BYTE *)(NsiRefCountTracker + 3);
                      if ( v64 )
                      {
                        while ( 1 )
                        {
                          v65 = (_BYTE *)(v63 + 2LL * (unsigned __int8)v62);
                          if ( *v65 == 2 )
                          {
                            v125 = v65[1];
                            if ( v125 )
                              break;
                          }
                          LOBYTE(v62) = v62 + 1;
                          if ( (unsigned __int8)v62 >= v64 )
                            goto LABEL_94;
                        }
                        v65[1] = v125 - 1;
                        goto LABEL_95;
                      }
                    }
LABEL_94:
                    if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                      goto LABEL_95;
                  }
                  ndisBugCheckEx(0x1EuLL, 0LL, NsiRefCountTracker, 2uLL);
                }
LABEL_95:
                v40 = v26->NsiOpenReferences-- == 1;
                if ( v40 )
                {
                  NsiRequestsCompletedEvent = v26->NsiRequestsCompletedEvent;
                  if ( NsiRequestsCompletedEvent )
                    KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
                }
                v26->MiniportThread = 0LL;
                KeReleaseSpinLock(&v26->Lock, v60);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x14u,
                    0x19u,
                    (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                    v26);
                v67 = 0;
                v68 = KeAcquireSpinLockRaiseToDpc(&v26->Ref.SpinLock);
                v69 = (ULONG_PTR)v26->RefCountTracker;
                v70 = v68;
                if ( v69 && v69 - 2 > 1 )
                {
                  if ( v69 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v69 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v69, 0x3CuLL);
                  v71 = *(unsigned __int8 *)(v69 + 1);
                  if ( *(_BYTE *)(v69 + 1) )
                  {
                    if ( v71 != 1 )
                      goto LABEL_110;
                    v126 = v69 + 3848;
                    v127 = *(_DWORD *)(v69 + 3904);
                    v128 = (unsigned __int16)v127 >> 1;
                    if ( v127 >> 17 < 0x3FFE && v128 == (v127 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 3848));
                      *(_DWORD *)(v126 + 56) &= 0x10001u;
                      goto LABEL_110;
                    }
                    if ( v128 != 0 || (v127 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 3848), 0);
                      goto LABEL_110;
                    }
                  }
                  else
                  {
                    v72 = *(_QWORD *)(v69 + 8);
                    if ( v72 )
                    {
                      v73 = *(_BYTE *)(v69 + 3);
                      if ( v73 )
                      {
                        while ( 1 )
                        {
                          v74 = (_BYTE *)(v72 + 2LL * (unsigned __int8)v71);
                          if ( *v74 == 60 )
                          {
                            v129 = v74[1];
                            if ( v129 )
                              break;
                          }
                          LOBYTE(v71) = v71 + 1;
                          if ( (unsigned __int8)v71 >= v73 )
                            goto LABEL_109;
                        }
                        v74[1] = v129 - 1;
                        goto LABEL_110;
                      }
                    }
LABEL_109:
                    if ( _bittestandreset((signed __int32 *)(v69 + 20), 0x1Cu) )
                      goto LABEL_110;
                  }
                  ndisBugCheckEx(0x1EuLL, 0LL, v69, 0x3CuLL);
                }
LABEL_110:
                v40 = v26->Ref.ReferenceCount-- == 1;
                if ( v40 )
                  v67 = 1;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v167) = v26->Ref.ReferenceCount;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x14u,
                    0xEu,
                    (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
                    (char)v26,
                    v167);
                }
                KeReleaseSpinLock(&v26->Ref.SpinLock, v70);
                if ( v67 )
                {
                  RemoveReadyEvent = v26->RemoveReadyEvent;
                  if ( RemoveReadyEvent )
                    KeSetEvent(RemoveReadyEvent, 0, 0);
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x14u,
                    0x1Au,
                    (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                    v26);
LABEL_117:
                v75 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                v76 = (ULONG_PTR)v1->MpRefCountTracker;
                v77 = v75;
                if ( v76 - 2 > 1 )
                {
                  if ( v76 <= 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v76, 0LL);
                  if ( *(_BYTE *)(v76 + 2) <= 3u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v76, 3uLL);
                  v78 = *(unsigned __int8 *)(v76 + 1);
                  if ( *(_BYTE *)(v76 + 1) )
                  {
                    if ( v78 != 1 )
                      goto LABEL_126;
                    v131 = v76 + 200;
                    v132 = *(_DWORD *)(v76 + 256);
                    v133 = (unsigned __int16)v132 >> 1;
                    if ( v132 >> 17 < 0x3FFE && v133 == (v132 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v76 + 200));
                      *(_DWORD *)(v131 + 56) &= 0x10001u;
                      goto LABEL_126;
                    }
                    if ( v133 != 0 || (v132 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v76 + 200), 0);
                      goto LABEL_126;
                    }
                  }
                  else
                  {
                    v79 = *(_QWORD *)(v76 + 8);
                    if ( v79 )
                    {
                      v80 = *(_BYTE *)(v76 + 3);
                      if ( v80 )
                      {
                        while ( 1 )
                        {
                          v81 = (_BYTE *)(v79 + 2LL * (unsigned __int8)v78);
                          if ( *v81 == 3 )
                          {
                            v134 = v81[1];
                            if ( v134 )
                              break;
                          }
                          LOBYTE(v78) = v78 + 1;
                          if ( (unsigned __int8)v78 >= v80 )
                            goto LABEL_125;
                        }
                        v81[1] = v134 - 1;
                        goto LABEL_126;
                      }
                    }
LABEL_125:
                    if ( _bittestandreset((signed __int32 *)(v76 + 16), 3u) )
                      goto LABEL_126;
                  }
                  ndisBugCheckEx(0x1EuLL, 0LL, v76, 3uLL);
                }
LABEL_126:
                v40 = v1->MiniportLinkReference-- == 1;
                if ( v40 )
                {
                  v135 = v1->Miniport;
                  if ( v135 )
                  {
                    IfBlockPointerRefZeroEvent = v135->IfBlockPointerRefZeroEvent;
                    if ( IfBlockPointerRefZeroEvent )
                      KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
                  }
                }
                KeReleaseSpinLock(&SpinLock, v77);
                v21 = v171;
LABEL_128:
                if ( IfBlock )
                {
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker, 2u);
                  ++IfBlock->Ref;
                }
                goto LABEL_130;
              }
LABEL_194:
              IfBlock = 0LL;
              goto LABEL_117;
            }
          }
        }
        if ( v1->IsNdisFilter )
        {
          IfBlock = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v1->Miniport->Reserved4.Length);
          goto LABEL_128;
        }
LABEL_130:
        LODWORD(Miniport) = v175;
      }
      **((_QWORD **)v3 + 2) = v1->NetLuid.Value;
    }
  }
LABEL_132:
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( (int)Miniport < 0 )
    goto LABEL_140;
  if ( v1 )
  {
    v82 = *((_QWORD *)v3 + 1);
    LODWORD(Miniport) = -1073741811;
    if ( !v82 || v82 == 12 )
    {
      v83 = *((_DWORD *)v3 + 8);
      if ( v83 )
      {
        if ( v83 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation((char)v1, (char)IfBlock, (char)v3);
        }
        else
        {
          if ( v83 != 2 )
            goto LABEL_140;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v1);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation((char)v1, (char)IfBlock, (char)v3);
      }
      goto LABEL_139;
    }
    if ( v82 == 1 || v82 == 13 )
    {
      v137 = *((_DWORD *)v3 + 8);
      if ( v137 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject((char)v1);
LABEL_139:
        LODWORD(Miniport) = InterfaceRodInformation;
        goto LABEL_140;
      }
      if ( v137 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject((char)v1);
        goto LABEL_139;
      }
    }
  }
  else if ( *((_DWORD *)v3 + 14) )
  {
    LODWORD(Miniport) = -2147483622;
  }
  else
  {
    LODWORD(Miniport) = -1073741772;
  }
LABEL_140:
  v85 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !IfBlock )
    goto LABEL_166;
  if ( IfBlock->IsNdisFilter )
  {
    p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
    v87 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
    v88 = *(_QWORD *)(p_DeferredContext + 16);
    v89 = v87;
    if ( v88 - 2 <= 1 )
      goto LABEL_152;
    if ( v88 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v88, 0LL);
    if ( *(_BYTE *)(v88 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v88, 0xBuLL);
    v90 = *(unsigned __int8 *)(v88 + 1);
    if ( *(_BYTE *)(v88 + 1) )
    {
      if ( v90 != 1 )
        goto LABEL_152;
      v138 = v88 + 712;
      v139 = *(_DWORD *)(v88 + 768);
      v140 = (unsigned __int16)v139 >> 1;
      if ( v139 >> 17 < 0x3FFE && v140 == (v139 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v88 + 712));
        *(_DWORD *)(v138 + 56) &= 0x10001u;
        goto LABEL_152;
      }
      if ( v140 != 0 || (v139 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v88 + 712), 0);
        goto LABEL_152;
      }
    }
    else
    {
      v91 = *(_QWORD *)(v88 + 8);
      if ( v91 )
      {
        v92 = *(_BYTE *)(v88 + 3);
        if ( v92 )
        {
          while ( 1 )
          {
            v93 = (_BYTE *)(v91 + 2LL * (unsigned __int8)v90);
            if ( *v93 == 11 )
            {
              v94 = v93[1];
              if ( v94 )
                break;
            }
            LOBYTE(v90) = v90 + 1;
            if ( (unsigned __int8)v90 >= v92 )
              goto LABEL_151;
          }
          v93[1] = v94 - 1;
          goto LABEL_152;
        }
      }
LABEL_151:
      if ( _bittestandreset((signed __int32 *)(v88 + 16), 0xBu) )
      {
LABEL_152:
        v40 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
        if ( v40 && !*(_BYTE *)(p_DeferredContext + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
          *(_QWORD *)(p_DeferredContext + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v89);
        goto LABEL_156;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v88, 0xBuLL);
  }
LABEL_156:
  v95 = (ULONG_PTR)IfBlock->RefCountTracker;
  if ( v95 - 2 <= 1 )
    goto LABEL_165;
  if ( v95 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v95, 0LL);
  if ( *(_BYTE *)(v95 + 2) <= 2u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v95, 2uLL);
  v96 = *(unsigned __int8 *)(v95 + 1);
  if ( *(_BYTE *)(v95 + 1) )
  {
    if ( v96 != 1 )
      goto LABEL_165;
    v141 = v95 + 136;
    v142 = *(_DWORD *)(v95 + 192);
    v143 = (unsigned __int16)v142 >> 1;
    if ( v142 >> 17 < 0x3FFE && v143 == (v142 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v95 + 136));
      *(_DWORD *)(v141 + 56) &= 0x10001u;
      goto LABEL_165;
    }
    if ( v143 != 0 || (v142 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v95 + 136), 0);
      goto LABEL_165;
    }
LABEL_320:
    ndisBugCheckEx(0x1EuLL, 0LL, v95, 2uLL);
  }
  v97 = *(_QWORD *)(v95 + 8);
  if ( !v97 || (v98 = *(_BYTE *)(v95 + 3)) == 0 )
  {
LABEL_164:
    if ( _bittestandreset((signed __int32 *)(v95 + 16), 2u) )
      goto LABEL_165;
    goto LABEL_320;
  }
  while ( 1 )
  {
    v99 = (_BYTE *)(v97 + 2LL * (unsigned __int8)v96);
    if ( *v99 == 2 )
    {
      v108 = v99[1];
      if ( v108 )
        break;
    }
    LOBYTE(v96) = v96 + 1;
    if ( (unsigned __int8)v96 >= v98 )
      goto LABEL_164;
  }
  v99[1] = v108 - 1;
LABEL_165:
  v40 = IfBlock->Ref-- == 1;
  if ( v40 )
  {
    ndisIfDeleteStackEntries(IfBlock);
    v144 = IfBlock->Link.Flink;
    if ( v144->Blink != &IfBlock->Link )
      goto LABEL_356;
    Blink = IfBlock->Link.Blink;
    if ( Blink->Flink != &IfBlock->Link )
      goto LABEL_356;
    Blink->Flink = v144;
    v144->Blink = Blink;
    v146 = IfBlock->ProviderLink.Flink;
    if ( v146->Blink != &IfBlock->ProviderLink )
      goto LABEL_356;
    v147 = IfBlock->ProviderLink.Blink;
    if ( v147->Flink != &IfBlock->ProviderLink )
      goto LABEL_356;
    v147->Flink = v146;
    v146->Blink = v147;
    v148 = IfBlock->NetworkLink.Flink;
    if ( v148->Blink != &IfBlock->NetworkLink )
      goto LABEL_356;
    v149 = IfBlock->NetworkLink.Blink;
    if ( v149->Flink != &IfBlock->NetworkLink )
      goto LABEL_356;
    v149->Flink = v148;
    v148->Blink = v149;
    NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
    ndisIfFreeIfIndex(IfBlock->ifIndex);
    v150 = (ULONG_PTR)IfBlock->RefCountTracker;
    --ndisInterfaceCount;
    NdisFreeRefCount(v150);
    ifL2NetworkInfo = IfBlock->ifL2NetworkInfo;
    IfBlock->RefCountTracker = 0LL;
    if ( ifL2NetworkInfo )
    {
      ExFreePoolWithTag(ifL2NetworkInfo, 0);
      IfBlock->ifL2NetworkInfo = 0LL;
    }
    ifRcvAddressTable = IfBlock->ifRcvAddressTable;
    if ( ifRcvAddressTable )
    {
      ExFreePoolWithTag(ifRcvAddressTable, 0);
      IfBlock->ifRcvAddressTable = 0LL;
      *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
    }
    AsyncEvent = IfBlock->AsyncEvent;
    if ( AsyncEvent )
      KeSetEvent(AsyncEvent, 0, 0);
    ExFreePoolWithTag(IfBlock, 0);
  }
LABEL_166:
  if ( !v1 )
    goto LABEL_177;
  v100 = (ULONG_PTR)v1->RefCountTracker;
  if ( v100 - 2 > 1 )
  {
    if ( v100 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v100, 0LL);
    if ( *(_BYTE *)(v100 + 2) <= 1u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v100, 1uLL);
    v101 = *(unsigned __int8 *)(v100 + 1);
    if ( *(_BYTE *)(v100 + 1) )
    {
      if ( v101 != 1 )
        goto LABEL_176;
      v154 = v100 + 72;
      v155 = *(_DWORD *)(v100 + 128);
      v156 = (unsigned __int16)v155 >> 1;
      if ( v155 >> 17 < 0x3FFE && v156 == (v155 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 72));
        *(_DWORD *)(v154 + 56) &= 0x10001u;
        goto LABEL_176;
      }
      if ( v156 != 0 || (v155 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v100 + 72), 0);
        goto LABEL_176;
      }
    }
    else
    {
      v102 = *(_QWORD *)(v100 + 8);
      if ( v102 )
      {
        v103 = *(_BYTE *)(v100 + 3);
        if ( v103 )
        {
          while ( 1 )
          {
            v104 = (_BYTE *)(v102 + 2LL * (unsigned __int8)v101);
            if ( *v104 == 1 )
            {
              v107 = v104[1];
              if ( v107 )
                break;
            }
            LOBYTE(v101) = v101 + 1;
            if ( (unsigned __int8)v101 >= v103 )
              goto LABEL_175;
          }
          v104[1] = v107 - 1;
          goto LABEL_176;
        }
      }
LABEL_175:
      if ( _bittestandreset((signed __int32 *)(v100 + 16), 1u) )
        goto LABEL_176;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v100, 1uLL);
  }
LABEL_176:
  v40 = v1->Ref-- == 1;
  if ( !v40 )
    goto LABEL_177;
  ndisIfDeleteStackEntries(v1);
  v157 = v1->Link.Flink;
  if ( v157->Blink != &v1->Link )
    goto LABEL_356;
  v158 = v1->Link.Blink;
  if ( v158->Flink != &v1->Link )
    goto LABEL_356;
  v158->Flink = v157;
  v157->Blink = v158;
  v159 = v1->ProviderLink.Flink;
  if ( v159->Blink != &v1->ProviderLink
    || (v160 = v1->ProviderLink.Blink, v160->Flink != &v1->ProviderLink)
    || (v160->Flink = v159, v159->Blink = v160, v161 = v1->NetworkLink.Flink, v161->Blink != &v1->NetworkLink)
    || (v162 = v1->NetworkLink.Blink, v162->Flink != &v1->NetworkLink) )
  {
LABEL_356:
    __fastfail(3u);
  }
  v162->Flink = v161;
  v161->Blink = v162;
  NETWORKBLOCK_DECREMENT_REF(v1->Network);
  ndisIfFreeIfIndex(v1->ifIndex);
  v163 = (ULONG_PTR)v1->RefCountTracker;
  --ndisInterfaceCount;
  NdisFreeRefCount(v163);
  v164 = v1->ifL2NetworkInfo;
  v1->RefCountTracker = 0LL;
  if ( v164 )
  {
    ExFreePoolWithTag(v164, 0);
    v1->ifL2NetworkInfo = 0LL;
  }
  v165 = v1->ifRcvAddressTable;
  if ( v165 )
  {
    ExFreePoolWithTag(v165, 0);
    v1->ifRcvAddressTable = 0LL;
    *(_QWORD *)&v1->ifRcvAddressCount = 0LL;
  }
  v166 = v1->AsyncEvent;
  if ( v166 )
    KeSetEvent(v166, 0, 0);
  ExFreePoolWithTag(v1, 0);
LABEL_177:
  KeReleaseSpinLock(&ndisIfListLock, v85);
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v167) = (_DWORD)Miniport;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v3,
      v167);
  }
  return (unsigned int)Miniport;
}

/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B1080 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
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

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  _LIST_ENTRY *v2; // r13
  _NDIS_IF_BLOCK *IfBlock; // r14
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v4; // rsi
  _LIST_ENTRY **v5; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v7; // rbx
  _DWORD *ThreadProperty; // rax
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // r12d
  unsigned int v12; // edi
  PACCESS_TOKEN v13; // rax
  void *v14; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v16; // edi
  KIRQL v17; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rcx
  KIRQL v19; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // rax
  KIRQL v21; // al
  KIRQL v22; // di
  int v23; // ecx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v25; // rcx
  struct _NDIS_MINIPORT_BLOCK *v26; // rdi
  KIRQL v27; // bl
  _LIST_ENTRY *v28; // rax
  int v29; // r14d
  KIRQL v30; // al
  struct _NDIS_M_DRIVER_BLOCK *v31; // r12
  KIRQL v32; // r15
  _REFERENCE_EX *v33; // r14
  int v34; // ebx
  KIRQL v35; // si
  unsigned __int16 v36; // ax
  struct _NDIS_REFCOUNT_BLOCK *v37; // rcx
  KIRQL v38; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  _LIST_ENTRY *v40; // r14
  _NDIS_BIND_PATHS *v41; // rdx
  _LIST_ENTRY *Blink; // rcx
  bool v43; // zf
  char v44; // r15
  int v45; // edx
  KIRQL v46; // r12
  struct _NDIS_REFCOUNT_BLOCK *v47; // rcx
  unsigned int v48; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v49; // rcx
  unsigned int *p_Number; // rax
  KIRQL v51; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v53; // al
  ULONG_PTR v54; // r8
  KIRQL v55; // r12
  int v56; // ecx
  __int64 v57; // r10
  unsigned __int8 v58; // r9
  _BYTE *v59; // rdx
  char v60; // bl
  __int16 v61; // dx
  _NDIS_FILTER_BLOCK *v62; // rsi
  KIRQL v63; // r12
  unsigned __int16 v64; // ax
  struct _NDIS_REFCOUNT_BLOCK *v65; // rcx
  KIRQL v66; // bl
  ULONG_PTR v67; // r8
  int v68; // ecx
  __int64 v69; // r9
  unsigned __int8 v70; // dl
  _BYTE *v71; // r10
  struct _KEVENT *v72; // rcx
  __int16 v73; // dx
  char v74; // r15
  KIRQL v75; // al
  _BYTE *v76; // rdx
  ULONG_PTR v77; // r8
  KIRQL v78; // r12
  int v79; // ecx
  __int64 v80; // r10
  unsigned __int8 v81; // r9
  __int16 v82; // dx
  int v83; // r12d
  __int64 v84; // rax
  KIRQL v85; // r15
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
  __int64 v97; // r10
  unsigned __int8 v98; // r9
  _BYTE *v99; // rdx
  ULONG_PTR v100; // r8
  int v101; // ecx
  __int64 v102; // r10
  unsigned __int8 v103; // r9
  _BYTE *v104; // rdx
  int v105; // edx
  char v107; // al
  char v108; // al
  struct _NDIS_MINIPORT_BLOCK *v109; // rsi
  unsigned int v110; // r12d
  KIRQL v111; // r15
  struct _NDIS_M_DRIVER_BLOCK *v112; // rax
  _REFERENCE_EX *p_Ref; // r13
  int v114; // ebx
  KIRQL v115; // r14
  unsigned __int16 ReferenceCount; // cx
  KIRQL v117; // al
  __int64 v118; // r14
  __int64 v119; // rbx
  __int64 v120; // rdx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  char v122; // r15
  int v123; // edx
  KIRQL v124; // r12
  struct _NDIS_REFCOUNT_BLOCK *v125; // rcx
  int v126; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v127; // rcx
  unsigned int *v128; // rax
  KIRQL v129; // al
  struct _NDIS_M_DRIVER_BLOCK *v130; // r14
  KIRQL v131; // r12
  char v132; // bl
  __int16 v133; // dx
  _NDIS_FILTER_BLOCK *HighestFilter; // r14
  int v135; // r15d
  KIRQL v136; // r12
  unsigned __int16 v137; // cx
  char v138; // r15
  KIRQL v139; // bl
  ULONG_PTR NsiRefCountTracker; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v142; // dx
  KIRQL v143; // al
  _BYTE *v144; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v146; // r12
  int v147; // ecx
  __int64 v148; // r10
  unsigned __int8 v149; // r9
  __int16 v150; // dx
  KIRQL v151; // bl
  char v152; // al
  _LIST_ENTRY *v153; // rax
  _LIST_ENTRY *v154; // rcx
  NTSTATUS v155; // edi
  unsigned int ThreadSessionId; // eax
  KIRQL v157; // r8
  unsigned __int64 v158; // rdx
  unsigned __int64 v159; // r8
  __int64 v160; // r13
  struct _NDIS_M_DRIVER_BLOCK *v161; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  void *v163; // rcx
  void *v164; // rcx
  _QWORD *v165; // rcx
  _QWORD *v166; // rbx
  __int16 v167; // dx
  ULONG_PTR v168; // rdi
  unsigned int v169; // edx
  int v170; // ecx
  char v171; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  _LIST_ENTRY *v173; // rax
  struct _KEVENT *v174; // rcx
  ULONG_PTR v175; // rbx
  unsigned int v176; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v177; // r14
  struct _NDIS_M_DRIVER_BLOCK *v178; // rax
  struct _NDIS_M_DRIVER_BLOCK **v179; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int16 v184; // dx
  ULONG_PTR v185; // rsi
  unsigned int v186; // edx
  int v187; // ecx
  char v188; // al
  ULONG_PTR v189; // rsi
  unsigned int v190; // edx
  int v191; // ecx
  char v192; // al
  struct _KEVENT *v193; // rcx
  ULONG_PTR v194; // rsi
  unsigned int v195; // edx
  int v196; // ecx
  ULONG_PTR v197; // rbx
  unsigned int v198; // edx
  int v199; // ecx
  _LIST_ENTRY *v200; // rdx
  _LIST_ENTRY *v201; // rcx
  _LIST_ENTRY *v202; // rdx
  _LIST_ENTRY *v203; // rcx
  _LIST_ENTRY *v204; // rdx
  _LIST_ENTRY *v205; // rcx
  ULONG_PTR v206; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v210; // rbx
  unsigned int v211; // edx
  int v212; // ecx
  _LIST_ENTRY *v213; // rdx
  _LIST_ENTRY *v214; // rcx
  _LIST_ENTRY *v215; // rdx
  _LIST_ENTRY *v216; // rcx
  _LIST_ENTRY *v217; // rdx
  _LIST_ENTRY *v218; // rcx
  ULONG_PTR v219; // rcx
  _LIST_ENTRY *v220; // rcx
  _LIST_ENTRY *v221; // rcx
  struct _KEVENT *v222; // rcx
  KIRQL v223; // [rsp+40h] [rbp-C0h]
  KIRQL v224; // [rsp+40h] [rbp-C0h]
  unsigned int v225; // [rsp+44h] [rbp-BCh]
  int v226; // [rsp+44h] [rbp-BCh]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-B8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+49h] [rbp-B7h] BYREF
  KIRQL v229; // [rsp+4Ah] [rbp-B6h]
  char v230[8]; // [rsp+50h] [rbp-B0h]
  char v231[4]; // [rsp+58h] [rbp-A8h]
  struct _NDIS_MINIPORT_BLOCK *v232; // [rsp+60h] [rbp-A0h]
  _LIST_ENTRY *v233; // [rsp+68h] [rbp-98h]
  char v234[8]; // [rsp+70h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-88h] BYREF
  _LIST_ENTRY *v236; // [rsp+80h] [rbp-80h]
  char v237[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v238; // [rsp+A0h] [rbp-60h]
  __int128 v239; // [rsp+B0h] [rbp-50h]
  __int128 v240; // [rsp+C0h] [rbp-40h]
  PVOID TokenInformation; // [rsp+D0h] [rbp-30h] BYREF
  _REFERENCE_EX *v242; // [rsp+D8h] [rbp-28h]
  __int64 v243; // [rsp+E0h] [rbp-20h]
  __int128 v244; // [rsp+E8h] [rbp-18h]

  v2 = 0LL;
  *(_QWORD *)v234 = a1;
  IfBlock = 0LL;
  *(_DWORD *)v231 = 0;
  v4 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      26,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)a1);
  }
  *(_OWORD *)v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v4 + 6) != 8 )
  {
    v83 = -1073741808;
    goto LABEL_122;
  }
  v5 = (_LIST_ENTRY **)*((_QWORD *)v4 + 2);
  CurrentThread = KeGetCurrentThread();
  v7 = *v5;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v11 = ThreadProperty[1];
    HIDWORD(v243) = *ThreadProperty;
    v10 = HIDWORD(v243);
    LODWORD(v243) = v11;
    ObfDereferenceObject(ThreadProperty);
    v12 = HIDWORD(v243);
  }
  else
  {
    v10 = 0;
    v11 = 0;
    v243 = 0LL;
    v12 = 0;
  }
  if ( !v12 )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    }
    else
    {
      v13 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v14 = v13;
      if ( v13 )
      {
        v155 = SeQueryInformationToken(v13, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v14);
        if ( v155 >= 0 )
        {
          v16 = (unsigned int)TokenInformation;
          goto LABEL_11;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v16 = CurrentProcessSessionId;
LABEL_11:
    if ( v16 == -1 )
    {
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
      v11 = v243;
      v16 = ThreadSessionId;
    }
    if ( v16 < dword_1C00E6190 )
    {
      v10 = 0;
      v157 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
      if ( v16 < dword_1C00E6190 )
        v10 = *((_DWORD *)P + 6 * v16);
      KeReleaseSpinLock(&qword_1C00E4B20, v157);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    HIDWORD(v243) = v10;
    v12 = v10;
  }
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = 0LL;
  v19 = v17;
  v20 = qword_1C00E4B30;
  if ( qword_1C00E4B30 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
  {
    while ( *((_DWORD *)v20 + 4) != v12 )
    {
      if ( *((_DWORD *)v20 + 4) <= v12 )
      {
        v20 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v20;
        if ( v20 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B30 )
          continue;
      }
      goto LABEL_19;
    }
    v18 = v20;
  }
LABEL_19:
  v244 = *(_OWORD *)((char *)v18 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v19);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v4 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v234;
  v22 = v21;
  v229 = v21;
  v23 = *(_DWORD *)(*(_QWORD *)v234 + 32LL);
  if ( v23 == 2 )
    goto LABEL_20;
  if ( v23 )
  {
    if ( v23 != 1 )
    {
      v83 = -1073741811;
      goto LABEL_117;
    }
    v7 = 0LL;
    while ( 1 )
    {
LABEL_20:
      Flink = ndisIfList.Flink;
      v2 = 0LL;
      v233 = 0LL;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( Flink[5].Flink <= v7 )
        {
          Flink = Flink->Flink;
          if ( Flink == &ndisIfList )
            goto LABEL_25;
        }
        v2 = Flink - 77;
        v233 = Flink - 77;
      }
LABEL_25:
      if ( !v2 )
        break;
      v25 = v2[86].Flink;
      v7 = v2[82].Flink;
      if ( v10 == LODWORD(v25[1].Flink) )
        goto LABEL_27;
      if ( v11 == -1 )
      {
        v159 = v244 - *(unsigned __int64 *)((char *)&v25[105].Flink + 4);
        if ( (_LIST_ENTRY *)v244 == *(_LIST_ENTRY **)((char *)&v25[105].Flink + 4) )
          v159 = *((_QWORD *)&v244 + 1) - *(unsigned __int64 *)((char *)&v25[105].Blink + 4);
        if ( !v159 )
          goto LABEL_27;
      }
      if ( ((__int64)v25[105].Flink & 2) == 0 && v10 == 1 )
        goto LABEL_27;
    }
LABEL_244:
    v83 = 0;
    goto LABEL_117;
  }
  v153 = ndisIfList.Flink;
  v233 = 0LL;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( v153[5].Flink != v7 )
    {
      if ( v153[5].Flink <= v7 )
      {
        v153 = v153->Flink;
        if ( v153 != &ndisIfList )
          continue;
      }
      goto LABEL_239;
    }
    v2 = v153 - 77;
    v233 = v153 - 77;
  }
LABEL_239:
  if ( !v2 )
    goto LABEL_244;
  v154 = v2[86].Flink;
  if ( v10 != LODWORD(v154[1].Flink) )
  {
    v158 = v244 - *(unsigned __int64 *)((char *)&v154[105].Flink + 4);
    if ( (_LIST_ENTRY *)v244 == *(_LIST_ENTRY **)((char *)&v154[105].Flink + 4) )
      v158 = *((_QWORD *)&v244 + 1) - *(unsigned __int64 *)((char *)&v154[105].Blink + 4);
    if ( v158 && (((__int64)v154[105].Flink & 2) != 0 || v10 != 1) )
    {
      v2 = 0LL;
      v83 = 0;
      goto LABEL_117;
    }
  }
LABEL_27:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2[89].Blink);
  ++LODWORD(v2[81].Blink);
  if ( !BYTE1(v2[87].Flink) || *((_QWORD *)v4 + 1) >= 2uLL )
    goto LABEL_116;
  v26 = 0LL;
  v27 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( BYTE3(v2[87].Flink) )
  {
    v26 = (struct _NDIS_MINIPORT_BLOCK *)v2[88].Flink;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2[90].Flink);
    ++HIDWORD(v2[87].Flink);
  }
  KeReleaseSpinLock(&SpinLock, v27);
  if ( v26 )
  {
    v109 = 0LL;
    v110 = 1;
    v232 = 0LL;
    v226 = 1;
    if ( !v26->BindPaths )
      goto LABEL_253;
    v111 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v112 = ndisMiniDriverList;
    *(_QWORD *)v230 = ndisMiniDriverList;
    if ( !ndisMiniDriverList )
      goto LABEL_199;
    while ( 1 )
    {
      p_Ref = &v112->Ref;
      v114 = 1;
      v115 = KeAcquireSpinLockRaiseToDpc(&v112->Ref.SpinLock);
      if ( !p_Ref->Closing )
      {
        ReferenceCount = p_Ref->ReferenceCount;
        if ( ReferenceCount >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v114 = 2;
        }
        else
        {
          p_Ref->ReferenceCount = ReferenceCount + 1;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_Ref->RefCountTracker);
          v114 = 0;
        }
      }
      KeReleaseSpinLock(&p_Ref->SpinLock, v115);
      if ( v114 )
      {
        v130 = *(struct _NDIS_M_DRIVER_BLOCK **)(*(_QWORD *)v230 + 8LL);
        goto LABEL_197;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v111);
      v117 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
      v118 = *(_QWORD *)v230;
      v224 = v117;
      v119 = *(_QWORD *)(*(_QWORD *)v230 + 16LL);
      if ( !v119 )
        goto LABEL_193;
      do
      {
        v120 = *(_QWORD *)(v119 + 3768);
        if ( !v120 )
          goto LABEL_191;
        if ( *(_DWORD *)v120 < v110 )
          goto LABEL_191;
        BindPaths = v26->BindPaths;
        if ( BindPaths->Paths[0].Length != *(_WORD *)(v120 + 8)
          || memcmp(BindPaths->Paths[0].Buffer, *(const void **)(v120 + 16), BindPaths->Paths[0].Length) )
        {
          goto LABEL_191;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v119 + 96));
        v43 = (*(_DWORD *)(v119 + 120) & 0x80200020) == 0;
        *(_QWORD *)(v119 + 520) = KeGetCurrentThread();
        if ( v43
          && (*(_DWORD *)(v119 + 124) & 0x1084110) == 0
          && *(_DWORD *)(v119 + 1520) == 1
          && *(_DWORD *)(v119 + 3868) == 1 )
        {
          v122 = 1;
          v124 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v119 + 4432));
          if ( !*(_BYTE *)(v119 + 4444) )
          {
            v125 = *(struct _NDIS_REFCOUNT_BLOCK **)(v119 + 4888);
            if ( v125 )
              NdisReferenceWithTag(v125);
            v126 = *(_DWORD *)(v119 + 4440);
            *(_DWORD *)(v119 + 4440) = v126 + 1;
            if ( v126 != -1 )
              goto LABEL_185;
            *(_DWORD *)(v119 + 4440) = -1;
          }
          v122 = 0;
LABEL_185:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v123) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v123,
              20,
              12,
              (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
              v119,
              *(_DWORD *)(v119 + 4440));
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v119 + 4432), v124);
          if ( v122 )
          {
            v127 = *(struct _NDIS_REFCOUNT_BLOCK **)(v119 + 4896);
            v232 = v109;
            NdisReferenceWithTag(v127);
            v128 = *(unsigned int **)(v119 + 3768);
            v109 = (struct _NDIS_MINIPORT_BLOCK *)v119;
            ++*(_DWORD *)(v119 + 3124);
            v110 = *v128;
            v226 = *v128;
          }
          else
          {
            v110 = v226;
          }
        }
        *(_QWORD *)(v119 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v119 + 96));
        if ( v232 )
        {
          ndisDereferenceMiniportForNsi(v232, NSIREF_IFTOP, MPREF_IF_FINDTOP);
          v232 = 0LL;
        }
LABEL_191:
        v119 = *(_QWORD *)(v119 + 8);
      }
      while ( v119 );
      v118 = *(_QWORD *)v230;
      v117 = v224;
LABEL_193:
      KeReleaseSpinLock(&p_Ref->SpinLock, v117);
      v129 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v130 = *(struct _NDIS_M_DRIVER_BLOCK **)(v118 + 8);
      v111 = v129;
      v131 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
      NdisDereferenceWithTag((ULONG_PTR)p_Ref->RefCountTracker);
      v43 = p_Ref->ReferenceCount-- == 1;
      if ( v43 )
      {
        v132 = 1;
        if ( !p_Ref->ZeroBased )
        {
          NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
          p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
      }
      else
      {
        v132 = 0;
      }
      KeReleaseSpinLock(&p_Ref->SpinLock, v131);
      if ( v132 )
      {
        v160 = *(_QWORD *)v230;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v133) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v133,
            20,
            23,
            (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
            v230[0]);
        }
        v161 = ndisMiniDriverList;
        p_NextDriver = &ndisMiniDriverList;
        if ( ndisMiniDriverList )
        {
          while ( v161 != (struct _NDIS_M_DRIVER_BLOCK *)v160 )
          {
            p_NextDriver = &v161->NextDriver;
            v161 = v161->NextDriver;
            if ( !v161 )
              goto LABEL_292;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v160 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_292:
        v163 = *(void **)(v160 + 888);
        if ( v163 )
        {
          ExFreePoolWithTag(v163, 0);
          *(_QWORD *)(v160 + 888) = 0LL;
        }
        v164 = *(void **)(v160 + 32);
        if ( v164 )
        {
          ExFreePoolWithTag(v164, 0);
          *(_QWORD *)(v160 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v160 + 26) & 1) != 0 )
        {
          v165 = *(_QWORD **)(v160 + 96);
          if ( v165 )
          {
            do
            {
              v166 = (_QWORD *)*v165;
              ExFreePoolWithTag(v165, 0);
              v165 = v166;
            }
            while ( v166 );
          }
        }
        KeSetEvent((PRKEVENT)(v160 + 368), 0, 0);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v167) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v167,
            20,
            24,
            (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
            v160);
        }
      }
      v110 = v226;
LABEL_197:
      v112 = v130;
      *(_QWORD *)v230 = v130;
      if ( !v130 )
      {
        v2 = v233;
LABEL_199:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v111);
        if ( v109 )
        {
          KeAcquireSpinLockAtDpcLevel(&v109->Lock);
          HighestFilter = v109->HighestFilter;
          v109->MiniportThread = KeGetCurrentThread();
          if ( HighestFilter )
          {
            while ( 1 )
            {
              v135 = 1;
              v136 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
              if ( !HighestFilter->PnPRef.Closing )
              {
                v137 = HighestFilter->PnPRef.ReferenceCount;
                if ( v137 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v135 = 2;
                }
                else
                {
                  HighestFilter->PnPRef.ReferenceCount = v137 + 1;
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker);
                  v135 = 0;
                }
              }
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v136);
              if ( !v135 )
                break;
              HighestFilter = HighestFilter->LowerFilter;
              if ( !HighestFilter )
                goto LABEL_304;
            }
            IfBlock = HighestFilter->IfBlock;
          }
          else
          {
LABEL_304:
            IfBlock = v109->IfBlock;
          }
          v138 = 0;
          v109->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v109->Lock);
          v139 = KeAcquireSpinLockRaiseToDpc(&v109->Lock);
          NsiRefCountTracker = (ULONG_PTR)v109->NsiRefCountTracker;
          v109->MiniportThread = KeGetCurrentThread();
          NdisDereferenceWithTag(NsiRefCountTracker);
          v43 = v109->NsiOpenReferences-- == 1;
          if ( v43 )
          {
            NsiRequestsCompletedEvent = v109->NsiRequestsCompletedEvent;
            if ( NsiRequestsCompletedEvent )
              KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
          }
          v109->MiniportThread = 0LL;
          KeReleaseSpinLock(&v109->Lock, v139);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v142) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v142,
              20,
              25,
              (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
              (char)v109);
          }
          v143 = KeAcquireSpinLockRaiseToDpc(&v109->Ref.SpinLock);
          RefCountTracker = (ULONG_PTR)v109->RefCountTracker;
          v146 = v143;
          if ( RefCountTracker && RefCountTracker - 2 > 1 )
          {
            if ( RefCountTracker == 1 )
              goto LABEL_366;
            if ( *(_BYTE *)(RefCountTracker + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x3CuLL);
            v147 = *(unsigned __int8 *)(RefCountTracker + 1);
            if ( *(_BYTE *)(RefCountTracker + 1) )
            {
              if ( v147 != 1 )
                goto LABEL_221;
              v168 = RefCountTracker + 3848;
              v169 = *(_DWORD *)(RefCountTracker + 3904);
              v170 = (unsigned __int16)v169 >> 1;
              if ( v169 >> 17 < 0x3FFE && v170 == (v169 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 3848));
                *(_DWORD *)(v168 + 56) &= 0x10001u;
                goto LABEL_221;
              }
              if ( v170 != 0 || (v169 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 3848), 0);
                goto LABEL_221;
              }
            }
            else
            {
              v148 = *(_QWORD *)(RefCountTracker + 8);
              if ( v148 )
              {
                v149 = *(_BYTE *)(RefCountTracker + 3);
                if ( v149 )
                {
                  while ( 1 )
                  {
                    v144 = (_BYTE *)(v148 + 2LL * (unsigned __int8)v147);
                    if ( *v144 == 60 )
                    {
                      v171 = v144[1];
                      if ( v171 )
                        break;
                    }
                    LOBYTE(v147) = v147 + 1;
                    if ( (unsigned __int8)v147 >= v149 )
                      goto LABEL_220;
                  }
                  v144[1] = v171 - 1;
                  goto LABEL_221;
                }
              }
LABEL_220:
              if ( _bittestandreset((signed __int32 *)(RefCountTracker + 20), 0x1Cu) )
                goto LABEL_221;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x3CuLL);
          }
LABEL_221:
          v43 = v109->Ref.ReferenceCount-- == 1;
          if ( v43 )
            v138 = 1;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v144) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v144,
              20,
              14,
              (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
              (char)v109,
              v109->Ref.ReferenceCount);
          }
          KeReleaseSpinLock(&v109->Ref.SpinLock, v146);
          if ( v138 )
          {
            RemoveReadyEvent = v109->RemoveReadyEvent;
            if ( RemoveReadyEvent )
              KeSetEvent(RemoveReadyEvent, 0, 0);
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v150) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v150,
              20,
              26,
              (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
              (char)v109);
          }
LABEL_228:
          v151 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
          NdisDereferenceWithTag((ULONG_PTR)v2[90].Flink);
          v43 = HIDWORD(v2[87].Flink)-- == 1;
          if ( v43 )
          {
            v173 = v2[88].Flink;
            if ( v173 )
            {
              v174 = (struct _KEVENT *)v173[253].Flink;
              if ( v174 )
                KeSetEvent(v174, 0, 0);
            }
          }
          KeReleaseSpinLock(&SpinLock, v151);
          goto LABEL_113;
        }
LABEL_253:
        IfBlock = 0LL;
        goto LABEL_228;
      }
    }
  }
  if ( !BYTE2(v2[87].Flink) )
    goto LABEL_115;
  v28 = v2[88].Flink;
  v29 = 1;
  v232 = 0LL;
  v225 = 1;
  v236 = v28[2].Flink;
  if ( !v236[235].Blink )
    goto LABEL_254;
  v30 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v31 = ndisMiniDriverList;
  v32 = v30;
  *(_QWORD *)v230 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_75;
  do
  {
    v33 = &v31->Ref;
    v242 = &v31->Ref;
    v34 = 1;
    v35 = KeAcquireSpinLockRaiseToDpc(&v31->Ref.SpinLock);
    if ( !v31->Ref.Closing )
    {
      v36 = v31->Ref.ReferenceCount;
      if ( v36 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v34 = 2;
      }
      else
      {
        v37 = (struct _NDIS_REFCOUNT_BLOCK *)v31->Ref.RefCountTracker;
        v31->Ref.ReferenceCount = v36 + 1;
        NdisReferenceWithTag(v37);
        v34 = 0;
      }
    }
    KeReleaseSpinLock(&v31->Ref.SpinLock, v35);
    if ( v34 )
    {
      NextDriver = v31->NextDriver;
      goto LABEL_73;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
    v38 = KeAcquireSpinLockRaiseToDpc(&v31->Ref.SpinLock);
    MiniportQueue = v31->MiniportQueue;
    v223 = v38;
    if ( !MiniportQueue )
      goto LABEL_61;
    v40 = v236;
    do
    {
      v41 = MiniportQueue->BindPaths;
      if ( !v41 )
        goto LABEL_59;
      if ( v41->Number < v225 )
        goto LABEL_59;
      Blink = v40[235].Blink;
      if ( LOWORD(Blink->Blink) != v41->Paths[0].Length
        || memcmp(Blink[1].Flink, v41->Paths[0].Buffer, LOWORD(Blink->Blink)) )
      {
        goto LABEL_59;
      }
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      v43 = (MiniportQueue->Flags & 0x80200020) == 0;
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      if ( v43
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
      {
        v44 = 1;
        v46 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v47 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v47 )
            NdisReferenceWithTag(v47);
          v48 = MiniportQueue->Ref.ReferenceCount;
          MiniportQueue->Ref.ReferenceCount = v48 + 1;
          if ( v48 != -1 )
            goto LABEL_53;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v44 = 0;
LABEL_53:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v45) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v45,
            20,
            12,
            (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
            (char)MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        }
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v46);
        if ( v44 )
        {
          v49 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
          v232 = v26;
          NdisReferenceWithTag(v49);
          p_Number = &MiniportQueue->BindPaths->Number;
          v26 = MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v225 = *p_Number;
        }
      }
      MiniportQueue->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v232 )
      {
        ndisDereferenceMiniportForNsi(v232, NSIREF_IFTOP, MPREF_IF_FINDTOP);
        v232 = 0LL;
      }
LABEL_59:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    v33 = v242;
    v38 = v223;
    v31 = *(struct _NDIS_M_DRIVER_BLOCK **)v230;
LABEL_61:
    KeReleaseSpinLock(&v33->SpinLock, v38);
    v51 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v31->NextDriver;
    v32 = v51;
    v53 = KeAcquireSpinLockRaiseToDpc(&v33->SpinLock);
    v54 = (ULONG_PTR)v33->RefCountTracker;
    v55 = v53;
    if ( v54 - 2 > 1 )
    {
      if ( v54 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v54, 0LL);
      if ( *(_BYTE *)(v54 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v54, 8uLL);
      v56 = *(unsigned __int8 *)(v54 + 1);
      if ( *(_BYTE *)(v54 + 1) )
      {
        if ( v56 != 1 )
          goto LABEL_70;
        v175 = v54 + 520;
        v176 = *(_DWORD *)(v54 + 576);
        if ( v176 >> 17 < 0x3FFE && (unsigned __int16)v176 >> 1 == (v176 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 520));
          *(_DWORD *)(v175 + 56) &= 0x10001u;
          goto LABEL_70;
        }
        if ( (unsigned __int16)v176 >> 1 != 0 || (v176 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v54 + 520), 0);
          goto LABEL_70;
        }
      }
      else
      {
        v57 = *(_QWORD *)(v54 + 8);
        if ( v57 )
        {
          v58 = *(_BYTE *)(v54 + 3);
          if ( v58 )
          {
            while ( 1 )
            {
              v59 = (_BYTE *)(v57 + 2LL * (unsigned __int8)v56);
              if ( *v59 == 8 )
              {
                v152 = v59[1];
                if ( v152 )
                  break;
              }
              LOBYTE(v56) = v56 + 1;
              if ( (unsigned __int8)v56 >= v58 )
                goto LABEL_69;
            }
            v59[1] = v152 - 1;
            goto LABEL_70;
          }
        }
LABEL_69:
        if ( _bittestandreset((signed __int32 *)(v54 + 16), 8u) )
          goto LABEL_70;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v54, 8uLL);
    }
LABEL_70:
    v43 = v33->ReferenceCount-- == 1;
    if ( v43 )
    {
      v60 = 1;
      if ( !v33->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v33->RefCountTracker);
        v33->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v60 = 0;
    }
    KeReleaseSpinLock(&v33->SpinLock, v55);
    if ( v60 )
    {
      v177 = *(struct _NDIS_M_DRIVER_BLOCK **)v230;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v61) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v61,
          20,
          23,
          (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
          v230[0]);
      }
      v178 = ndisMiniDriverList;
      v179 = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v178 != v177 )
        {
          v179 = &v178->NextDriver;
          v178 = v178->NextDriver;
          if ( !v178 )
            goto LABEL_338;
        }
        *v179 = v177->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_338:
      Buffer = v177->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v177->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v177->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v177->NdisDriverInfo = 0LL;
      }
      if ( (v177->Flags & 1) != 0 )
      {
        PendingDeviceList = v177->PendingDeviceList;
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
      KeSetEvent(&v177->MiniportsRemovedEvent, 0, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v184) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v184,
          20,
          24,
          (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
          (char)v177);
      }
    }
LABEL_73:
    *(_QWORD *)v230 = NextDriver;
    v31 = NextDriver;
  }
  while ( NextDriver );
  v2 = v233;
  v29 = 1;
LABEL_75:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
  if ( !v26 )
  {
LABEL_254:
    IfBlock = 0LL;
    goto LABEL_115;
  }
  KeAcquireSpinLockAtDpcLevel(&v26->Lock);
  v62 = v26->HighestFilter;
  v26->MiniportThread = KeGetCurrentThread();
  if ( v62 )
  {
    while ( 1 )
    {
      v63 = KeAcquireSpinLockRaiseToDpc(&v62->PnPRef.SpinLock);
      if ( !v62->PnPRef.Closing )
      {
        v64 = v62->PnPRef.ReferenceCount;
        if ( v64 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v29 = 2;
        }
        else
        {
          v65 = (struct _NDIS_REFCOUNT_BLOCK *)v62->PnPRef.RefCountTracker;
          v62->PnPRef.ReferenceCount = v64 + 1;
          NdisReferenceWithTag(v65);
          v29 = 0;
        }
      }
      KeReleaseSpinLock(&v62->PnPRef.SpinLock, v63);
      if ( !v29 )
        break;
      v62 = v62->LowerFilter;
      if ( !v62 )
        goto LABEL_354;
      v29 = 1;
    }
    IfBlock = v62->IfBlock;
  }
  else
  {
LABEL_354:
    IfBlock = v26->IfBlock;
  }
  v26->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v26->Lock);
  v66 = KeAcquireSpinLockRaiseToDpc(&v26->Lock);
  v67 = (ULONG_PTR)v26->NsiRefCountTracker;
  v26->MiniportThread = KeGetCurrentThread();
  if ( v67 - 2 > 1 )
  {
    if ( v67 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v67, 0LL);
    if ( *(_BYTE *)(v67 + 2) <= 2u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v67, 2uLL);
    v68 = *(unsigned __int8 *)(v67 + 1);
    if ( *(_BYTE *)(v67 + 1) )
    {
      if ( v68 != 1 )
        goto LABEL_91;
      v185 = v67 + 136;
      v186 = *(_DWORD *)(v67 + 192);
      v187 = (unsigned __int16)v186 >> 1;
      if ( v186 >> 17 < 0x3FFE && v187 == (v186 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v67 + 136));
        *(_DWORD *)(v185 + 56) &= 0x10001u;
        goto LABEL_91;
      }
      if ( v187 != 0 || (v186 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v67 + 136), 0);
        goto LABEL_91;
      }
    }
    else
    {
      v69 = *(_QWORD *)(v67 + 8);
      if ( v69 )
      {
        v70 = *(_BYTE *)(v67 + 3);
        if ( v70 )
        {
          while ( 1 )
          {
            v71 = (_BYTE *)(v69 + 2LL * (unsigned __int8)v68);
            if ( *v71 == 2 )
            {
              v188 = v71[1];
              if ( v188 )
                break;
            }
            LOBYTE(v68) = v68 + 1;
            if ( (unsigned __int8)v68 >= v70 )
              goto LABEL_90;
          }
          v71[1] = v188 - 1;
          goto LABEL_91;
        }
      }
LABEL_90:
      if ( _bittestandreset((signed __int32 *)(v67 + 16), 2u) )
        goto LABEL_91;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v67, 2uLL);
  }
LABEL_91:
  v43 = v26->NsiOpenReferences-- == 1;
  if ( v43 )
  {
    v72 = v26->NsiRequestsCompletedEvent;
    if ( v72 )
      KeSetEvent(v72, 0, 0);
  }
  v26->MiniportThread = 0LL;
  KeReleaseSpinLock(&v26->Lock, v66);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v73) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v73,
      20,
      25,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)v26);
  }
  v74 = 0;
  v75 = KeAcquireSpinLockRaiseToDpc(&v26->Ref.SpinLock);
  v77 = (ULONG_PTR)v26->RefCountTracker;
  v78 = v75;
  if ( v77 && v77 - 2 > 1 )
  {
    if ( v77 != 1 )
    {
      if ( *(_BYTE *)(v77 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v77, 0x3CuLL);
      v79 = *(unsigned __int8 *)(v77 + 1);
      if ( *(_BYTE *)(v77 + 1) )
      {
        if ( v79 != 1 )
          goto LABEL_106;
        v189 = v77 + 3848;
        v190 = *(_DWORD *)(v77 + 3904);
        v191 = (unsigned __int16)v190 >> 1;
        if ( v190 >> 17 < 0x3FFE && v191 == (v190 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v77 + 3848));
          *(_DWORD *)(v189 + 56) &= 0x10001u;
          goto LABEL_106;
        }
        if ( v191 != 0 || (v190 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v77 + 3848), 0);
          goto LABEL_106;
        }
      }
      else
      {
        v80 = *(_QWORD *)(v77 + 8);
        if ( v80 )
        {
          v81 = *(_BYTE *)(v77 + 3);
          if ( v81 )
          {
            while ( 1 )
            {
              v76 = (_BYTE *)(v80 + 2LL * (unsigned __int8)v79);
              if ( *v76 == 60 )
              {
                v192 = v76[1];
                if ( v192 )
                  break;
              }
              LOBYTE(v79) = v79 + 1;
              if ( (unsigned __int8)v79 >= v81 )
                goto LABEL_105;
            }
            v76[1] = v192 - 1;
            goto LABEL_106;
          }
        }
LABEL_105:
        if ( _bittestandreset((signed __int32 *)(v77 + 20), 0x1Cu) )
          goto LABEL_106;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v77, 0x3CuLL);
    }
LABEL_366:
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  }
LABEL_106:
  v43 = v26->Ref.ReferenceCount-- == 1;
  if ( v43 )
    v74 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v76) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v76,
      20,
      14,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)v26,
      v26->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v26->Ref.SpinLock, v78);
  if ( v74 )
  {
    v193 = v26->RemoveReadyEvent;
    if ( v193 )
      KeSetEvent(v193, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v82) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v82,
      20,
      26,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)v26);
  }
LABEL_113:
  if ( IfBlock )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker);
    ++IfBlock->Ref;
  }
LABEL_115:
  v4 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v234;
  v22 = v229;
LABEL_116:
  v83 = *(_DWORD *)v231;
  **((_QWORD **)v4 + 2) = v2[82].Flink;
LABEL_117:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v83 >= 0 )
  {
    if ( v2 )
    {
      v84 = *((_QWORD *)v4 + 1);
      switch ( v84 )
      {
        case 0LL:
          goto LABEL_120;
        case 1LL:
LABEL_250:
          LODWORD(v239) = 1;
          *((_QWORD *)&v239 + 1) = *((_QWORD *)v4 + 7);
          LODWORD(v240) = *((_DWORD *)v4 + 16);
          ndisNsiGetInterfaceRodEnumObject((char)v2);
          *((_DWORD *)v4 + 16) = v240;
          *((_QWORD *)&v239 + 1) = *((_QWORD *)v4 + 9);
          LODWORD(v240) = *((_DWORD *)v4 + 20);
          LODWORD(v239) = 2;
          ndisNsiGetInterfaceRosEnumObject((char)v2);
LABEL_121:
          *((_DWORD *)v4 + 20) = v240;
          break;
        case 12LL:
LABEL_120:
          *((_QWORD *)&v239 + 1) = *((_QWORD *)v4 + 5);
          LODWORD(v240) = *((_DWORD *)v4 + 12);
          ndisNsiGetInterfaceRwInformation((char)v2, (char)IfBlock, (char)v237);
          *((_DWORD *)v4 + 12) = v240;
          LODWORD(v239) = 1;
          *((_QWORD *)&v239 + 1) = *((_QWORD *)v4 + 7);
          LODWORD(v240) = *((_DWORD *)v4 + 16);
          ndisNsiGetInterfaceRodInformation((char)v2, (char)IfBlock, (char)v237);
          *((_DWORD *)v4 + 16) = v240;
          *((_QWORD *)&v239 + 1) = *((_QWORD *)v4 + 9);
          LODWORD(v240) = *((_DWORD *)v4 + 20);
          LODWORD(v239) = 2;
          ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)v2);
          goto LABEL_121;
        case 13LL:
          goto LABEL_250;
        default:
          v83 = -1073741811;
          break;
      }
    }
    else if ( *((_DWORD *)v4 + 8) )
    {
      v83 = -2147483622;
    }
    else
    {
      v83 = -1073741772;
    }
  }
LABEL_122:
  v85 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !IfBlock )
    goto LABEL_148;
  if ( !IfBlock->IsNdisFilter )
    goto LABEL_138;
  p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
  v87 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
  v88 = *(_QWORD *)(p_DeferredContext + 16);
  v89 = v87;
  if ( v88 - 2 <= 1 )
    goto LABEL_134;
  if ( v88 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v88, 0LL);
  if ( *(_BYTE *)(v88 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v88, 0xBuLL);
  v90 = *(unsigned __int8 *)(v88 + 1);
  if ( *(_BYTE *)(v88 + 1) )
  {
    if ( v90 != 1 )
      goto LABEL_134;
    v194 = v88 + 712;
    v195 = *(_DWORD *)(v88 + 768);
    v196 = (unsigned __int16)v195 >> 1;
    if ( v195 >> 17 < 0x3FFE && v196 == (v195 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v88 + 712));
      *(_DWORD *)(v194 + 56) &= 0x10001u;
    }
    else
    {
      if ( v196 == 0 && (v195 & 1) == 0 )
        goto LABEL_392;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v88 + 712), 0);
    }
    LOBYTE(v4) = v234[0];
    goto LABEL_134;
  }
  v91 = *(_QWORD *)(v88 + 8);
  if ( !v91 || (v92 = *(_BYTE *)(v88 + 3)) == 0 )
  {
LABEL_133:
    if ( _bittestandreset((signed __int32 *)(v88 + 16), 0xBu) )
      goto LABEL_134;
LABEL_392:
    ndisBugCheckEx(0x1EuLL, 0LL, v88, 0xBuLL);
  }
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
      goto LABEL_133;
  }
  v93[1] = v94 - 1;
LABEL_134:
  v43 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
  if ( v43 && !*(_BYTE *)(p_DeferredContext + 11) )
  {
    NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
    *(_QWORD *)(p_DeferredContext + 16) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v89);
LABEL_138:
  v95 = (ULONG_PTR)IfBlock->RefCountTracker;
  if ( v95 - 2 > 1 )
  {
    if ( v95 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v95, 0LL);
    if ( *(_BYTE *)(v95 + 2) <= 4u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v95, 4uLL);
    v96 = *(unsigned __int8 *)(v95 + 1);
    if ( *(_BYTE *)(v95 + 1) )
    {
      if ( v96 != 1 )
        goto LABEL_147;
      v197 = v95 + 264;
      v198 = *(_DWORD *)(v95 + 320);
      v199 = (unsigned __int16)v198 >> 1;
      if ( v198 >> 17 < 0x3FFE && v199 == (v198 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v95 + 264));
        *(_DWORD *)(v197 + 56) &= 0x10001u;
        goto LABEL_147;
      }
      if ( v199 != 0 || (v198 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v95 + 264), 0);
        goto LABEL_147;
      }
    }
    else
    {
      v97 = *(_QWORD *)(v95 + 8);
      if ( v97 )
      {
        v98 = *(_BYTE *)(v95 + 3);
        if ( v98 )
        {
          while ( 1 )
          {
            v99 = (_BYTE *)(v97 + 2LL * (unsigned __int8)v96);
            if ( *v99 == 4 )
            {
              v108 = v99[1];
              if ( v108 )
                break;
            }
            LOBYTE(v96) = v96 + 1;
            if ( (unsigned __int8)v96 >= v98 )
              goto LABEL_146;
          }
          v99[1] = v108 - 1;
          goto LABEL_147;
        }
      }
LABEL_146:
      if ( _bittestandreset((signed __int32 *)(v95 + 16), 4u) )
        goto LABEL_147;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v95, 4uLL);
  }
LABEL_147:
  v43 = IfBlock->Ref-- == 1;
  if ( v43 )
  {
    ndisIfDeleteStackEntries(IfBlock);
    v200 = IfBlock->Link.Flink;
    if ( v200->Blink == &IfBlock->Link )
    {
      v201 = IfBlock->Link.Blink;
      if ( v201->Flink == &IfBlock->Link )
      {
        v201->Flink = v200;
        v200->Blink = v201;
        v202 = IfBlock->ProviderLink.Flink;
        if ( v202->Blink == &IfBlock->ProviderLink )
        {
          v203 = IfBlock->ProviderLink.Blink;
          if ( v203->Flink == &IfBlock->ProviderLink )
          {
            v203->Flink = v202;
            v202->Blink = v203;
            v204 = IfBlock->NetworkLink.Flink;
            if ( v204->Blink == &IfBlock->NetworkLink )
            {
              v205 = IfBlock->NetworkLink.Blink;
              if ( v205->Flink == &IfBlock->NetworkLink )
              {
                v205->Flink = v204;
                v204->Blink = v205;
                NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                ndisIfFreeIfIndex(IfBlock->ifIndex);
                v206 = (ULONG_PTR)IfBlock->RefCountTracker;
                --ndisInterfaceCount;
                NdisFreeRefCount(v206);
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
                goto LABEL_148;
              }
            }
          }
        }
      }
    }
    goto LABEL_437;
  }
LABEL_148:
  if ( !v2 )
    goto LABEL_159;
  v100 = (ULONG_PTR)v2[89].Blink;
  if ( v100 - 2 <= 1 )
    goto LABEL_158;
  if ( v100 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v100, 0LL);
  if ( *(_BYTE *)(v100 + 2) <= 3u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v100, 3uLL);
  v101 = *(unsigned __int8 *)(v100 + 1);
  if ( *(_BYTE *)(v100 + 1) )
  {
    if ( v101 != 1 )
      goto LABEL_158;
    v210 = v100 + 200;
    v211 = *(_DWORD *)(v100 + 256);
    v212 = (unsigned __int16)v211 >> 1;
    if ( v211 >> 17 < 0x3FFE && v212 == (v211 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 200));
      *(_DWORD *)(v210 + 56) &= 0x10001u;
      goto LABEL_158;
    }
    if ( v212 != 0 || (v211 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v100 + 200), 0);
      goto LABEL_158;
    }
LABEL_423:
    ndisBugCheckEx(0x1EuLL, 0LL, v100, 3uLL);
  }
  v102 = *(_QWORD *)(v100 + 8);
  if ( !v102 || (v103 = *(_BYTE *)(v100 + 3)) == 0 )
  {
LABEL_157:
    if ( _bittestandreset((signed __int32 *)(v100 + 16), 3u) )
      goto LABEL_158;
    goto LABEL_423;
  }
  while ( 1 )
  {
    v104 = (_BYTE *)(v102 + 2LL * (unsigned __int8)v101);
    if ( *v104 == 3 )
    {
      v107 = v104[1];
      if ( v107 )
        break;
    }
    LOBYTE(v101) = v101 + 1;
    if ( (unsigned __int8)v101 >= v103 )
      goto LABEL_157;
  }
  v104[1] = v107 - 1;
LABEL_158:
  v43 = LODWORD(v2[81].Blink)-- == 1;
  if ( v43 )
  {
    ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v2);
    v213 = v2[77].Flink;
    if ( v213->Blink == &v2[77] )
    {
      v214 = v2[77].Blink;
      if ( v214->Flink == &v2[77] )
      {
        v214->Flink = v213;
        v213->Blink = v214;
        v215 = v2[78].Flink;
        if ( v215->Blink == &v2[78] )
        {
          v216 = v2[78].Blink;
          if ( v216->Flink == &v2[78] )
          {
            v216->Flink = v215;
            v215->Blink = v216;
            v217 = v2[79].Flink;
            if ( v217->Blink == &v2[79] )
            {
              v218 = v2[79].Blink;
              if ( v218->Flink == &v2[79] )
              {
                v218->Flink = v217;
                v217->Blink = v218;
                NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v2[85].Blink);
                ndisIfFreeIfIndex(HIDWORD(v2->Flink));
                v219 = (ULONG_PTR)v2[89].Blink;
                --ndisInterfaceCount;
                NdisFreeRefCount(v219);
                v220 = v2[89].Flink;
                v2[89].Blink = 0LL;
                if ( v220 )
                {
                  ExFreePoolWithTag(v220, 0);
                  v2[89].Flink = 0LL;
                }
                v221 = v2[80].Flink;
                if ( v221 )
                {
                  ExFreePoolWithTag(v221, 0);
                  v2[80].Flink = 0LL;
                  v2[80].Blink = 0LL;
                }
                v222 = (struct _KEVENT *)v2[86].Blink;
                if ( v222 )
                  KeSetEvent(v222, 0, 0);
                ExFreePoolWithTag(v2, 0);
                goto LABEL_159;
              }
            }
          }
        }
      }
    }
LABEL_437:
    __fastfail(3u);
  }
LABEL_159:
  KeReleaseSpinLock(&ndisIfListLock, v85);
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v105) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v105,
      22,
      27,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v4,
      v83);
  }
  return (unsigned int)v83;
}

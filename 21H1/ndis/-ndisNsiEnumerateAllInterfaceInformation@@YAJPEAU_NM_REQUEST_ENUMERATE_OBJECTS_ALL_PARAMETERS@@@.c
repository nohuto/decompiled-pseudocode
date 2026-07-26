/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00098F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memcmp @ 0x1C003F2F0 (memcmp.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B0BC0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00B41D0 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C00B520C (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BDFC0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE144 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C00F8900 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C00F8C10 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v2; // r14
  int v3; // edi
  int v4; // edx
  unsigned int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int *v8; // rcx
  int v9; // r15d
  unsigned int v10; // ebx
  PACCESS_TOKEN v11; // rax
  void *v12; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rax
  KIRQL v19; // r11
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rdx
  int v22; // edx
  void *v23; // rdx
  size_t v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  _LIST_ENTRY *v29; // rsi
  unsigned int v30; // r8d
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rdi
  _NDIS_IF_BLOCK *IfBlock; // r12
  _LIST_ENTRY *v34; // r14
  KIRQL v35; // bl
  _LIST_ENTRY *v36; // rax
  int v37; // ebx
  unsigned int v38; // esi
  KIRQL v39; // al
  struct _NDIS_M_DRIVER_BLOCK *v40; // r15
  KIRQL v41; // r14
  _REFERENCE_EX *v42; // r13
  KIRQL v43; // di
  unsigned __int16 v44; // ax
  struct _NDIS_REFCOUNT_BLOCK *v45; // rcx
  KIRQL v46; // al
  _NDIS_MINIPORT_BLOCK *v47; // rbx
  KIRQL v48; // r12
  struct _NDIS_M_DRIVER_BLOCK *v49; // r13
  struct _NDIS_MINIPORT_BLOCK *v50; // r12
  _NDIS_BIND_PATHS *v51; // rdx
  _LIST_ENTRY *v52; // rcx
  KIRQL v53; // al
  struct _NDIS_M_DRIVER_BLOCK *v54; // rdi
  KIRQL v55; // al
  ULONG_PTR v56; // r8
  KIRQL v57; // si
  int v58; // ecx
  __int64 v59; // r10
  unsigned __int8 v60; // r9
  _BYTE *v61; // rdx
  bool v62; // zf
  char v63; // bl
  int v64; // edx
  _NDIS_FILTER_BLOCK *v65; // rdi
  int v66; // esi
  KIRQL v67; // r14
  unsigned __int16 v68; // ax
  struct _NDIS_REFCOUNT_BLOCK *v69; // rcx
  KIRQL v70; // di
  ULONG_PTR v71; // r8
  int v72; // ecx
  __int64 v73; // rdx
  unsigned __int8 v74; // r10
  _BYTE *v75; // r9
  struct _KEVENT *v76; // rcx
  int v77; // edx
  char v78; // si
  KIRQL v79; // al
  _BYTE *v80; // rdx
  ULONG_PTR v81; // r8
  KIRQL v82; // r14
  int v83; // ecx
  __int64 v84; // r10
  unsigned __int8 v85; // r9
  int v86; // edx
  __int64 v87; // rbx
  __int64 p_DeferredContext; // rbx
  KIRQL v89; // al
  ULONG_PTR v90; // r8
  KIRQL v91; // si
  int v92; // ecx
  __int64 v93; // r10
  unsigned __int8 v94; // r9
  _BYTE *v95; // rdx
  char v96; // al
  ULONG_PTR v97; // r8
  int v98; // ecx
  __int64 v99; // r10
  unsigned __int8 v100; // r9
  _BYTE *v101; // rdx
  ULONG_PTR v102; // r8
  __int64 v103; // r10
  unsigned __int8 v104; // r9
  unsigned __int8 v105; // al
  _BYTE *v106; // rdx
  char v107; // si
  int v108; // edx
  KIRQL v109; // r14
  struct _NDIS_REFCOUNT_BLOCK *v110; // rcx
  unsigned int v111; // ecx
  unsigned int *v112; // rax
  char v113; // al
  char v114; // cl
  __int64 v115; // rbx
  char v116; // al
  int v117; // ebx
  KIRQL v118; // al
  struct _NDIS_M_DRIVER_BLOCK *v119; // rsi
  KIRQL v120; // r12
  KSPIN_LOCK *p_SpinLock; // r15
  KIRQL v122; // di
  unsigned __int16 ReferenceCount; // cx
  KIRQL v124; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v126; // r15d
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _LIST_ENTRY *Blink; // rcx
  KIRQL v129; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v131; // si
  char v132; // bl
  int v133; // edx
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  int v135; // esi
  KIRQL v136; // r15
  unsigned __int16 v137; // cx
  char v138; // di
  KIRQL v139; // bl
  ULONG_PTR v140; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v142; // edx
  KIRQL v143; // al
  int v144; // edx
  ULONG_PTR v145; // rcx
  KIRQL v146; // si
  int v147; // edx
  KIRQL v148; // bl
  char v149; // si
  int v150; // edx
  KIRQL v151; // r12
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v153; // ecx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rcx
  unsigned int *p_Number; // rax
  NTSTATUS v156; // ebx
  KIRQL v158; // r8
  unsigned __int64 v159; // r8
  unsigned __int64 v160; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v161; // rsi
  struct _NDIS_M_DRIVER_BLOCK *v162; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v168; // edx
  struct _KEVENT *RemoveReadyEvent; // rcx
  _LIST_ENTRY *v170; // rax
  struct _KEVENT *v171; // rcx
  ULONG_PTR v172; // rbx
  unsigned int v173; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v174; // rax
  struct _NDIS_M_DRIVER_BLOCK **v175; // rcx
  wchar_t *v176; // rcx
  _NDIS_WRAPPER_HANDLE *v177; // rcx
  _NDIS_PENDING_IM_INSTANCE *v178; // rcx
  _NDIS_PENDING_IM_INSTANCE *v179; // rbx
  int v180; // edx
  ULONG_PTR v181; // rbx
  unsigned int v182; // r9d
  char v183; // al
  ULONG_PTR v184; // rbx
  unsigned int v185; // r9d
  char v186; // al
  struct _KEVENT *v187; // rcx
  ULONG_PTR v188; // rdi
  unsigned int v189; // r9d
  ULONG_PTR v190; // rbx
  unsigned int v191; // r9d
  _LIST_ENTRY *v192; // rdx
  _LIST_ENTRY *v193; // rcx
  _LIST_ENTRY *v194; // rdx
  _LIST_ENTRY *v195; // rcx
  _LIST_ENTRY *v196; // rdx
  _LIST_ENTRY *v197; // rcx
  ULONG_PTR v198; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v202; // rbx
  unsigned int v203; // r9d
  _LIST_ENTRY *v204; // rcx
  _LIST_ENTRY *v205; // rax
  _LIST_ENTRY *v206; // rdx
  _LIST_ENTRY *v207; // rcx
  _LIST_ENTRY *v208; // rdx
  _LIST_ENTRY *v209; // rcx
  ULONG_PTR v210; // rcx
  _LIST_ENTRY *v211; // rcx
  _LIST_ENTRY *v212; // rcx
  struct _KEVENT *v213; // rcx
  KIRQL v214; // [rsp+40h] [rbp-C0h]
  KIRQL v215; // [rsp+41h] [rbp-BFh]
  KIRQL v216; // [rsp+41h] [rbp-BFh]
  int v217; // [rsp+44h] [rbp-BCh]
  int v218; // [rsp+44h] [rbp-BCh]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-B8h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+49h] [rbp-B7h] BYREF
  _REFERENCE_EX *v221; // [rsp+50h] [rbp-B0h]
  _LIST_ENTRY *v222; // [rsp+58h] [rbp-A8h]
  char v223[8]; // [rsp+60h] [rbp-A0h]
  unsigned int v224; // [rsp+68h] [rbp-98h]
  struct _NDIS_MINIPORT_BLOCK *v225; // [rsp+70h] [rbp-90h]
  _LIST_ENTRY *v226; // [rsp+78h] [rbp-88h]
  unsigned int v227; // [rsp+80h] [rbp-80h]
  unsigned int v228; // [rsp+84h] [rbp-7Ch]
  int v229; // [rsp+88h] [rbp-78h]
  unsigned int v230; // [rsp+8Ch] [rbp-74h]
  struct _NDIS_M_DRIVER_BLOCK *p_Ref; // [rsp+90h] [rbp-70h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+98h] [rbp-68h] BYREF
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v233; // [rsp+A0h] [rbp-60h]
  void *v234; // [rsp+A8h] [rbp-58h]
  PVOID TokenInformation; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v236; // [rsp+B8h] [rbp-48h]
  __int64 v237; // [rsp+C0h] [rbp-40h]
  _LIST_ENTRY *v238; // [rsp+C8h] [rbp-38h]
  _LIST_ENTRY *v239; // [rsp+D0h] [rbp-30h]
  _QWORD v240[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v241; // [rsp+120h] [rbp+20h]
  __int128 v242; // [rsp+128h] [rbp+28h]

  v1 = 0LL;
  v233 = a1;
  v2 = a1;
  v3 = 0;
  memset(v240, 0, sizeof(v240));
  v5 = *((_DWORD *)v2 + 22);
  v230 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      22,
      14,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v2);
  }
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = ThreadProperty;
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    LODWORD(v241) = ThreadProperty[1];
    LODWORD(v221) = v9;
    HIDWORD(v241) = v9;
    ObfDereferenceObject(ThreadProperty);
    v10 = v9;
  }
  else
  {
    v9 = 0;
    LODWORD(v221) = 0;
    v241 = 0LL;
    v10 = 0;
  }
  if ( v10 )
    goto LABEL_15;
  CopyOnOpen[0] = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  }
  else
  {
    v11 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v12 = v11;
    if ( v11 )
    {
      v156 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v12);
      if ( v156 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        v2 = v233;
        goto LABEL_10;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    v2 = v233;
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_10:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00E6060 )
  {
    v9 = 0;
    v158 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E49C8);
    if ( ThreadSessionId < dword_1C00E6060 )
      v9 = *((_DWORD *)P + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00E49C8, v158);
    if ( !v9 )
      v9 = 1;
    LODWORD(v221) = v9;
  }
  else
  {
    v9 = 1;
    LODWORD(v221) = 1;
  }
  HIDWORD(v241) = v9;
  v10 = v9;
LABEL_15:
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  v18 = qword_1C00E49D8;
  if ( qword_1C00E49D8 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E49D8 )
  {
    while ( *((_DWORD *)v18 + 4) != v10 )
    {
      if ( *((_DWORD *)v18 + 4) <= v10 )
      {
        v18 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v18;
        if ( v18 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E49D8 )
          continue;
      }
      goto LABEL_18;
    }
    v16 = v18;
  }
LABEL_18:
  v242 = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v214 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v19 = v214;
  if ( !v5 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Flink = i[9].Flink;
      if ( v9 == LODWORD(Flink[1].Flink) )
        goto LABEL_21;
      if ( (_DWORD)v241 == -1 )
      {
        v159 = v242 - *(unsigned __int64 *)((char *)&Flink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v242 == *(_LIST_ENTRY **)((char *)&Flink[105].Flink + 4) )
          v159 = *((_QWORD *)&v242 + 1) - *(unsigned __int64 *)((char *)&Flink[105].Blink + 4);
        if ( !v159 )
          goto LABEL_21;
      }
      if ( ((__int64)Flink[105].Flink & 2) == 0 && v9 == 1 )
LABEL_21:
        ++v3;
    }
    *((_DWORD *)v2 + 22) = v3;
    if ( v3 )
      LODWORD(v1) = 261;
    goto LABEL_25;
  }
  v23 = (void *)*((_QWORD *)v2 + 2);
  v24 = *((unsigned int *)v2 + 6);
  v25 = *((_QWORD *)v2 + 7);
  v26 = *((_QWORD *)v2 + 9);
  v27 = *((_DWORD *)v2 + 16);
  v28 = *((_DWORD *)v2 + 20);
  v224 = *((_DWORD *)v2 + 6);
  v227 = v27;
  v228 = v28;
  v234 = v23;
  v236 = v25;
  v237 = v26;
  if ( v23 && (_DWORD)v24 != 8
    || *((_QWORD *)v2 + 5)
    || *((_DWORD *)v2 + 12)
    || v25 && v27 < 0x28C
    || v26 && v28 < 0x238 )
  {
    LODWORD(v1) = -1073741306;
    goto LABEL_25;
  }
  v29 = ndisIfList.Flink;
  v222 = ndisIfList.Flink;
  v30 = 0;
  if ( ndisIfList.Flink == &ndisIfList )
    goto LABEL_161;
  do
  {
    v31 = v29[9].Flink;
    v32 = v29 - 77;
    v239 = v29;
    v226 = v29 - 77;
    if ( v9 != LODWORD(v31[1].Flink) )
    {
      if ( (_DWORD)v241 != -1 )
        goto LABEL_270;
      v160 = v242 - *(unsigned __int64 *)((char *)&v31[105].Flink + 4);
      if ( (_LIST_ENTRY *)v242 == *(_LIST_ENTRY **)((char *)&v31[105].Flink + 4) )
        v160 = *((_QWORD *)&v242 + 1) - *(unsigned __int64 *)((char *)&v31[105].Blink + 4);
      if ( v160 )
      {
LABEL_270:
        if ( ((__int64)v31[105].Flink & 2) != 0 || v9 != 1 )
        {
          v29 = v29->Flink;
          v19 = v214;
          v222 = v29;
          continue;
        }
      }
    }
    v229 = ++v30;
    if ( v30 > v5 )
    {
      v29 = v29->Flink;
      v19 = v214;
      v222 = v29;
      continue;
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32[89].Blink);
    ++LODWORD(v32[81].Blink);
    IfBlock = 0LL;
    if ( !BYTE1(v32[87].Flink) || *((_QWORD *)v2 + 1) >= 2uLL )
      goto LABEL_116;
    v34 = 0LL;
    v35 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( BYTE3(v32[87].Flink) )
    {
      v34 = v32[88].Flink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32[90].Flink);
      ++HIDWORD(v32[87].Flink);
    }
    KeReleaseSpinLock(&SpinLock, v35);
    if ( v34 )
    {
      v62 = v34[235].Blink == 0LL;
      v117 = 1;
      v218 = 1;
      v225 = 0LL;
      if ( v62 )
        goto LABEL_247;
      v118 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v119 = ndisMiniDriverList;
      v120 = v118;
      *(_QWORD *)v223 = ndisMiniDriverList;
      if ( !ndisMiniDriverList )
        goto LABEL_202;
      while ( 1 )
      {
        p_SpinLock = &v119->Ref.SpinLock;
        p_Ref = (struct _NDIS_M_DRIVER_BLOCK *)&v119->Ref;
        v122 = KeAcquireSpinLockRaiseToDpc(&v119->Ref.SpinLock);
        if ( !v119->Ref.Closing )
        {
          ReferenceCount = v119->Ref.ReferenceCount;
          if ( ReferenceCount >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v117 = 2;
          }
          else
          {
            v119->Ref.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v119->Ref.RefCountTracker);
            v117 = 0;
          }
        }
        KeReleaseSpinLock(&v119->Ref.SpinLock, v122);
        if ( v117 )
        {
          NextDriver = v119->NextDriver;
        }
        else
        {
          KeReleaseSpinLock(&ndisMiniDriverListLock, v120);
          v124 = KeAcquireSpinLockRaiseToDpc(&v119->Ref.SpinLock);
          MiniportQueue = v119->MiniportQueue;
          v216 = v124;
          if ( MiniportQueue )
          {
            v126 = v218;
            while ( 1 )
            {
              BindPaths = MiniportQueue->BindPaths;
              if ( BindPaths )
              {
                if ( BindPaths->Number >= v126 )
                {
                  Blink = v34[235].Blink;
                  if ( LOWORD(Blink->Blink) == BindPaths->Paths[0].Length
                    && !memcmp(Blink[1].Flink, BindPaths->Paths[0].Buffer, LOWORD(Blink->Blink)) )
                  {
                    break;
                  }
                }
              }
LABEL_195:
              MiniportQueue = MiniportQueue->NextMiniport;
              if ( !MiniportQueue )
              {
                v119 = *(struct _NDIS_M_DRIVER_BLOCK **)v223;
                v124 = v216;
                v218 = v126;
                p_SpinLock = (KSPIN_LOCK *)&p_Ref->Header.Type;
                goto LABEL_197;
              }
            }
            KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
            v62 = (MiniportQueue->Flags & 0x80200020) == 0;
            MiniportQueue->MiniportThread = KeGetCurrentThread();
            if ( v62
              && (MiniportQueue->PnPFlags & 0x1084110) == 0
              && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
              && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v149 = 1;
              v151 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
              if ( !MiniportQueue->Ref.Closing )
              {
                RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
                if ( RefCountTracker )
                  NdisReferenceWithTag(RefCountTracker);
                v153 = MiniportQueue->Ref.ReferenceCount;
                MiniportQueue->Ref.ReferenceCount = v153 + 1;
                if ( v153 != -1 )
                {
LABEL_234:
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v150) = 4;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v150,
                      20,
                      12,
                      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
                      (char)MiniportQueue,
                      MiniportQueue->Ref.ReferenceCount);
                  }
                  KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v151);
                  if ( v149 )
                  {
                    NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
                    v225 = v1;
                    NdisReferenceWithTag(NsiRefCountTracker);
                    p_Number = &MiniportQueue->BindPaths->Number;
                    v1 = MiniportQueue;
                    ++MiniportQueue->NsiOpenReferences;
                    v126 = *p_Number;
                  }
                  goto LABEL_238;
                }
                MiniportQueue->Ref.ReferenceCount = -1;
              }
              v149 = 0;
              goto LABEL_234;
            }
LABEL_238:
            MiniportQueue->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
            if ( v225 )
            {
              ndisDereferenceMiniportForNsi(v225, NSIREF_IFTOP, MPREF_IF_FINDTOP);
              v225 = 0LL;
            }
            goto LABEL_195;
          }
LABEL_197:
          KeReleaseSpinLock(p_SpinLock, v124);
          v129 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v119->NextDriver;
          v120 = v129;
          v131 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
          NdisDereferenceWithTag(p_SpinLock[2]);
          v62 = (*((_WORD *)p_SpinLock + 4))-- == 1;
          if ( v62 )
          {
            v132 = 1;
            if ( !*((_BYTE *)p_SpinLock + 11) )
            {
              NdisFreeRefCount(p_SpinLock[2]);
              p_SpinLock[2] = 1LL;
            }
          }
          else
          {
            v132 = 0;
          }
          KeReleaseSpinLock(p_SpinLock, v131);
          if ( v132 )
          {
            v161 = *(struct _NDIS_M_DRIVER_BLOCK **)v223;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v133) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v133,
                20,
                23,
                (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                v223[0]);
            }
            v162 = ndisMiniDriverList;
            p_NextDriver = &ndisMiniDriverList;
            if ( ndisMiniDriverList )
            {
              while ( v162 != v161 )
              {
                p_NextDriver = &v162->NextDriver;
                v162 = v162->NextDriver;
                if ( !v162 )
                  goto LABEL_287;
              }
              *p_NextDriver = v161->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
            }
LABEL_287:
            Buffer = v161->ImageName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              v161->ImageName.Buffer = 0LL;
            }
            NdisDriverInfo = v161->NdisDriverInfo;
            if ( NdisDriverInfo )
            {
              ExFreePoolWithTag(NdisDriverInfo, 0);
              v161->NdisDriverInfo = 0LL;
            }
            if ( (v161->Flags & 1) != 0 )
            {
              PendingDeviceList = v161->PendingDeviceList;
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
            KeSetEvent(&v161->MiniportsRemovedEvent, 0, 0);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v168) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v168,
                20,
                24,
                (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                (char)v161);
            }
          }
        }
        *(_QWORD *)v223 = NextDriver;
        v119 = NextDriver;
        if ( !NextDriver )
        {
          v9 = HIDWORD(v241);
          v32 = v226;
          LODWORD(v221) = HIDWORD(v241);
LABEL_202:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v120);
          if ( v1 )
          {
            KeAcquireSpinLockAtDpcLevel(&v1->Lock);
            HighestFilter = v1->HighestFilter;
            v1->MiniportThread = KeGetCurrentThread();
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
                  goto LABEL_299;
              }
              IfBlock = HighestFilter->IfBlock;
            }
            else
            {
LABEL_299:
              IfBlock = v1->IfBlock;
            }
            v138 = 0;
            v1->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v1->Lock);
            v139 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
            v140 = (ULONG_PTR)v1->NsiRefCountTracker;
            v1->MiniportThread = KeGetCurrentThread();
            NdisDereferenceWithTag(v140);
            v62 = v1->NsiOpenReferences-- == 1;
            if ( v62 )
            {
              NsiRequestsCompletedEvent = v1->NsiRequestsCompletedEvent;
              if ( NsiRequestsCompletedEvent )
                KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
            }
            v1->MiniportThread = 0LL;
            KeReleaseSpinLock(&v1->Lock, v139);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v142) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v142,
                20,
                25,
                (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                (char)v1);
            }
            v143 = KeAcquireSpinLockRaiseToDpc(&v1->Ref.SpinLock);
            v145 = (ULONG_PTR)v1->RefCountTracker;
            v146 = v143;
            if ( v145 )
              NdisDereferenceWithTag(v145);
            v62 = v1->Ref.ReferenceCount-- == 1;
            if ( v62 )
              v138 = 1;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v144) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v144,
                20,
                14,
                (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
                (char)v1,
                v1->Ref.ReferenceCount);
            }
            KeReleaseSpinLock(&v1->Ref.SpinLock, v146);
            if ( v138 )
            {
              RemoveReadyEvent = v1->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v147) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v147,
                20,
                26,
                (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
                (char)v1);
            }
            v9 = HIDWORD(v241);
            v32 = v226;
            LODWORD(v221) = HIDWORD(v241);
LABEL_224:
            v148 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            NdisDereferenceWithTag((ULONG_PTR)v32[90].Flink);
            v62 = HIDWORD(v32[87].Flink)-- == 1;
            if ( v62 )
            {
              v170 = v32[88].Flink;
              if ( v170 )
              {
                v171 = (struct _KEVENT *)v170[253].Flink;
                if ( v171 )
                  KeSetEvent(v171, 0, 0);
              }
            }
            KeReleaseSpinLock(&SpinLock, v148);
            goto LABEL_111;
          }
LABEL_247:
          IfBlock = 0LL;
          goto LABEL_224;
        }
        v117 = 1;
      }
    }
    if ( !BYTE2(v32[87].Flink) )
      goto LABEL_115;
    v36 = v32[88].Flink;
    v37 = 1;
    *(_QWORD *)v223 = 0LL;
    v225 = 0LL;
    v38 = 1;
    v217 = 1;
    v238 = v36[2].Flink;
    if ( !v238[235].Blink )
    {
LABEL_246:
      v1 = 0LL;
      IfBlock = 0LL;
      goto LABEL_114;
    }
    v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v40 = ndisMiniDriverList;
    v41 = v39;
    p_Ref = ndisMiniDriverList;
    if ( !ndisMiniDriverList )
    {
      v9 = (int)v221;
      goto LABEL_72;
    }
    while ( 2 )
    {
      v42 = &v40->Ref;
      v221 = &v40->Ref;
      v43 = KeAcquireSpinLockRaiseToDpc(&v40->Ref.SpinLock);
      if ( !v40->Ref.Closing )
      {
        v44 = v40->Ref.ReferenceCount;
        if ( v44 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v37 = 2;
        }
        else
        {
          v45 = (struct _NDIS_REFCOUNT_BLOCK *)v40->Ref.RefCountTracker;
          v40->Ref.ReferenceCount = v44 + 1;
          NdisReferenceWithTag(v45);
          v37 = 0;
        }
      }
      KeReleaseSpinLock(&v40->Ref.SpinLock, v43);
      if ( v37 )
      {
        v54 = v40->NextDriver;
        goto LABEL_70;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v41);
      v46 = KeAcquireSpinLockRaiseToDpc(&v40->Ref.SpinLock);
      v47 = v40->MiniportQueue;
      v48 = v46;
      v215 = v46;
      if ( !v47 )
        goto LABEL_57;
      v49 = *(struct _NDIS_M_DRIVER_BLOCK **)v223;
      v50 = v225;
      do
      {
        v51 = v47->BindPaths;
        if ( !v51 )
          goto LABEL_55;
        if ( v51->Number < v38 )
          goto LABEL_55;
        v52 = v238[235].Blink;
        if ( LOWORD(v52->Blink) != v51->Paths[0].Length
          || memcmp(v52[1].Flink, v51->Paths[0].Buffer, LOWORD(v52->Blink)) )
        {
          goto LABEL_55;
        }
        KeAcquireSpinLockAtDpcLevel(&v47->Lock);
        v62 = (v47->Flags & 0x80200020) == 0;
        v47->MiniportThread = KeGetCurrentThread();
        if ( v62
          && (v47->PnPFlags & 0x1084110) == 0
          && v47->PnPDeviceState == NdisPnPDeviceStarted
          && v47->CurrentDevicePowerState == PowerDeviceD0 )
        {
          v107 = 1;
          v109 = KeAcquireSpinLockRaiseToDpc(&v47->Ref.SpinLock);
          if ( !v47->Ref.Closing )
          {
            v110 = (struct _NDIS_REFCOUNT_BLOCK *)v47->RefCountTracker;
            if ( v110 )
              NdisReferenceWithTag(v110);
            v111 = v47->Ref.ReferenceCount;
            v47->Ref.ReferenceCount = v111 + 1;
            if ( v111 != -1 )
              goto LABEL_171;
            v47->Ref.ReferenceCount = -1;
          }
          v107 = 0;
LABEL_171:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v108) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v108,
              20,
              12,
              (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
              (char)v47,
              v47->Ref.ReferenceCount);
          }
          KeReleaseSpinLock(&v47->Ref.SpinLock, v109);
          if ( v107 )
          {
            v50 = (struct _NDIS_MINIPORT_BLOCK *)v49;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v47->NsiRefCountTracker);
            v112 = &v47->BindPaths->Number;
            v49 = (struct _NDIS_M_DRIVER_BLOCK *)v47;
            ++v47->NsiOpenReferences;
            v38 = *v112;
            v217 = *v112;
          }
          else
          {
            v38 = v217;
          }
        }
        v47->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v47->Lock);
        if ( v50 )
        {
          ndisDereferenceMiniportForNsi(v50, NSIREF_IFTOP, MPREF_IF_FINDTOP);
          v50 = 0LL;
        }
LABEL_55:
        v47 = v47->NextMiniport;
      }
      while ( v47 );
      v40 = p_Ref;
      v225 = v50;
      v48 = v215;
      *(_QWORD *)v223 = v49;
      v42 = v221;
LABEL_57:
      KeReleaseSpinLock(&v42->SpinLock, v48);
      v53 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v54 = v40->NextDriver;
      v41 = v53;
      v55 = KeAcquireSpinLockRaiseToDpc(&v42->SpinLock);
      v56 = (ULONG_PTR)v42->RefCountTracker;
      v57 = v55;
      if ( v56 - 2 > 1 )
      {
        if ( v56 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v56, 0LL);
        if ( *(_BYTE *)(v56 + 2) <= 8u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v56, 8uLL);
        v58 = *(unsigned __int8 *)(v56 + 1);
        if ( *(_BYTE *)(v56 + 1) )
        {
          if ( v58 != 1 )
            goto LABEL_66;
          v172 = v56 + 520;
          v173 = *(_DWORD *)(v56 + 576);
          if ( v173 >> 17 < 0x3FFE && (unsigned __int16)v173 >> 1 == (v173 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 520));
            *(_DWORD *)(v172 + 56) &= 0x10001u;
            goto LABEL_66;
          }
          if ( (unsigned __int16)v173 >> 1 != 0 || (v173 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 520), 0);
            goto LABEL_66;
          }
        }
        else
        {
          v59 = *(_QWORD *)(v56 + 8);
          if ( v59 )
          {
            v60 = *(_BYTE *)(v56 + 3);
            if ( v60 )
            {
              while ( 1 )
              {
                v61 = (_BYTE *)(v59 + 2LL * (unsigned __int8)v58);
                if ( *v61 == 8 )
                {
                  v116 = v61[1];
                  if ( v116 )
                    break;
                }
                LOBYTE(v58) = v58 + 1;
                if ( (unsigned __int8)v58 >= v60 )
                  goto LABEL_65;
              }
              v61[1] = v116 - 1;
              goto LABEL_66;
            }
          }
LABEL_65:
          if ( _bittestandreset((signed __int32 *)(v56 + 16), 8u) )
            goto LABEL_66;
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v56, 8uLL);
      }
LABEL_66:
      v62 = v42->ReferenceCount-- == 1;
      if ( v62 )
      {
        v63 = 1;
        if ( !v42->ZeroBased )
        {
          NdisFreeRefCount((ULONG_PTR)v42->RefCountTracker);
          v42->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
      }
      else
      {
        v63 = 0;
      }
      KeReleaseSpinLock(&v42->SpinLock, v57);
      if ( v63 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v64,
            20,
            23,
            (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
            (char)v40);
        }
        v174 = ndisMiniDriverList;
        v175 = &ndisMiniDriverList;
        if ( ndisMiniDriverList )
        {
          while ( v174 != v40 )
          {
            v175 = &v174->NextDriver;
            v174 = v174->NextDriver;
            if ( !v174 )
              goto LABEL_325;
          }
          *v175 = v40->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_325:
        v176 = v40->ImageName.Buffer;
        if ( v176 )
        {
          ExFreePoolWithTag(v176, 0);
          v40->ImageName.Buffer = 0LL;
        }
        v177 = v40->NdisDriverInfo;
        if ( v177 )
        {
          ExFreePoolWithTag(v177, 0);
          v40->NdisDriverInfo = 0LL;
        }
        if ( (v40->Flags & 1) != 0 )
        {
          v178 = v40->PendingDeviceList;
          if ( v178 )
          {
            do
            {
              v179 = v178->Next;
              ExFreePoolWithTag(v178, 0);
              v178 = v179;
            }
            while ( v179 );
          }
        }
        KeSetEvent(&v40->MiniportsRemovedEvent, 0, 0);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v180) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v180,
            20,
            24,
            (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
            (char)v40);
        }
      }
      v38 = v217;
LABEL_70:
      p_Ref = v54;
      v40 = v54;
      if ( v54 )
      {
        v37 = 1;
        continue;
      }
      break;
    }
    v9 = HIDWORD(v241);
    v1 = *(struct _NDIS_MINIPORT_BLOCK **)v223;
    v32 = v226;
    LODWORD(v221) = HIDWORD(v241);
LABEL_72:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v41);
    if ( !v1 )
      goto LABEL_246;
    KeAcquireSpinLockAtDpcLevel(&v1->Lock);
    v65 = v1->HighestFilter;
    v1->MiniportThread = KeGetCurrentThread();
    if ( v65 )
    {
      while ( 1 )
      {
        v66 = 1;
        v67 = KeAcquireSpinLockRaiseToDpc(&v65->PnPRef.SpinLock);
        if ( !v65->PnPRef.Closing )
        {
          v68 = v65->PnPRef.ReferenceCount;
          if ( v68 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v66 = 2;
          }
          else
          {
            v69 = (struct _NDIS_REFCOUNT_BLOCK *)v65->PnPRef.RefCountTracker;
            v65->PnPRef.ReferenceCount = v68 + 1;
            NdisReferenceWithTag(v69);
            v66 = 0;
          }
        }
        KeReleaseSpinLock(&v65->PnPRef.SpinLock, v67);
        if ( !v66 )
          break;
        v65 = v65->LowerFilter;
        if ( !v65 )
          goto LABEL_338;
      }
      IfBlock = v65->IfBlock;
    }
    else
    {
LABEL_338:
      IfBlock = v1->IfBlock;
    }
    v1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v1->Lock);
    v70 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
    v71 = (ULONG_PTR)v1->NsiRefCountTracker;
    v1->MiniportThread = KeGetCurrentThread();
    if ( v71 - 2 > 1 )
    {
      if ( v71 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v71, 0LL);
      if ( *(_BYTE *)(v71 + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v71, 2uLL);
      v72 = *(unsigned __int8 *)(v71 + 1);
      if ( *(_BYTE *)(v71 + 1) )
      {
        if ( v72 != 1 )
          goto LABEL_88;
        v181 = v71 + 136;
        v182 = *(_DWORD *)(v71 + 192);
        if ( v182 >> 17 < 0x3FFE && (unsigned __int16)v182 >> 1 == (v182 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v71 + 136));
          *(_DWORD *)(v181 + 56) &= 0x10001u;
          goto LABEL_88;
        }
        if ( (unsigned __int16)v182 >> 1 != 0 || (v182 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v71 + 136), 0);
          goto LABEL_88;
        }
      }
      else
      {
        v73 = *(_QWORD *)(v71 + 8);
        if ( v73 )
        {
          v74 = *(_BYTE *)(v71 + 3);
          if ( v74 )
          {
            while ( 1 )
            {
              v75 = (_BYTE *)(v73 + 2LL * (unsigned __int8)v72);
              if ( *v75 == 2 )
              {
                v183 = v75[1];
                if ( v183 )
                  break;
              }
              LOBYTE(v72) = v72 + 1;
              if ( (unsigned __int8)v72 >= v74 )
                goto LABEL_87;
            }
            v75[1] = v183 - 1;
            goto LABEL_88;
          }
        }
LABEL_87:
        if ( _bittestandreset((signed __int32 *)(v71 + 16), 2u) )
          goto LABEL_88;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v71, 2uLL);
    }
LABEL_88:
    v62 = v1->NsiOpenReferences-- == 1;
    if ( v62 )
    {
      v76 = v1->NsiRequestsCompletedEvent;
      if ( v76 )
        KeSetEvent(v76, 0, 0);
    }
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v70);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v77) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v77,
        20,
        25,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)v1);
    }
    v78 = 0;
    v79 = KeAcquireSpinLockRaiseToDpc(&v1->Ref.SpinLock);
    v81 = (ULONG_PTR)v1->RefCountTracker;
    v82 = v79;
    if ( v81 && v81 - 2 > 1 )
    {
      if ( v81 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v81 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v81, 0x3CuLL);
      v83 = *(unsigned __int8 *)(v81 + 1);
      if ( *(_BYTE *)(v81 + 1) )
      {
        if ( v83 != 1 )
          goto LABEL_103;
        v184 = v81 + 3848;
        v185 = *(_DWORD *)(v81 + 3904);
        if ( v185 >> 17 < 0x3FFE && (unsigned __int16)v185 >> 1 == (v185 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v81 + 3848));
          *(_DWORD *)(v184 + 56) &= 0x10001u;
          goto LABEL_103;
        }
        if ( (unsigned __int16)v185 >> 1 != 0 || (v185 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v81 + 3848), 0);
          goto LABEL_103;
        }
      }
      else
      {
        v84 = *(_QWORD *)(v81 + 8);
        if ( v84 )
        {
          v85 = *(_BYTE *)(v81 + 3);
          if ( v85 )
          {
            while ( 1 )
            {
              v80 = (_BYTE *)(v84 + 2LL * (unsigned __int8)v83);
              if ( *v80 == 60 )
              {
                v186 = v80[1];
                if ( v186 )
                  break;
              }
              LOBYTE(v83) = v83 + 1;
              if ( (unsigned __int8)v83 >= v85 )
                goto LABEL_102;
            }
            v80[1] = v186 - 1;
            goto LABEL_103;
          }
        }
LABEL_102:
        if ( _bittestandreset((signed __int32 *)(v81 + 20), 0x1Cu) )
          goto LABEL_103;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v81, 0x3CuLL);
    }
LABEL_103:
    v62 = v1->Ref.ReferenceCount-- == 1;
    if ( v62 )
      v78 = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v80) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v80,
        20,
        14,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)v1,
        v1->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&v1->Ref.SpinLock, v82);
    if ( v78 )
    {
      v187 = v1->RemoveReadyEvent;
      if ( v187 )
        KeSetEvent(v187, 0, 0);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v86) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v86,
        20,
        26,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)v1);
    }
    v9 = HIDWORD(v241);
    v32 = v226;
    LODWORD(v221) = HIDWORD(v241);
LABEL_111:
    if ( IfBlock )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker);
      ++IfBlock->Ref;
    }
    v1 = 0LL;
LABEL_114:
    v29 = v222;
LABEL_115:
    v2 = v233;
    v24 = v224;
LABEL_116:
    KeReleaseSpinLock(&ndisIfListLock, v214);
    if ( *((_QWORD *)v2 + 2) )
    {
      memmove(v234, &v32[82], v24);
      v234 = (char *)v234 + v24;
    }
    if ( *((_QWORD *)v2 + 7) )
    {
      v115 = v236;
      v240[5] = v236;
      LODWORD(v240[4]) = 1;
      LODWORD(v240[6]) = v227;
      ndisNsiGetInterfaceRodEnumObject((char)v32);
      v236 = v227 + v115;
    }
    if ( *((_QWORD *)v2 + 9) )
    {
      v87 = v237;
      v240[5] = v237;
      LODWORD(v240[4]) = 2;
      LODWORD(v240[6]) = v228;
      ndisNsiGetInterfaceRosEnumObject((char)v32);
      v237 = v228 + v87;
    }
    v214 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v19 = v214;
    if ( IfBlock )
    {
      if ( !IfBlock->IsNdisFilter )
        goto LABEL_138;
      p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v89 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v90 = *(_QWORD *)(p_DeferredContext + 16);
      v91 = v89;
      if ( v90 - 2 <= 1 )
        goto LABEL_134;
      if ( v90 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v90, 0LL);
      if ( *(_BYTE *)(v90 + 2) <= 0xBu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v90, 0xBuLL);
      v92 = *(unsigned __int8 *)(v90 + 1);
      if ( *(_BYTE *)(v90 + 1) )
      {
        if ( v92 != 1 )
          goto LABEL_134;
        v188 = v90 + 712;
        v189 = *(_DWORD *)(v90 + 768);
        if ( v189 >> 17 < 0x3FFE && (unsigned __int16)v189 >> 1 == (v189 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v90 + 712));
          *(_DWORD *)(v188 + 56) &= 0x10001u;
          v32 = v226;
          goto LABEL_134;
        }
        if ( (unsigned __int16)v189 >> 1 != 0 || (v189 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v90 + 712), 0);
          v32 = v226;
          goto LABEL_134;
        }
      }
      else
      {
        v93 = *(_QWORD *)(v90 + 8);
        if ( v93 )
        {
          v94 = *(_BYTE *)(v90 + 3);
          if ( v94 )
          {
            while ( 1 )
            {
              v95 = (_BYTE *)(v93 + 2LL * (unsigned __int8)v92);
              if ( *v95 == 11 )
              {
                v96 = v95[1];
                if ( v96 )
                  break;
              }
              LOBYTE(v92) = v92 + 1;
              if ( (unsigned __int8)v92 >= v94 )
                goto LABEL_133;
            }
            v95[1] = v96 - 1;
LABEL_134:
            v62 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
            if ( v62 && !*(_BYTE *)(p_DeferredContext + 11) )
            {
              NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
              *(_QWORD *)(p_DeferredContext + 16) = 1LL;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v91);
LABEL_138:
            v97 = (ULONG_PTR)IfBlock->RefCountTracker;
            if ( v97 - 2 > 1 )
            {
              if ( v97 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v97, 0LL);
              if ( *(_BYTE *)(v97 + 2) <= 7u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v97, 7uLL);
              v98 = *(unsigned __int8 *)(v97 + 1);
              if ( *(_BYTE *)(v97 + 1) )
              {
                if ( v98 != 1 )
                  goto LABEL_147;
                v190 = v97 + 456;
                v191 = *(_DWORD *)(v97 + 512);
                if ( v191 >> 17 < 0x3FFE && (unsigned __int16)v191 >> 1 == (v191 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v97 + 456));
                  *(_DWORD *)(v190 + 56) &= 0x10001u;
                  goto LABEL_147;
                }
                if ( (unsigned __int16)v191 >> 1 != 0 || (v191 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v97 + 456), 0);
                  goto LABEL_147;
                }
              }
              else
              {
                v99 = *(_QWORD *)(v97 + 8);
                if ( v99 )
                {
                  v100 = *(_BYTE *)(v97 + 3);
                  if ( v100 )
                  {
                    while ( 1 )
                    {
                      v101 = (_BYTE *)(v99 + 2LL * (unsigned __int8)v98);
                      if ( *v101 == 7 )
                      {
                        v113 = v101[1];
                        if ( v113 )
                          break;
                      }
                      LOBYTE(v98) = v98 + 1;
                      if ( (unsigned __int8)v98 >= v100 )
                        goto LABEL_146;
                    }
                    v101[1] = v113 - 1;
                    goto LABEL_147;
                  }
                }
LABEL_146:
                if ( _bittestandreset((signed __int32 *)(v97 + 16), 7u) )
                  goto LABEL_147;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v97, 7uLL);
            }
LABEL_147:
            v62 = IfBlock->Ref-- == 1;
            if ( !v62 )
            {
LABEL_148:
              v19 = v214;
              v29 = v222;
              goto LABEL_149;
            }
            ndisIfDeleteStackEntries(IfBlock);
            v192 = IfBlock->Link.Flink;
            if ( v192->Blink == &IfBlock->Link )
            {
              v193 = IfBlock->Link.Blink;
              if ( v193->Flink == &IfBlock->Link )
              {
                v193->Flink = v192;
                v192->Blink = v193;
                v194 = IfBlock->ProviderLink.Flink;
                if ( v194->Blink == &IfBlock->ProviderLink )
                {
                  v195 = IfBlock->ProviderLink.Blink;
                  if ( v195->Flink == &IfBlock->ProviderLink )
                  {
                    v195->Flink = v194;
                    v194->Blink = v195;
                    v196 = IfBlock->NetworkLink.Flink;
                    if ( v196->Blink == &IfBlock->NetworkLink )
                    {
                      v197 = IfBlock->NetworkLink.Blink;
                      if ( v197->Flink == &IfBlock->NetworkLink )
                      {
                        v197->Flink = v196;
                        v196->Blink = v197;
                        NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                        ndisIfFreeIfIndex(IfBlock->ifIndex);
                        v198 = (ULONG_PTR)IfBlock->RefCountTracker;
                        --ndisInterfaceCount;
                        NdisFreeRefCount(v198);
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
LABEL_419:
            __fastfail(3u);
          }
        }
LABEL_133:
        if ( _bittestandreset((signed __int32 *)(v90 + 16), 0xBu) )
          goto LABEL_134;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v90, 0xBuLL);
    }
LABEL_149:
    v102 = (ULONG_PTR)v32[89].Blink;
    v29 = v29->Flink;
    v222 = v29;
    if ( v102 - 2 > 1 )
    {
      if ( v102 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v102, 0LL);
      if ( *(_BYTE *)(v102 + 2) <= 6u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v102, 6uLL);
      if ( *(_BYTE *)(v102 + 1) )
      {
        if ( *(_BYTE *)(v102 + 1) != 1 )
          goto LABEL_158;
        v202 = v102 + 392;
        v203 = *(_DWORD *)(v102 + 448);
        if ( v203 >> 17 < 0x3FFE && (unsigned __int16)v203 >> 1 == (v203 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v102 + 392));
          *(_DWORD *)(v202 + 56) &= 0x10001u;
          v19 = v214;
          goto LABEL_158;
        }
        if ( (unsigned __int16)v203 >> 1 != 0 || (v203 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v102 + 392), 0);
          v19 = v214;
          goto LABEL_158;
        }
      }
      else
      {
        v103 = *(_QWORD *)(v102 + 8);
        if ( v103 )
        {
          v104 = *(_BYTE *)(v102 + 3);
          v105 = 0;
          if ( v104 )
          {
            while ( 1 )
            {
              v106 = (_BYTE *)(v103 + 2LL * v105);
              if ( *v106 == 6 )
              {
                v114 = v106[1];
                if ( v114 )
                  break;
              }
              if ( ++v105 >= v104 )
                goto LABEL_157;
            }
            v106[1] = v114 - 1;
            goto LABEL_158;
          }
        }
LABEL_157:
        if ( _bittestandreset((signed __int32 *)(v102 + 16), 6u) )
          goto LABEL_158;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v102, 6uLL);
    }
LABEL_158:
    v62 = LODWORD(v32[81].Blink)-- == 1;
    if ( v62 )
    {
      ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v32);
      v204 = v239->Flink;
      if ( v239->Flink->Blink != v239 )
        goto LABEL_419;
      v205 = v239->Blink;
      if ( v205->Flink != v239 )
        goto LABEL_419;
      v205->Flink = v204;
      v204->Blink = v205;
      v206 = v32[78].Flink;
      if ( v206->Blink != &v32[78] )
        goto LABEL_419;
      v207 = v32[78].Blink;
      if ( v207->Flink != &v32[78] )
        goto LABEL_419;
      v207->Flink = v206;
      v206->Blink = v207;
      v208 = v32[79].Flink;
      if ( v208->Blink != &v32[79] )
        goto LABEL_419;
      v209 = v32[79].Blink;
      if ( v209->Flink != &v32[79] )
        goto LABEL_419;
      v209->Flink = v208;
      v208->Blink = v209;
      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v32[85].Blink);
      ndisIfFreeIfIndex(HIDWORD(v32->Flink));
      v210 = (ULONG_PTR)v32[89].Blink;
      --ndisInterfaceCount;
      NdisFreeRefCount(v210);
      v211 = v32[89].Flink;
      v32[89].Blink = 0LL;
      if ( v211 )
      {
        ExFreePoolWithTag(v211, 0);
        v32[89].Flink = 0LL;
      }
      v212 = v32[80].Flink;
      if ( v212 )
      {
        ExFreePoolWithTag(v212, 0);
        v32[80].Flink = 0LL;
        v32[80].Blink = 0LL;
      }
      v213 = (struct _KEVENT *)v32[86].Blink;
      if ( v213 )
        KeSetEvent(v213, 0, 0);
      ExFreePoolWithTag(v32, 0);
      v19 = v214;
    }
    v24 = v224;
    v5 = v230;
    v30 = v229;
  }
  while ( v29 != &ndisIfList );
LABEL_161:
  *((_DWORD *)v2 + 22) = v30;
  if ( v30 > v5 )
    LODWORD(v1) = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v19);
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      22,
      15,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)v2,
      (char)v1);
  }
  return (unsigned int)v1;
}

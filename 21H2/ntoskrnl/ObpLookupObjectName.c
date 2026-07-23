/*
 * XREFs of ObpLookupObjectName @ 0x14070B300
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x140229730 (ObpLockDirectoryExclusive.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x14026A550 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x14027E740 (PsGetCurrentProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     ObpLockDirectoryShared @ 0x1402AAF3C (ObpLockDirectoryShared.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     SeAccessCheckWithHint @ 0x1403589C0 (SeAccessCheckWithHint.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140361380 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1405F222C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1405FA0B4 (ObpInsertDirectoryEntry.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     ObCheckCreateObjectAccess @ 0x140657CB0 (ObCheckCreateObjectAccess.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpIsUnsecureName @ 0x1408DC4D4 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1408DD290 (ObpCheckTraverseAccess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __m128i *a2,
        int a3,
        struct _OBJECT_TYPE *a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *Object,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r12
  __int16 v14; // bx
  struct _OBJECT_TYPE *v15; // rdi
  __int64 v17; // r9
  unsigned __int8 v18; // cl
  int v19; // r13d
  bool v20; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  PVOID v23; // r13
  int result; // eax
  ACCESS_MASK OriginalDesiredAccess; // ecx
  struct _DMA_ADAPTER *v26; // rbx
  NTSTATUS v27; // eax
  PVOID v28; // rcx
  __m128i v29; // xmm0
  __int64 v30; // rdx
  struct _DMA_ADAPTER *v31; // rdi
  int PermanentSiloContext; // eax
  struct _OBJECT_TYPE *v33; // r14
  __m128i *v34; // r15
  __int64 v35; // rcx
  char v36; // si
  struct _KTHREAD *CurrentThread; // r15
  struct _DMA_ADAPTER *v38; // r14
  __int64 Process; // r13
  __int64 ProcessServerSilo; // rbx
  bool v41; // zf
  __int64 v42; // rcx
  bool v43; // di
  struct _DMA_ADAPTER *v44; // rax
  _DMA_OPERATIONS *DmaOperations; // rcx
  volatile signed __int32 *v46; // r13
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v48; // rcx
  volatile signed __int32 **v49; // rbx
  struct _KTHREAD *v50; // rax
  __m128i v51; // xmm0
  PVOID *v52; // rax
  PVOID *v53; // r13
  struct _DMA_ADAPTER *v54; // rsi
  __int64 v55; // r14
  struct _OBJECT_TYPE *v56; // rax
  __int64 (__fastcall *ParseProcedure)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rbx
  char *v58; // rsi
  NTSTATUS v59; // edx
  struct _KTHREAD *v60; // rax
  unsigned int v61; // ebx
  unsigned __int16 *v62; // rdi
  unsigned __int64 v63; // r11
  __int64 v64; // r9
  __int64 v65; // r10
  __int64 v66; // rax
  __int128 v67; // rt0
  unsigned int v68; // r10d
  int v69; // r10d
  int v70; // r9d
  int v71; // r10d
  __int64 v72; // rbx
  ULONG_PTR v73; // r12
  char v74; // r13
  unsigned __int16 v75; // ax
  __int64 v76; // rcx
  char *v77; // r14
  struct _KTHREAD *v78; // rax
  __int64 *v79; // rsi
  char *v80; // r11
  _QWORD *v81; // rbx
  char *v82; // rdi
  signed __int64 v83; // rbx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r9
  struct _DMA_ADAPTER *v86; // rcx
  struct _DMA_ADAPTER *v87; // rcx
  _DWORD *v88; // rsi
  int v89; // eax
  char *v90; // r14
  void *v91; // rax
  struct _KTHREAD *v92; // rcx
  ULONG_PTR v93; // rbx
  __int64 v94; // rax
  struct _KTHREAD *v95; // rax
  char v96; // r13
  char *v97; // r15
  struct _KTHREAD *v98; // rax
  char *v99; // rsi
  int v100; // r12d
  char *v101; // r9
  _QWORD *v102; // r11
  char *v103; // rdi
  signed __int64 v104; // r11
  unsigned __int16 v105; // bx
  unsigned __int16 v106; // cx
  unsigned __int16 v107; // ax
  __int16 v108; // r10
  struct _DMA_ADAPTER *v109; // rcx
  __int64 (__fastcall *v110)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rax
  struct _DMA_ADAPTER *v111; // r14
  struct _DMA_ADAPTER *v112; // rcx
  struct _DMA_ADAPTER *v113; // rcx
  NTSTATUS v114; // eax
  struct _DMA_ADAPTER *v115; // rsi
  __int16 *v116; // rax
  __int16 v117; // cx
  int v118; // eax
  signed __int32 v119; // ebx
  signed __int32 v120; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v122; // rcx
  ULONG_PTR v123; // rdi
  void *v124; // rcx
  struct _DMA_ADAPTER *v125; // rcx
  ACCESS_MASK v126; // edx
  char *v127; // r14
  KPROCESSOR_MODE v128; // r13
  int v129; // edi
  struct _DMA_ADAPTER *v130; // rcx
  NTSTATUS v131; // ecx
  unsigned int v132; // esi
  PVOID PoolWithTag; // rdi
  char *v134; // rbx
  void *v135; // rcx
  __int16 v136; // ax
  _QWORD *Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v138; // [rsp+60h] [rbp-A0h] BYREF
  bool v139; // [rsp+64h] [rbp-9Ch]
  char v140; // [rsp+65h] [rbp-9Bh]
  PADAPTER_OBJECT v141; // [rsp+68h] [rbp-98h]
  __m128i v142; // [rsp+70h] [rbp-90h] BYREF
  PVOID v143; // [rsp+80h] [rbp-80h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  unsigned int v146; // [rsp+98h] [rbp-68h]
  int v147; // [rsp+9Ch] [rbp-64h]
  bool v148; // [rsp+A0h] [rbp-60h] BYREF
  char v149[3]; // [rsp+A1h] [rbp-5Fh] BYREF
  PVOID TokenInformation; // [rsp+A4h] [rbp-5Ch] BYREF
  int v151; // [rsp+ACh] [rbp-54h]
  int v152; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v154[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v155; // [rsp+D4h] [rbp-2Ch]
  __int64 v156; // [rsp+D8h] [rbp-28h]
  int v157; // [rsp+E0h] [rbp-20h] BYREF
  int v158; // [rsp+E4h] [rbp-1Ch] BYREF
  struct _DMA_ADAPTER *v159; // [rsp+E8h] [rbp-18h] BYREF
  struct _DMA_ADAPTER *v160; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v161; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v162; // [rsp+100h] [rbp+0h] BYREF
  PVOID v163; // [rsp+108h] [rbp+8h]
  int v164; // [rsp+110h] [rbp+10h] BYREF
  PVOID v165; // [rsp+118h] [rbp+18h]
  _QWORD v166[2]; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+130h] [rbp+30h]
  __m128i *v168; // [rsp+138h] [rbp+38h]
  ULONG_PTR v169; // [rsp+140h] [rbp+40h]
  __int128 v170; // [rsp+148h] [rbp+48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+158h] [rbp+58h] BYREF
  char v172; // [rsp+1D0h] [rbp+D0h]
  __m128i *v173; // [rsp+1D8h] [rbp+D8h]
  int v174; // [rsp+1E0h] [rbp+E0h]

  v174 = a3;
  v173 = a2;
  v13 = a11;
  v14 = a3;
  v152 = 64;
  DmaAdapter = 0LL;
  v15 = a4;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v154[1] = 0;
  v161 = 0LL;
  v166[0] = 0LL;
  v166[1] = 0LL;
  P = 0LL;
  v139 = 0;
  v172 = 0;
  v170 = 0LL;
  v142 = 0LL;
  if ( a12 )
    *a12 = 0;
  v41 = ObpCaseInsensitive == 0;
  v17 = a9;
  v138 = 0;
  v147 = 0;
  *a13 = 0LL;
  v154[0] = 16;
  v140 = 1;
  v143 = 0LL;
  v141 = 0LL;
  v155 = -1;
  v156 = a9;
  if ( !v41
    && (v15->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v174 = a3 | 0x40;
  }
  v18 = a5;
  v19 = 1;
  if ( (v14 & 0x400) == 0 )
    v19 = a5;
  v146 = v19;
  if ( !Object )
  {
    v20 = 0;
    v172 = 1;
    LODWORD(TokenInformation) = 0;
    v158 = 0;
    p_SubjectContext = 0LL;
    v157 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( (_BYTE)v19 )
    {
      if ( a10 == (struct _ACCESS_STATE *)-32LL )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = &a10->SubjectSecurityContext;
      }
      if ( (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SeMediumDaclSd,
                              8LL,
                              (__int64)p_SubjectContext,
                              0LL,
                              0x20000,
                              0,
                              0LL,
                              (__int64)RtlpRestrictedMapping,
                              v19,
                              (__int64)&v158,
                              (__int64)&v157) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v20 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v20 = 1;
        }
      }
    }
    else
    {
      v20 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
      SeReleaseSubjectContext(p_SubjectContext);
    v14 = v174;
    v41 = v20;
    a2 = v173;
    v15 = a4;
    v139 = !v41;
    v18 = a5;
    v17 = a9;
  }
  if ( !BugCheckParameter1 )
  {
    if ( !a2->m128i_i16[0] || *(_WORD *)a2->m128i_i64[1] != 92 )
      return -1073741765;
    v23 = 0LL;
    v159 = 0LL;
    PermanentSiloContext = PsGetPermanentSiloContext(v17, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v159);
    v31 = v159;
    if ( PermanentSiloContext < 0 )
      v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
    v159 = v31;
    DmaAdapter = v31;
    if ( v31 )
      ObfReferenceObject(v31);
    if ( v173->m128i_i16[0] == 2 )
    {
      if ( v31 )
      {
        v138 = ObReferenceObjectByPointer(v31, 0, a4, a5);
        if ( v138 >= 0 )
          *a13 = v31;
        HalPutDmaAdapter(v31);
        return v138;
      }
      else if ( Object )
      {
        result = ObReferenceObjectByPointer(Object, 0, a4, a5);
        if ( result >= 0 )
          *a13 = Object;
      }
      else
      {
        return -1073741811;
      }
      return result;
    }
    v33 = a4;
    v34 = v173;
    v168 = v173;
    v169 = 0LL;
    p_Name = &a4->Name;
    SeSetLearningModeObjectInformation((__int64)v166);
    while ( 1 )
    {
      v35 = v34->m128i_i64[1];
      if ( (v35 & 7) != 0 )
        goto LABEL_95;
      v30 = v34->m128i_u16[0];
      v36 = (v14 & 0x800) != 0;
      if ( (unsigned __int16)v30 < 8u || *(_QWORD *)v35 != ObpDosDevicesShortNamePrefix )
      {
        if ( (_WORD)v30 == 6 && *(_DWORD *)v35 == *(_DWORD *)L"\\??" && *(_WORD *)(v35 + 4) == 63 )
        {
          v52 = (PVOID *)ObpReferenceDeviceMap(v36);
          P = v52;
          v53 = v52;
          if ( v52 && *v52 )
          {
            v138 = ObReferenceObjectByPointer(*v52, 0, v33, a5);
            if ( v138 >= 0 )
            {
              if ( a12 && v155 != -1 )
                *a12 = v155;
              *a13 = *v53;
            }
            ObfDereferenceDeviceMap(v53);
            HalPutDmaAdapter(v31);
            SeClearLearningModeObjectInformation();
            return v138;
          }
LABEL_94:
          v23 = 0LL;
        }
LABEL_95:
        v142 = *v34;
        goto LABEL_96;
      }
      if ( v33 == (struct _OBJECT_TYPE *)IoFileObjectType )
        v36 |= ObpUseSystemDeviceMap((__int64)v34);
      CurrentThread = KeGetCurrentThread();
      v38 = (struct _DMA_ADAPTER *)v23;
      P = v23;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v41 = ProcessServerSilo == PsGetCurrentServerSilo();
      v42 = 1LL;
      v43 = !v41;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v36 )
      {
        if ( !v41 )
          goto LABEL_74;
      }
      else
      {
        if ( !v41 )
          goto LABEL_74;
        v44 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx((__int64)CurrentThread, 1, v149, &v148, &v164, 0LL);
        v38 = v44;
        if ( v44 )
        {
          DmaOperations = v44[1].DmaOperations;
          if ( (_DWORD)DmaOperations == 999 )
          {
            v42 = (unsigned __int64)DmaOperations >> 32;
            if ( !(_DWORD)v42 )
            {
              v43 = 1;
              goto LABEL_74;
            }
          }
          v162 = 0LL;
          if ( SeGetTokenDeviceMap((__int64)v44, &v162) >= 0 )
          {
            P = (PVOID)v162;
            if ( v162 )
            {
              v46 = v162;
              _InterlockedIncrement(v162 + 6);
              goto LABEL_83;
            }
          }
        }
      }
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
      {
        v46 = (volatile signed __int32 *)P;
        goto LABEL_83;
      }
LABEL_74:
      CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals(v42, v30);
      v48 = KeGetCurrentThread();
      v49 = CurrentServerSiloGlobals;
      --v48->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
      if ( v43 )
        v46 = *v49;
      else
        v46 = *(volatile signed __int32 **)(Process + 1416);
      P = (PVOID)v46;
      if ( v46 )
        _InterlockedIncrement(v46 + 6);
      ExReleasePushLockEx((ULONG_PTR)(v49 + 15), 0LL);
      v50 = KeGetCurrentThread();
      v41 = v50->SpecialApcDisable++ == -1;
      if ( v41 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
        KiCheckForKernelApcDelivery();
LABEL_83:
      if ( v38 )
        HalPutDmaAdapter(v38);
      if ( !v46 || !*(_QWORD *)v46 )
      {
        v31 = DmaAdapter;
        v34 = v173;
        goto LABEL_94;
      }
      v51 = *v173;
      v142.m128i_i64[0] = v173->m128i_i64[0];
      v142.m128i_i16[0] -= 8;
      v142.m128i_i16[1] -= 8;
      v142.m128i_i64[1] = _mm_srli_si128(v51, 8).m128i_u64[0] + 8;
      v31 = *(struct _DMA_ADAPTER **)v46;
      v23 = 0LL;
LABEL_96:
      v143 = v31;
LABEL_97:
      while ( 1 )
      {
        v54 = v31 - 3;
        v55 = (unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8);
        v56 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v55 ^ LOBYTE(v31[-2].DmaOperations)];
        ParseProcedure = (__int64 (__fastcall *)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))v56->TypeInfo.ParseProcedure;
        if ( ParseProcedure )
          break;
        if ( v56 != ObpDirectoryObjectType )
          goto LABEL_333;
        v58 = (char *)v31;
        v163 = v31;
        if ( v142.m128i_i16[0] && *(_WORD *)v142.m128i_i64[1] == 92 )
        {
          v142.m128i_i64[1] += 2LL;
          v142.m128i_i16[0] -= 2;
          v142.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v142; v142.m128i_i16[0]; v142.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v142.m128i_i64[1] == 92 )
            break;
          v142.m128i_i64[1] += 2LL;
        }
        v142.m128i_i16[1] -= LOWORD(Src[0]) - v142.m128i_i16[0];
        LOWORD(Src[0]) -= v142.m128i_i16[0];
        if ( !LOWORD(Src[0]) )
        {
LABEL_332:
          v138 = -1073741773;
          goto LABEL_307;
        }
        if ( !(_BYTE)v146
          || (HIDWORD(v30) = HIDWORD(a10), (a10->Flags & 1) != 0)
          || (v140 = ObpCheckTraverseAccess(v31, a10, a10)) != 0 )
        {
          if ( v142.m128i_i16[0] )
            goto LABEL_117;
          if ( !Object )
          {
            *(_DWORD *)(v13 + 32) = -1145368012;
            v60 = KeGetCurrentThread();
            --v60->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&v31[18].DmaOperations, 0LL);
            *(_DWORD *)(v13 + 32) = -572714444;
            ObfReferenceObject(v31);
            *(_QWORD *)v13 = v31;
            *(_WORD *)(v13 + 30) = 1;
            goto LABEL_117;
          }
        }
        else
        {
          v59 = v147;
          if ( v147 >= 0 )
            v59 = -1073741772;
          v147 = v59;
          if ( v142.m128i_i16[0] || !Object )
            goto LABEL_331;
        }
        ObpLockDirectoryExclusive(v13, v31);
LABEL_117:
        HIDWORD(TokenInformation) = LOWORD(Src[0]);
        v61 = LOWORD(Src[0]) >> 1;
        v165 = v31;
        v62 = (unsigned __int16 *)Src[1];
        v151 = v174 & 0x40;
        if ( v61 < 4 )
        {
          v68 = (unsigned int)v23;
        }
        else
        {
          v63 = (unsigned __int64)v23;
          do
          {
            v64 = *(_QWORD *)v62;
            if ( (*(_QWORD *)v62 & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v65 = 4LL;
              do
              {
                v66 = (unsigned __int16)v64;
                if ( (unsigned __int16)v64 >= 0x61u )
                {
                  if ( (unsigned __int16)v64 <= 0x7Au )
                    v66 = (unsigned int)(unsigned __int16)v64 - 32;
                  else
                    v66 = NLS_UPCASE(v64);
                }
                *(_QWORD *)&v67 = v64;
                *((_QWORD *)&v67 + 1) = v66;
                v64 = v67 >> 16;
                --v65;
              }
              while ( v65 );
            }
            else
            {
              v64 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            v62 += 4;
            v61 -= 4;
            v63 = v64 + (v63 >> 1) + 3 * v63;
          }
          while ( v61 >= 4 );
          v58 = (char *)v163;
          v68 = v63 + HIDWORD(v63);
        }
        if ( v61 )
        {
          while ( 1 )
          {
            v30 = *v62++;
            --v61;
            v69 = (v68 >> 1) + 3 * v68;
            if ( (unsigned int)v30 < 0x61 )
              goto LABEL_135;
            if ( (unsigned int)v30 <= 0x7A )
              break;
            v70 = NLS_UPCASE(v30);
            v68 = v70 + v71;
LABEL_136:
            if ( !v61 )
              goto LABEL_137;
          }
          v69 -= 32;
LABEL_135:
          v68 = v30 + v69;
          goto LABEL_136;
        }
LABEL_137:
        v72 = a11;
        v73 = (ULONG_PTR)(v58 + 296);
        LODWORD(v30) = (3134165325u * (unsigned __int64)v68) >> 32;
        v74 = *(_BYTE *)(a11 + 30);
        *(_DWORD *)(a11 + 24) = v68;
        v75 = v68 % 0x25;
        v76 = v75;
        *(_WORD *)(a11 + 28) = v75;
        v77 = &v58[8 * v75];
        if ( !v74 )
        {
          *(_DWORD *)(a11 + 32) = -1145368012;
          v78 = KeGetCurrentThread();
          --v78->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v58 + 296), 0LL);
          *(_DWORD *)(a11 + 32) = -572714444;
          ObfReferenceObject(v58);
          *(_QWORD *)a11 = v58;
          *(_WORD *)(a11 + 30) = 1;
        }
        v79 = *(__int64 **)v77;
        if ( !*(_QWORD *)v77 )
        {
LABEL_171:
          if ( !v74 )
          {
            ExReleasePushLockEx(v73, 0LL);
            v87 = *(struct _DMA_ADAPTER **)v72;
            *(_DWORD *)(v72 + 32) = -286387660;
            HalPutDmaAdapter(v87);
            *(_QWORD *)v72 = 0LL;
            *(_WORD *)(v72 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v31 = 0LL;
          goto LABEL_179;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v79 + 4) == *(_DWORD *)(a11 + 24) )
          {
            v76 = SHIDWORD(TokenInformation);
            v30 = v79[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v79[1] - 48 + 26) & 3];
            if ( HIDWORD(TokenInformation) == *(unsigned __int16 *)(v30 + 8) )
              break;
          }
LABEL_169:
          v77 = (char *)v79;
          v79 = (__int64 *)*v79;
          if ( !v79 )
          {
            v72 = a11;
            goto LABEL_171;
          }
        }
        v80 = (char *)Src[1];
        v81 = *(_QWORD **)(v30 + 16);
        v82 = (char *)Src[1] + SHIDWORD(TokenInformation);
        if ( HIDWORD(TokenInformation) >= 8 )
        {
          do
          {
            if ( *(_QWORD *)v80 != *v81 )
              break;
            v41 = (_DWORD)v76 == 8;
            v76 = (unsigned int)(v76 - 8);
            if ( v41 )
              goto LABEL_164;
            v80 += 8;
            ++v81;
          }
          while ( (unsigned int)v76 >= 8 );
        }
        if ( v80 < v82 )
        {
          if ( v151 )
          {
            v83 = (char *)v81 - v80;
            while ( 1 )
            {
              v84 = *(unsigned __int16 *)v80;
              v85 = *(unsigned __int16 *)&v80[v83];
              if ( (_WORD)v84 != (_WORD)v85 )
              {
                if ( (unsigned int)v84 >= 0x61 )
                {
                  if ( (unsigned int)v84 > 0x7A )
                  {
                    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v84 >= 0xC0u )
                    {
                      v30 = v84 & 0xF;
                      v76 = (unsigned int)v30
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (((unsigned __int8)v84 >> 4)
                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * (v84 >> 8))));
                      LOWORD(v84) = *(_WORD *)(Nls844UnicodeUpcaseTable + 2 * v76) + v84;
                    }
                  }
                  else
                  {
                    LOWORD(v84) = v84 - 32;
                  }
                }
                if ( (unsigned int)v85 >= 0x61 )
                {
                  if ( (unsigned int)v85 > 0x7A )
                  {
                    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v85 >= 0xC0u )
                    {
                      v30 = v85 & 0xF;
                      v76 = (unsigned int)v30
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (((unsigned __int8)v85 >> 4)
                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * (v85 >> 8))));
                      LOWORD(v85) = *(_WORD *)(Nls844UnicodeUpcaseTable + 2 * v76) + v85;
                    }
                  }
                  else
                  {
                    LOWORD(v85) = v85 - 32;
                  }
                }
                if ( (_WORD)v84 != (_WORD)v85 )
                  break;
              }
              v80 += 2;
              if ( v80 >= v82 )
                goto LABEL_164;
            }
          }
          else
          {
            while ( *(_WORD *)v80 == *(_WORD *)v81 )
            {
              v80 += 2;
              v81 = (_QWORD *)((char *)v81 + 2);
              if ( v80 >= v82 )
                goto LABEL_164;
            }
          }
          goto LABEL_169;
        }
LABEL_164:
        v31 = (struct _DMA_ADAPTER *)v79[1];
        ObfReferenceObject(v31);
        if ( v74 )
        {
          v72 = a11;
        }
        else
        {
          ExReleasePushLockEx(v73, 0LL);
          v72 = a11;
          v86 = *(struct _DMA_ADAPTER **)a11;
          *(_DWORD *)(a11 + 32) = -286387660;
          HalPutDmaAdapter(v86);
          *(_QWORD *)a11 = 0LL;
          *(_WORD *)(a11 + 30) = 0;
          KeLeaveCriticalRegion();
          v77 = 0LL;
        }
        v76 = *(_QWORD *)(v72 + 8);
        if ( v76 )
          HalPutDmaAdapter((PADAPTER_OBJECT)v76);
        *(_QWORD *)(v72 + 8) = v31;
        *(_QWORD *)(v72 + 16) = v77;
        if ( v31 )
          goto LABEL_226;
LABEL_179:
        if ( !v172 )
          goto LABEL_226;
        v88 = v165;
        while ( 2 )
        {
          v89 = v88[84];
          v90 = 0LL;
          if ( (v89 & 4) != 0 )
          {
            if ( (v89 & 0x10) != 0 && !v139 )
              goto LABEL_224;
            v90 = (char *)*((_QWORD *)v88 + 39);
          }
          else
          {
            v91 = PsGetCurrentServerSiloGlobals(v76, v30);
            v92 = KeGetCurrentThread();
            --v92->SpecialApcDisable;
            v93 = (ULONG_PTR)v91 + 120;
            ExAcquirePushLockSharedEx((ULONG_PTR)v91 + 120, 0LL);
            v94 = *((_QWORD *)v88 + 38);
            if ( v94 )
              v90 = *(char **)(v94 + 8);
            ExReleasePushLockEx(v93, 0LL);
            v95 = KeGetCurrentThread();
            v41 = v95->SpecialApcDisable++ == -1;
            if ( v41 && ($C459BD0D405E8E46662177FB3D0A143F *)v95->ApcState.ApcListHead[0].Flink != &v95->152 )
              KiCheckForKernelApcDelivery();
            v72 = a11;
          }
          if ( !v90 )
            goto LABEL_224;
          v96 = *(_BYTE *)(v72 + 30);
          if ( v96 )
          {
            ObfReferenceObject(v88);
            ObpUnlockDirectory((__int64)v88, v72);
            ObpLockDirectoryShared(v72, v90);
            HalPutDmaAdapter((PADAPTER_OBJECT)v88);
            v96 = *(_BYTE *)(v72 + 30);
          }
          v97 = &v90[8 * *(unsigned __int16 *)(v72 + 28)];
          if ( !v96 )
          {
            *(_DWORD *)(v72 + 32) = -1145368012;
            v98 = KeGetCurrentThread();
            --v98->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v90 + 296), 0LL);
            *(_DWORD *)(v72 + 32) = -572714444;
            ObfReferenceObject(v90);
            *(_QWORD *)v72 = v90;
            *(_WORD *)(v72 + 30) = 1;
          }
          v99 = *(char **)v97;
          if ( !*(_QWORD *)v97 )
          {
LABEL_217:
            if ( !v96 )
              ObpUnlockDirectory((__int64)v90, v72);
            v31 = 0LL;
            v88 = v90;
            goto LABEL_225;
          }
          v100 = *(_DWORD *)(v72 + 24);
          while ( 2 )
          {
            if ( *((_DWORD *)v99 + 4) != v100
              || (v30 = SHIDWORD(TokenInformation),
                  v76 = *((_QWORD *)v99 + 1)
                      - 48LL
                      - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v99 + 1) - 48LL + 26) & 3],
                  HIDWORD(TokenInformation) != *(unsigned __int16 *)(v76 + 8)) )
            {
LABEL_215:
              v97 = v99;
              v99 = *(char **)v99;
              if ( !v99 )
              {
                v72 = a11;
                goto LABEL_217;
              }
              continue;
            }
            break;
          }
          v101 = (char *)Src[1];
          v102 = *(_QWORD **)(v76 + 16);
          v103 = (char *)Src[1] + SHIDWORD(TokenInformation);
          if ( HIDWORD(TokenInformation) >= 8 )
          {
            do
            {
              if ( *(_QWORD *)v101 != *v102 )
                break;
              v41 = (_DWORD)v30 == 8;
              v30 = (unsigned int)(v30 - 8);
              if ( v41 )
                goto LABEL_210;
              v101 += 8;
              ++v102;
            }
            while ( (unsigned int)v30 >= 8 );
          }
          if ( v101 < v103 )
          {
            if ( v151 )
            {
              v104 = (char *)v102 - v101;
              while ( 1 )
              {
                v105 = *(_WORD *)v101;
                v106 = *(_WORD *)&v101[v104];
                if ( *(_WORD *)v101 != v106 )
                {
                  NLS_UPCASE(v106);
                  v107 = NLS_UPCASE(v105);
                  if ( v107 != v108 )
                    break;
                }
                v101 += 2;
                if ( v101 >= v103 )
                  goto LABEL_210;
              }
            }
            else
            {
              while ( *(_WORD *)v101 == *(_WORD *)v102 )
              {
                v101 += 2;
                v102 = (_QWORD *)((char *)v102 + 2);
                if ( v101 >= v103 )
                  goto LABEL_210;
              }
            }
            goto LABEL_215;
          }
LABEL_210:
          v31 = (struct _DMA_ADAPTER *)*((_QWORD *)v99 + 1);
          ObfReferenceObject(v31);
          if ( v96 )
          {
            v72 = a11;
          }
          else
          {
            ExReleasePushLockEx((ULONG_PTR)(v90 + 296), 0LL);
            v72 = a11;
            v109 = *(struct _DMA_ADAPTER **)a11;
            *(_DWORD *)(a11 + 32) = -286387660;
            HalPutDmaAdapter(v109);
            *(_QWORD *)a11 = 0LL;
            *(_WORD *)(a11 + 30) = 0;
            KeLeaveCriticalRegion();
            v97 = 0LL;
          }
          v76 = *(_QWORD *)(v72 + 8);
          if ( v76 )
            HalPutDmaAdapter((PADAPTER_OBJECT)v76);
          *(_QWORD *)(v72 + 8) = v31;
          *(_QWORD *)(v72 + 16) = v97;
LABEL_224:
          v88 = v90;
          if ( !v31 )
          {
LABEL_225:
            if ( !v90 )
              break;
            continue;
          }
          break;
        }
LABEL_226:
        v143 = v31;
        if ( !v140 )
        {
          if ( !v31 )
          {
LABEL_290:
            if ( v142.m128i_i16[0] )
            {
              v13 = a11;
              v138 = -1073741766;
              goto LABEL_307;
            }
            if ( !Object )
            {
              v13 = a11;
              v138 = -1073741772;
              goto LABEL_307;
            }
            v126 = 4;
            v127 = (char *)v163;
            v128 = v146;
            if ( a4 == ObpDirectoryObjectType )
              v126 = 8;
            LOBYTE(Tag) = 0;
            if ( !ObCheckCreateObjectAccess((__int64)v163, v126, a10, (__int64)Src, (__int64)Tag, v146, &v138) )
            {
              v13 = a11;
              v111 = v141;
              if ( v138 >= 0 )
                v138 = -1073741772;
              goto LABEL_308;
            }
            v129 = *((_DWORD *)v127 + 85);
            if ( v129 != -1
              && (a4 == MmSectionObjectType || a4 == ObpSymbolicLinkObjectType)
              && v129 != (unsigned int)PsGetCurrentProcessSessionId()
              && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v128)
              && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
            {
              v13 = a11;
LABEL_306:
              v138 = -1073741790;
              goto LABEL_307;
            }
            v132 = LOWORD(Src[0]);
            v13 = a11;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
            if ( PoolWithTag )
            {
              if ( ObpInsertDirectoryEntry(v127, Object, a11) )
              {
                memmove(PoolWithTag, Src[1], v132);
                v134 = &Object[-ObpInfoMaskToOffset[*(Object - 22) & 3] - 48];
                v135 = (void *)*((_QWORD *)v134 + 2);
                if ( v135 )
                  ExFreePoolWithTag(v135, 0);
                v136 = (__int16)Src[0];
                v111 = v141;
                *((_WORD *)v134 + 4) = Src[0];
                *((_WORD *)v134 + 5) = v136;
                *((_QWORD *)v134 + 2) = PoolWithTag;
                v143 = Object;
                v138 = 0;
                goto LABEL_312;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            v138 = -1073741670;
            goto LABEL_307;
          }
          v59 = v147;
          v13 = a11;
LABEL_331:
          v111 = v141;
LABEL_337:
          v138 = v59;
LABEL_338:
          if ( v59 < 0 )
          {
LABEL_308:
            if ( *(_BYTE *)(v13 + 30) )
              ObpUnlockDirectory(*(_QWORD *)v13, v13);
            v130 = *(struct _DMA_ADAPTER **)(v13 + 8);
            if ( v130 )
            {
              HalPutDmaAdapter(v130);
              *(_QWORD *)(v13 + 8) = 0LL;
            }
          }
LABEL_312:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( v111 )
            HalPutDmaAdapter(v111);
          SeClearLearningModeObjectInformation();
          v131 = v138;
          if ( v138 < 0 )
          {
            *a13 = 0LL;
            return v131;
          }
          else
          {
            if ( a12 )
            {
              if ( v155 != -1 )
                *a12 = v155;
            }
            *a13 = v143;
            return v131;
          }
        }
        if ( !v31 )
          goto LABEL_290;
        v13 = a11;
        v23 = 0LL;
        if ( !v142.m128i_i16[0] )
        {
          v110 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v31[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8)] + 144);
          if ( !v110 || (v30 = (__int64)ObpParseSymbolicLinkEx, v110 != ObpParseSymbolicLinkEx) && Object )
          {
            v13 = a11;
            v59 = ObReferenceObjectByPointer(v31, 0, a4, a5);
            v111 = v141;
            v138 = v59;
            goto LABEL_338;
          }
        }
      }
      if ( ParseProcedure == ObpParseSymbolicLinkEx )
        goto LABEL_240;
      if ( Object )
      {
LABEL_333:
        v138 = -1073741788;
LABEL_307:
        v111 = v141;
        goto LABEL_308;
      }
      ObfReferenceObject(v31);
      if ( *(_BYTE *)(v13 + 30) )
      {
        ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
        v112 = *(struct _DMA_ADAPTER **)v13;
        *(_DWORD *)(v13 + 32) = -286387660;
        HalPutDmaAdapter(v112);
        *(_QWORD *)v13 = v23;
        *(_WORD *)(v13 + 30) = 0;
        KeLeaveCriticalRegion();
      }
      v113 = *(struct _DMA_ADAPTER **)(v13 + 8);
      if ( v113 )
      {
        HalPutDmaAdapter(v113);
        *(_QWORD *)(v13 + 8) = v23;
      }
      v31 = (struct _DMA_ADAPTER *)v143;
LABEL_240:
      v34 = v173;
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v55 ^ LOBYTE(v54[1].DmaOperations)] + 67) & 1) != 0 )
        v114 = ParseProcedure(
                 &v31->Version,
                 a4,
                 (struct _SECURITY_SUBJECT_CONTEXT *)a10,
                 v146,
                 v174,
                 (__int64)v173,
                 (unsigned __int16 *)&v142,
                 a6,
                 a7,
                 (__int64)v154,
                 (unsigned __int16 **)&v143);
      else
        v114 = ((__int64 (__fastcall *)(struct _DMA_ADAPTER *, struct _OBJECT_TYPE *, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, PVOID *))ParseProcedure)(
                 v31,
                 a4,
                 a10,
                 v146,
                 v174,
                 v173,
                 &v142,
                 a6,
                 a7,
                 &v143);
      v59 = v114;
      v138 = v114;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
      {
        HalPutDmaAdapter(v54 + 3);
        v59 = v138;
      }
      if ( v59 < 0 )
        goto LABEL_307;
      if ( v59 != 260 )
      {
        v115 = v141;
        if ( v59 != 872 )
          v115 = (struct _DMA_ADAPTER *)v143;
        v141 = v115;
      }
      if ( (v155 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
        goto LABEL_306;
      if ( v59 != 260 && v59 != 872 && v59 != 280 )
      {
        if ( !v143 )
          v59 = -1073741772;
        v111 = 0LL;
        goto LABEL_337;
      }
      v14 = v174;
      if ( (v174 & 0x1000) != 0 && v59 != 872 )
      {
        v138 = -1073740533;
        goto LABEL_307;
      }
      if ( !--v152 )
      {
        v138 = -1073741772;
        goto LABEL_307;
      }
      if ( !v173->m128i_i16[0] )
        goto LABEL_332;
      HalPutDmaAdapter(DmaAdapter);
      v116 = (__int16 *)v173->m128i_i64[1];
      DmaAdapter = 0LL;
      v117 = *v116;
      if ( v138 == 280 )
      {
        if ( v117 == 92 )
          goto LABEL_332;
        v31 = (struct _DMA_ADAPTER *)v143;
        DmaAdapter = (PADAPTER_OBJECT)v143;
        v141 = 0LL;
      }
      else
      {
        if ( v117 != 92 )
          goto LABEL_332;
        if ( v138 == 872 )
        {
          v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
        }
        else
        {
          v160 = 0LL;
          v118 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v160);
          v31 = v160;
          if ( v118 < 0 )
            v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
          v160 = v31;
        }
        DmaAdapter = v31;
        ObfReferenceObject(v31);
      }
      v23 = P;
      if ( P )
      {
        v119 = *((_DWORD *)P + 6);
        if ( v119 == 1 )
        {
LABEL_272:
          ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v23 + 8));
          v122 = KeGetCurrentThread();
          --v122->SpecialApcDisable;
          v123 = (ULONG_PTR)ServerSiloGlobals + 120;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
          v119 = _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 6, 0xFFFFFFFF);
          if ( v119 != 1 )
          {
            ExReleasePushLockEx(v123, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_277;
          }
          *(_QWORD *)(*(_QWORD *)v23 + 304LL) = 0LL;
          ExReleasePushLockEx(v123, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v124 = (void *)*((_QWORD *)v23 + 8);
          if ( v124 )
            ObfDereferenceObjectWithTag(v124, 0x6D44624Fu);
          ZwClose(*((HANDLE *)v23 + 2));
          HalPutDmaAdapter(*(PADAPTER_OBJECT *)v23);
          ExFreePoolWithTag(v23, 0x6D44624Fu);
          v31 = DmaAdapter;
          v23 = 0LL;
          v14 = v174;
          P = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v120 = _InterlockedCompareExchange((volatile signed __int32 *)v23 + 6, v119 - 1, v119);
            v41 = v119 == v120;
            v119 = v120;
            if ( v41 )
              break;
            if ( v120 == 1 )
              goto LABEL_272;
          }
LABEL_277:
          if ( v119 <= 0 )
            __fastfail(0xEu);
          v31 = DmaAdapter;
          v23 = 0LL;
          v14 = v174;
          P = 0LL;
        }
      }
      if ( *(_BYTE *)(v13 + 30) )
        ObpUnlockDirectory(*(_QWORD *)v13, v13);
      v125 = *(struct _DMA_ADAPTER **)(v13 + 8);
      v33 = a4;
      if ( v125 )
      {
        HalPutDmaAdapter(v125);
        *(_QWORD *)(v13 + 8) = v23;
      }
    }
  }
  v23 = 0LL;
  LODWORD(Tag) = 1953261124;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0LL,
             0LL,
             v18,
             Tag,
             &DmaAdapter,
             0LL,
             (unsigned __int64)&v161);
  v138 = result;
  if ( result < 0 )
    return result;
  if ( HIDWORD(v161) )
  {
    OriginalDesiredAccess = a10->OriginalDesiredAccess;
    v155 &= HIDWORD(v161);
    if ( (v155 & OriginalDesiredAccess) != OriginalDesiredAccess )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741790;
    }
  }
  v26 = DmaAdapter;
  if ( v173->m128i_i16[0] )
  {
    if ( *(_WORD *)v173->m128i_i64[1] == 92
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] != IoFileObjectType )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741765;
    }
LABEL_39:
    v29 = *v173;
    v143 = DmaAdapter;
    v168 = v173;
    v142 = v29;
    p_Name = &v15->Name;
    v169 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)v166);
    v31 = (struct _DMA_ADAPTER *)v143;
    goto LABEL_97;
  }
  if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] != ObpDirectoryObjectType )
    goto LABEL_39;
  v27 = ObReferenceObjectByPointer(DmaAdapter, 0, v15, a5);
  v28 = v143;
  v138 = v27;
  if ( v27 >= 0 )
    v28 = v26;
  v143 = v28;
  HalPutDmaAdapter(v26);
  *a13 = v143;
  return v138;
}

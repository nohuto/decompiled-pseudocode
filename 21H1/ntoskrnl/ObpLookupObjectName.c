/*
 * XREFs of ObpLookupObjectName @ 0x140627610
 * Callers:
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x1402064E0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 *     ObpLockDirectoryShared @ 0x14025B128 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x14025B2D4 (ObpUnlockDirectory.c)
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402C1180 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ObReferenceObjectByPointer @ 0x1402DE590 (ObReferenceObjectByPointer.c)
 *     ObpLockDirectoryExclusive @ 0x1402FCD98 (ObpLockDirectoryExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405EBDA0 (PsReferenceImpersonationTokenEx.c)
 *     ObCheckCreateObjectAccess @ 0x1406170B0 (ObCheckCreateObjectAccess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C1EA8 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1406C8FC4 (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x1408D7A24 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1408D87C0 (ObpCheckTraverseAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        ULONG_PTR a1,
        __m128i *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        struct _DMA_ADAPTER *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        struct _DMA_ADAPTER **a13)
{
  __int64 v13; // r12
  __int16 v14; // r15
  __m128i *v15; // r13
  bool v17; // zf
  struct _DMA_ADAPTER **v18; // rdi
  __int64 v19; // rcx
  struct _DMA_ADAPTER *v20; // rbx
  int v21; // r14d
  bool v22; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PADAPTER_OBJECT v24; // r14
  __int64 v25; // rcx
  int v26; // edi
  PADAPTER_OBJECT v27; // rdi
  __int64 v28; // rsi
  struct _OBJECT_TYPE *v29; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  struct _DMA_ADAPTER *v31; // rcx
  NTSTATUS v32; // eax
  NTSTATUS v33; // edx
  NTSTATUS v34; // ecx
  NTSTATUS result; // eax
  PADAPTER_OBJECT v36; // r13
  signed int v37; // esi
  unsigned __int16 *v38; // rbx
  unsigned int v39; // r11d
  unsigned __int64 v40; // r10
  __int64 v41; // r9
  unsigned int v42; // r9d
  unsigned int v43; // edx
  int v44; // r9d
  char v45; // di
  unsigned __int16 v46; // ax
  unsigned __int16 *v47; // r15
  ULONG_PTR p_DmaOperations; // r13
  struct _KTHREAD *v49; // rax
  __int64 *v50; // r9
  struct _DMA_ADAPTER *v51; // rcx
  _DWORD *v52; // rdi
  int v53; // eax
  char *v54; // rsi
  void *v55; // rax
  struct _KTHREAD *v56; // rcx
  ULONG_PTR v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  _DWORD *v62; // r9
  struct _KTHREAD *v63; // rax
  char v64; // r12
  __int64 v65; // rbx
  char *v66; // r15
  struct _KTHREAD *v67; // rax
  __int64 *v68; // r14
  int v69; // r13d
  __int64 v70; // rcx
  unsigned int v71; // edx
  char *v72; // r8
  _QWORD *v73; // r11
  char *v74; // rsi
  signed __int64 v75; // r11
  unsigned __int64 v76; // r10
  unsigned __int64 v77; // rbx
  struct _DMA_ADAPTER *v78; // rcx
  struct _DMA_ADAPTER *v79; // rcx
  __int64 (__usercall *v80)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  struct _DMA_ADAPTER *v81; // rbx
  __m128i v82; // xmm0
  struct _DMA_ADAPTER *v83; // rcx
  __int16 *v84; // rax
  __int16 v85; // cx
  PVOID v86; // rdi
  signed __int32 v87; // ebx
  signed __int32 v88; // eax
  struct _DMA_ADAPTER *v89; // rcx
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v91; // r13
  __int64 Process; // rsi
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  volatile signed __int32 *v94; // rdi
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v96; // rcx
  volatile signed __int32 **v97; // rdi
  ULONG_PTR v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  _DWORD *v102; // r9
  struct _KTHREAD *v103; // rax
  __m128i v104; // xmm0
  unsigned int v105; // edx
  __int64 v106; // rcx
  char *v107; // r10
  _QWORD *v108; // rdi
  char *v109; // r11
  signed __int64 v110; // rdi
  unsigned __int16 v111; // bx
  unsigned __int16 v112; // cx
  __int64 v113; // r12
  struct _DMA_ADAPTER *v114; // rcx
  struct _DMA_ADAPTER *v115; // rcx
  struct _KTHREAD *v116; // rax
  struct _DMA_ADAPTER *v117; // rcx
  struct _DMA_ADAPTER *v118; // rax
  PVOID *v119; // rax
  PVOID *v120; // rdi
  ACCESS_MASK v121; // eax
  _DWORD *v122; // r14
  KPROCESSOR_MODE v123; // si
  int v124; // edi
  unsigned int v125; // esi
  PVOID PoolWithTag; // rdi
  char *v127; // rbx
  void *v128; // rcx
  __int16 v129; // ax
  unsigned __int16 v130; // ax
  __int16 v131; // r9
  int v132; // r10d
  int v133; // r9d
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS v135; // eax
  struct _DMA_ADAPTER *v136; // rcx
  bool v137; // r15
  __int64 v138; // rdi
  __int64 v139; // rax
  __int128 v140; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v142; // rcx
  ULONG_PTR v143; // rdi
  PADAPTER_OBJECT *v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  PADAPTER_OBJECT v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v154; // [rsp+60h] [rbp-A0h] BYREF
  char v155; // [rsp+64h] [rbp-9Ch]
  char v156; // [rsp+65h] [rbp-9Bh]
  char v157; // [rsp+66h] [rbp-9Ah]
  __m128i v158; // [rsp+70h] [rbp-90h] BYREF
  struct _DMA_ADAPTER *v159; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v162; // [rsp+98h] [rbp-68h]
  unsigned int v163; // [rsp+9Ch] [rbp-64h]
  int v164; // [rsp+A0h] [rbp-60h]
  bool v165; // [rsp+A4h] [rbp-5Ch] BYREF
  char v166[3]; // [rsp+A5h] [rbp-5Bh] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  int v168; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  PADAPTER_OBJECT v170; // [rsp+D0h] [rbp-30h]
  _WORD v171[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v172; // [rsp+DCh] [rbp-24h]
  __int64 v173; // [rsp+E0h] [rbp-20h]
  int v174; // [rsp+E8h] [rbp-18h] BYREF
  int v175; // [rsp+ECh] [rbp-14h] BYREF
  struct _DMA_ADAPTER *v176; // [rsp+F0h] [rbp-10h] BYREF
  struct _DMA_ADAPTER *v177; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v178; // [rsp+100h] [rbp+0h]
  __int64 v179; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v180; // [rsp+110h] [rbp+10h] BYREF
  int v181; // [rsp+118h] [rbp+18h] BYREF
  PVOID Object; // [rsp+120h] [rbp+20h]
  _QWORD v183[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v184; // [rsp+138h] [rbp+38h]
  __m128i *v185; // [rsp+140h] [rbp+40h]
  ULONG_PTR v186; // [rsp+148h] [rbp+48h]
  __int128 v187; // [rsp+150h] [rbp+50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp+60h] BYREF
  bool v189; // [rsp+1D0h] [rbp+D0h]
  int v191; // [rsp+1E0h] [rbp+E0h]

  v191 = a3;
  v13 = a11;
  v14 = a3;
  v168 = 64;
  DmaAdapter = 0LL;
  v15 = a2;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v171[1] = 0;
  v179 = 0LL;
  v183[0] = 0LL;
  v183[1] = 0LL;
  P = 0LL;
  v189 = 0;
  v156 = 0;
  v187 = 0LL;
  v158 = 0LL;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a13;
  v171[0] = 16;
  v19 = a9;
  v173 = a9;
  *a13 = 0LL;
  v154 = 0;
  v164 = 0;
  v157 = 1;
  v159 = 0LL;
  v170 = 0LL;
  v172 = -1;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v191 = a3 | 0x40;
  }
  v20 = a8;
  v21 = 1;
  if ( (v14 & 0x400) == 0 )
    v21 = a5;
  v163 = v21;
  if ( !a8 )
  {
    v22 = 0;
    v156 = 1;
    LODWORD(TokenInformation) = 0;
    p_SubjectContext = 0LL;
    v175 = 0;
    v174 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( (_BYTE)v21 )
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
                              v21,
                              (__int64)&v175,
                              (__int64)&v174) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v22 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v22 = 1;
        }
      }
      v19 = a9;
    }
    else
    {
      v22 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v19 = a9;
    }
    v189 = !v22;
    v18 = a13;
    v20 = 0LL;
  }
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x746C6644u, (__int64)&DmaAdapter, 0LL, (__int64)&v179);
    v154 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v179) )
    {
      v172 &= HIDWORD(v179);
      if ( (v172 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
    }
    v81 = DmaAdapter;
    if ( v15->m128i_i16[0] )
    {
      if ( *(_WORD *)v15->m128i_i64[1] == 92
        && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] != IoFileObjectType )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741765;
      }
    }
    else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] == ObpDirectoryObjectType )
    {
      v135 = ObReferenceObjectByPointer(DmaAdapter, 0, (POBJECT_TYPE)a4, a5);
      v136 = v159;
      v154 = v135;
      if ( v135 >= 0 )
        v136 = v81;
      v159 = v136;
      HalPutDmaAdapter(v81);
      *v18 = v159;
      return v154;
    }
    v82 = *v15;
    v159 = DmaAdapter;
    v158 = v82;
    v184 = a4 + 16;
    v185 = v15;
    v186 = a1;
    SeSetLearningModeObjectInformation((__int64)v183);
    v24 = v159;
LABEL_35:
    while ( 2 )
    {
      v27 = v24 - 3;
      v28 = (unsigned __int8)((unsigned __int16)((_WORD)v24 - 48) >> 8);
      v29 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v28 ^ LOBYTE(v24[-2].DmaOperations)];
      ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v29->TypeInfo.ParseProcedure;
      if ( ParseProcedure )
      {
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          if ( a8 )
          {
LABEL_348:
            v154 = -1073741788;
            goto LABEL_157;
          }
          ObfReferenceObject(v24);
          if ( *(_BYTE *)(v13 + 30) )
          {
            ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
            v117 = *(struct _DMA_ADAPTER **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            HalPutDmaAdapter(v117);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v31 = *(struct _DMA_ADAPTER **)(v13 + 8);
          if ( v31 )
          {
            HalPutDmaAdapter(v31);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          v24 = v159;
        }
        v15 = a2;
        v14 = v191;
        if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v28 ^ LOBYTE(v27[1].DmaOperations)] + 67) & 1) != 0 )
          v32 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, _WORD *, struct _DMA_ADAPTER **))ParseProcedure)(
                  v24,
                  a4,
                  a10,
                  v163,
                  v191,
                  a2,
                  &v158,
                  a6,
                  a7,
                  v171,
                  &v159);
        else
          v32 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, struct _DMA_ADAPTER **))ParseProcedure)(
                  v24,
                  a4,
                  a10,
                  v163,
                  v191,
                  a2,
                  &v158,
                  a6,
                  a7,
                  &v159);
        v33 = v32;
        v154 = v32;
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          HalPutDmaAdapter(v27 + 3);
          v33 = v154;
        }
        if ( v33 < 0 )
        {
LABEL_157:
          if ( *(_BYTE *)(v13 + 30) )
            ObpUnlockDirectory(*(_QWORD *)v13, v13);
          v83 = *(struct _DMA_ADAPTER **)(v13 + 8);
          if ( v83 )
          {
            HalPutDmaAdapter(v83);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          goto LABEL_59;
        }
        if ( v33 != 260 && v33 != 872 )
          v170 = v159;
        if ( (v172 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
        {
LABEL_345:
          v154 = -1073741790;
          goto LABEL_157;
        }
        if ( v33 != 260 && v33 != 280 && v33 != 872 )
        {
          if ( !v159 )
          {
            v33 = -1073741772;
            v154 = -1073741772;
          }
          v170 = 0LL;
LABEL_58:
          if ( v33 < 0 )
            goto LABEL_157;
LABEL_59:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( v170 )
            HalPutDmaAdapter(v170);
          SeClearLearningModeObjectInformation();
          v34 = v154;
          if ( v154 < 0 )
          {
            *a13 = 0LL;
          }
          else
          {
            if ( a12 )
            {
              if ( v172 != -1 )
                *a12 = v172;
            }
            *a13 = v159;
          }
          return v34;
        }
        if ( (v191 & 0x1000) != 0 && v33 != 872 )
        {
          v154 = -1073740533;
          goto LABEL_157;
        }
        if ( !--v168 )
        {
LABEL_156:
          v154 = -1073741772;
          goto LABEL_157;
        }
        if ( a2->m128i_i16[0] )
        {
          HalPutDmaAdapter(DmaAdapter);
          v84 = (__int16 *)a2->m128i_i64[1];
          DmaAdapter = 0LL;
          v85 = *v84;
          if ( v154 == 280 )
          {
            if ( v85 != 92 )
            {
              v24 = v159;
              DmaAdapter = v159;
              v170 = 0LL;
              goto LABEL_171;
            }
          }
          else if ( v85 == 92 )
          {
            if ( v154 == 872 )
            {
              v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
            }
            else
            {
              v177 = 0LL;
              if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v177) >= 0 )
              {
                v24 = v177;
              }
              else
              {
                v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
                v177 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
              }
            }
            DmaAdapter = v24;
            ObfReferenceObject(v24);
LABEL_171:
            v86 = P;
            if ( !P )
            {
LABEL_176:
              if ( *(_BYTE *)(v13 + 30) )
                ObpUnlockDirectory(*(_QWORD *)v13, v13);
              v89 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v89 )
              {
                HalPutDmaAdapter(v89);
                *(_QWORD *)(v13 + 8) = 0LL;
              }
LABEL_29:
              v25 = v15->m128i_i64[1];
              if ( (v25 & 7) != 0 )
                goto LABEL_33;
              v26 = v14 & 0x800;
              if ( v15->m128i_i16[0] < 8u || *(_QWORD *)v25 != ObpDosDevicesShortNamePrefix )
              {
                if ( v15->m128i_i16[0] == 6 && *(_DWORD *)v25 == *(_DWORD *)L"\\??" && *(_WORD *)(v25 + 4) == 63 )
                {
                  v119 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
                  P = v119;
                  v120 = v119;
                  if ( v119 )
                  {
                    if ( *v119 )
                    {
                      v154 = ObReferenceObjectByPointer(*v119, 0, (POBJECT_TYPE)a4, a5);
                      if ( v154 >= 0 )
                      {
                        if ( a12 && v172 != -1 )
                          *a12 = v172;
                        *a13 = (struct _DMA_ADAPTER *)*v120;
                      }
                      ObfDereferenceDeviceMap(v120);
                      HalPutDmaAdapter(v24);
                      SeClearLearningModeObjectInformation();
                      return v154;
                    }
                  }
                }
                goto LABEL_33;
              }
              CurrentThread = KeGetCurrentThread();
              P = 0LL;
              v91 = 0LL;
              Process = (__int64)CurrentThread->Process;
              ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(Process);
              v137 = ProcessServerSilo != PsGetCurrentServerSilo();
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v26 )
              {
                if ( v137 )
                  goto LABEL_191;
                v94 = 0LL;
              }
              else
              {
                if ( v137 )
                  goto LABEL_191;
                v118 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                                (__int64)CurrentThread,
                                                1,
                                                v166,
                                                &v165,
                                                &v181,
                                                0LL);
                v91 = v118;
                if ( !v118 )
                  goto LABEL_312;
                if ( v118[1].DmaOperations == (_DMA_OPERATIONS *)999 )
                {
                  v137 = 1;
                  goto LABEL_191;
                }
                v180 = 0LL;
                if ( (int)SeGetTokenDeviceMap(v118, &v180) >= 0 )
                {
                  v94 = v180;
                  P = (PVOID)v180;
                  if ( v180 )
                  {
                    _InterlockedIncrement(v180 + 6);
LABEL_198:
                    if ( v91 )
                      HalPutDmaAdapter(v91);
                    if ( v94 && *(_QWORD *)v94 )
                    {
                      v104 = *a2;
                      v158.m128i_i64[0] = a2->m128i_i64[0];
                      v158.m128i_i16[0] -= 8;
                      v158.m128i_i64[1] = _mm_srli_si128(v104, 8).m128i_u64[0] + 8;
                      v158.m128i_i16[1] -= 8;
                      v24 = *(PADAPTER_OBJECT *)v94;
                      goto LABEL_34;
                    }
                    v24 = DmaAdapter;
                    v15 = a2;
LABEL_33:
                    v158 = *v15;
LABEL_34:
                    v159 = v24;
                    continue;
                  }
                }
                else
                {
LABEL_312:
                  v94 = 0LL;
                }
              }
              if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
                goto LABEL_198;
LABEL_191:
              CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
              v96 = KeGetCurrentThread();
              v97 = CurrentServerSiloGlobals;
              --v96->SpecialApcDisable;
              v98 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
              ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
              if ( v137 )
                v94 = *v97;
              else
                v94 = *(volatile signed __int32 **)(Process + 1416);
              P = (PVOID)v94;
              if ( v94 )
                _InterlockedIncrement(v94 + 6);
              ExReleasePushLockEx(v98, 0LL);
              v103 = KeGetCurrentThread();
              v17 = v103->SpecialApcDisable++ == -1;
              if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v103->ApcState.ApcListHead[0].Flink != &v103->152 )
                KiCheckForKernelApcDelivery(v100, v99, v101, v102);
              goto LABEL_198;
            }
            v87 = *((_DWORD *)P + 6);
            if ( v87 == 1 )
            {
LABEL_335:
              ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v86 + 8));
              v142 = KeGetCurrentThread();
              --v142->SpecialApcDisable;
              v143 = (ULONG_PTR)ServerSiloGlobals + 120;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
              v144 = (PADAPTER_OBJECT *)P;
              v87 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
              if ( v87 == 1 )
              {
                *(_QWORD *)&(*v144)[19].Version = 0LL;
                ExReleasePushLockEx(v143, 0LL);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v145, v146, v147);
                v148 = v144[8];
                if ( v148 )
                  ObfDereferenceObjectWithTag(v148, 0x6D44624Fu);
                ZwClose(v144[2]);
                HalPutDmaAdapter(*v144);
                ExFreePoolWithTag(v144, 0x6D44624Fu);
                goto LABEL_175;
              }
              ExReleasePushLockEx(v143, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v149, v150, v151);
            }
            else
            {
              while ( 1 )
              {
                v88 = _InterlockedCompareExchange((volatile signed __int32 *)v86 + 6, v87 - 1, v87);
                v17 = v87 == v88;
                v87 = v88;
                if ( v17 )
                  break;
                if ( v88 == 1 )
                  goto LABEL_335;
              }
            }
            if ( v87 <= 0 )
              __fastfail(0xEu);
LABEL_175:
            v24 = DmaAdapter;
            P = 0LL;
            goto LABEL_176;
          }
        }
LABEL_289:
        v154 = -1073741773;
        goto LABEL_157;
      }
      break;
    }
    if ( v29 != ObpDirectoryObjectType )
      goto LABEL_348;
    v36 = v24;
    v178 = v24;
    if ( v158.m128i_i16[0] && *(_WORD *)v158.m128i_i64[1] == 92 )
    {
      v158.m128i_i64[1] += 2LL;
      v158.m128i_i16[0] -= 2;
      v158.m128i_i16[1] -= 2;
    }
    for ( *(__m128i *)Src = v158; v158.m128i_i16[0]; v158.m128i_i16[0] -= 2 )
    {
      if ( *(_WORD *)v158.m128i_i64[1] == 92 )
        break;
      v158.m128i_i64[1] += 2LL;
    }
    v158.m128i_i16[1] -= LOWORD(Src[0]) - v158.m128i_i16[0];
    LOWORD(Src[0]) -= v158.m128i_i16[0];
    if ( !LOWORD(Src[0]) )
      goto LABEL_289;
    if ( !(_BYTE)v163 || (a10->Flags & 1) != 0 || (v157 = ObpCheckTraverseAccess(v24, a10, a10)) != 0 )
    {
      if ( v158.m128i_i16[0] )
        goto LABEL_83;
      if ( !a8 )
      {
        *(_DWORD *)(v13 + 32) = -1145368012;
        v116 = KeGetCurrentThread();
        --v116->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v24[18].DmaOperations, 0LL);
        *(_DWORD *)(v13 + 32) = -572714444;
        ObfReferenceObject(v24);
        *(_QWORD *)v13 = v24;
        *(_WORD *)(v13 + 30) = 1;
        goto LABEL_83;
      }
    }
    else
    {
      v33 = v164;
      if ( v164 >= 0 )
        v33 = -1073741772;
      v164 = v33;
      if ( v158.m128i_i16[0] || !a8 )
      {
LABEL_318:
        v154 = v33;
        goto LABEL_58;
      }
    }
    ObpLockDirectoryExclusive(v13, v24);
LABEL_83:
    v37 = LOWORD(Src[0]);
    v38 = (unsigned __int16 *)Src[1];
    v39 = LOWORD(Src[0]) >> 1;
    Object = v24;
    HIDWORD(TokenInformation) = v191 & 0x40;
    v162 = LOWORD(Src[0]);
    if ( v39 < 4 )
    {
      v42 = 0;
    }
    else
    {
      v40 = 0LL;
      do
      {
        v41 = *(_QWORD *)v38;
        if ( (*(_QWORD *)v38 & 0xFF80FF80FF80FF80uLL) != 0 )
        {
          v138 = 4LL;
          do
          {
            v139 = (unsigned __int16)v41;
            if ( (unsigned __int16)v41 >= 0x61u )
            {
              if ( (unsigned __int16)v41 <= 0x7Au )
                v139 = (unsigned int)(unsigned __int16)v41 - 32;
              else
                v139 = NLS_UPCASE(v41);
            }
            *(_QWORD *)&v140 = v41;
            *((_QWORD *)&v140 + 1) = v139;
            v41 = v140 >> 16;
            --v138;
          }
          while ( v138 );
        }
        else
        {
          v41 &= 0xFFDFFFDFFFDFFFDFuLL;
        }
        v38 += 4;
        v39 -= 4;
        v40 = v41 + (v40 >> 1) + 3 * v40;
      }
      while ( v39 >= 4 );
      v37 = v162;
      v36 = v24;
      v42 = v40 + HIDWORD(v40);
    }
    if ( !v39 )
    {
LABEL_95:
      v45 = *(_BYTE *)(v13 + 30);
      *(_DWORD *)(v13 + 24) = v42;
      v155 = v45;
      v46 = v42 % 0x25;
      *(_WORD *)(v13 + 28) = v46;
      v47 = &v36->Version + 4 * v46;
      p_DmaOperations = (ULONG_PTR)&v36[18].DmaOperations;
      if ( !v45 )
      {
        *(_DWORD *)(v13 + 32) = -1145368012;
        v49 = KeGetCurrentThread();
        --v49->KernelApcDisable;
        ExAcquirePushLockSharedEx(p_DmaOperations, 0LL);
        *(_DWORD *)(v13 + 32) = -572714444;
        ObfReferenceObject(v24);
        *(_QWORD *)v13 = v24;
        *(_WORD *)(v13 + 30) = 1;
      }
      v50 = *(__int64 **)v47;
      if ( !*(_QWORD *)v47 )
        goto LABEL_101;
      while ( 1 )
      {
        if ( *((_DWORD *)v50 + 4) == *(_DWORD *)(v13 + 24) )
        {
          v70 = v50[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v50[1] - 48 + 26) & 3];
          v71 = v37;
          if ( v37 == *(unsigned __int16 *)(v70 + 8) )
          {
            v72 = (char *)Src[1];
            v73 = *(_QWORD **)(v70 + 16);
            v74 = (char *)Src[1] + v37;
            if ( v162 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v72 != *v73 )
                  break;
                v71 -= 8;
                if ( !v71 )
                  goto LABEL_137;
                v72 += 8;
                ++v73;
              }
              while ( v71 >= 8 );
            }
            if ( v72 >= v74 )
            {
LABEL_137:
              v24 = (PADAPTER_OBJECT)v50[1];
              ObfReferenceObject(v24);
              if ( !v155 )
              {
                ExReleasePushLockEx(p_DmaOperations, 0LL);
                v78 = *(struct _DMA_ADAPTER **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                HalPutDmaAdapter(v78);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
                v47 = 0LL;
              }
              v79 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v79 )
                HalPutDmaAdapter(v79);
              *(_QWORD *)(v13 + 8) = v24;
              *(_QWORD *)(v13 + 16) = v47;
              if ( !v24 )
                goto LABEL_104;
LABEL_142:
              v159 = v24;
              if ( v157 )
              {
                if ( !v24 )
                  goto LABEL_154;
                if ( !v158.m128i_i16[0] )
                {
                  v80 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v24[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v24 - 48) >> 8)] + 144);
                  if ( !v80 || a8 && v80 != ObpParseSymbolicLinkEx )
                  {
                    v33 = ObReferenceObjectByPointer(v24, 0, (POBJECT_TYPE)a4, a5);
                    v154 = v33;
                    goto LABEL_58;
                  }
                }
                goto LABEL_35;
              }
              if ( v24 )
              {
                v33 = v164;
                goto LABEL_318;
              }
LABEL_154:
              if ( v158.m128i_i16[0] )
              {
                v154 = -1073741766;
              }
              else
              {
                if ( !a8 )
                  goto LABEL_156;
                if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                  v121 = 8;
                else
                  v121 = 4;
                v122 = v178;
                v123 = v163;
                LOBYTE(Tag) = 0;
                if ( ObCheckCreateObjectAccess((__int64)v178, v121, a10, (__int64)Src, Tag, v163, &v154) )
                {
                  v124 = v122[85];
                  if ( v124 != -1
                    && ((POBJECT_TYPE)a4 == MmSectionObjectType || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                    && v124 != (unsigned int)PsGetCurrentProcessSessionId()
                    && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v123)
                    && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                  {
                    goto LABEL_345;
                  }
                  v125 = LOWORD(Src[0]);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                  if ( PoolWithTag )
                  {
                    if ( (unsigned __int8)ObpInsertDirectoryEntry(v122, a8) )
                    {
                      memmove(PoolWithTag, Src[1], v125);
                      v127 = (char *)&a8[-3] - ObpInfoMaskToOffset[BYTE2(a8[-2].DmaOperations) & 3];
                      v128 = (void *)*((_QWORD *)v127 + 2);
                      if ( v128 )
                        ExFreePoolWithTag(v128, 0);
                      v129 = (__int16)Src[0];
                      *((_WORD *)v127 + 4) = Src[0];
                      *((_WORD *)v127 + 5) = v129;
                      *((_QWORD *)v127 + 2) = PoolWithTag;
                      v159 = a8;
                      v154 = 0;
                      goto LABEL_59;
                    }
                    ExFreePoolWithTag(PoolWithTag, 0);
                  }
                  v154 = -1073741670;
                }
                else if ( v154 >= 0 )
                {
                  v154 = -1073741772;
                }
              }
              goto LABEL_157;
            }
            if ( HIDWORD(TokenInformation) )
            {
              v75 = (char *)v73 - v72;
              while ( 1 )
              {
                v76 = *(unsigned __int16 *)v72;
                v77 = *(unsigned __int16 *)&v72[v75];
                if ( (_WORD)v76 != (_WORD)v77 )
                {
                  if ( (unsigned int)v76 >= 0x61 )
                  {
                    if ( (unsigned int)v76 > 0x7A )
                    {
                      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v76 >= 0xC0u )
                        LOWORD(v76) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                               + 2
                                               * ((v76 & 0xF)
                                                + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((unsigned __int8)v76 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v76 >> 8))))))
                                    + v76;
                    }
                    else
                    {
                      LOWORD(v76) = v76 - 32;
                    }
                  }
                  if ( (unsigned int)v77 >= 0x61 )
                  {
                    if ( (unsigned int)v77 > 0x7A )
                    {
                      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v77 >= 0xC0u )
                        LOWORD(v77) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                               + 2
                                               * ((v77 & 0xF)
                                                + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((unsigned __int8)v77 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v77 >> 8))))))
                                    + v77;
                    }
                    else
                    {
                      LOWORD(v77) = v77 - 32;
                    }
                  }
                  if ( (_WORD)v76 != (_WORD)v77 )
                    break;
                }
                v72 += 2;
                if ( v72 >= v74 )
                  goto LABEL_137;
              }
            }
            else
            {
              while ( *(_WORD *)v72 == *(_WORD *)v73 )
              {
                v72 += 2;
                v73 = (_QWORD *)((char *)v73 + 2);
                if ( v72 >= v74 )
                  goto LABEL_137;
              }
            }
            v37 = v162;
          }
        }
        v47 = (unsigned __int16 *)v50;
        v50 = (__int64 *)*v50;
        if ( !v50 )
        {
          v45 = v155;
LABEL_101:
          if ( !v45 )
          {
            ExReleasePushLockEx(p_DmaOperations, 0LL);
            v51 = *(struct _DMA_ADAPTER **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            HalPutDmaAdapter(v51);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v24 = 0LL;
LABEL_104:
          if ( !v156 )
            goto LABEL_142;
          v52 = Object;
LABEL_106:
          v53 = v52[84];
          v54 = 0LL;
          if ( (v53 & 4) != 0 )
          {
            if ( (v53 & 0x10) != 0 && !v189 )
              goto LABEL_215;
            v54 = (char *)*((_QWORD *)v52 + 39);
          }
          else
          {
            v55 = PsGetCurrentServerSiloGlobals();
            v56 = KeGetCurrentThread();
            --v56->SpecialApcDisable;
            v57 = (ULONG_PTR)v55 + 120;
            ExAcquirePushLockSharedEx((ULONG_PTR)v55 + 120, 0LL);
            v58 = *((_QWORD *)v52 + 38);
            if ( v58 )
              v54 = *(char **)(v58 + 8);
            ExReleasePushLockEx(v57, 0LL);
            v63 = KeGetCurrentThread();
            v17 = v63->SpecialApcDisable++ == -1;
            if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v63->ApcState.ApcListHead[0].Flink != &v63->152 )
              KiCheckForKernelApcDelivery(v60, v59, v61, v62);
          }
          if ( !v54 )
            goto LABEL_215;
          v64 = *(_BYTE *)(v13 + 30);
          if ( v64 )
          {
            ObfReferenceObject(v52);
            v65 = a11;
            ObpUnlockDirectory((__int64)v52, a11);
            ObpLockDirectoryShared(a11, v54);
            HalPutDmaAdapter((PADAPTER_OBJECT)v52);
            v64 = *(_BYTE *)(a11 + 30);
          }
          else
          {
            v65 = a11;
          }
          v66 = &v54[8 * *(unsigned __int16 *)(v65 + 28)];
          if ( !v64 )
          {
            *(_DWORD *)(v65 + 32) = -1145368012;
            v67 = KeGetCurrentThread();
            --v67->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v54 + 296), 0LL);
            *(_DWORD *)(v65 + 32) = -572714444;
            ObfReferenceObject(v54);
            *(_QWORD *)v65 = v54;
            *(_WORD *)(v65 + 30) = 1;
          }
          v68 = *(__int64 **)v66;
          if ( !*(_QWORD *)v66 )
          {
LABEL_122:
            if ( !v64 )
              ObpUnlockDirectory((__int64)v54, v65);
            v24 = 0LL;
            v52 = v54;
            goto LABEL_125;
          }
          v69 = *(_DWORD *)(v65 + 24);
          while ( 1 )
          {
            if ( *((_DWORD *)v68 + 4) == v69 )
            {
              v105 = v162;
              v106 = v68[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v68[1] - 48 + 26) & 3];
              if ( v162 == *(unsigned __int16 *)(v106 + 8) )
              {
                v107 = (char *)Src[1];
                v108 = *(_QWORD **)(v106 + 16);
                v109 = (char *)Src[1] + (int)v162;
                if ( v162 >= 8 )
                {
                  do
                  {
                    if ( *(_QWORD *)v107 != *v108 )
                      break;
                    v105 -= 8;
                    if ( !v105 )
                      goto LABEL_210;
                    v107 += 8;
                    ++v108;
                  }
                  while ( v105 >= 8 );
                }
                if ( v107 >= v109 )
                {
LABEL_210:
                  v24 = (PADAPTER_OBJECT)v68[1];
                  ObfReferenceObject(v24);
                  if ( v64 )
                  {
                    v113 = a11;
                  }
                  else
                  {
                    ExReleasePushLockEx((ULONG_PTR)(v54 + 296), 0LL);
                    v113 = a11;
                    v114 = *(struct _DMA_ADAPTER **)a11;
                    *(_DWORD *)(a11 + 32) = -286387660;
                    HalPutDmaAdapter(v114);
                    *(_QWORD *)a11 = 0LL;
                    *(_WORD *)(a11 + 30) = 0;
                    KeLeaveCriticalRegion();
                    v66 = 0LL;
                  }
                  v115 = *(struct _DMA_ADAPTER **)(v113 + 8);
                  if ( v115 )
                    HalPutDmaAdapter(v115);
                  *(_QWORD *)(v113 + 8) = v24;
                  *(_QWORD *)(v113 + 16) = v66;
LABEL_215:
                  v52 = v54;
                  if ( v24 )
                  {
LABEL_216:
                    v13 = a11;
                    goto LABEL_142;
                  }
LABEL_125:
                  v13 = a11;
                  if ( !v54 )
                    goto LABEL_216;
                  goto LABEL_106;
                }
                if ( HIDWORD(TokenInformation) )
                {
                  v110 = (char *)v108 - v107;
                  while ( 1 )
                  {
                    v111 = *(_WORD *)v107;
                    v112 = *(_WORD *)&v107[v110];
                    if ( *(_WORD *)v107 != v112 )
                    {
                      NLS_UPCASE(v112);
                      v130 = NLS_UPCASE(v111);
                      if ( v130 != v131 )
                        break;
                    }
                    v107 += 2;
                    if ( v107 >= v109 )
                      goto LABEL_210;
                  }
                }
                else
                {
                  while ( *(_WORD *)v107 == *(_WORD *)v108 )
                  {
                    v107 += 2;
                    v108 = (_QWORD *)((char *)v108 + 2);
                    if ( v107 >= v109 )
                      goto LABEL_210;
                  }
                }
              }
            }
            v66 = (char *)v68;
            v68 = (__int64 *)*v68;
            if ( !v68 )
            {
              v65 = a11;
              goto LABEL_122;
            }
          }
        }
      }
    }
    while ( 1 )
    {
      v43 = *v38++;
      --v39;
      v44 = (v42 >> 1) + 3 * v42;
      if ( v43 >= 0x61 )
      {
        if ( v43 > 0x7A )
        {
          v132 = NLS_UPCASE(v43);
          v42 = v132 + v133;
          goto LABEL_94;
        }
        v44 -= 32;
      }
      v42 = v43 + v44;
LABEL_94:
      if ( !v39 )
        goto LABEL_95;
    }
  }
  if ( !v15->m128i_i16[0] || *(_WORD *)v15->m128i_i64[1] != 92 )
    return -1073741765;
  v176 = 0LL;
  if ( (int)PsGetPermanentSiloContext(v19, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v176) >= 0 )
  {
    v24 = v176;
  }
  else
  {
    v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
    v176 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
  }
  DmaAdapter = v24;
  if ( v24 )
    ObfReferenceObject(v24);
  if ( v15->m128i_i16[0] != 2 )
  {
    v185 = v15;
    v184 = a4 + 16;
    v186 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v183);
    goto LABEL_29;
  }
  if ( v24 )
  {
    v154 = ObReferenceObjectByPointer(v24, 0, (POBJECT_TYPE)a4, a5);
    if ( v154 >= 0 )
      *v18 = v24;
    HalPutDmaAdapter(v24);
    return v154;
  }
  else if ( v20 )
  {
    result = ObReferenceObjectByPointer(v20, 0, (POBJECT_TYPE)a4, a5);
    if ( result >= 0 )
      *v18 = v20;
  }
  else
  {
    return -1073741811;
  }
  return result;
}

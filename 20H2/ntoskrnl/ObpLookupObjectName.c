/*
 * XREFs of ObpLookupObjectName @ 0x140614C20
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140205DF0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ObpLockDirectoryShared @ 0x1402098F8 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x14020AEB8 (ObpUnlockDirectory.c)
 *     SeClearLearningModeObjectInformation @ 0x140210DE0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1402111B0 (SeSetLearningModeObjectInformation.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     SeAccessCheckWithHint @ 0x140223DC0 (SeAccessCheckWithHint.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x140245DF0 (PsGetCurrentProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByPointer @ 0x1402E15A0 (ObReferenceObjectByPointer.c)
 *     PsGetPermanentSiloContext @ 0x1402F1680 (PsGetPermanentSiloContext.c)
 *     ObpLockDirectoryExclusive @ 0x14030FB48 (ObpLockDirectoryExclusive.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x14060D780 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x14063ADE4 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x14063AFA0 (ObpReferenceDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     SeGetTokenDeviceMap @ 0x14063C438 (SeGetTokenDeviceMap.c)
 *     ObCheckCreateObjectAccess @ 0x1406BCF50 (ObCheckCreateObjectAccess.c)
 *     ObpInsertDirectoryEntry @ 0x1406BDFF4 (ObpInsertDirectoryEntry.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406CD440 (ObSetCurrentProcessDeviceMap.c)
 *     ObpIsUnsecureName @ 0x1408DEBB4 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1408DF970 (ObpCheckTraverseAccess.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __m128i *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        struct _DMA_ADAPTER *a8,
        __int64 a9,
        __int64 a10,
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
  char v20; // dl
  struct _DMA_ADAPTER *v21; // rbx
  int v22; // r14d
  bool v23; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PADAPTER_OBJECT v25; // r14
  __int64 v26; // rcx
  int v27; // edi
  PADAPTER_OBJECT v28; // rdi
  __int64 v29; // rsi
  struct _OBJECT_TYPE *v30; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  struct _DMA_ADAPTER *v32; // rcx
  NTSTATUS v33; // eax
  NTSTATUS v34; // edx
  NTSTATUS v35; // ecx
  int result; // eax
  PADAPTER_OBJECT v37; // r13
  signed int v38; // esi
  unsigned __int16 *v39; // rbx
  unsigned int v40; // r11d
  unsigned __int64 v41; // r10
  __int64 v42; // r9
  unsigned int v43; // r9d
  unsigned int v44; // edx
  int v45; // r9d
  char v46; // di
  unsigned __int16 v47; // ax
  unsigned __int16 *v48; // r15
  ULONG_PTR p_DmaOperations; // r13
  struct _KTHREAD *v50; // rax
  __int64 *v51; // r9
  struct _DMA_ADAPTER *v52; // rcx
  _DWORD *v53; // rdi
  int v54; // eax
  char *v55; // rsi
  void *v56; // rax
  struct _KTHREAD *v57; // rcx
  ULONG_PTR v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  struct _KTHREAD *v61; // rax
  char v62; // r12
  __int64 v63; // rbx
  char *v64; // r15
  struct _KTHREAD *v65; // rax
  __int64 *v66; // r14
  int v67; // r13d
  __int64 v68; // rcx
  unsigned int v69; // edx
  char *v70; // r8
  _QWORD *v71; // r11
  char *v72; // rsi
  signed __int64 v73; // r11
  unsigned __int64 v74; // r10
  unsigned __int64 v75; // rbx
  struct _DMA_ADAPTER *v76; // rcx
  struct _DMA_ADAPTER *v77; // rcx
  __int64 (__usercall *v78)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  struct _DMA_ADAPTER *v79; // rbx
  __m128i v80; // xmm0
  struct _DMA_ADAPTER *v81; // rcx
  __int16 *v82; // rax
  __int16 v83; // cx
  PVOID v84; // rdi
  signed __int32 v85; // ebx
  signed __int32 v86; // eax
  struct _DMA_ADAPTER *v87; // rcx
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v89; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v92; // rdi
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v94; // rcx
  volatile signed __int32 **v95; // rdi
  ULONG_PTR v96; // rbx
  __int64 v97; // rcx
  struct _KTHREAD *v98; // rax
  __m128i v99; // xmm0
  unsigned int v100; // edx
  __int64 v101; // rcx
  char *v102; // r10
  _QWORD *v103; // rdi
  char *v104; // r11
  signed __int64 v105; // rdi
  unsigned __int16 v106; // bx
  unsigned __int16 v107; // cx
  __int64 v108; // r12
  struct _DMA_ADAPTER *v109; // rcx
  struct _DMA_ADAPTER *v110; // rcx
  struct _KTHREAD *v111; // rax
  struct _DMA_ADAPTER *v112; // rcx
  struct _DMA_ADAPTER *v113; // rax
  PVOID *v114; // rax
  PVOID *v115; // rdi
  unsigned int v116; // eax
  _DWORD *v117; // r14
  KPROCESSOR_MODE v118; // si
  int v119; // edi
  unsigned int v120; // esi
  PVOID PoolWithTag; // rdi
  char *v122; // rbx
  void *v123; // rcx
  __int16 v124; // ax
  unsigned __int16 v125; // ax
  __int16 v126; // r9
  int v127; // r10d
  int v128; // r9d
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS v130; // eax
  struct _DMA_ADAPTER *v131; // rcx
  bool v132; // r15
  __int64 v133; // rdi
  __int64 v134; // rax
  __int128 v135; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v137; // rcx
  ULONG_PTR v138; // rdi
  PADAPTER_OBJECT *v139; // rsi
  PADAPTER_OBJECT v140; // rcx
  int Tag; // [rsp+20h] [rbp-E0h]
  int *v143; // [rsp+28h] [rbp-D8h]
  NTSTATUS v144; // [rsp+60h] [rbp-A0h] BYREF
  char v145; // [rsp+64h] [rbp-9Ch]
  char v146; // [rsp+65h] [rbp-9Bh]
  char v147; // [rsp+66h] [rbp-9Ah]
  __m128i v148; // [rsp+70h] [rbp-90h] BYREF
  struct _DMA_ADAPTER *v149; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v152; // [rsp+98h] [rbp-68h]
  unsigned int v153; // [rsp+9Ch] [rbp-64h]
  int v154; // [rsp+A0h] [rbp-60h] BYREF
  bool v155; // [rsp+A4h] [rbp-5Ch] BYREF
  char v156[3]; // [rsp+A5h] [rbp-5Bh] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  int v158; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  PADAPTER_OBJECT v160; // [rsp+D0h] [rbp-30h]
  _WORD v161[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v162; // [rsp+DCh] [rbp-24h]
  __int64 v163; // [rsp+E0h] [rbp-20h]
  int v164; // [rsp+E8h] [rbp-18h] BYREF
  int v165; // [rsp+ECh] [rbp-14h] BYREF
  struct _DMA_ADAPTER *v166; // [rsp+F0h] [rbp-10h] BYREF
  struct _DMA_ADAPTER *v167; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v168; // [rsp+100h] [rbp+0h]
  __int64 v169; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v170; // [rsp+110h] [rbp+10h] BYREF
  int v171; // [rsp+118h] [rbp+18h] BYREF
  PVOID Object; // [rsp+120h] [rbp+20h]
  _QWORD v173[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v174; // [rsp+138h] [rbp+38h]
  __m128i *v175; // [rsp+140h] [rbp+40h]
  ULONG_PTR v176; // [rsp+148h] [rbp+48h]
  __int128 v177; // [rsp+150h] [rbp+50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp+60h] BYREF
  bool v179; // [rsp+1D0h] [rbp+D0h]
  int v181; // [rsp+1E0h] [rbp+E0h]

  v181 = a3;
  v13 = a11;
  v14 = a3;
  v158 = 64;
  DmaAdapter = 0LL;
  v15 = a2;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v161[1] = 0;
  v169 = 0LL;
  v173[0] = 0LL;
  v173[1] = 0LL;
  P = 0LL;
  v179 = 0;
  v146 = 0;
  v177 = 0LL;
  v148 = 0LL;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a13;
  v161[0] = 16;
  v19 = a9;
  v163 = a9;
  *a13 = 0LL;
  v144 = 0;
  v154 = 0;
  v147 = 1;
  v149 = 0LL;
  v160 = 0LL;
  v162 = -1;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v181 = a3 | 0x40;
  }
  v20 = a5;
  v21 = a8;
  v22 = 1;
  if ( (v14 & 0x400) == 0 )
    v22 = a5;
  v153 = v22;
  if ( !a8 )
  {
    v23 = 0;
    v146 = 1;
    LODWORD(TokenInformation) = 0;
    p_SubjectContext = 0LL;
    v165 = 0;
    v164 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( (_BYTE)v22 )
    {
      if ( a10 == -32 )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)(a10 + 32);
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
                              v22,
                              (__int64)&v165,
                              (__int64)&v164) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v23 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v23 = 1;
        }
      }
      v20 = a5;
      v19 = a9;
    }
    else
    {
      v23 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v19 = a9;
      v20 = a5;
    }
    v179 = !v23;
    v18 = a13;
    v21 = 0LL;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v20, 0x746C6644u, &DmaAdapter, 0LL, &v169);
    v144 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v169) )
    {
      v162 &= HIDWORD(v169);
      if ( (v162 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
    }
    v79 = DmaAdapter;
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
      v130 = ObReferenceObjectByPointer(DmaAdapter, 0, (POBJECT_TYPE)a4, a5);
      v131 = v149;
      v144 = v130;
      if ( v130 >= 0 )
        v131 = v79;
      v149 = v131;
      HalPutDmaAdapter(v79);
      *v18 = v149;
      return v144;
    }
    v80 = *v15;
    v149 = DmaAdapter;
    v148 = v80;
    v174 = a4 + 16;
    v175 = v15;
    v176 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)v173);
    v25 = v149;
LABEL_35:
    while ( 2 )
    {
      v28 = v25 - 3;
      v29 = (unsigned __int8)((unsigned __int16)((_WORD)v25 - 48) >> 8);
      v30 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v29 ^ LOBYTE(v25[-2].DmaOperations)];
      ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v30->TypeInfo.ParseProcedure;
      if ( ParseProcedure )
      {
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          if ( a8 )
          {
LABEL_348:
            v144 = -1073741788;
            goto LABEL_157;
          }
          ObfReferenceObject(v25);
          if ( *(_BYTE *)(v13 + 30) )
          {
            ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
            v112 = *(struct _DMA_ADAPTER **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            HalPutDmaAdapter(v112);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v32 = *(struct _DMA_ADAPTER **)(v13 + 8);
          if ( v32 )
          {
            HalPutDmaAdapter(v32);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          v25 = v149;
        }
        v15 = a2;
        v14 = v181;
        if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v29 ^ LOBYTE(v28[1].DmaOperations)] + 67) & 1) != 0 )
          v33 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, _WORD *, struct _DMA_ADAPTER **))ParseProcedure)(
                  v25,
                  a4,
                  a10,
                  v153,
                  v181,
                  a2,
                  &v148,
                  a6,
                  a7,
                  v161,
                  &v149);
        else
          v33 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, struct _DMA_ADAPTER **))ParseProcedure)(
                  v25,
                  a4,
                  a10,
                  v153,
                  v181,
                  a2,
                  &v148,
                  a6,
                  a7,
                  &v149);
        v34 = v33;
        v144 = v33;
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          HalPutDmaAdapter(v28 + 3);
          v34 = v144;
        }
        if ( v34 < 0 )
        {
LABEL_157:
          if ( *(_BYTE *)(v13 + 30) )
            ObpUnlockDirectory(*(_QWORD *)v13, v13);
          v81 = *(struct _DMA_ADAPTER **)(v13 + 8);
          if ( v81 )
          {
            HalPutDmaAdapter(v81);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          goto LABEL_59;
        }
        if ( v34 != 260 && v34 != 872 )
          v160 = v149;
        if ( (v162 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
        {
LABEL_345:
          v144 = -1073741790;
          goto LABEL_157;
        }
        if ( v34 != 260 && v34 != 280 && v34 != 872 )
        {
          if ( !v149 )
          {
            v34 = -1073741772;
            v144 = -1073741772;
          }
          v160 = 0LL;
LABEL_58:
          if ( v34 < 0 )
            goto LABEL_157;
LABEL_59:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( v160 )
            HalPutDmaAdapter(v160);
          SeClearLearningModeObjectInformation();
          v35 = v144;
          if ( v144 < 0 )
          {
            *a13 = 0LL;
          }
          else
          {
            if ( a12 )
            {
              if ( v162 != -1 )
                *a12 = v162;
            }
            *a13 = v149;
          }
          return v35;
        }
        if ( (v181 & 0x1000) != 0 && v34 != 872 )
        {
          v144 = -1073740533;
          goto LABEL_157;
        }
        if ( !--v158 )
        {
LABEL_156:
          v144 = -1073741772;
          goto LABEL_157;
        }
        if ( a2->m128i_i16[0] )
        {
          HalPutDmaAdapter(DmaAdapter);
          v82 = (__int16 *)a2->m128i_i64[1];
          DmaAdapter = 0LL;
          v83 = *v82;
          if ( v144 == 280 )
          {
            if ( v83 != 92 )
            {
              v25 = v149;
              DmaAdapter = v149;
              v160 = 0LL;
              goto LABEL_171;
            }
          }
          else if ( v83 == 92 )
          {
            if ( v144 == 872 )
            {
              v25 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
            }
            else
            {
              v167 = 0LL;
              if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v167) >= 0 )
              {
                v25 = v167;
              }
              else
              {
                v25 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
                v167 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
              }
            }
            DmaAdapter = v25;
            ObfReferenceObject(v25);
LABEL_171:
            v84 = P;
            if ( !P )
            {
LABEL_176:
              if ( *(_BYTE *)(v13 + 30) )
                ObpUnlockDirectory(*(_QWORD *)v13, v13);
              v87 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v87 )
              {
                HalPutDmaAdapter(v87);
                *(_QWORD *)(v13 + 8) = 0LL;
              }
LABEL_29:
              v26 = v15->m128i_i64[1];
              if ( (v26 & 7) != 0 )
                goto LABEL_33;
              v27 = v14 & 0x800;
              if ( v15->m128i_i16[0] < 8u || *(_QWORD *)v26 != ObpDosDevicesShortNamePrefix )
              {
                if ( v15->m128i_i16[0] == 6 && *(_DWORD *)v26 == *(_DWORD *)L"\\??" && *(_WORD *)(v26 + 4) == 63 )
                {
                  v114 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
                  P = v114;
                  v115 = v114;
                  if ( v114 )
                  {
                    if ( *v114 )
                    {
                      v144 = ObReferenceObjectByPointer(*v114, 0, (POBJECT_TYPE)a4, a5);
                      if ( v144 >= 0 )
                      {
                        if ( a12 && v162 != -1 )
                          *a12 = v162;
                        *a13 = (struct _DMA_ADAPTER *)*v115;
                      }
                      ObfDereferenceDeviceMap(v115);
                      HalPutDmaAdapter(v25);
                      SeClearLearningModeObjectInformation();
                      return v144;
                    }
                  }
                }
                goto LABEL_33;
              }
              CurrentThread = KeGetCurrentThread();
              P = 0LL;
              v89 = 0LL;
              Process = (__int64)CurrentThread->Process;
              ProcessServerSilo = PsGetProcessServerSilo(Process);
              v132 = ProcessServerSilo != PsGetCurrentServerSilo();
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v27 )
              {
                if ( v132 )
                  goto LABEL_191;
                v92 = 0LL;
              }
              else
              {
                if ( v132 )
                  goto LABEL_191;
                v113 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                                (__int64)CurrentThread,
                                                1,
                                                v156,
                                                &v155,
                                                &v171,
                                                0LL);
                v89 = v113;
                if ( !v113 )
                  goto LABEL_312;
                if ( v113[1].DmaOperations == (_DMA_OPERATIONS *)999 )
                {
                  v132 = 1;
                  goto LABEL_191;
                }
                v170 = 0LL;
                if ( (int)SeGetTokenDeviceMap(v113, &v170) >= 0 )
                {
                  v92 = v170;
                  P = (PVOID)v170;
                  if ( v170 )
                  {
                    _InterlockedIncrement(v170 + 6);
LABEL_198:
                    if ( v89 )
                      HalPutDmaAdapter(v89);
                    if ( v92 && *(_QWORD *)v92 )
                    {
                      v99 = *a2;
                      v148.m128i_i64[0] = a2->m128i_i64[0];
                      v148.m128i_i16[0] -= 8;
                      v148.m128i_i64[1] = _mm_srli_si128(v99, 8).m128i_u64[0] + 8;
                      v148.m128i_i16[1] -= 8;
                      v25 = *(PADAPTER_OBJECT *)v92;
                      goto LABEL_34;
                    }
                    v25 = DmaAdapter;
                    v15 = a2;
LABEL_33:
                    v148 = *v15;
LABEL_34:
                    v149 = v25;
                    continue;
                  }
                }
                else
                {
LABEL_312:
                  v92 = 0LL;
                }
              }
              if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
                goto LABEL_198;
LABEL_191:
              CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
              v94 = KeGetCurrentThread();
              v95 = CurrentServerSiloGlobals;
              --v94->SpecialApcDisable;
              v96 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
              ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
              if ( v132 )
                v92 = *v95;
              else
                v92 = *(volatile signed __int32 **)(Process + 1416);
              P = (PVOID)v92;
              if ( v92 )
                _InterlockedIncrement(v92 + 6);
              ExReleasePushLockEx(v96, 0LL);
              v98 = KeGetCurrentThread();
              v17 = v98->SpecialApcDisable++ == -1;
              if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
                KiCheckForKernelApcDelivery(v97);
              goto LABEL_198;
            }
            v85 = *((_DWORD *)P + 6);
            if ( v85 == 1 )
            {
LABEL_335:
              ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v84 + 8));
              v137 = KeGetCurrentThread();
              --v137->SpecialApcDisable;
              v138 = (ULONG_PTR)ServerSiloGlobals + 120;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
              v139 = (PADAPTER_OBJECT *)P;
              v85 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
              if ( v85 == 1 )
              {
                *(_QWORD *)&(*v139)[19].Version = 0LL;
                ExReleasePushLockEx(v138, 0LL);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                v140 = v139[8];
                if ( v140 )
                  ObfDereferenceObjectWithTag(v140, 0x6D44624Fu);
                ZwClose(v139[2]);
                HalPutDmaAdapter(*v139);
                ExFreePoolWithTag(v139, 0x6D44624Fu);
                goto LABEL_175;
              }
              ExReleasePushLockEx(v138, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            }
            else
            {
              while ( 1 )
              {
                v86 = _InterlockedCompareExchange((volatile signed __int32 *)v84 + 6, v85 - 1, v85);
                v17 = v85 == v86;
                v85 = v86;
                if ( v17 )
                  break;
                if ( v86 == 1 )
                  goto LABEL_335;
              }
            }
            if ( v85 <= 0 )
              __fastfail(0xEu);
LABEL_175:
            v25 = DmaAdapter;
            P = 0LL;
            goto LABEL_176;
          }
        }
LABEL_289:
        v144 = -1073741773;
        goto LABEL_157;
      }
      break;
    }
    if ( v30 != ObpDirectoryObjectType )
      goto LABEL_348;
    v37 = v25;
    v168 = v25;
    if ( v148.m128i_i16[0] && *(_WORD *)v148.m128i_i64[1] == 92 )
    {
      v148.m128i_i64[1] += 2LL;
      v148.m128i_i16[0] -= 2;
      v148.m128i_i16[1] -= 2;
    }
    for ( *(__m128i *)Src = v148; v148.m128i_i16[0]; v148.m128i_i16[0] -= 2 )
    {
      if ( *(_WORD *)v148.m128i_i64[1] == 92 )
        break;
      v148.m128i_i64[1] += 2LL;
    }
    v148.m128i_i16[1] -= LOWORD(Src[0]) - v148.m128i_i16[0];
    LOWORD(Src[0]) -= v148.m128i_i16[0];
    if ( !LOWORD(Src[0]) )
      goto LABEL_289;
    if ( !(_BYTE)v153
      || (*(_DWORD *)(a10 + 12) & 1) != 0
      || (v143 = &v154, (v147 = ObpCheckTraverseAccess(v25, a10, a10)) != 0) )
    {
      if ( v148.m128i_i16[0] )
        goto LABEL_83;
      if ( !a8 )
      {
        *(_DWORD *)(v13 + 32) = -1145368012;
        v111 = KeGetCurrentThread();
        --v111->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v25[18].DmaOperations, 0LL);
        *(_DWORD *)(v13 + 32) = -572714444;
        ObfReferenceObject(v25);
        *(_QWORD *)v13 = v25;
        *(_WORD *)(v13 + 30) = 1;
        goto LABEL_83;
      }
    }
    else
    {
      v34 = v154;
      if ( v154 >= 0 )
        v34 = -1073741772;
      v154 = v34;
      if ( v148.m128i_i16[0] || !a8 )
      {
LABEL_318:
        v144 = v34;
        goto LABEL_58;
      }
    }
    ObpLockDirectoryExclusive(v13, v25);
LABEL_83:
    v38 = LOWORD(Src[0]);
    v39 = (unsigned __int16 *)Src[1];
    v40 = LOWORD(Src[0]) >> 1;
    Object = v25;
    HIDWORD(TokenInformation) = v181 & 0x40;
    v152 = LOWORD(Src[0]);
    if ( v40 < 4 )
    {
      v43 = 0;
    }
    else
    {
      v41 = 0LL;
      do
      {
        v42 = *(_QWORD *)v39;
        if ( (*(_QWORD *)v39 & 0xFF80FF80FF80FF80uLL) != 0 )
        {
          v133 = 4LL;
          do
          {
            v134 = (unsigned __int16)v42;
            if ( (unsigned __int16)v42 >= 0x61u )
            {
              if ( (unsigned __int16)v42 <= 0x7Au )
                v134 = (unsigned int)(unsigned __int16)v42 - 32;
              else
                v134 = NLS_UPCASE(v42);
            }
            *(_QWORD *)&v135 = v42;
            *((_QWORD *)&v135 + 1) = v134;
            v42 = v135 >> 16;
            --v133;
          }
          while ( v133 );
        }
        else
        {
          v42 &= 0xFFDFFFDFFFDFFFDFuLL;
        }
        v39 += 4;
        v40 -= 4;
        v41 = v42 + (v41 >> 1) + 3 * v41;
      }
      while ( v40 >= 4 );
      v38 = v152;
      v37 = v25;
      v43 = v41 + HIDWORD(v41);
    }
    if ( !v40 )
    {
LABEL_95:
      v46 = *(_BYTE *)(v13 + 30);
      *(_DWORD *)(v13 + 24) = v43;
      v145 = v46;
      v47 = v43 % 0x25;
      *(_WORD *)(v13 + 28) = v47;
      v48 = &v37->Version + 4 * v47;
      p_DmaOperations = (ULONG_PTR)&v37[18].DmaOperations;
      if ( !v46 )
      {
        *(_DWORD *)(v13 + 32) = -1145368012;
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquirePushLockSharedEx(p_DmaOperations, 0LL);
        *(_DWORD *)(v13 + 32) = -572714444;
        ObfReferenceObject(v25);
        *(_QWORD *)v13 = v25;
        *(_WORD *)(v13 + 30) = 1;
      }
      v51 = *(__int64 **)v48;
      if ( !*(_QWORD *)v48 )
        goto LABEL_101;
      while ( 1 )
      {
        if ( *((_DWORD *)v51 + 4) == *(_DWORD *)(v13 + 24) )
        {
          v68 = v51[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v51[1] - 48 + 26) & 3];
          v69 = v38;
          if ( v38 == *(unsigned __int16 *)(v68 + 8) )
          {
            v70 = (char *)Src[1];
            v71 = *(_QWORD **)(v68 + 16);
            v72 = (char *)Src[1] + v38;
            if ( v152 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v70 != *v71 )
                  break;
                v69 -= 8;
                if ( !v69 )
                  goto LABEL_137;
                v70 += 8;
                ++v71;
              }
              while ( v69 >= 8 );
            }
            if ( v70 >= v72 )
            {
LABEL_137:
              v25 = (PADAPTER_OBJECT)v51[1];
              ObfReferenceObject(v25);
              if ( !v145 )
              {
                ExReleasePushLockEx(p_DmaOperations, 0LL);
                v76 = *(struct _DMA_ADAPTER **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                HalPutDmaAdapter(v76);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
                v48 = 0LL;
              }
              v77 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v77 )
                HalPutDmaAdapter(v77);
              *(_QWORD *)(v13 + 8) = v25;
              *(_QWORD *)(v13 + 16) = v48;
              if ( !v25 )
                goto LABEL_104;
LABEL_142:
              v149 = v25;
              if ( v147 )
              {
                if ( !v25 )
                  goto LABEL_154;
                if ( !v148.m128i_i16[0] )
                {
                  v78 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v25[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v25 - 48) >> 8)] + 144);
                  if ( !v78 || a8 && v78 != ObpParseSymbolicLinkEx )
                  {
                    v34 = ObReferenceObjectByPointer(v25, 0, (POBJECT_TYPE)a4, a5);
                    v144 = v34;
                    goto LABEL_58;
                  }
                }
                goto LABEL_35;
              }
              if ( v25 )
              {
                v34 = v154;
                goto LABEL_318;
              }
LABEL_154:
              if ( v148.m128i_i16[0] )
              {
                v144 = -1073741766;
              }
              else
              {
                if ( !a8 )
                  goto LABEL_156;
                if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                  v116 = 8;
                else
                  v116 = 4;
                v117 = v168;
                v118 = v153;
                LOBYTE(v143) = v153;
                LOBYTE(Tag) = 0;
                if ( (unsigned __int8)ObCheckCreateObjectAccess(v168, v116, a10, Src, Tag, v143, &v144) )
                {
                  v119 = v117[85];
                  if ( v119 != -1
                    && ((POBJECT_TYPE)a4 == MmSectionObjectType || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                    && v119 != (unsigned int)PsGetCurrentProcessSessionId()
                    && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v118)
                    && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                  {
                    goto LABEL_345;
                  }
                  v120 = LOWORD(Src[0]);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                  if ( PoolWithTag )
                  {
                    if ( (unsigned __int8)ObpInsertDirectoryEntry(v117, a8) )
                    {
                      memmove(PoolWithTag, Src[1], v120);
                      v122 = (char *)&a8[-3] - ObpInfoMaskToOffset[BYTE2(a8[-2].DmaOperations) & 3];
                      v123 = (void *)*((_QWORD *)v122 + 2);
                      if ( v123 )
                        ExFreePoolWithTag(v123, 0);
                      v124 = (__int16)Src[0];
                      *((_WORD *)v122 + 4) = Src[0];
                      *((_WORD *)v122 + 5) = v124;
                      *((_QWORD *)v122 + 2) = PoolWithTag;
                      v149 = a8;
                      v144 = 0;
                      goto LABEL_59;
                    }
                    ExFreePoolWithTag(PoolWithTag, 0);
                  }
                  v144 = -1073741670;
                }
                else if ( v144 >= 0 )
                {
                  v144 = -1073741772;
                }
              }
              goto LABEL_157;
            }
            if ( HIDWORD(TokenInformation) )
            {
              v73 = (char *)v71 - v70;
              while ( 1 )
              {
                v74 = *(unsigned __int16 *)v70;
                v75 = *(unsigned __int16 *)&v70[v73];
                if ( (_WORD)v74 != (_WORD)v75 )
                {
                  if ( (unsigned int)v74 >= 0x61 )
                  {
                    if ( (unsigned int)v74 > 0x7A )
                    {
                      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v74 >= 0xC0u )
                        LOWORD(v74) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                               + 2
                                               * ((v74 & 0xF)
                                                + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((unsigned __int8)v74 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v74 >> 8))))))
                                    + v74;
                    }
                    else
                    {
                      LOWORD(v74) = v74 - 32;
                    }
                  }
                  if ( (unsigned int)v75 >= 0x61 )
                  {
                    if ( (unsigned int)v75 > 0x7A )
                    {
                      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v75 >= 0xC0u )
                        LOWORD(v75) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                               + 2
                                               * ((v75 & 0xF)
                                                + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((unsigned __int8)v75 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v75 >> 8))))))
                                    + v75;
                    }
                    else
                    {
                      LOWORD(v75) = v75 - 32;
                    }
                  }
                  if ( (_WORD)v74 != (_WORD)v75 )
                    break;
                }
                v70 += 2;
                if ( v70 >= v72 )
                  goto LABEL_137;
              }
            }
            else
            {
              while ( *(_WORD *)v70 == *(_WORD *)v71 )
              {
                v70 += 2;
                v71 = (_QWORD *)((char *)v71 + 2);
                if ( v70 >= v72 )
                  goto LABEL_137;
              }
            }
            v38 = v152;
          }
        }
        v48 = (unsigned __int16 *)v51;
        v51 = (__int64 *)*v51;
        if ( !v51 )
        {
          v46 = v145;
LABEL_101:
          if ( !v46 )
          {
            ExReleasePushLockEx(p_DmaOperations, 0LL);
            v52 = *(struct _DMA_ADAPTER **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            HalPutDmaAdapter(v52);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v25 = 0LL;
LABEL_104:
          if ( !v146 )
            goto LABEL_142;
          v53 = Object;
LABEL_106:
          v54 = v53[84];
          v55 = 0LL;
          if ( (v54 & 4) != 0 )
          {
            if ( (v54 & 0x10) != 0 && !v179 )
              goto LABEL_215;
            v55 = (char *)*((_QWORD *)v53 + 39);
          }
          else
          {
            v56 = PsGetCurrentServerSiloGlobals();
            v57 = KeGetCurrentThread();
            --v57->SpecialApcDisable;
            v58 = (ULONG_PTR)v56 + 120;
            ExAcquirePushLockSharedEx((ULONG_PTR)v56 + 120, 0LL);
            v59 = *((_QWORD *)v53 + 38);
            if ( v59 )
              v55 = *(char **)(v59 + 8);
            ExReleasePushLockEx(v58, 0LL);
            v61 = KeGetCurrentThread();
            v17 = v61->SpecialApcDisable++ == -1;
            if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v61->ApcState.ApcListHead[0].Flink != &v61->152 )
              KiCheckForKernelApcDelivery(v60);
          }
          if ( !v55 )
            goto LABEL_215;
          v62 = *(_BYTE *)(v13 + 30);
          if ( v62 )
          {
            ObfReferenceObject(v53);
            v63 = a11;
            ObpUnlockDirectory((__int64)v53, a11);
            ObpLockDirectoryShared(a11, v55);
            HalPutDmaAdapter((PADAPTER_OBJECT)v53);
            v62 = *(_BYTE *)(a11 + 30);
          }
          else
          {
            v63 = a11;
          }
          v64 = &v55[8 * *(unsigned __int16 *)(v63 + 28)];
          if ( !v62 )
          {
            *(_DWORD *)(v63 + 32) = -1145368012;
            v65 = KeGetCurrentThread();
            --v65->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v55 + 296), 0LL);
            *(_DWORD *)(v63 + 32) = -572714444;
            ObfReferenceObject(v55);
            *(_QWORD *)v63 = v55;
            *(_WORD *)(v63 + 30) = 1;
          }
          v66 = *(__int64 **)v64;
          if ( !*(_QWORD *)v64 )
          {
LABEL_122:
            if ( !v62 )
              ObpUnlockDirectory((__int64)v55, v63);
            v25 = 0LL;
            v53 = v55;
            goto LABEL_125;
          }
          v67 = *(_DWORD *)(v63 + 24);
          while ( 1 )
          {
            if ( *((_DWORD *)v66 + 4) == v67 )
            {
              v100 = v152;
              v101 = v66[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v66[1] - 48 + 26) & 3];
              if ( v152 == *(unsigned __int16 *)(v101 + 8) )
              {
                v102 = (char *)Src[1];
                v103 = *(_QWORD **)(v101 + 16);
                v104 = (char *)Src[1] + (int)v152;
                if ( v152 >= 8 )
                {
                  do
                  {
                    if ( *(_QWORD *)v102 != *v103 )
                      break;
                    v100 -= 8;
                    if ( !v100 )
                      goto LABEL_210;
                    v102 += 8;
                    ++v103;
                  }
                  while ( v100 >= 8 );
                }
                if ( v102 >= v104 )
                {
LABEL_210:
                  v25 = (PADAPTER_OBJECT)v66[1];
                  ObfReferenceObject(v25);
                  if ( v62 )
                  {
                    v108 = a11;
                  }
                  else
                  {
                    ExReleasePushLockEx((ULONG_PTR)(v55 + 296), 0LL);
                    v108 = a11;
                    v109 = *(struct _DMA_ADAPTER **)a11;
                    *(_DWORD *)(a11 + 32) = -286387660;
                    HalPutDmaAdapter(v109);
                    *(_QWORD *)a11 = 0LL;
                    *(_WORD *)(a11 + 30) = 0;
                    KeLeaveCriticalRegion();
                    v64 = 0LL;
                  }
                  v110 = *(struct _DMA_ADAPTER **)(v108 + 8);
                  if ( v110 )
                    HalPutDmaAdapter(v110);
                  *(_QWORD *)(v108 + 8) = v25;
                  *(_QWORD *)(v108 + 16) = v64;
LABEL_215:
                  v53 = v55;
                  if ( v25 )
                  {
LABEL_216:
                    v13 = a11;
                    goto LABEL_142;
                  }
LABEL_125:
                  v13 = a11;
                  if ( !v55 )
                    goto LABEL_216;
                  goto LABEL_106;
                }
                if ( HIDWORD(TokenInformation) )
                {
                  v105 = (char *)v103 - v102;
                  while ( 1 )
                  {
                    v106 = *(_WORD *)v102;
                    v107 = *(_WORD *)&v102[v105];
                    if ( *(_WORD *)v102 != v107 )
                    {
                      NLS_UPCASE(v107);
                      v125 = NLS_UPCASE(v106);
                      if ( v125 != v126 )
                        break;
                    }
                    v102 += 2;
                    if ( v102 >= v104 )
                      goto LABEL_210;
                  }
                }
                else
                {
                  while ( *(_WORD *)v102 == *(_WORD *)v103 )
                  {
                    v102 += 2;
                    v103 = (_QWORD *)((char *)v103 + 2);
                    if ( v102 >= v104 )
                      goto LABEL_210;
                  }
                }
              }
            }
            v64 = (char *)v66;
            v66 = (__int64 *)*v66;
            if ( !v66 )
            {
              v63 = a11;
              goto LABEL_122;
            }
          }
        }
      }
    }
    while ( 1 )
    {
      v44 = *v39++;
      --v40;
      v45 = (v43 >> 1) + 3 * v43;
      if ( v44 >= 0x61 )
      {
        if ( v44 > 0x7A )
        {
          v127 = NLS_UPCASE(v44);
          v43 = v127 + v128;
          goto LABEL_94;
        }
        v45 -= 32;
      }
      v43 = v44 + v45;
LABEL_94:
      if ( !v40 )
        goto LABEL_95;
    }
  }
  if ( !v15->m128i_i16[0] || *(_WORD *)v15->m128i_i64[1] != 92 )
    return -1073741765;
  v166 = 0LL;
  if ( (int)PsGetPermanentSiloContext(v19, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v166) >= 0 )
  {
    v25 = v166;
  }
  else
  {
    v25 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
    v166 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
  }
  DmaAdapter = v25;
  if ( v25 )
    ObfReferenceObject(v25);
  if ( v15->m128i_i16[0] != 2 )
  {
    v175 = v15;
    v174 = a4 + 16;
    v176 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v173);
    goto LABEL_29;
  }
  if ( v25 )
  {
    v144 = ObReferenceObjectByPointer(v25, 0, (POBJECT_TYPE)a4, a5);
    if ( v144 >= 0 )
      *v18 = v25;
    HalPutDmaAdapter(v25);
    return v144;
  }
  else if ( v21 )
  {
    result = ObReferenceObjectByPointer(v21, 0, (POBJECT_TYPE)a4, a5);
    if ( result >= 0 )
      *v18 = v21;
  }
  else
  {
    return -1073741811;
  }
  return result;
}

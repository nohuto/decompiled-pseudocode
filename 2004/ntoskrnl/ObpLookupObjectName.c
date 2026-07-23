/*
 * XREFs of ObpLookupObjectName @ 0x1405F1FF0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     PsGetPermanentSiloContext @ 0x1402056B0 (PsGetPermanentSiloContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14026DF40 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ObReferenceObjectByPointer @ 0x14026E130 (ObReferenceObjectByPointer.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     ObpLockDirectoryShared @ 0x1402979A8 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x140297B54 (ObpUnlockDirectory.c)
 *     SeClearLearningModeObjectInformation @ 0x140298FF0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     SeAccessCheckWithHint @ 0x14029BD60 (SeAccessCheckWithHint.c)
 *     ObpLockDirectoryExclusive @ 0x14033A0D8 (ObpLockDirectoryExclusive.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x140666044 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ObCheckCreateObjectAccess @ 0x140668330 (ObCheckCreateObjectAccess.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406E2428 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1406EA16C (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x1408D8D74 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1408D9B30 (ObpCheckTraverseAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  __int64 v59; // rcx
  struct _KTHREAD *v60; // rax
  char v61; // r12
  __int64 v62; // rbx
  char *v63; // r15
  struct _KTHREAD *v64; // rax
  __int64 *v65; // r14
  int v66; // r13d
  __int64 v67; // rcx
  unsigned int v68; // edx
  char *v69; // r8
  _QWORD *v70; // r11
  char *v71; // rsi
  signed __int64 v72; // r11
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // rbx
  struct _DMA_ADAPTER *v75; // rcx
  struct _DMA_ADAPTER *v76; // rcx
  __int64 (__usercall *v77)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  struct _DMA_ADAPTER *v78; // rbx
  __m128i v79; // xmm0
  struct _DMA_ADAPTER *v80; // rcx
  __int16 *v81; // rax
  __int16 v82; // cx
  PVOID v83; // rdi
  signed __int32 v84; // ebx
  signed __int32 v85; // eax
  struct _DMA_ADAPTER *v86; // rcx
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v88; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v91; // rdi
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v93; // rcx
  volatile signed __int32 **v94; // rdi
  ULONG_PTR v95; // rbx
  __int64 v96; // rcx
  struct _KTHREAD *v97; // rax
  __m128i v98; // xmm0
  unsigned int v99; // edx
  __int64 v100; // rcx
  char *v101; // r10
  _QWORD *v102; // rdi
  char *v103; // r11
  signed __int64 v104; // rdi
  unsigned __int16 v105; // bx
  unsigned __int16 v106; // cx
  __int64 v107; // r12
  struct _DMA_ADAPTER *v108; // rcx
  struct _DMA_ADAPTER *v109; // rcx
  struct _KTHREAD *v110; // rax
  struct _DMA_ADAPTER *v111; // rcx
  __int64 v112; // rax
  PVOID *v113; // rax
  PVOID *v114; // rdi
  unsigned int v115; // eax
  _DWORD *v116; // r14
  KPROCESSOR_MODE v117; // si
  int v118; // edi
  unsigned int v119; // esi
  PVOID PoolWithTag; // rdi
  char *v121; // rbx
  void *v122; // rcx
  __int16 v123; // ax
  unsigned __int16 v124; // ax
  __int16 v125; // r9
  int v126; // r10d
  int v127; // r9d
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS v129; // eax
  struct _DMA_ADAPTER *v130; // rcx
  bool v131; // r15
  __int64 v132; // rdi
  __int64 v133; // rax
  __int128 v134; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v136; // rcx
  ULONG_PTR v137; // rdi
  PADAPTER_OBJECT *v138; // rsi
  PADAPTER_OBJECT v139; // rcx
  int Tag; // [rsp+20h] [rbp-E0h]
  int *v142; // [rsp+28h] [rbp-D8h]
  NTSTATUS v143; // [rsp+60h] [rbp-A0h] BYREF
  char v144; // [rsp+64h] [rbp-9Ch]
  char v145; // [rsp+65h] [rbp-9Bh]
  char v146; // [rsp+66h] [rbp-9Ah]
  __m128i v147; // [rsp+70h] [rbp-90h] BYREF
  struct _DMA_ADAPTER *v148; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v151; // [rsp+98h] [rbp-68h]
  unsigned int v152; // [rsp+9Ch] [rbp-64h]
  int v153; // [rsp+A0h] [rbp-60h] BYREF
  char v154; // [rsp+A4h] [rbp-5Ch] BYREF
  char v155; // [rsp+A5h] [rbp-5Bh] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  int v157; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  PADAPTER_OBJECT v159; // [rsp+D0h] [rbp-30h]
  _WORD v160[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v161; // [rsp+DCh] [rbp-24h]
  __int64 v162; // [rsp+E0h] [rbp-20h]
  int v163; // [rsp+E8h] [rbp-18h] BYREF
  int v164; // [rsp+ECh] [rbp-14h] BYREF
  struct _DMA_ADAPTER *v165; // [rsp+F0h] [rbp-10h] BYREF
  struct _DMA_ADAPTER *v166; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v167; // [rsp+100h] [rbp+0h]
  __int64 v168; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v169; // [rsp+110h] [rbp+10h] BYREF
  char v170[8]; // [rsp+118h] [rbp+18h] BYREF
  PVOID Object; // [rsp+120h] [rbp+20h]
  _QWORD v172[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v173; // [rsp+138h] [rbp+38h]
  __m128i *v174; // [rsp+140h] [rbp+40h]
  ULONG_PTR v175; // [rsp+148h] [rbp+48h]
  __int128 v176; // [rsp+150h] [rbp+50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp+60h] BYREF
  bool v178; // [rsp+1D0h] [rbp+D0h]
  int v180; // [rsp+1E0h] [rbp+E0h]

  v180 = a3;
  v13 = a11;
  v14 = a3;
  v157 = 64;
  DmaAdapter = 0LL;
  v15 = a2;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v160[1] = 0;
  v168 = 0LL;
  v172[0] = 0LL;
  v172[1] = 0LL;
  P = 0LL;
  v178 = 0;
  v145 = 0;
  v176 = 0LL;
  v147 = 0LL;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a13;
  v160[0] = 16;
  v19 = a9;
  v162 = a9;
  *a13 = 0LL;
  v143 = 0;
  v153 = 0;
  v146 = 1;
  v148 = 0LL;
  v159 = 0LL;
  v161 = -1;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v180 = a3 | 0x40;
  }
  v20 = a8;
  v21 = 1;
  if ( (v14 & 0x400) == 0 )
    v21 = a5;
  v152 = v21;
  if ( !a8 )
  {
    v22 = 0;
    v145 = 1;
    LODWORD(TokenInformation) = 0;
    p_SubjectContext = 0LL;
    v164 = 0;
    v163 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( (_BYTE)v21 )
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
                              v21,
                              (__int64)&v164,
                              (__int64)&v163) == 1 )
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
    v178 = !v22;
    v18 = a13;
    v20 = 0LL;
  }
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x746C6644u, (__int64)&DmaAdapter, 0LL, (__int64)&v168);
    v143 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v168) )
    {
      v161 &= HIDWORD(v168);
      if ( (v161 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
    }
    v78 = DmaAdapter;
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
      v129 = ObReferenceObjectByPointer(DmaAdapter, 0, (POBJECT_TYPE)a4, a5);
      v130 = v148;
      v143 = v129;
      if ( v129 >= 0 )
        v130 = v78;
      v148 = v130;
      HalPutDmaAdapter(v78);
      *v18 = v148;
      return v143;
    }
    v79 = *v15;
    v148 = DmaAdapter;
    v147 = v79;
    v173 = a4 + 16;
    v174 = v15;
    v175 = a1;
    SeSetLearningModeObjectInformation((__int64)v172);
    v24 = v148;
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
            v143 = -1073741788;
            goto LABEL_157;
          }
          ObfReferenceObject(v24);
          if ( *(_BYTE *)(v13 + 30) )
          {
            ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
            v111 = *(struct _DMA_ADAPTER **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            HalPutDmaAdapter(v111);
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
          v24 = v148;
        }
        v15 = a2;
        v14 = v180;
        if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v28 ^ LOBYTE(v27[1].DmaOperations)] + 67) & 1) != 0 )
          v32 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, _WORD *, struct _DMA_ADAPTER **))ParseProcedure)(
                  v24,
                  a4,
                  a10,
                  v152,
                  v180,
                  a2,
                  &v147,
                  a6,
                  a7,
                  v160,
                  &v148);
        else
          v32 = ((__int64 (__fastcall *)(PADAPTER_OBJECT, __int64, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, struct _DMA_ADAPTER **))ParseProcedure)(
                  v24,
                  a4,
                  a10,
                  v152,
                  v180,
                  a2,
                  &v147,
                  a6,
                  a7,
                  &v148);
        v33 = v32;
        v143 = v32;
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          HalPutDmaAdapter(v27 + 3);
          v33 = v143;
        }
        if ( v33 < 0 )
        {
LABEL_157:
          if ( *(_BYTE *)(v13 + 30) )
            ObpUnlockDirectory(*(_QWORD *)v13, v13);
          v80 = *(struct _DMA_ADAPTER **)(v13 + 8);
          if ( v80 )
          {
            HalPutDmaAdapter(v80);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          goto LABEL_59;
        }
        if ( v33 != 260 && v33 != 872 )
          v159 = v148;
        if ( (v161 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
        {
LABEL_345:
          v143 = -1073741790;
          goto LABEL_157;
        }
        if ( v33 != 260 && v33 != 280 && v33 != 872 )
        {
          if ( !v148 )
          {
            v33 = -1073741772;
            v143 = -1073741772;
          }
          v159 = 0LL;
LABEL_58:
          if ( v33 < 0 )
            goto LABEL_157;
LABEL_59:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( v159 )
            HalPutDmaAdapter(v159);
          SeClearLearningModeObjectInformation();
          v34 = v143;
          if ( v143 < 0 )
          {
            *a13 = 0LL;
          }
          else
          {
            if ( a12 )
            {
              if ( v161 != -1 )
                *a12 = v161;
            }
            *a13 = v148;
          }
          return v34;
        }
        if ( (v180 & 0x1000) != 0 && v33 != 872 )
        {
          v143 = -1073740533;
          goto LABEL_157;
        }
        if ( !--v157 )
        {
LABEL_156:
          v143 = -1073741772;
          goto LABEL_157;
        }
        if ( a2->m128i_i16[0] )
        {
          HalPutDmaAdapter(DmaAdapter);
          v81 = (__int16 *)a2->m128i_i64[1];
          DmaAdapter = 0LL;
          v82 = *v81;
          if ( v143 == 280 )
          {
            if ( v82 != 92 )
            {
              v24 = v148;
              DmaAdapter = v148;
              v159 = 0LL;
              goto LABEL_171;
            }
          }
          else if ( v82 == 92 )
          {
            if ( v143 == 872 )
            {
              v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
            }
            else
            {
              v166 = 0LL;
              if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v166) >= 0 )
              {
                v24 = v166;
              }
              else
              {
                v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
                v166 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
              }
            }
            DmaAdapter = v24;
            ObfReferenceObject(v24);
LABEL_171:
            v83 = P;
            if ( !P )
            {
LABEL_176:
              if ( *(_BYTE *)(v13 + 30) )
                ObpUnlockDirectory(*(_QWORD *)v13, v13);
              v86 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v86 )
              {
                HalPutDmaAdapter(v86);
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
                  v113 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
                  P = v113;
                  v114 = v113;
                  if ( v113 )
                  {
                    if ( *v113 )
                    {
                      v143 = ObReferenceObjectByPointer(*v113, 0, (POBJECT_TYPE)a4, a5);
                      if ( v143 >= 0 )
                      {
                        if ( a12 && v161 != -1 )
                          *a12 = v161;
                        *a13 = (struct _DMA_ADAPTER *)*v114;
                      }
                      ObfDereferenceDeviceMap(v114);
                      HalPutDmaAdapter(v24);
                      SeClearLearningModeObjectInformation();
                      return v143;
                    }
                  }
                }
                goto LABEL_33;
              }
              CurrentThread = KeGetCurrentThread();
              P = 0LL;
              v88 = 0LL;
              Process = (__int64)CurrentThread->Process;
              ProcessServerSilo = PsGetProcessServerSilo(Process);
              v131 = ProcessServerSilo != PsGetCurrentServerSilo();
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v26 )
              {
                if ( v131 )
                  goto LABEL_191;
                v91 = 0LL;
              }
              else
              {
                if ( v131 )
                  goto LABEL_191;
                v112 = PsReferenceImpersonationTokenEx(
                         (_DWORD)CurrentThread,
                         1,
                         (unsigned int)&v155,
                         (unsigned int)&v154,
                         (__int64)v170,
                         0LL);
                v88 = (struct _DMA_ADAPTER *)v112;
                if ( !v112 )
                  goto LABEL_312;
                if ( *(_QWORD *)(v112 + 24) == 999LL )
                {
                  v131 = 1;
                  goto LABEL_191;
                }
                v169 = 0LL;
                if ( (int)SeGetTokenDeviceMap(v112, &v169) >= 0 )
                {
                  v91 = v169;
                  P = (PVOID)v169;
                  if ( v169 )
                  {
                    _InterlockedIncrement(v169 + 6);
LABEL_198:
                    if ( v88 )
                      HalPutDmaAdapter(v88);
                    if ( v91 && *(_QWORD *)v91 )
                    {
                      v98 = *a2;
                      v147.m128i_i64[0] = a2->m128i_i64[0];
                      v147.m128i_i16[0] -= 8;
                      v147.m128i_i64[1] = _mm_srli_si128(v98, 8).m128i_u64[0] + 8;
                      v147.m128i_i16[1] -= 8;
                      v24 = *(PADAPTER_OBJECT *)v91;
                      goto LABEL_34;
                    }
                    v24 = DmaAdapter;
                    v15 = a2;
LABEL_33:
                    v147 = *v15;
LABEL_34:
                    v148 = v24;
                    continue;
                  }
                }
                else
                {
LABEL_312:
                  v91 = 0LL;
                }
              }
              if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
                goto LABEL_198;
LABEL_191:
              CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
              v93 = KeGetCurrentThread();
              v94 = CurrentServerSiloGlobals;
              --v93->SpecialApcDisable;
              v95 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
              ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
              if ( v131 )
                v91 = *v94;
              else
                v91 = *(volatile signed __int32 **)(Process + 1416);
              P = (PVOID)v91;
              if ( v91 )
                _InterlockedIncrement(v91 + 6);
              ExReleasePushLockEx(v95, 0LL);
              v97 = KeGetCurrentThread();
              v17 = v97->SpecialApcDisable++ == -1;
              if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v97->ApcState.ApcListHead[0].Flink != &v97->152 )
                KiCheckForKernelApcDelivery(v96);
              goto LABEL_198;
            }
            v84 = *((_DWORD *)P + 6);
            if ( v84 == 1 )
            {
LABEL_335:
              ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v83 + 8));
              v136 = KeGetCurrentThread();
              --v136->SpecialApcDisable;
              v137 = (ULONG_PTR)ServerSiloGlobals + 120;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
              v138 = (PADAPTER_OBJECT *)P;
              v84 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
              if ( v84 == 1 )
              {
                *(_QWORD *)&(*v138)[19].Version = 0LL;
                ExReleasePushLockEx(v137, 0LL);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                v139 = v138[8];
                if ( v139 )
                  ObfDereferenceObjectWithTag(v139, 0x6D44624Fu);
                ZwClose(v138[2]);
                HalPutDmaAdapter(*v138);
                ExFreePoolWithTag(v138, 0x6D44624Fu);
                goto LABEL_175;
              }
              ExReleasePushLockEx(v137, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            }
            else
            {
              while ( 1 )
              {
                v85 = _InterlockedCompareExchange((volatile signed __int32 *)v83 + 6, v84 - 1, v84);
                v17 = v84 == v85;
                v84 = v85;
                if ( v17 )
                  break;
                if ( v85 == 1 )
                  goto LABEL_335;
              }
            }
            if ( v84 <= 0 )
              __fastfail(0xEu);
LABEL_175:
            v24 = DmaAdapter;
            P = 0LL;
            goto LABEL_176;
          }
        }
LABEL_289:
        v143 = -1073741773;
        goto LABEL_157;
      }
      break;
    }
    if ( v29 != ObpDirectoryObjectType )
      goto LABEL_348;
    v36 = v24;
    v167 = v24;
    if ( v147.m128i_i16[0] && *(_WORD *)v147.m128i_i64[1] == 92 )
    {
      v147.m128i_i64[1] += 2LL;
      v147.m128i_i16[0] -= 2;
      v147.m128i_i16[1] -= 2;
    }
    for ( *(__m128i *)Src = v147; v147.m128i_i16[0]; v147.m128i_i16[0] -= 2 )
    {
      if ( *(_WORD *)v147.m128i_i64[1] == 92 )
        break;
      v147.m128i_i64[1] += 2LL;
    }
    v147.m128i_i16[1] -= LOWORD(Src[0]) - v147.m128i_i16[0];
    LOWORD(Src[0]) -= v147.m128i_i16[0];
    if ( !LOWORD(Src[0]) )
      goto LABEL_289;
    if ( !(_BYTE)v152
      || (*(_DWORD *)(a10 + 12) & 1) != 0
      || (v142 = &v153, (v146 = ObpCheckTraverseAccess(v24, a10, a10)) != 0) )
    {
      if ( v147.m128i_i16[0] )
        goto LABEL_83;
      if ( !a8 )
      {
        *(_DWORD *)(v13 + 32) = -1145368012;
        v110 = KeGetCurrentThread();
        --v110->KernelApcDisable;
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
      v33 = v153;
      if ( v153 >= 0 )
        v33 = -1073741772;
      v153 = v33;
      if ( v147.m128i_i16[0] || !a8 )
      {
LABEL_318:
        v143 = v33;
        goto LABEL_58;
      }
    }
    ObpLockDirectoryExclusive(v13, v24);
LABEL_83:
    v37 = LOWORD(Src[0]);
    v38 = (unsigned __int16 *)Src[1];
    v39 = LOWORD(Src[0]) >> 1;
    Object = v24;
    HIDWORD(TokenInformation) = v180 & 0x40;
    v151 = LOWORD(Src[0]);
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
          v132 = 4LL;
          do
          {
            v133 = (unsigned __int16)v41;
            if ( (unsigned __int16)v41 >= 0x61u )
            {
              if ( (unsigned __int16)v41 <= 0x7Au )
                v133 = (unsigned int)(unsigned __int16)v41 - 32;
              else
                v133 = NLS_UPCASE(v41);
            }
            *(_QWORD *)&v134 = v41;
            *((_QWORD *)&v134 + 1) = v133;
            v41 = v134 >> 16;
            --v132;
          }
          while ( v132 );
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
      v37 = v151;
      v36 = v24;
      v42 = v40 + HIDWORD(v40);
    }
    if ( !v39 )
    {
LABEL_95:
      v45 = *(_BYTE *)(v13 + 30);
      *(_DWORD *)(v13 + 24) = v42;
      v144 = v45;
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
          v67 = v50[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v50[1] - 48 + 26) & 3];
          v68 = v37;
          if ( v37 == *(unsigned __int16 *)(v67 + 8) )
          {
            v69 = (char *)Src[1];
            v70 = *(_QWORD **)(v67 + 16);
            v71 = (char *)Src[1] + v37;
            if ( v151 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v69 != *v70 )
                  break;
                v68 -= 8;
                if ( !v68 )
                  goto LABEL_137;
                v69 += 8;
                ++v70;
              }
              while ( v68 >= 8 );
            }
            if ( v69 >= v71 )
            {
LABEL_137:
              v24 = (PADAPTER_OBJECT)v50[1];
              ObfReferenceObject(v24);
              if ( !v144 )
              {
                ExReleasePushLockEx(p_DmaOperations, 0LL);
                v75 = *(struct _DMA_ADAPTER **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                HalPutDmaAdapter(v75);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
                v47 = 0LL;
              }
              v76 = *(struct _DMA_ADAPTER **)(v13 + 8);
              if ( v76 )
                HalPutDmaAdapter(v76);
              *(_QWORD *)(v13 + 8) = v24;
              *(_QWORD *)(v13 + 16) = v47;
              if ( !v24 )
                goto LABEL_104;
LABEL_142:
              v148 = v24;
              if ( v146 )
              {
                if ( !v24 )
                  goto LABEL_154;
                if ( !v147.m128i_i16[0] )
                {
                  v77 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v24[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v24 - 48) >> 8)] + 144);
                  if ( !v77 || a8 && v77 != ObpParseSymbolicLinkEx )
                  {
                    v33 = ObReferenceObjectByPointer(v24, 0, (POBJECT_TYPE)a4, a5);
                    v143 = v33;
                    goto LABEL_58;
                  }
                }
                goto LABEL_35;
              }
              if ( v24 )
              {
                v33 = v153;
                goto LABEL_318;
              }
LABEL_154:
              if ( v147.m128i_i16[0] )
              {
                v143 = -1073741766;
              }
              else
              {
                if ( !a8 )
                  goto LABEL_156;
                if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                  v115 = 8;
                else
                  v115 = 4;
                v116 = v167;
                v117 = v152;
                LOBYTE(v142) = v152;
                LOBYTE(Tag) = 0;
                if ( (unsigned __int8)ObCheckCreateObjectAccess(v167, v115, a10, Src, Tag, v142, &v143) )
                {
                  v118 = v116[85];
                  if ( v118 != -1
                    && ((POBJECT_TYPE)a4 == MmSectionObjectType || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                    && v118 != (unsigned int)PsGetCurrentProcessSessionId()
                    && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v117)
                    && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                  {
                    goto LABEL_345;
                  }
                  v119 = LOWORD(Src[0]);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                  if ( PoolWithTag )
                  {
                    if ( (unsigned __int8)ObpInsertDirectoryEntry(v116, a8) )
                    {
                      memmove(PoolWithTag, Src[1], v119);
                      v121 = (char *)&a8[-3] - ObpInfoMaskToOffset[BYTE2(a8[-2].DmaOperations) & 3];
                      v122 = (void *)*((_QWORD *)v121 + 2);
                      if ( v122 )
                        ExFreePoolWithTag(v122, 0);
                      v123 = (__int16)Src[0];
                      *((_WORD *)v121 + 4) = Src[0];
                      *((_WORD *)v121 + 5) = v123;
                      *((_QWORD *)v121 + 2) = PoolWithTag;
                      v148 = a8;
                      v143 = 0;
                      goto LABEL_59;
                    }
                    ExFreePoolWithTag(PoolWithTag, 0);
                  }
                  v143 = -1073741670;
                }
                else if ( v143 >= 0 )
                {
                  v143 = -1073741772;
                }
              }
              goto LABEL_157;
            }
            if ( HIDWORD(TokenInformation) )
            {
              v72 = (char *)v70 - v69;
              while ( 1 )
              {
                v73 = *(unsigned __int16 *)v69;
                v74 = *(unsigned __int16 *)&v69[v72];
                if ( (_WORD)v73 != (_WORD)v74 )
                {
                  if ( (unsigned int)v73 >= 0x61 )
                  {
                    if ( (unsigned int)v73 > 0x7A )
                    {
                      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v73 >= 0xC0u )
                        LOWORD(v73) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                               + 2
                                               * ((v73 & 0xF)
                                                + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((unsigned __int8)v73 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v73 >> 8))))))
                                    + v73;
                    }
                    else
                    {
                      LOWORD(v73) = v73 - 32;
                    }
                  }
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
                  if ( (_WORD)v73 != (_WORD)v74 )
                    break;
                }
                v69 += 2;
                if ( v69 >= v71 )
                  goto LABEL_137;
              }
            }
            else
            {
              while ( *(_WORD *)v69 == *(_WORD *)v70 )
              {
                v69 += 2;
                v70 = (_QWORD *)((char *)v70 + 2);
                if ( v69 >= v71 )
                  goto LABEL_137;
              }
            }
            v37 = v151;
          }
        }
        v47 = (unsigned __int16 *)v50;
        v50 = (__int64 *)*v50;
        if ( !v50 )
        {
          v45 = v144;
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
          if ( !v145 )
            goto LABEL_142;
          v52 = Object;
LABEL_106:
          v53 = v52[84];
          v54 = 0LL;
          if ( (v53 & 4) != 0 )
          {
            if ( (v53 & 0x10) != 0 && !v178 )
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
            v60 = KeGetCurrentThread();
            v17 = v60->SpecialApcDisable++ == -1;
            if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v60->ApcState.ApcListHead[0].Flink != &v60->152 )
              KiCheckForKernelApcDelivery(v59);
          }
          if ( !v54 )
            goto LABEL_215;
          v61 = *(_BYTE *)(v13 + 30);
          if ( v61 )
          {
            ObfReferenceObject(v52);
            v62 = a11;
            ObpUnlockDirectory((__int64)v52, a11);
            ObpLockDirectoryShared(a11, v54);
            HalPutDmaAdapter((PADAPTER_OBJECT)v52);
            v61 = *(_BYTE *)(a11 + 30);
          }
          else
          {
            v62 = a11;
          }
          v63 = &v54[8 * *(unsigned __int16 *)(v62 + 28)];
          if ( !v61 )
          {
            *(_DWORD *)(v62 + 32) = -1145368012;
            v64 = KeGetCurrentThread();
            --v64->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v54 + 296), 0LL);
            *(_DWORD *)(v62 + 32) = -572714444;
            ObfReferenceObject(v54);
            *(_QWORD *)v62 = v54;
            *(_WORD *)(v62 + 30) = 1;
          }
          v65 = *(__int64 **)v63;
          if ( !*(_QWORD *)v63 )
          {
LABEL_122:
            if ( !v61 )
              ObpUnlockDirectory((__int64)v54, v62);
            v24 = 0LL;
            v52 = v54;
            goto LABEL_125;
          }
          v66 = *(_DWORD *)(v62 + 24);
          while ( 1 )
          {
            if ( *((_DWORD *)v65 + 4) == v66 )
            {
              v99 = v151;
              v100 = v65[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v65[1] - 48 + 26) & 3];
              if ( v151 == *(unsigned __int16 *)(v100 + 8) )
              {
                v101 = (char *)Src[1];
                v102 = *(_QWORD **)(v100 + 16);
                v103 = (char *)Src[1] + (int)v151;
                if ( v151 >= 8 )
                {
                  do
                  {
                    if ( *(_QWORD *)v101 != *v102 )
                      break;
                    v99 -= 8;
                    if ( !v99 )
                      goto LABEL_210;
                    v101 += 8;
                    ++v102;
                  }
                  while ( v99 >= 8 );
                }
                if ( v101 >= v103 )
                {
LABEL_210:
                  v24 = (PADAPTER_OBJECT)v65[1];
                  ObfReferenceObject(v24);
                  if ( v61 )
                  {
                    v107 = a11;
                  }
                  else
                  {
                    ExReleasePushLockEx((ULONG_PTR)(v54 + 296), 0LL);
                    v107 = a11;
                    v108 = *(struct _DMA_ADAPTER **)a11;
                    *(_DWORD *)(a11 + 32) = -286387660;
                    HalPutDmaAdapter(v108);
                    *(_QWORD *)a11 = 0LL;
                    *(_WORD *)(a11 + 30) = 0;
                    KeLeaveCriticalRegion();
                    v63 = 0LL;
                  }
                  v109 = *(struct _DMA_ADAPTER **)(v107 + 8);
                  if ( v109 )
                    HalPutDmaAdapter(v109);
                  *(_QWORD *)(v107 + 8) = v24;
                  *(_QWORD *)(v107 + 16) = v63;
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
                  v104 = (char *)v102 - v101;
                  while ( 1 )
                  {
                    v105 = *(_WORD *)v101;
                    v106 = *(_WORD *)&v101[v104];
                    if ( *(_WORD *)v101 != v106 )
                    {
                      NLS_UPCASE(v106);
                      v124 = NLS_UPCASE(v105);
                      if ( v124 != v125 )
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
              }
            }
            v63 = (char *)v65;
            v65 = (__int64 *)*v65;
            if ( !v65 )
            {
              v62 = a11;
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
          v126 = NLS_UPCASE(v43);
          v42 = v126 + v127;
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
  v165 = 0LL;
  if ( (int)PsGetPermanentSiloContext(v19, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v165) >= 0 )
  {
    v24 = v165;
  }
  else
  {
    v24 = (PADAPTER_OBJECT)ObpRootDirectoryObject;
    v165 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
  }
  DmaAdapter = v24;
  if ( v24 )
    ObfReferenceObject(v24);
  if ( v15->m128i_i16[0] != 2 )
  {
    v174 = v15;
    v173 = a4 + 16;
    v175 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v172);
    goto LABEL_29;
  }
  if ( v24 )
  {
    v143 = ObReferenceObjectByPointer(v24, 0, (POBJECT_TYPE)a4, a5);
    if ( v143 >= 0 )
      *v18 = v24;
    HalPutDmaAdapter(v24);
    return v143;
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

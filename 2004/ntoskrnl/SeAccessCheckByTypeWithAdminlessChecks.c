/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80
 * Callers:
 *     SeAccessCheckByType @ 0x140294B50 (SeAccessCheckByType.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     SepTokenIsOwner @ 0x14026D890 (SepTokenIsOwner.c)
 *     SePrivilegePolicyCheck @ 0x14026DA70 (SePrivilegePolicyCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14026DBF0 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14026DC30 (SepTrustLevelCheck.c)
 *     SeCaptureObjectTypeList @ 0x14026DD30 (SeCaptureObjectTypeList.c)
 *     SepFreeResourceInfo @ 0x140294B1C (SepFreeResourceInfo.c)
 *     SepReferenceTokenByHandle @ 0x140295E60 (SepReferenceTokenByHandle.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14029D500 (SepAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x14032AA00 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x140343594 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x14034486C (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x140346E78 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1403564A8 (SepLpacCausedAccessFailure.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     SeFreeCapturedObjectTypeList @ 0x140590988 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140590A9C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140590B40 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140590BF8 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590D58 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x140590E6C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x140590EA0 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140592984 (SepRmReferenceFindCap.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140628AF0 (SeReleaseSid.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByTypeWithAdminlessChecks(
        __int16 *a1,
        void *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *Address,
        SIZE_T Length,
        unsigned __int64 a10,
        unsigned int *a11,
        int *a12,
        char a13,
        char a14)
{
  int v15; // r10d
  _DWORD *v16; // r8
  int *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned int v23; // r14d
  int v24; // edi
  PADAPTER_OBJECT v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rax
  char v31; // r13
  int v32; // eax
  int v33; // ecx
  struct _PRIVILEGE_SET *v34; // r15
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v36; // r12
  __int64 v37; // r8
  char IsOwner; // r13
  __int16 *v39; // rdi
  int v40; // edi
  int v41; // eax
  int *v42; // rcx
  int *v43; // r15
  __int64 v44; // rdi
  _DWORD *v45; // r13
  char v46; // r12
  _DWORD *v47; // rdi
  __int64 v48; // rax
  unsigned int v49; // r10d
  __int64 v50; // rcx
  unsigned __int8 v51; // bl
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // edi
  unsigned int v58; // eax
  unsigned int v59; // eax
  struct _KTHREAD *v60; // rax
  __int64 v61; // r9
  unsigned int v62; // ecx
  _DWORD *v63; // rax
  unsigned int v64; // ecx
  unsigned int *v65; // rdx
  int *v66; // r8
  ULONG PrivilegeCount; // ecx
  ULONG v68; // eax
  unsigned int v69; // edx
  int v70; // eax
  unsigned int v71; // eax
  _DMA_OPERATIONS *DmaOperations; // rax
  int *v73; // r8
  unsigned int v74; // ecx
  _DWORD *v75; // r9
  __int64 v76; // rcx
  ACL *v77; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v80; // rdx
  __int64 v81; // r15
  int *PoolWithTag; // rax
  int v83; // r10d
  char *v84; // rax
  unsigned int v85; // eax
  PVOID v86; // r8
  _DMA_OPERATIONS *v87; // rax
  __int64 v88; // r10
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r9
  int v92; // eax
  int v93; // ecx
  _DMA_OPERATIONS *v94; // rax
  __int64 GetCommonBufferFromVectorByIndex; // r8
  __int64 AllocateCommonBufferWithBounds; // rdx
  __int64 AllocateCommonBufferVector; // rcx
  __int64 GetDmaDomain; // r9
  int v99; // ecx
  int v100; // eax
  unsigned int v101; // edi
  unsigned int v102; // edx
  int v103; // [rsp+20h] [rbp-298h]
  int v104; // [rsp+40h] [rbp-278h]
  unsigned __int8 v105; // [rsp+A0h] [rbp-218h]
  int v106; // [rsp+A4h] [rbp-214h]
  unsigned __int8 v107; // [rsp+A8h] [rbp-210h]
  char v108; // [rsp+A9h] [rbp-20Fh]
  unsigned int v109; // [rsp+B0h] [rbp-208h] BYREF
  char v110; // [rsp+B8h] [rbp-200h]
  char v111; // [rsp+B9h] [rbp-1FFh] BYREF
  char v112; // [rsp+BAh] [rbp-1FEh] BYREF
  char v113[5]; // [rsp+BBh] [rbp-1FDh] BYREF
  unsigned int v114; // [rsp+C0h] [rbp-1F8h]
  int v115; // [rsp+C8h] [rbp-1F0h]
  int v116; // [rsp+CCh] [rbp-1ECh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D0h] [rbp-1E8h] BYREF
  unsigned int v118; // [rsp+D8h] [rbp-1E0h]
  __int64 v119; // [rsp+E0h] [rbp-1D8h] BYREF
  int v120; // [rsp+E8h] [rbp-1D0h] BYREF
  int v121; // [rsp+ECh] [rbp-1CCh]
  char v122; // [rsp+F2h] [rbp-1C6h]
  volatile void *v123; // [rsp+F8h] [rbp-1C0h]
  int *v124; // [rsp+100h] [rbp-1B8h]
  int v125; // [rsp+108h] [rbp-1B0h] BYREF
  int *v126; // [rsp+110h] [rbp-1A8h]
  PVOID v127; // [rsp+118h] [rbp-1A0h]
  int v128; // [rsp+120h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+128h] [rbp-190h] BYREF
  PVOID v130; // [rsp+130h] [rbp-188h] BYREF
  __int64 v131; // [rsp+138h] [rbp-180h]
  int v132; // [rsp+140h] [rbp-178h] BYREF
  ACL *v133; // [rsp+148h] [rbp-170h]
  PVOID P; // [rsp+150h] [rbp-168h]
  __int64 v135; // [rsp+158h] [rbp-160h]
  __int64 v136; // [rsp+160h] [rbp-158h] BYREF
  __int64 v137; // [rsp+168h] [rbp-150h] BYREF
  __int16 *v138; // [rsp+170h] [rbp-148h]
  __int64 v139; // [rsp+178h] [rbp-140h] BYREF
  PVOID v140; // [rsp+180h] [rbp-138h] BYREF
  int v141; // [rsp+188h] [rbp-130h] BYREF
  int v142; // [rsp+18Ch] [rbp-12Ch] BYREF
  int v143; // [rsp+190h] [rbp-128h] BYREF
  int v144; // [rsp+194h] [rbp-124h] BYREF
  __int64 v145; // [rsp+198h] [rbp-120h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1A0h] [rbp-118h] BYREF
  void *Src; // [rsp+1C0h] [rbp-F8h]
  _OWORD v148[2]; // [rsp+1C8h] [rbp-F0h] BYREF
  __int16 *v149; // [rsp+1E8h] [rbp-D0h]
  void *v150; // [rsp+1F0h] [rbp-C8h]
  __int64 v151; // [rsp+1F8h] [rbp-C0h]
  unsigned __int64 v152; // [rsp+200h] [rbp-B8h]
  _DWORD *v153; // [rsp+208h] [rbp-B0h]
  unsigned int *v154; // [rsp+210h] [rbp-A8h]
  int *v155; // [rsp+218h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v157; // [rsp+240h] [rbp-78h]
  __int128 v158; // [rsp+248h] [rbp-70h] BYREF
  __int64 v159; // [rsp+258h] [rbp-60h]
  int v160; // [rsp+260h] [rbp-58h]
  __int128 v161; // [rsp+268h] [rbp-50h] BYREF

  v15 = (int)a2;
  Src = a2;
  v138 = a1;
  v149 = a1;
  v150 = a2;
  v151 = a3;
  v109 = a4;
  v152 = a5;
  v114 = a6;
  v153 = Address;
  v131 = a10;
  v16 = a11;
  v123 = a11;
  v154 = a11;
  v17 = a12;
  v124 = a12;
  v155 = a12;
  v141 = 0;
  P = 0LL;
  v142 = 0;
  v143 = 0;
  v127 = 0LL;
  v144 = 0;
  v126 = 0LL;
  DmaAdapter = 0LL;
  v119 = 0LL;
  v137 = 0LL;
  v120 = 0;
  v116 = 0;
  v161 = 0LL;
  v136 = 0LL;
  Privileges = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v148[0] = 0LL;
  LOBYTE(v15) = 0;
  v107 = 0;
  v130 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0;
  v133 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v157 = 0LL;
  v135 = 0LL;
  v110 = 0;
  v108 = 0;
  v125 = 0;
  v121 = v15;
  v122 = 0;
  v140 = 0LL;
  v113[0] = 0;
  v111 = 0;
  v112 = 0;
  v145 = 0LL;
  v115 = -1073741790;
  v132 = -1;
  v139 = 0xFFFFFFFFLL;
  v18 = (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v105 = v18;
  if ( !(_BYTE)v18 )
  {
    *a12 = 0;
    *a11 = v109;
    return 0LL;
  }
  if ( a13 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      goto LABEL_19;
    }
    ProbeForWrite(a12, 4LL * a6, 4u);
    ProbeForWrite(v123, 4LL * a6, 4u);
  }
  else
  {
    v19 = (__int64)a12;
    if ( (unsigned __int64)a12 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = a10;
  if ( a10 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( Address && (unsigned int)Length >= 0x14 )
    *Address = 0;
  if ( (a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v161 = *(_OWORD *)a7;
  result = 0LL;
  v18 = v105;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v23 = v109;
  if ( (v109 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    v106 = -1073741594;
    v25 = DmaAdapter;
    goto LABEL_176;
  }
  v24 = SepReferenceTokenByHandle(a3, 8, (unsigned __int8)v18, (int)&DmaAdapter, v113, (__int64)&v145);
  v106 = v24;
  if ( v24 < 0 )
  {
    v25 = 0LL;
    DmaAdapter = 0LL;
    v51 = v105;
    v46 = a13;
    goto LABEL_80;
  }
  v25 = DmaAdapter;
  if ( (unsigned __int64)(a3 + 6) > 2 )
  {
    if ( *(_DWORD *)&DmaAdapter[12].Version != 2 )
    {
      v24 = -1073741732;
      v106 = -1073741732;
      v51 = v105;
      goto LABEL_172;
    }
    if ( *(int *)(&DmaAdapter[12].Size + 1) < 1 )
    {
      v24 = -1073741659;
      v106 = -1073741659;
      v51 = v105;
      goto LABEL_172;
    }
  }
  v24 = SeCaptureObjectTypeList(a5, v114, v105, &v136);
  v106 = v24;
  if ( v24 < 0 || (v24 = SeCaptureSecurityDescriptor((_DWORD)v138, v105, 1, 0, (__int64)&v119), v106 = v24, v24 < 0) )
  {
LABEL_174:
    v51 = v105;
    goto LABEL_172;
  }
  if ( !v119 )
    goto LABEL_173;
  v138 = (__int16 *)(v119 + 2);
  v18 = *(unsigned __int16 *)(v119 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v27 = *(_QWORD *)(v119 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v119 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_173;
    v27 = v119 + v26;
  }
  if ( !v27 )
    goto LABEL_173;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v28 = *(unsigned int *)(v119 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v119 + v28;
      goto LABEL_35;
    }
LABEL_173:
    v24 = -1073741703;
    v106 = -1073741703;
    goto LABEL_174;
  }
  v29 = *(_QWORD *)(v119 + 16);
LABEL_35:
  if ( !v29 )
    goto LABEL_173;
  if ( v113[0] )
    v30 = (void *)v145;
  else
    v30 = *(void **)&v25[69].Version;
  v24 = SepTrustLevelCheck((__int64)&v132, v119, 0LL, (__int64)v25, v30, 1, &v132);
  v106 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  if ( (v132 & v109 & 0xFDFFFFFF) != (v109 & 0xFDFFFFFF) )
  {
    v111 = 1;
LABEL_184:
    v33 = -1073741790;
    v31 = a14;
LABEL_47:
    v16 = (_DWORD *)v107;
    goto LABEL_48;
  }
  LOBYTE(v17) = 1;
  v24 = SepFilterCheck(v119, (unsigned int)&v130, (_DWORD)v25, (_DWORD)v17, (__int64)&v139);
  v106 = v24;
  if ( v24 < 0 )
  {
LABEL_176:
    v51 = v105;
    goto LABEL_172;
  }
  if ( ((unsigned int)v139 & v109 & 0xFDFFFFFF) != (v109 & 0xFDFFFFFF) )
  {
    v112 = 1;
    goto LABEL_184;
  }
  v31 = a14;
  v24 = SepMandatoryIntegrityCheck((unsigned int)&v161, v119, 0, (_DWORD)v25, 1, a14, (__int64)v148);
  v106 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  v107 = 0;
  v32 = SepMandatoryToDiscretionary(v148, v109);
  v33 = v32;
  if ( (v32 < 0 || (v109 & 0x2000000) != 0)
    && ((__int64)v25[12].DmaOperations & 0x4000) != 0
    && HIDWORD(v148[0]) <= 0x2000 )
  {
    LOBYTE(v16) = 1;
    v107 = 1;
  }
  if ( v32 >= 0 || (_BYTE)v16 )
  {
    v33 = SePrivilegePolicyCheck((int *)&v109, &v120, 0LL, (int)v25, (__int64)&Privileges, v105);
    v23 = v109;
    if ( !v109 )
    {
      v18 = (unsigned __int8)v121;
      if ( v120 )
        v18 = 1LL;
      v121 = v18;
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( v33 < 0 && !(_BYTE)v16 )
  {
    v46 = a13;
    v16 = v124;
    if ( a13 )
    {
      v18 = 0LL;
      v118 = 0;
      v17 = (int *)v123;
      while ( (unsigned int)v18 < v114 )
      {
        v16[(unsigned int)v18] = v33;
        v17[(unsigned int)v18] = 0;
        v18 = (unsigned int)(v18 + 1);
        v118 = v18;
      }
    }
    else
    {
      *v124 = v33;
      *(_DWORD *)v123 = 0;
    }
    v115 = v33;
    v24 = 0;
    v106 = 0;
    v51 = v105;
    goto LABEL_80;
  }
  v34 = Privileges;
  if ( Privileges )
  {
    PrivilegeCount = Privileges->PrivilegeCount;
    v68 = 12 * Privileges->PrivilegeCount;
    v69 = v68 + 8;
    if ( !Privileges->PrivilegeCount )
      v69 = 8;
    if ( v69 > (unsigned int)Length )
    {
      v70 = v68 + 8;
      if ( !PrivilegeCount )
        v70 = 8;
      *(_DWORD *)v131 = v70;
      v24 = -1073741789;
      v106 = -1073741789;
      v51 = v105;
      CmSiFreeMemory(v34);
      goto LABEL_172;
    }
    v71 = v68 + 8;
    if ( !PrivilegeCount )
      v71 = 8;
    memmove(Address, Privileges, v71);
    CmSiFreeMemory(v34);
  }
  else
  {
    if ( (unsigned int)Length < 0x14 )
    {
      *(_DWORD *)v131 = 20;
      v24 = -1073741789;
      v106 = -1073741789;
      v46 = a13;
      v51 = v105;
      goto LABEL_80;
    }
    *(_QWORD *)Address = Privileges;
  }
  if ( Src )
  {
    v24 = SeCaptureSid(Src, v103, 1, (__int64)&v137);
    v106 = v24;
    if ( v24 < 0 )
    {
      v137 = 0LL;
      v51 = v105;
LABEL_172:
      v46 = a13;
      goto LABEL_80;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = DmaAdapter;
  v36 = (PERESOURCE *)&DmaAdapter[3];
  ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
  IsOwner = SepTokenIsOwner((__int64)v25, v119, v37, v31);
  if ( !SepAllowAccessUponLogoff && ((__int64)v25[12].DmaOperations & 0x20) == 0 )
  {
    DmaOperations = v25[13].DmaOperations;
    if ( DmaOperations )
    {
      if ( ((__int64)DmaOperations->AllocateAdapterChannel & 0x20) != 0 )
      {
        v46 = a13;
        v73 = v124;
        if ( a13 )
        {
          v74 = 0;
          v118 = 0;
          v75 = v123;
          while ( v74 < v114 )
          {
            v73[v74] = -1073741790;
            v75[v74++] = 0;
            v118 = v74;
          }
        }
        else
        {
          *v124 = -1073741790;
          *(_DWORD *)v123 = 0;
        }
        v115 = -1073741790;
        v24 = 0;
        v106 = 0;
        v51 = v105;
        ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v23 = v109;
        goto LABEL_80;
      }
    }
  }
  v39 = v138;
  if ( SepRmEnforceCap && (*v138 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
  {
    if ( *v138 >= 0 )
    {
      v77 = *(ACL **)(v119 + 24);
    }
    else
    {
      v76 = *(unsigned int *)(v119 + 12);
      if ( !(_DWORD)v76 )
      {
        v133 = 0LL;
        goto LABEL_55;
      }
      v77 = (ACL *)(v119 + v76);
    }
    v133 = v77;
    if ( v77 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v77);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        v80 = v135;
        if ( Cap < 0 )
          v80 = SepRmDefaultCap;
        v135 = v80;
        v110 = 1;
      }
    }
  }
LABEL_55:
  v23 = v109;
  if ( (v109 & 0x2060000) != 0
    && IsOwner
    && ((*v39 & 4) == 0
      ? (v54 = 0LL)
      : *v39 >= 0
      ? (v54 = *(_QWORD *)(v119 + 32))
      : (v53 = *(_DWORD *)(v119 + 16)) == 0
      ? (v54 = 0LL)
      : (v54 = v119 + v53),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v54)) )
  {
    if ( (v23 & 0x2000000) != 0 )
    {
      v55 = 393216;
      v40 = v120 | 0x60000;
    }
    else
    {
      v55 = v23 & 0x60000;
      v40 = v120 | v23 & 0x60000;
    }
    v116 = v55;
    v120 = v40;
    v23 &= 0xFFF9FFFF;
    v109 = v23;
  }
  else
  {
    v40 = v120;
  }
  if ( v23 || v110 && !(_BYTE)v121 )
  {
    v25 = DmaAdapter;
    v41 = v116;
  }
  else
  {
    v25 = DmaAdapter;
    if ( ((__int64)DmaAdapter[12].DmaOperations & 0x2000) != 0 || (v41 = v116) == 0 )
    {
      v46 = a13;
      if ( a13 )
      {
        v64 = 0;
        v118 = 0;
        v65 = v154;
        v66 = v155;
        while ( v64 < v114 )
        {
          if ( v40 )
          {
            v66[v64] = 0;
            v115 = 0;
            v65[v64] = v40;
          }
          else
          {
            v66[v64] = -1073741790;
            v115 = -1073741790;
            v65[v64] = 0;
          }
          v118 = ++v64;
        }
      }
      else
      {
        v63 = v123;
        if ( v40 )
        {
          *v124 = 0;
          v115 = 0;
          *v63 = v40;
        }
        else
        {
          *v124 = -1073741790;
          v115 = -1073741790;
          *v63 = 0;
        }
      }
      v24 = 0;
      v106 = 0;
      v51 = v105;
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_80;
    }
  }
  if ( a13 )
  {
    v81 = v114;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 8LL * v114, 0x61476553u);
    v42 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExReleaseResourceLite(*v36);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v106 = -1073741670;
      v51 = v105;
      goto LABEL_172;
    }
    v43 = &PoolWithTag[v81];
    v41 = v116;
  }
  else
  {
    v42 = &v141;
    P = &v141;
    v43 = &v142;
  }
  LODWORD(v158) = v41;
  v104 = v40;
  v44 = v114;
  SepAccessCheck(
    v119,
    v137,
    SubjectContext.PrimaryToken,
    (_DWORD)v25,
    v23,
    v136,
    v114,
    (__int64)&v161,
    v104,
    v105,
    (__int64)v42,
    0LL,
    (__int64)v43,
    a13,
    IsOwner,
    (__int64)&v158,
    (__int64)&v130,
    0LL,
    0LL,
    a14);
  if ( SepRmEnforceCap && (v83 = *v43, v116 = v83, v83 >= 0) && v110 )
  {
    if ( a13 )
    {
      v84 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v44, 0x61476553u);
      v127 = v84;
      if ( !v84 )
      {
        ExReleaseResourceLite(*v36);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v24 = -1073741670;
        v106 = -1073741670;
        v25 = DmaAdapter;
        v23 = v109;
        v51 = v105;
        goto LABEL_172;
      }
      v126 = (int *)&v84[4 * v44];
      v83 = *v43;
      v116 = *v43;
    }
    else
    {
      v127 = &v143;
      v126 = &v144;
    }
    LODWORD(Privileges) = *(_DWORD *)P;
    LOBYTE(v44) = 0;
    v121 = v44;
    if ( v114 )
    {
      v24 = SepCopyObjectTypeList(v136, v114, &v140);
      v106 = v24;
      if ( v24 < 0 )
      {
        v25 = DmaAdapter;
        v23 = v109;
        v51 = v105;
        goto LABEL_172;
      }
      v83 = v116;
      LOBYTE(v44) = v121;
    }
    v85 = 0;
    v128 = 0;
    v25 = DmaAdapter;
    v23 = v109;
    while ( v85 < *(_DWORD *)(v135 + 60) )
    {
      v131 = *(_QWORD *)(v135 + 8LL * v85 + 64);
      if ( !*(_QWORD *)(v131 + 24) )
        goto LABEL_278;
      v86 = v130;
      if ( !v130 )
      {
        LODWORD(v44) = (unsigned __int8)v44;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl(v133, &v130) < 0 )
          LODWORD(v44) = 1;
        v121 = v44;
        v86 = v130;
      }
      v87 = v25[68].DmaOperations;
      v88 = v87 ? (__int64)v87[1].GetCommonBufferFromVectorByIndex : 0LL;
      v89 = v87 ? (__int64)v87[1].AllocateCommonBufferWithBounds : 0LL;
      v90 = v87 ? (__int64)v87[1].AllocateCommonBufferVector : 0LL;
      v91 = v87 ? (__int64)v87[1].GetDmaDomain : 0LL;
      v92 = AuthzBasepEvaluateAceCondition(
              (__int64)v25,
              (__int64)v25[48].DmaOperations,
              (__int64)v86,
              v91,
              v90,
              v89,
              v88,
              *(_DWORD **)(v131 + 24),
              *(_DWORD *)(v131 + 16),
              1u,
              0,
              &v125);
      v24 = v92;
      v106 = v92;
      v93 = v125;
      if ( v125 == 1 )
        goto LABEL_278;
      if ( v92 < 0 )
        goto LABEL_294;
      if ( ((__int64)v25[12].DmaOperations & 0x10) != 0 )
      {
        v94 = v25[68].DmaOperations;
        if ( v94 )
          GetCommonBufferFromVectorByIndex = (__int64)v94[1].GetCommonBufferFromVectorByIndex;
        else
          GetCommonBufferFromVectorByIndex = 0LL;
        if ( v94 )
          AllocateCommonBufferWithBounds = (__int64)v94[1].AllocateCommonBufferWithBounds;
        else
          AllocateCommonBufferWithBounds = 0LL;
        if ( v94 )
          AllocateCommonBufferVector = (__int64)v94[1].AllocateCommonBufferVector;
        else
          AllocateCommonBufferVector = 0LL;
        if ( v94 )
          GetDmaDomain = (__int64)v94[1].GetDmaDomain;
        else
          GetDmaDomain = 0LL;
        v24 = AuthzBasepEvaluateAceCondition(
                (__int64)v25,
                (__int64)v25[48].DmaOperations,
                (__int64)v130,
                GetDmaDomain,
                AllocateCommonBufferVector,
                AllocateCommonBufferWithBounds,
                GetCommonBufferFromVectorByIndex,
                *(_DWORD **)(v131 + 24),
                *(_DWORD *)(v131 + 16),
                1u,
                1u,
                &v125);
        v106 = v24;
        if ( v24 < 0 )
        {
LABEL_294:
          ExReleaseResourceLite(*v36);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
          v51 = v105;
          goto LABEL_172;
        }
        v93 = v125;
      }
      LOBYTE(v44) = v121;
      if ( (_BYTE)v121 || v93 == 1 )
      {
LABEL_278:
        v24 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        v106 = v24;
        if ( v24 < 0 )
          goto LABEL_294;
        v99 = v23;
        if ( (*(_DWORD *)(v131 + 48) & 1) != 0 )
        {
          if ( (v23 & 0x2000000) == 0 )
            v99 = v120 | v23;
          v100 = 0;
        }
        else
        {
          v100 = v120;
        }
        v101 = v114;
        SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          v137,
          SubjectContext.PrimaryToken,
          (_DWORD)v25,
          v99,
          (__int64)v140,
          v114,
          (__int64)&v161,
          v100,
          v105,
          (__int64)v127,
          0LL,
          (__int64)v126,
          a13,
          IsOwner,
          (__int64)&v158,
          (__int64)&v130,
          0LL,
          0LL,
          a14);
        v102 = *(_DWORD *)v127;
        if ( v108 )
          v102 = (unsigned int)Privileges & *(_DWORD *)v127;
        LODWORD(Privileges) = v102;
        if ( v102 )
          v83 = *v126;
        else
          v83 = -1073741790;
        v116 = v83;
        v108 = 1;
        if ( v140 )
          SepMergeObjectTypeListAccesses(v136, v140, v101);
        if ( v83 < 0 )
          break;
        LOBYTE(v44) = v121;
      }
      else
      {
        v83 = v116;
      }
      v85 = ++v128;
    }
    *v43 = v83;
    v45 = P;
    *(_DWORD *)P &= (unsigned int)Privileges;
  }
  else
  {
    v25 = DmaAdapter;
    v23 = v109;
    v45 = P;
  }
  ExReleaseResourceLite(*v36);
  KeLeaveCriticalRegion();
  SeReleaseSubjectContext(&SubjectContext);
  if ( (v23 & 0x2000000) != 0 )
  {
    if ( !v107 || !*(_WORD *)((char *)&v159 + 5) )
    {
      v46 = a13;
      if ( a13 )
        v56 = v114;
      else
        v56 = 0;
      SepConstrainByMandatory((unsigned int)v148, v23, (_DWORD)v45, (_DWORD)v43, 0LL, v56);
      goto LABEL_66;
    }
  }
  else if ( v107 && !*(_WORD *)((char *)&v159 + 5) )
  {
    v46 = a13;
    v16 = v124;
    if ( a13 )
    {
      v62 = 0;
      v118 = 0;
      v17 = (int *)v123;
      while ( v62 < v114 )
      {
        v16[v62] = -1073741790;
        v17[v62++] = 0;
        v118 = v62;
      }
    }
    else
    {
      *v124 = -1073741790;
      *(_DWORD *)v123 = 0;
    }
    v115 = -1073741790;
    v24 = 0;
    v106 = 0;
    v51 = v105;
    goto LABEL_80;
  }
  v46 = a13;
LABEL_66:
  if ( (v23 & 0x2000000) != 0 )
  {
    v57 = v114;
    if ( v46 )
      v58 = v114;
    else
      v58 = 0;
    SepConstrainByConstraintMask(v132, v23, (_DWORD)v45, (_DWORD)v43, 0LL, v58, (__int64)&v111);
    if ( v46 )
      v59 = v57;
    else
      v59 = 0;
    SepConstrainByConstraintMask(v139, v23, (_DWORD)v45, (_DWORD)v43, 0LL, v59, (__int64)&v112);
  }
  v18 = (__int64)v124;
  *v124 = *v43;
  v16 = v123;
  *(_DWORD *)v123 = *v45;
  v115 = *v43;
  v17 = v126;
  v47 = v127;
  if ( SepRmEnforceCap && v108 && *v43 >= 0 )
  {
    *(_DWORD *)v18 = *v126;
    *v16 &= *v47;
    v115 = *v17;
  }
  if ( v46 )
  {
    v48 = 1LL;
    v49 = v114;
    while ( 1 )
    {
      v118 = v48;
      if ( (unsigned int)v48 >= v49 )
        break;
      v50 = v48;
      *(_DWORD *)(v18 + v50 * 4) = v43[v48];
      v16[v50] = v45[v48];
      if ( SepRmEnforceCap && v108 && v43[v50] >= 0 )
      {
        *(_DWORD *)(v18 + 4 * v48) = v17[v48];
        v16[v48] &= v47[v48];
      }
      v48 = v118 + 1;
    }
  }
  v24 = 0;
  v106 = 0;
  v25 = DmaAdapter;
  v23 = v109;
  v51 = v105;
LABEL_80:
  if ( v119 && v25 )
  {
    if ( v111 || v112 )
    {
LABEL_129:
      v60 = KeGetCurrentThread();
      --v60->KernelApcDisable;
      v25 = DmaAdapter;
      ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
      if ( v113[0] )
        LODWORD(v61) = v145;
      else
        v61 = *(_QWORD *)&v25[69].Version;
      v23 = v109;
      SeLogAccessFailure((_DWORD)v25, 0, 0, v61, v119, v120 | v109, v115 >= 0, 0);
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      v24 = v106;
      v52 = HIDWORD(v158);
LABEL_86:
      if ( v24 >= 0
        && v115 < 0
        && !v52
        && ((__int64)v25[12].DmaOperations & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v158, v23, v16, v17) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_88;
    }
    v52 = HIDWORD(v158);
    if ( HIDWORD(v158) || ((__int64)v25[12].DmaOperations & 0x4000) == 0 )
      goto LABEL_86;
    if ( v24 >= 0 )
    {
      if ( v115 >= 0 && !HIBYTE(v159) )
        goto LABEL_86;
      goto LABEL_129;
    }
  }
LABEL_88:
  if ( v46 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v127 )
      ExFreePoolWithTag(v127, 0);
  }
  if ( v25 )
    HalPutDmaAdapter(v25);
  if ( v136 )
    SeFreeCapturedObjectTypeList(v136, v18, v16, v17);
  if ( v137 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v137, v51, v16, v17);
  }
  if ( v119 )
    SeReleaseSecurityDescriptor(v119, v51, 0LL, v17);
  if ( v110 )
    SepRmDereferenceCap(v135, v18, v16, v17);
  if ( v140 )
    ExFreePoolWithTag(v140, 0);
  SepFreeResourceInfo(v130);
  return (unsigned int)v24;
}

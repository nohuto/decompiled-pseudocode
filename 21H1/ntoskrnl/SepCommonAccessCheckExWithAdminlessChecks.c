/*
 * XREFs of SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184
 * Callers:
 *     SepCommonAccessCheckEx @ 0x14037014C (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepTrustLevelCheck @ 0x140204950 (SepTrustLevelCheck.c)
 *     SepMandatoryToDiscretionary @ 0x140204A64 (SepMandatoryToDiscretionary.c)
 *     SepTokenIsOwner @ 0x140204D30 (SepTokenIsOwner.c)
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14020A2B0 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140257F58 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14025829C (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     RtlpOwnerAcesPresent @ 0x1402EFB70 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepSetAccessReasons @ 0x1402F5E30 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByMandatory @ 0x140306A68 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x14030A578 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1403188AC (SepLpacCausedAccessFailure.c)
 *     SepAccessCheckEx @ 0x1403708D0 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405903AC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140590508 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590668 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1405907D0 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140592294 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x1405BBB40 (AuthzBasepMergeAccessReasons.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405E3400 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall SepCommonAccessCheckExWithAdminlessChecks(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7,
        char a8)
{
  PSECURITY_SUBJECT_CONTEXT v10; // r12
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  char v16; // r13
  __int64 v17; // r9
  int v18; // edi
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // r8
  __int64 v25; // r10
  int *v26; // rdx
  int v27; // ebx
  int *v28; // rax
  __int64 ClientToken; // rsi
  __int64 v30; // rcx
  int v31; // eax
  int *v32; // rdx
  int v33; // ebx
  __int64 v34; // rdx
  int v35; // eax
  char v36; // bl
  char v37; // cl
  int v38; // eax
  char v39; // al
  char IsOwner; // al
  int v41; // ebx
  unsigned int v42; // edx
  char v43; // al
  char v44; // r8
  __int64 v45; // rcx
  PACCESS_TOKEN v46; // r9
  PACCESS_TOKEN v47; // r8
  char v48; // al
  __int64 v49; // rdx
  char *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  int v53; // ebx
  int *v54; // r8
  _DWORD *v55; // rcx
  int v56; // edx
  char v57; // bl
  int *v58; // rdx
  _DWORD *v59; // r9
  int v60; // ecx
  int v61; // r8d
  char v62; // si
  __int64 v63; // rcx
  char v65; // al
  __int64 v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rdx
  char v70; // al
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // edx
  int v75; // edi
  int v76; // eax
  int *v77; // rcx
  int v78; // ecx
  _QWORD *v79; // rax
  bool v80; // zf
  int v81; // esi
  __int64 v82; // rdi
  ULONGLONG TokenTrustLevel; // rax
  int v84; // ebx
  int v85; // edx
  int v86; // ecx
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // rcx
  __int16 v90; // dx
  __int64 v91; // rax
  ACL *v92; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v95; // rdx
  bool v96; // sf
  int *v97; // rcx
  int *v98; // rbx
  int v99; // r9d
  int v100; // r10d
  unsigned int **v101; // rcx
  unsigned int *v102; // rcx
  unsigned int v103; // eax
  _DWORD *v104; // rcx
  char v105; // dl
  int *PoolWithTag; // rax
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  unsigned int v111; // eax
  unsigned int v112; // ecx
  PVOID v113; // r8
  int v114; // eax
  int v115; // ecx
  _QWORD *v116; // rax
  __int64 v117; // r10
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // ecx
  int v126; // edi
  _QWORD *v127; // rax
  __int64 v128; // r8
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r9
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // ecx
  int v135; // edi
  PACCESS_TOKEN v136; // r9
  PACCESS_TOKEN v137; // r8
  char v138; // al
  int v139; // r8d
  int v140; // ecx
  int v141; // edi
  int v142; // edi
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // r9
  int v146; // ecx
  int v147; // eax
  PACCESS_TOKEN v148; // r9
  PACCESS_TOKEN v149; // r8
  __int64 v150; // rcx
  int v151; // edx
  int v152; // eax
  __int64 v153; // rcx
  int v154; // esi
  int v155; // ecx
  unsigned int v156; // edx
  int *v157; // r12
  int v158; // eax
  int v159; // r8d
  int v160; // edi
  int v161; // edi
  int v162; // eax
  bool v163; // cl
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  _DWORD *v167; // rax
  __int64 v168; // r9
  int v169; // eax
  int v170; // eax
  int v171; // edi
  __int64 v172; // rbx
  char v173; // si
  ULONGLONG v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rcx
  char v177; // [rsp+20h] [rbp-110h]
  __int64 v178; // [rsp+38h] [rbp-F8h]
  __int64 v179; // [rsp+38h] [rbp-F8h]
  __int64 v180; // [rsp+38h] [rbp-F8h]
  int v181; // [rsp+40h] [rbp-F0h]
  __int64 v182; // [rsp+50h] [rbp-E0h]
  __int64 v183; // [rsp+58h] [rbp-D8h]
  __int64 v184; // [rsp+60h] [rbp-D0h]
  __int64 v185; // [rsp+68h] [rbp-C8h]
  int v186; // [rsp+70h] [rbp-C0h]
  char v187; // [rsp+78h] [rbp-B8h]
  char v188; // [rsp+B0h] [rbp-80h]
  bool v190; // [rsp+B2h] [rbp-7Eh] BYREF
  char v191; // [rsp+B3h] [rbp-7Dh]
  char v192; // [rsp+B4h] [rbp-7Ch]
  char v193; // [rsp+B5h] [rbp-7Bh]
  char v194; // [rsp+B6h] [rbp-7Ah]
  char v195; // [rsp+B7h] [rbp-79h]
  char v196; // [rsp+B8h] [rbp-78h]
  char v197[3]; // [rsp+B9h] [rbp-77h] BYREF
  int v198; // [rsp+BCh] [rbp-74h]
  int v199; // [rsp+C0h] [rbp-70h]
  PVOID P; // [rsp+C8h] [rbp-68h] BYREF
  int v201; // [rsp+D0h] [rbp-60h]
  int v202; // [rsp+D4h] [rbp-5Ch]
  int v203; // [rsp+D8h] [rbp-58h] BYREF
  int v204; // [rsp+DCh] [rbp-54h]
  int v205; // [rsp+E0h] [rbp-50h]
  __int64 v206; // [rsp+E8h] [rbp-48h]
  int v207; // [rsp+F0h] [rbp-40h] BYREF
  int v208; // [rsp+F4h] [rbp-3Ch]
  int v209; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v210; // [rsp+100h] [rbp-30h]
  int v211; // [rsp+108h] [rbp-28h]
  int v212; // [rsp+10Ch] [rbp-24h] BYREF
  __int64 v213; // [rsp+110h] [rbp-20h]
  __int64 PrimaryToken; // [rsp+118h] [rbp-18h]
  int v215; // [rsp+120h] [rbp-10h] BYREF
  int v216; // [rsp+124h] [rbp-Ch] BYREF
  int v217; // [rsp+128h] [rbp-8h] BYREF
  __int128 v218; // [rsp+130h] [rbp+0h] BYREF
  __int64 v219; // [rsp+140h] [rbp+10h]
  PSECURITY_SUBJECT_CONTEXT v220; // [rsp+148h] [rbp+18h]
  _OWORD SecurityDescriptor[2]; // [rsp+150h] [rbp+20h] BYREF
  __int64 v222; // [rsp+170h] [rbp+40h]
  _OWORD v223[2]; // [rsp+178h] [rbp+48h] BYREF
  __int64 v224; // [rsp+198h] [rbp+68h]
  int v225; // [rsp+1A0h] [rbp+70h] BYREF
  __int128 v226; // [rsp+1A4h] [rbp+74h]
  __int64 v227; // [rsp+1B4h] [rbp+84h]
  __int128 v228; // [rsp+1C0h] [rbp+90h] BYREF
  __int128 v229; // [rsp+1D0h] [rbp+A0h]
  __int128 v230; // [rsp+1E0h] [rbp+B0h]
  _BYTE v231[128]; // [rsp+1F0h] [rbp+C0h] BYREF
  _BYTE v232[128]; // [rsp+270h] [rbp+140h] BYREF
  _BYTE v233[128]; // [rsp+2F0h] [rbp+1C0h] BYREF

  v220 = SubjectContext;
  v190 = 0;
  v197[0] = 0;
  v227 = 0LL;
  v213 = 0LL;
  v10 = SubjectContext;
  v222 = 0LL;
  v224 = 0LL;
  v212 = 0;
  v216 = 0;
  v206 = 0LL;
  v188 = 0;
  v218 = 0LL;
  P = 0LL;
  v226 = 0LL;
  v207 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v223, 0, sizeof(v223));
  memset(v231, 0, sizeof(v231));
  memset(v232, 0, sizeof(v232));
  memset(v233, 0, sizeof(v233));
  v193 = 0;
  v209 = -1;
  v217 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v12 = *(_DWORD **)(a4 + 16);
  if ( !v12 )
    return 0;
  if ( !v10
    || !a3
    || *(_DWORD *)a3 != 56
    || (v13 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v14 = *(_DWORD **)(a3 + 8)) != 0LL && (*v14 != 16 || (v14[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v12 = -1073741811;
    return 0;
  }
  *v13 = 0;
  **(_DWORD **)(a4 + 16) = -1073741790;
  v15 = *(_QWORD **)(a4 + 32);
  v203 = 0;
  v215 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = 1;
  v17 = *(_QWORD *)(a4 + 24);
  v211 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  v18 = v211;
  AuthzBasepSetAccessReasons(v211, 0, 0, v17, 1);
  if ( a6 == v20 )
  {
    v76 = *(_DWORD *)(a3 + 16);
    v77 = *(int **)(a4 + 8);
    if ( (v76 & 0x2000000) != 0 )
    {
      *v77 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      *v77 = *(_DWORD *)(a3 + 20) | v76;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v16;
  }
  v21 = *(_QWORD *)(a3 + 8);
  if ( !v21 || !*(_QWORD *)(v21 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( v10->ClientToken && v10->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v78 = *(_DWORD *)(a3 + 20);
    if ( !v78 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v78;
    **(_DWORD **)(a4 + 16) = 0;
    v79 = *(_QWORD **)(a4 + 32);
    if ( v79 )
      *v79 = 0LL;
    return v16;
  }
  v22 = *(_DWORD *)(a4 + 4);
  if ( v22 != 1 && v22 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
  {
    SeLockSubjectContext(v10);
    v21 = *(_QWORD *)(a3 + 8);
  }
  v23 = SepTrustLevelCheck(v19, *(_QWORD *)(v21 + 8), v10, 0LL, 0LL, 0, &v209);
  v25 = 0LL;
  **(_DWORD **)(a4 + 16) = v23;
  v26 = *(int **)(a4 + 16);
  if ( *v26 < 0 )
  {
    v80 = a2 == 0;
    goto LABEL_121;
  }
  v27 = v209;
  *v26 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v209 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  v28 = *(int **)(a4 + 16);
  ClientToken = (__int64)v10->ClientToken;
  PrimaryToken = (__int64)v10->ClientToken;
  if ( *v28 < 0 )
  {
    if ( !ClientToken )
      PrimaryToken = (__int64)v10->PrimaryToken;
    v81 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v82 = *(_QWORD *)(a3 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)v10);
    SeLogAccessFailure(PrimaryToken, 0LL, 0LL, TokenTrustLevel, *(_QWORD *)(v82 + 8), v81, 0, 0);
    if ( !a2 )
      SeUnlockSubjectContext(v10);
    v177 = 0;
    v84 = v211 & ~v27;
    v85 = 9437184;
    goto LABEL_109;
  }
  if ( !ClientToken )
  {
    ClientToken = (__int64)v10->PrimaryToken;
    PrimaryToken = ClientToken;
  }
  v30 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v30 + 4) & 4) == 0 )
  {
    v31 = SepFilterCheck(*(_QWORD *)(v30 + 8), &P, ClientToken, 0, &v217);
    v25 = 0LL;
    **(_DWORD **)(a4 + 16) = v31;
    v32 = *(int **)(a4 + 16);
    if ( *v32 < 0 )
      goto LABEL_120;
    v33 = v217;
    *v32 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v217 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        ClientToken,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 16) | *(_BYTE *)(a3 + 20),
        0,
        0);
      if ( !a2 )
        SeUnlockSubjectContext(v10);
      v84 = v18 & v33;
      v177 = 0;
      v85 = 10485760;
LABEL_109:
      v86 = v84;
      goto LABEL_111;
    }
  }
  v34 = *(_QWORD *)(a3 + 8);
  v35 = *(_DWORD *)(v34 + 4);
  v36 = v35 & 1;
  v195 = v35 & 1;
  if ( (v35 & 2) != 0 )
  {
    LOBYTE(v24) = 1;
    if ( (*(_DWORD *)(ClientToken + 200) & 0x2000) != 0 )
    {
      v37 = 1;
      goto LABEL_34;
    }
  }
  else
  {
    LOBYTE(v24) = 0;
  }
  v37 = 0;
LABEL_34:
  v196 = v37;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(ClientToken + 200) & 0x20) == 0 )
  {
    v87 = *(_QWORD *)(ClientToken + 216);
    if ( v87 )
    {
      if ( (*(_DWORD *)(v87 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_120;
      }
    }
  }
  LOBYTE(v205) = 0;
  if ( !v37 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(int **)(a3 + 32),
                               *(_QWORD *)(v34 + 8),
                               (char)v24,
                               ClientToken,
                               0,
                               a8,
                               (__int64)&v218);
    if ( **(int **)(a4 + 16) >= 0 )
    {
      v38 = SepMandatoryToDiscretionary(&v218, *(_DWORD *)(a3 + 16));
      *v24 = v38;
      if ( **(_DWORD **)(a4 + 16) >= (int)v25 )
      {
        if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (*(_DWORD *)(ClientToken + 200) & 0x4000) != 0 )
        {
          v88 = (unsigned __int8)v205;
          if ( HIDWORD(v218) <= 0x2000 )
            v88 = 1;
          v205 = v88;
        }
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(ClientToken + 200) & 0x4000) != 0 && HIDWORD(v218) <= 0x2000 )
      {
        LOBYTE(v205) = 1;
        goto LABEL_40;
      }
      if ( a2 == (_BYTE)v25 )
      {
        SeUnlockSubjectContext(v10);
        LOBYTE(v25) = 0;
      }
      v85 = 3145728;
      v177 = v25;
      v86 = v18 & ~(_DWORD)v218;
LABEL_111:
      AuthzBasepSetAccessReasons(v86, v85, 0, *(_QWORD *)(a4 + 24), v177);
      return 0;
    }
LABEL_120:
    v80 = a2 == 0;
LABEL_121:
    if ( v80 )
      SeUnlockSubjectContext(v10);
    return 0;
  }
LABEL_40:
  if ( !SepRmEnforceCap )
    goto LABEL_41;
  v89 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v90 = *(_WORD *)(v89 + 2);
  if ( (v90 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_41;
  if ( v90 >= 0 )
  {
    v92 = *(ACL **)(v89 + 24);
  }
  else
  {
    v91 = *(unsigned int *)(v89 + 12);
    if ( !(_DWORD)v91 )
    {
      v213 = v25;
      goto LABEL_41;
    }
    v92 = (ACL *)(v89 + v91);
  }
  v213 = (__int64)v92;
  if ( v92 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v92);
    v25 = 0LL;
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v95 = v206;
      v25 = 0LL;
      v96 = Cap < 0;
      v39 = 1;
      v188 = 1;
      if ( v96 )
        v95 = SepRmDefaultCap;
      v206 = v95;
    }
    else
    {
      v39 = 0;
    }
    goto LABEL_42;
  }
LABEL_41:
  v39 = 0;
LABEL_42:
  if ( !v36 || (v41 = *(_DWORD *)(a3 + 16), (v41 & 0x2060000) != 0) || v39 )
  {
    IsOwner = SepTokenIsOwner(ClientToken, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), (__int64)v24, a8);
    v41 = *(_DWORD *)(a3 + 16);
    v25 = 0LL;
  }
  else
  {
    IsOwner = v25;
  }
  v191 = IsOwner;
  v42 = v41;
  if ( !IsOwner || (v41 & 0x2060000) == 0 )
    goto LABEL_45;
  v65 = v195;
  if ( v195 )
    goto LABEL_149;
  v66 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v67 = *(_WORD *)(v66 + 2);
  if ( (v67 & 4) == 0 )
    goto LABEL_147;
  if ( v67 >= 0 )
  {
    v69 = *(_QWORD *)(v66 + 32);
    goto LABEL_80;
  }
  v68 = *(unsigned int *)(v66 + 16);
  if ( (_DWORD)v68 )
    v69 = v66 + v68;
  else
LABEL_147:
    v69 = v25;
LABEL_80:
  v70 = RtlpOwnerAcesPresent(0, v69);
  v25 = 0LL;
  if ( !v70 )
    goto LABEL_81;
  v65 = 0;
LABEL_149:
  v42 = v41;
  if ( !v65 )
  {
LABEL_45:
    v43 = v188;
    goto LABEL_46;
  }
LABEL_81:
  v71 = 393216;
  v72 = *(_DWORD *)(a3 + 16);
  v73 = v72 & 0x60000;
  v41 = 393216;
  v74 = v72 & 0x2000000;
  if ( !v74 )
    v41 = v73;
  v75 = v18 & 0x60000;
  *(_DWORD *)(a3 + 20) |= v41;
  if ( !v74 )
    v71 = v75;
  AuthzBasepSetAccessReasons(v71, 0x400000, 0, *(_QWORD *)(a4 + 24), v25);
  v25 = 0LL;
  v43 = v188;
  v42 = *(_DWORD *)(a3 + 16) & 0xFFF9FFFF;
  *(_DWORD *)(a3 + 16) = v42;
  if ( !v188 )
  {
    v191 = 0;
    goto LABEL_47;
  }
LABEL_46:
  v44 = v191;
LABEL_47:
  if ( !v42 && !v43 && ((*(_DWORD *)(ClientToken + 200) & 0x2000) != 0 || !v41) )
  {
    if ( a2 == (_BYTE)v25 )
    {
      SeUnlockSubjectContext(v10);
      LODWORD(v25) = 0;
    }
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20);
    **(_DWORD **)(a4 + 16) = v25;
    return v16;
  }
  v45 = *(_QWORD *)(a3 + 8);
  v46 = v10->ClientToken;
  v187 = v44;
  v47 = v10->PrimaryToken;
  v185 = *(_QWORD *)(a4 + 24);
  v184 = *(_QWORD *)(a4 + 16);
  v183 = *(_QWORD *)(a4 + 32);
  v182 = *(_QWORD *)(a4 + 8);
  v181 = *(_DWORD *)(a3 + 20);
  v178 = *(_QWORD *)(a3 + 32);
  v226 = 0LL;
  v227 = v25;
  v225 = v41;
  v48 = SepAccessCheckEx(
          *(_QWORD *)(v45 + 8),
          0,
          (_DWORD)v47,
          (_DWORD)v46,
          v42,
          v25,
          v25,
          v178,
          v181,
          a6,
          v182,
          v183,
          v184,
          v185,
          (_BYTE)v25,
          v187,
          a7,
          (__int64)&v225,
          (__int64)&P,
          (__int64)&v190,
          v25,
          a8);
  v52 = v206;
  v195 = v48;
  if ( !SepRmEnforceCap || (v211 = **(_DWORD **)(a4 + 16), v211 < 0) || !v188 )
  {
LABEL_49:
    if ( v196 || (v49 = *(unsigned int *)(a3 + 16), (v49 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v205 && !*(_WORD *)((char *)&v227 + 1) )
      {
        **(_DWORD **)(a4 + 16) = -1073741790;
        **(_DWORD **)(a4 + 8) = 0;
        v167 = *(_DWORD **)(a4 + 8);
        v168 = *(_QWORD *)(a4 + 24);
        v190 = 0;
        AuthzBasepSetAccessReasons(~*v167, 3145728, 0, v168, 0);
      }
    }
    else
    {
      v50 = *(char **)(a4 + 8);
      v53 = *(_DWORD *)v50;
      if ( !(_BYTE)v205 || !*(_WORD *)((char *)&v227 + 1) )
      {
        SepConstrainByMandatory((__int64)&v218, v49, v50, *(char **)(a4 + 16), &v190, 0);
        AuthzBasepSetAccessReasons(v53 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v54 = *(int **)(a4 + 8);
      v55 = *(_DWORD **)(a4 + 16);
      v56 = *v54;
      if ( v209 == -1 || (v169 = v209 & v56, (v209 & v56) == v56) )
      {
        v57 = 0;
      }
      else
      {
        *v54 = v169;
        v57 = 1;
        if ( v169 )
        {
          *v55 = 0;
          v190 = 1;
        }
        else
        {
          *v55 = -1073741790;
          v190 = 0;
        }
      }
      AuthzBasepSetAccessReasons(v56 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v58 = *(int **)(a4 + 8);
      v59 = *(_DWORD **)(a4 + 16);
      v60 = *(_DWORD *)(a3 + 16);
      v194 = 0;
      v61 = *v58;
      if ( v217 == -1 || (v170 = v61 & v217, (v61 & v217) == v61) )
      {
        v62 = v194;
      }
      else
      {
        *v58 = v170;
        v62 = 1;
        if ( (v60 & 0x2000000) != 0 )
        {
          *v59 = v170 == 0 ? 0xC0000022 : 0;
          v190 = v170 != 0;
        }
        else
        {
          *v59 = -1073741790;
          v190 = *v58 != 0;
        }
      }
      AuthzBasepSetAccessReasons(v61 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    else
    {
      v57 = v193;
      v62 = v193;
    }
    v63 = PrimaryToken;
    if ( PrimaryToken )
    {
      if ( v57
        || v62
        || (v49 = DWORD2(v226), !DWORD2(v226))
        && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0
        && (**(int **)(a4 + 16) < 0 || BYTE3(v227)) )
      {
        v171 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
        v172 = *(_QWORD *)(a3 + 8);
        v173 = **(_DWORD **)(a4 + 16) >= 0;
        v174 = SepLocateTokenTrustLevel((__int64 *)v10);
        SeLogAccessFailure(PrimaryToken, 0LL, 0LL, v174, *(_QWORD *)(v172 + 8), v171, v173, 0);
        v49 = DWORD2(v226);
        v63 = PrimaryToken;
      }
      if ( **(int **)(a4 + 16) < 0
        && !(_DWORD)v49
        && (*(_DWORD *)(v63 + 200) & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v225, *(_DWORD *)(a3 + 16)) )
      {
        SepLogLpacAccessFailure(v175, v49);
      }
    }
    if ( v188 )
    {
      v176 = *(_QWORD *)(v206 + 32);
      if ( v176 )
        SepRmDereferenceCapTable(v176, v49, v50, v51);
    }
    if ( !a2 )
      SeUnlockSubjectContext(v10);
    SepFreeResourceInfo(P);
    if ( !v190 || !v195 )
      return 0;
    return v16;
  }
  v97 = *(int **)(a4 + 8);
  v98 = 0LL;
  LOBYTE(v201) = 0;
  v99 = 0;
  v202 = 0;
  v100 = *v97;
  v101 = *(unsigned int ***)(a4 + 32);
  v208 = v100;
  v204 = v100;
  if ( v101 )
  {
    v102 = *v101;
    if ( v102 )
    {
      v103 = *v102;
      if ( *v102 )
      {
        v104 = v102 + 3;
        v50 = (char *)v103;
        do
        {
          if ( (int)v104[1] < 0 )
          {
            v49 = (unsigned int)*(v104 - 1);
            if ( *(_QWORD *)(v104 - 1) == SeSecurityPrivilege )
            {
              v99 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v104 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v104 - 1) == SeRelabelPrivilege )
            {
              v99 |= 0x80000u;
            }
          }
          v104 += 3;
          --v50;
        }
        while ( v50 );
        v202 = v99;
      }
    }
  }
  v198 = v100;
  LOBYTE(v50) = 1;
  LOBYTE(v49) = 1;
  v192 = SepAdtAuditThisEventWithContext(129LL, v49, v50, v10);
  v105 = v192;
  if ( v192 )
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v52 + 60), 0x41536553u);
    v98 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v10);
      v110 = *(_QWORD *)(v52 + 32);
      if ( v110 )
        SepRmDereferenceCapTable(v110, v107, v108, v109);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(P);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v52 + 60));
    v105 = v192;
  }
  v111 = *(_DWORD *)(v52 + 60);
  v112 = 0;
  v199 = 0;
  LODWORD(v210) = v111;
  if ( !v111 )
  {
LABEL_240:
    if ( v105 )
    {
      if ( v204 != v208 )
      {
        v154 = v204 & (v208 ^ v204);
        v155 = v208 & (v208 ^ v204);
        v156 = 0;
        v198 = v155;
        v201 = 0;
        if ( v111 )
        {
          v157 = v98;
          do
          {
            if ( !v154 && !v155 )
              break;
            if ( *((_BYTE *)v157 + 4) )
            {
              v158 = *v157;
              v159 = v156 << 24;
              v160 = v155 ^ *v157;
              v199 = *v157;
              v161 = v155 & v160;
              if ( v161 )
              {
                AuthzBasepSetAccessReasons(v161, 0x80000000, v159, (__int64)v232, 0);
                v158 = v199;
                v155 = v198;
              }
              v162 = v154 & v158;
              v198 = ~v161 & v155;
              v199 = v162;
              if ( v162 )
              {
                AuthzBasepSetAccessReasons(v162, 0x80000000, v159, (__int64)v232, 0);
                v162 = v199;
              }
              v154 &= ~v162;
              AuthzBasepMergeAccessReasons(v231, v232, 4278190080LL);
              v155 = v198;
              v156 = v201;
              v111 = v210;
            }
            ++v156;
            v157 += 2;
            v201 = v156;
          }
          while ( v156 < v111 );
          v10 = v220;
        }
      }
    }
    if ( v98 )
      ExFreePoolWithTag(v98, 0);
    **(_DWORD **)(a4 + 16) = v211;
    **(_DWORD **)(a4 + 8) &= v208;
    v163 = v190;
    if ( **(int **)(a4 + 16) < 0 )
      v163 = 0;
    v190 = v163;
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v231, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v231, 4278190080LL);
    goto LABEL_49;
  }
  while ( 1 )
  {
    v228 = 0LL;
    v219 = v112;
    v229 = 0LL;
    v230 = 0LL;
    v210 = *(_QWORD *)(v52 + 8LL * v112 + 64);
    if ( !*(_QWORD *)(v210 + 24) )
      goto LABEL_216;
    v113 = P;
    if ( !P )
    {
      v114 = AuthzBasepInitializeResourceClaimsFromSacl(v213, &P);
      v113 = P;
      v115 = (unsigned __int8)v201;
      if ( v114 < 0 )
        v115 = 1;
      v201 = v115;
    }
    v116 = *(_QWORD **)(ClientToken + 1096);
    v117 = v116 ? v116[75] : 0LL;
    v118 = v116 ? v116[73] : 0LL;
    v119 = v116 ? v116[74] : 0LL;
    v120 = v116 ? v116[72] : 0LL;
    v121 = AuthzBasepEvaluateAceCondition(
             ClientToken,
             *(_QWORD *)(ClientToken + 776),
             (__int64)v113,
             v120,
             v119,
             v118,
             v117,
             *(_DWORD **)(v210 + 24),
             *(_DWORD *)(v210 + 16),
             1u,
             0,
             &v207);
    v125 = v207;
    v126 = v121;
    if ( v207 == 1 )
      goto LABEL_216;
    if ( v121 < 0 )
      goto LABEL_259;
    if ( (*(_DWORD *)(ClientToken + 200) & 0x10) != 0 )
      break;
LABEL_214:
    if ( !(_BYTE)v201 && v125 != 1 )
      goto LABEL_238;
LABEL_216:
    v126 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v126 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v10);
      v166 = *(_QWORD *)(v206 + 32);
      if ( v166 )
        SepRmDereferenceCapTable(v166, 0LL, v132, v133);
      **(_DWORD **)(a4 + 8) = 0;
      goto LABEL_270;
    }
    v134 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v210 + 48) & 1) != 0 )
    {
      if ( (v134 & 0x2000000) == 0 )
        v134 |= *(_DWORD *)(a3 + 20);
      v135 = 0;
    }
    else
    {
      v135 = *(_DWORD *)(a3 + 20);
    }
    v136 = v10->ClientToken;
    v137 = v10->PrimaryToken;
    LOBYTE(v186) = 0;
    v179 = *(_QWORD *)(a3 + 32);
    v228 = 0LL;
    v229 = 0LL;
    v230 = 0LL;
    v138 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)v137,
             (_DWORD)v136,
             v134 | 0x2000000u,
             (__int64)&v228,
             1,
             v179,
             v135,
             a6,
             (__int64)&v203,
             0LL,
             (__int64)&v215,
             (__int64)v233,
             v186,
             v191,
             a7,
             (__int64)&v225,
             (__int64)&P,
             (__int64)&v190,
             0,
             a8);
    v139 = v202;
    v195 = v138;
    v140 = v203 & (v135 | **(_DWORD **)(a4 + 8));
    v141 = v202 | HIDWORD(v229);
    v203 = v140;
    if ( v191 )
      v141 |= v140 & 0x60000;
    v142 = ~(_DWORD)v230 & v141;
    v143 = v215;
    v208 &= v140;
    if ( !v208 )
      v143 = -1073741790;
    v211 = v143;
    if ( (v198 & (v198 ^ v142)) != 0 )
    {
      AuthzBasepSetAccessReasons(v198 & (v198 ^ v142), 327680, v199, (__int64)v231, 0);
      v198 &= v142;
      v139 = v202;
    }
    v105 = v192;
    if ( v192 )
    {
      if ( *(_QWORD *)(v210 + 40) )
      {
        v126 = SepBuildCapeSecurityDescriptor(v223);
        if ( v126 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(v10);
          v165 = *(_QWORD *)(v206 + 32);
          if ( v165 )
            SepRmDereferenceCapTable(v165, v144, 0LL, v145);
          **(_DWORD **)(a4 + 8) = 0;
          goto LABEL_270;
        }
        v146 = *(_DWORD *)(a3 + 16);
        if ( (*(_DWORD *)(v210 + 48) & 0x100) != 0 )
        {
          if ( (v146 & 0x2000000) == 0 )
            v146 |= *(_DWORD *)(a3 + 20);
          v147 = 0;
        }
        else
        {
          v147 = *(_DWORD *)(a3 + 20);
        }
        v148 = v10->ClientToken;
        LOBYTE(v186) = 0;
        v180 = *(_QWORD *)(a3 + 32);
        v149 = v10->PrimaryToken;
        v228 = 0LL;
        v229 = 0LL;
        v230 = 0LL;
        SepAccessCheckEx(
          (unsigned int)v223,
          0,
          (_DWORD)v149,
          (_DWORD)v148,
          v146,
          0LL,
          0,
          v180,
          v147,
          a6,
          (__int64)&v212,
          0LL,
          (__int64)&v216,
          (__int64)v233,
          v186,
          v191,
          a7,
          (__int64)&v225,
          (__int64)&P,
          (__int64)v197,
          0,
          a8);
        v150 = v219;
        v151 = v204;
        v152 = v202;
        LOBYTE(v98[2 * v219 + 1]) = 1;
        v98[2 * v150] = v212 | v152;
        v204 = v212 & v151;
      }
      else
      {
        v153 = v219;
        LOBYTE(v98[2 * v219 + 1]) = 1;
        v98[2 * v153] = v203 | v139;
        v204 &= v203;
      }
LABEL_238:
      v105 = v192;
    }
    v52 = v206;
    v112 = v199 + 1;
    v199 = v112;
    v111 = *(_DWORD *)(v206 + 60);
    LODWORD(v210) = v111;
    if ( v112 >= v111 )
      goto LABEL_240;
  }
  v127 = *(_QWORD **)(ClientToken + 1096);
  if ( v127 )
    v128 = v127[75];
  else
    v128 = 0LL;
  if ( v127 )
    v129 = v127[73];
  else
    v129 = 0LL;
  if ( v127 )
    v130 = v127[74];
  else
    v130 = 0LL;
  if ( v127 )
    v131 = v127[72];
  else
    v131 = 0LL;
  v126 = AuthzBasepEvaluateAceCondition(
           ClientToken,
           *(_QWORD *)(ClientToken + 776),
           (__int64)P,
           v131,
           v130,
           v129,
           v128,
           *(_DWORD **)(v210 + 24),
           *(_DWORD *)(v210 + 16),
           1u,
           1u,
           &v207);
  if ( v126 >= 0 )
  {
    v125 = v207;
    goto LABEL_214;
  }
LABEL_259:
  if ( !a2 )
    SeUnlockSubjectContext(v10);
  v164 = *(_QWORD *)(v206 + 32);
  if ( v164 )
    SepRmDereferenceCapTable(v164, v122, v123, v124);
  **(_DWORD **)(a4 + 8) = 0;
LABEL_270:
  **(_DWORD **)(a4 + 16) = v126;
  SepFreeResourceInfo(P);
  if ( v98 )
    ExFreePoolWithTag(v98, 0);
  return 0;
}

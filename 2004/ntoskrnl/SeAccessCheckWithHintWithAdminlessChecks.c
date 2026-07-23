/*
 * XREFs of SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0
 * Callers:
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14029BD60 (SeAccessCheckWithHint.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInTokenSidHash @ 0x14026D7C0 (SepSidInTokenSidHash.c)
 *     SepLocateTokenTrustLevel @ 0x1402947D8 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x140294B1C (SepFreeResourceInfo.c)
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14029D500 (SepAccessCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeLogAccessFailure @ 0x140346E78 (SeLogAccessFailure.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140590A9C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140590BF8 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590D58 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x140590EC0 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140592984 (SepRmReferenceFindCap.c)
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F3CE0 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

bool __fastcall SeAccessCheckWithHintWithAdminlessChecks(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        unsigned int *a10,
        NTSTATUS *a11,
        char a12)
{
  NTSTATUS *v12; // r14
  __int64 v13; // r15
  unsigned int v14; // r12d
  int v17; // ebx
  __int16 v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // edi
  __int64 PrimaryToken; // r14
  int v25; // eax
  NTSTATUS *v26; // rdx
  char v27; // r9
  char v28; // cl
  int v29; // eax
  NTSTATUS *v30; // rdx
  char v31; // r8
  unsigned __int8 *v32; // rsi
  unsigned int *v33; // rdi
  int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // r9d
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned __int64 v40; // r15
  int v41; // eax
  _WORD *v42; // rdx
  _WORD *v43; // r13
  char v44; // si
  __int16 v45; // ax
  __int64 v46; // rcx
  _WORD *SeOwnerRightsSid; // rdx
  int v48; // edx
  int v49; // eax
  int v50; // edi
  unsigned int v51; // r15d
  __int64 *v52; // r13
  PACCESS_TOKEN v53; // r9
  PACCESS_TOKEN v54; // r8
  char v55; // al
  __int64 v56; // r9
  __int64 v57; // r8
  char v58; // di
  int *v59; // rsi
  int *v60; // rdx
  char v61; // r10
  PVOID v62; // rbx
  bool result; // al
  __int64 v64; // rax
  NTSTATUS *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 *v68; // rdi
  unsigned int v69; // r13d
  int v70; // r8d
  unsigned int v71; // ecx
  __int64 v72; // rcx
  unsigned __int8 *v73; // rcx
  unsigned __int64 v74; // rax
  unsigned int v75; // eax
  int v76; // ecx
  char v77; // si
  char v78; // bl
  int v79; // eax
  int v80; // r14d
  void *v81; // r11
  void *v82; // rdi
  NTSTATUS v83; // eax
  bool v84; // zf
  PACCESS_TOKEN ClientToken; // rbx
  char v86; // r12
  int TokenTrustLevel; // eax
  __int64 v88; // rax
  __int16 v89; // cx
  __int64 v90; // rax
  ACL *v91; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v94; // rdx
  _WORD *v95; // rcx
  unsigned int v96; // eax
  int v97; // eax
  unsigned int v98; // edx
  int v99; // ecx
  __int64 v100; // r13
  PVOID v101; // r8
  int v102; // eax
  int v103; // r9d
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // r10
  int v109; // eax
  int v110; // ecx
  int v111; // r13d
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r10
  int v117; // edi
  int v118; // edx
  int v119; // r8d
  int v120; // eax
  char v121; // al
  int v122; // ecx
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rcx
  char v126; // [rsp+A0h] [rbp-80h] BYREF
  char v127; // [rsp+A1h] [rbp-7Fh]
  char v128; // [rsp+A2h] [rbp-7Eh]
  BOOLEAN DominatesTrust; // [rsp+A3h] [rbp-7Dh] BYREF
  BOOLEAN v130; // [rsp+A4h] [rbp-7Ch] BYREF
  char v131; // [rsp+A5h] [rbp-7Bh]
  int v132; // [rsp+A8h] [rbp-78h]
  int v133; // [rsp+ACh] [rbp-74h]
  char v134; // [rsp+B0h] [rbp-70h]
  int v135; // [rsp+B4h] [rbp-6Ch]
  NTSTATUS *v136; // [rsp+B8h] [rbp-68h]
  __int64 v137; // [rsp+C0h] [rbp-60h]
  int *v138; // [rsp+C8h] [rbp-58h]
  unsigned int v139; // [rsp+D0h] [rbp-50h]
  PVOID P; // [rsp+D8h] [rbp-48h] BYREF
  int v141; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int v142; // [rsp+E4h] [rbp-3Ch]
  __int64 v143; // [rsp+E8h] [rbp-38h]
  int v144; // [rsp+F0h] [rbp-30h] BYREF
  int v145; // [rsp+F4h] [rbp-2Ch]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-28h]
  int v147; // [rsp+100h] [rbp-20h] BYREF
  __int64 v148; // [rsp+108h] [rbp-18h]
  ACL *v149; // [rsp+110h] [rbp-10h]
  _WORD *v150; // [rsp+118h] [rbp-8h]
  __int128 v151; // [rsp+120h] [rbp+0h] BYREF
  __int64 v152; // [rsp+130h] [rbp+10h]
  int v153; // [rsp+138h] [rbp+18h] BYREF
  __int64 v154; // [rsp+140h] [rbp+20h]
  _QWORD *v155; // [rsp+148h] [rbp+28h]
  _OWORD SecurityDescriptor[2]; // [rsp+150h] [rbp+30h] BYREF
  __int64 v157; // [rsp+170h] [rbp+50h]
  _OWORD v158[2]; // [rsp+178h] [rbp+58h] BYREF

  v12 = a11;
  v13 = a1;
  v14 = a5;
  v148 = a1;
  *(_QWORD *)&v158[1] = 0LL;
  DWORD2(v158[1]) = 0;
  v157 = 0LL;
  v128 = 0;
  v17 = -1;
  v153 = -1;
  SubjectContext = a3;
  v127 = a4;
  v132 = a6;
  v136 = a11;
  *a10 = 0;
  v138 = (int *)a10;
  v155 = a7;
  v152 = a8;
  v126 = 0;
  v149 = 0LL;
  v143 = 0LL;
  v133 = 0;
  P = 0LL;
  v141 = 0;
  *a11 = -1073741790;
  v144 = 0;
  v147 = -1073741790;
  v145 = a2 & 8;
  v151 = 0LL;
  v158[0] = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v75 = a6 | a5 & 0xFDFFFFFF | *(_DWORD *)(a8 + 12);
    else
      v75 = a6 | a5;
    *a10 = v75;
    result = 1;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
    goto LABEL_308;
  if ( a3->ClientToken && a3->ImpersonationLevel < SecurityImpersonation )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
LABEL_308:
    *a11 = -1073741790;
    return 0;
  }
  if ( !a4 )
    SeLockSubjectContext(a3);
  v18 = *(_WORD *)(v13 + 2);
  v19 = 0;
  DominatesTrust = 0;
  v130 = 0;
  while ( 1 )
  {
    if ( (v18 & 0x10) != 0 )
    {
      if ( v18 >= 0 )
      {
        v20 = *(_QWORD *)(v13 + 24);
        goto LABEL_13;
      }
      v66 = *(unsigned int *)(v13 + 12);
      if ( (_DWORD)v66 )
        break;
    }
LABEL_18:
    v21 = 0LL;
LABEL_19:
    ++v19;
    if ( !v21 )
      goto LABEL_20;
  }
  v20 = v13 + v66;
LABEL_13:
  if ( !v20 )
    goto LABEL_18;
  v21 = v20 + 8;
  v22 = 0;
  if ( !*(_WORD *)(v20 + 4) )
    goto LABEL_18;
  while ( v22 < v19 || *(_BYTE *)v21 != 20 )
  {
    ++v22;
    v21 += *(unsigned __int16 *)(v21 + 2);
    if ( v22 >= *(unsigned __int16 *)(v20 + 4) )
      goto LABEL_18;
  }
  v19 = v22;
  if ( (*(_BYTE *)(v21 + 1) & 8) != 0 )
    goto LABEL_19;
  if ( v21 )
  {
    v80 = *(_DWORD *)(v21 + 4);
    v81 = (void *)(v21 + 8);
    if ( v21 == -8 )
    {
      v12 = v136;
    }
    else
    {
      if ( !a3->ClientToken )
        goto LABEL_178;
      v82 = (void *)*((_QWORD *)a3->ClientToken + 138);
      v83 = RtlSidDominatesForTrust(*((PSID *)a3->PrimaryToken + 138), v82, &v130);
      if ( v83 >= 0 )
      {
        if ( !v130 )
LABEL_178:
          v82 = (void *)*((_QWORD *)a3->PrimaryToken + 138);
        v83 = RtlSidDominatesForTrust(v82, v81, &DominatesTrust);
        if ( v83 >= 0 )
        {
          v17 = v80 | 0x1000000;
          if ( DominatesTrust )
            v17 = -1;
        }
      }
      v12 = v136;
      *v136 = v83;
      if ( v83 < 0 )
      {
LABEL_183:
        if ( v127 )
          return 0;
        goto LABEL_155;
      }
    }
  }
LABEL_20:
  v23 = a5 & 0xFDFFFFFF;
  if ( (v17 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v84 = v145 == 0;
    *v12 = -1073741790;
    if ( v84 )
    {
      ClientToken = a3->ClientToken;
      if ( !a3->ClientToken )
        ClientToken = a3->PrimaryToken;
      v86 = v132 | a5;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
      SeLogAccessFailure((_DWORD)ClientToken, 0, 0, TokenTrustLevel, v13, v86, 0, 0);
    }
    if ( v127 )
      return 0;
    goto LABEL_155;
  }
  *v12 = 0;
  PrimaryToken = (__int64)a3->ClientToken;
  if ( !a3->ClientToken )
    PrimaryToken = (__int64)a3->PrimaryToken;
  if ( (a2 & 4) == 0 )
  {
    v25 = SepFilterCheck(v13, (unsigned int)&P, PrimaryToken, 0, (__int64)&v153);
    v26 = v136;
    *v136 = v25;
    if ( v25 < 0 )
      goto LABEL_183;
    if ( (v153 & v23) == v23 )
    {
      *v26 = 0;
      goto LABEL_27;
    }
    v84 = v145 == 0;
    *v26 = -1073741790;
    if ( v84 )
      SeLogAccessFailure(PrimaryToken, 0, 0, 0, v13, v132 | a5, 0, 0);
    if ( v127 )
      return 0;
LABEL_155:
    SeUnlockSubjectContext(a3);
    return 0;
  }
  v26 = v136;
LABEL_27:
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v19) = 0;
    goto LABEL_29;
  }
  LOBYTE(v19) = 1;
  if ( (*(_DWORD *)(PrimaryToken + 200) & 0x2000) != 0 )
    v27 = 1;
  else
LABEL_29:
    v27 = 0;
  v134 = v27;
  v131 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(PrimaryToken + 200) & 0x20) == 0 )
  {
    v88 = *(_QWORD *)(PrimaryToken + 216);
    if ( v88 )
    {
      if ( (*(_DWORD *)(v88 + 32) & 0x20) != 0 )
      {
        v84 = v127 == 0;
        *v138 = 0;
        *v26 = -1073741790;
        if ( !v84 )
          return 0;
        goto LABEL_155;
      }
    }
  }
  v28 = a12;
  if ( !v27 )
  {
    v29 = SepMandatoryIntegrityCheck(v152, v13, v19, PrimaryToken, 0, a12, (__int64)&v151);
    v30 = v136;
    *v136 = v29;
    if ( v29 < 0 )
      goto LABEL_183;
    if ( DWORD2(v151) && (v23 & (unsigned int)v151) != v23 )
    {
      *v30 = -1073741790;
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || HIDWORD(v151) > 0x2000 )
      {
        if ( v127 )
          return 0;
        goto LABEL_155;
      }
    }
    else
    {
      *v30 = 0;
      if ( (a5 & 0x2000000) == 0 || (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || HIDWORD(v151) > 0x2000 )
      {
LABEL_36:
        v28 = a12;
        goto LABEL_37;
      }
    }
    v131 = 1;
    goto LABEL_36;
  }
LABEL_37:
  if ( !SepRmEnforceCap )
  {
LABEL_38:
    v31 = 0;
    goto LABEL_39;
  }
  v89 = *(_WORD *)(v13 + 2);
  if ( (v89 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_215:
    v28 = a12;
    goto LABEL_38;
  }
  if ( v89 >= 0 )
  {
    v91 = *(ACL **)(v13 + 24);
  }
  else
  {
    v90 = *(unsigned int *)(v13 + 12);
    if ( !(_DWORD)v90 )
    {
      v149 = 0LL;
      goto LABEL_215;
    }
    v91 = (ACL *)(v13 + v90);
  }
  v149 = v91;
  if ( !v91 )
    goto LABEL_215;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v91);
  if ( !ScopedPolicySid )
    goto LABEL_215;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v94 = v143;
  v28 = a12;
  v31 = 1;
  if ( Cap < 0 )
    v94 = SepRmDefaultCap;
  v143 = v94;
  v128 = 1;
LABEL_39:
  if ( (a2 & 1) != 0 )
  {
    v130 = 1;
    if ( (a5 & 0x2060000) == 0 && !v31 )
    {
      v44 = 0;
      goto LABEL_70;
    }
  }
  else
  {
    v130 = 0;
  }
  if ( *(__int16 *)(v13 + 2) < 0 )
  {
    v64 = *(unsigned int *)(v13 + 4);
    if ( (_DWORD)v64 )
      v32 = (unsigned __int8 *)(v13 + v64);
    else
      v32 = 0LL;
  }
  else
  {
    v32 = *(unsigned __int8 **)(v13 + 8);
  }
  v33 = (unsigned int *)(PrimaryToken + 232);
  if ( v28 && v32 && RtlEqualSid(SeAliasAdminsSid, v32) )
  {
    v44 = 0;
    goto LABEL_56;
  }
  if ( PrimaryToken == -232 || !v32 )
    goto LABEL_68;
  v34 = v32[1];
  v35 = *(unsigned __int16 *)v32;
  v154 = v35;
  v36 = 4 * v34 + 8;
  v139 = v36;
  v37 = (unsigned __int64)v32[4 * ((unsigned __int64)(unsigned int)v35 >> 8) + 4] >> 4;
  v38 = v32[4 * ((unsigned __int64)(unsigned int)v35 >> 8) + 4] & 0xF;
  LOBYTE(v39) = 0;
  DominatesTrust = 0;
  v40 = *(_QWORD *)&v33[2 * v38 + 4] & *(_QWORD *)&v33[2 * v37 + 36];
  if ( !v40 )
    goto LABEL_66;
  while ( 2 )
  {
    LOBYTE(v41) = v40;
    v135 = (unsigned __int8)v40;
    if ( !(_BYTE)v40 )
      goto LABEL_135;
    v42 = *(_WORD **)(PrimaryToken + 240);
    v39 = (unsigned __int8)v39;
    v150 = v42;
    v142 = (unsigned __int8)v39;
    while ( 2 )
    {
      LODWORD(v137) = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v41);
      v43 = &v42[8 * v39 + 8 * (unsigned int)v137];
      if ( **(_WORD **)v43 == (_WORD)v35 )
      {
        if ( !memcmp(v32, *(const void **)v43, v36) )
        {
LABEL_51:
          if ( v43 == *(_WORD **)(PrimaryToken + 240) && (*((_DWORD *)v43 + 2) & 0x10) == 0
            || (*((_DWORD *)v43 + 2) & 4) != 0 )
          {
            if ( *(_DWORD *)(PrimaryToken + 128) )
              v44 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 504), 0LL, v32, 0, 1, 0, a12);
            else
              v44 = 1;
          }
          else
          {
            v44 = 0;
          }
          v13 = v148;
LABEL_56:
          if ( !v44 || (a5 & 0x2060000) == 0 )
            goto LABEL_69;
          if ( v130 )
            goto LABEL_62;
          v45 = *(_WORD *)(v13 + 2);
          if ( (v45 & 4) != 0 )
          {
            if ( v45 >= 0 )
            {
              v46 = *(_QWORD *)(v13 + 32);
            }
            else
            {
              v67 = *(unsigned int *)(v13 + 16);
              v46 = (_DWORD)v67 ? v13 + v67 : 0LL;
            }
          }
          else
          {
            v46 = 0LL;
          }
          SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
          v150 = SeOwnerRightsSid;
          if ( !v46
            || (v68 = (unsigned __int8 *)(v46 + 8),
                LODWORD(v137) = *(unsigned __int16 *)(v46 + 4),
                v69 = 0,
                !(_DWORD)v137) )
          {
LABEL_62:
            v31 = v128;
            v48 = 393216;
            if ( (a5 & 0x2000000) == 0 )
              v48 = a5 & 0x60000;
            v14 = a5 & 0xFFF9FFFF;
            v49 = v132 | v48;
            v132 = v49;
            v50 = v49;
            if ( !v128 )
            {
              v44 = 0;
              v132 = v49;
            }
            goto LABEL_71;
          }
          v70 = 104928;
          while ( 2 )
          {
            if ( (v68[1] & 8) != 0 )
              goto LABEL_117;
            v71 = *v68;
            if ( (unsigned __int8)v71 <= 0x10u && _bittest(&v70, v71) )
            {
              v72 = 16LL * (*((_DWORD *)v68 + 2) & 1) + ((8LL * (*((_DWORD *)v68 + 2) & 2)) | 0xC);
            }
            else
            {
              if ( (_BYTE)v71 != 4 )
              {
                if ( (unsigned __int8)v71 < 0xBu || (unsigned __int8)(v71 - 13) <= 1u )
                {
                  v72 = 8LL;
                  break;
                }
LABEL_117:
                ++v69;
                v68 += *((unsigned __int16 *)v68 + 1);
                if ( v69 >= (unsigned int)v137 )
                  goto LABEL_62;
                continue;
              }
              v72 = 12LL;
            }
            break;
          }
          v73 = &v68[v72];
          if ( v73 )
          {
            v74 = *(unsigned __int16 *)v73;
            if ( (_WORD)v74 == *SeOwnerRightsSid )
            {
              if ( !memcmp(v73, SeOwnerRightsSid, 4 * (v74 >> 8) + 8) )
                goto LABEL_69;
              SeOwnerRightsSid = v150;
              v70 = 104928;
            }
          }
          goto LABEL_117;
        }
        LOWORD(v35) = v154;
        v36 = v139;
        v39 = v142;
      }
      v41 = (unsigned __int8)v135 ^ (1 << v137);
      v42 = v150;
      v135 = v41;
      if ( (_BYTE)v41 )
        continue;
      break;
    }
    LOBYTE(v39) = DominatesTrust;
LABEL_135:
    LOBYTE(v39) = v39 + 8;
    v40 >>= 8;
    DominatesTrust = v39;
    if ( v40 )
      continue;
    break;
  }
LABEL_66:
  v51 = *v33;
  if ( *v33 > 0x40 )
  {
    v95 = *(_WORD **)(PrimaryToken + 240);
    v96 = 64;
    v135 = 64;
    v150 = v95;
    do
    {
      v43 = &v95[8 * v96];
      if ( **(_WORD **)v43 == (_WORD)v35 )
      {
        if ( !memcmp(v32, *(const void **)v43, v36) )
          goto LABEL_51;
        LOWORD(v35) = v154;
        v36 = v139;
        v96 = v135;
        v95 = v150;
      }
      v135 = ++v96;
    }
    while ( v96 < v51 );
  }
  v13 = v148;
LABEL_68:
  v44 = 0;
LABEL_69:
  v31 = v128;
LABEL_70:
  v48 = v133;
  v50 = v132;
LABEL_71:
  if ( !v14 && !v31 && ((*(_DWORD *)(PrimaryToken + 200) & 0x2000) != 0 || !v48) )
  {
    if ( !v127 )
      SeUnlockSubjectContext(SubjectContext);
    v65 = v136;
    *v138 = v50;
    *v65 = 0;
    return 1;
  }
  v52 = (__int64 *)SubjectContext;
  v53 = SubjectContext->ClientToken;
  v54 = SubjectContext->PrimaryToken;
  LODWORD(v158[0]) = v48;
  memset((char *)v158 + 4, 0, 24);
  v55 = SepAccessCheck(
          v13,
          0,
          (_DWORD)v54,
          (_DWORD)v53,
          v14,
          0LL,
          0,
          v152,
          v50,
          a9,
          (__int64)v138,
          (__int64)v155,
          (__int64)v136,
          0,
          v44,
          (__int64)v158,
          (__int64)&P,
          (__int64)&v126,
          0LL,
          a12);
  v57 = v143;
  v58 = v55;
  v137 = v143;
  if ( !SepRmEnforceCap || (v97 = *v136, v139 = v97, v97 < 0) || !v128 )
  {
    v59 = v136;
    v60 = v138;
    goto LABEL_74;
  }
  v98 = 0;
  DominatesTrust = 0;
  LOBYTE(v135) = 0;
  v142 = 0;
  v99 = *v138;
  v133 = *v138;
  if ( !*(_DWORD *)(v143 + 60) )
    goto LABEL_288;
  while ( 2 )
  {
    v100 = *(_QWORD *)(v57 + 8LL * v98 + 64);
    v143 = v100;
    if ( *(_QWORD *)(v100 + 24) )
    {
      v101 = P;
      if ( !P )
      {
        v102 = AuthzBasepInitializeResourceClaimsFromSacl(v149, &P);
        v101 = P;
        v103 = (unsigned __int8)v135;
        if ( v102 < 0 )
          v103 = 1;
        v135 = v103;
      }
      v104 = *(_QWORD **)(PrimaryToken + 1096);
      if ( v104 )
      {
        v105 = v104[75];
        v106 = v104[73];
        v107 = v104[74];
        v108 = v104[72];
      }
      else
      {
        v105 = 0LL;
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
      }
      v109 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *(_QWORD *)(PrimaryToken + 776),
               (__int64)v101,
               v108,
               v107,
               v106,
               v105,
               *(_DWORD **)(v100 + 24),
               *(_DWORD *)(v100 + 16),
               1u,
               0,
               &v141);
      v110 = v141;
      v111 = v109;
      if ( v141 != 1 )
      {
        if ( v109 < 0 )
        {
          if ( !v127 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v137 + 32) )
            goto LABEL_277;
          goto LABEL_278;
        }
        if ( (*(_DWORD *)(PrimaryToken + 200) & 0x10) != 0 )
        {
          v112 = *(_QWORD **)(PrimaryToken + 1096);
          if ( v112 )
          {
            v113 = v112[75];
            v114 = v112[73];
            v115 = v112[74];
            v116 = v112[72];
          }
          else
          {
            v113 = 0LL;
            v114 = 0LL;
            v115 = 0LL;
            v116 = 0LL;
          }
          v111 = AuthzBasepEvaluateAceCondition(
                   PrimaryToken,
                   *(_QWORD *)(PrimaryToken + 776),
                   (__int64)P,
                   v116,
                   v115,
                   v114,
                   v113,
                   *(_DWORD **)(v143 + 24),
                   *(_DWORD *)(v143 + 16),
                   1u,
                   1u,
                   &v141);
          if ( v111 >= 0 )
          {
            v110 = v141;
            goto LABEL_257;
          }
          if ( !v127 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v137 + 32) )
LABEL_277:
            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_278:
          *v138 = 0;
          *v136 = v111;
LABEL_280:
          SepFreeResourceInfo(P);
          return 0;
        }
LABEL_257:
        if ( !(_BYTE)v135 && v110 != 1 )
        {
          v97 = v139;
          v52 = (__int64 *)SubjectContext;
          goto LABEL_272;
        }
      }
      v100 = v143;
    }
    v117 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v117 < 0 )
    {
      if ( !v127 )
        SeUnlockSubjectContext(SubjectContext);
      if ( *(_QWORD *)(v137 + 32) )
        ((void (*)(void))SepRmDereferenceCapTable)();
      *v138 = 0;
      *v136 = v117;
      goto LABEL_280;
    }
    v118 = v14;
    if ( (*(_DWORD *)(v100 + 48) & 1) != 0 )
    {
      v119 = 0;
      if ( (v14 & 0x2000000) == 0 )
        v118 = v132 | v14;
    }
    else
    {
      v119 = v132;
    }
    v52 = (__int64 *)SubjectContext;
    v58 = SepAccessCheck(
            (unsigned int)SecurityDescriptor,
            0,
            SubjectContext->PrimaryToken,
            SubjectContext->ClientToken,
            v118,
            0LL,
            0,
            v152,
            v119,
            a9,
            (__int64)&v144,
            0LL,
            (__int64)&v147,
            0,
            v44,
            (__int64)v158,
            (__int64)&P,
            (__int64)&v126,
            0LL,
            a12);
    if ( DominatesTrust )
      v120 = v144 & v133;
    else
      v120 = v144;
    v133 = v120;
    if ( v120 )
    {
      v97 = v147;
      v139 = v147;
      DominatesTrust = 1;
      if ( v147 < 0 )
        goto LABEL_286;
LABEL_272:
      v57 = v137;
      v98 = v142 + 1;
      v142 = v98;
      if ( v98 >= *(_DWORD *)(v137 + 60) )
        goto LABEL_287;
      continue;
    }
    break;
  }
  v97 = -1073741790;
LABEL_286:
  v57 = v137;
LABEL_287:
  v99 = v133;
LABEL_288:
  v59 = v136;
  v60 = v138;
  *v136 = v97;
  v121 = v126;
  *v60 &= v99;
  if ( *v59 < 0 )
    v121 = 0;
  v126 = v121;
LABEL_74:
  if ( !v134 && (v14 & 0x2000000) != 0 )
  {
    if ( (!v131 || !*(_WORD *)((char *)&v158[1] + 5)) && DWORD2(v151) && (!BYTE4(v151) || !BYTE5(v151) || !BYTE6(v151)) )
    {
      v76 = *v60 & v151;
      if ( v76 != *v60 )
      {
        *v60 = v76;
        if ( v76 )
        {
          *v59 = 0;
          v126 = 1;
        }
        else
        {
          *v59 = -1073741790;
LABEL_166:
          v126 = 0;
        }
      }
    }
  }
  else if ( v131 && !*(_WORD *)((char *)&v158[1] + 5) )
  {
    *v59 = -1073741790;
    *v60 = 0;
    goto LABEL_166;
  }
  LOBYTE(v56) = 0;
  if ( (v14 & 0x2000000) != 0 )
  {
    if ( v17 != -1 )
    {
      v122 = v17 & *v60;
      if ( v122 != *v60 )
      {
        *v60 = v122;
        LOBYTE(v56) = 1;
        if ( v122 )
        {
          *v59 = 0;
          v126 = 1;
        }
        else
        {
          *v59 = -1073741790;
          v126 = 0;
        }
      }
    }
    v61 = 0;
    if ( v153 != -1 )
    {
      v123 = *v60;
      v60 = (int *)(v153 & (unsigned int)*v60);
      if ( (_DWORD)v60 != v123 )
      {
        v61 = 1;
        *v138 = (int)v60;
        if ( (_DWORD)v60 )
        {
          *v59 = 0;
          v126 = 1;
        }
        else
        {
          *v59 = -1073741790;
          v126 = 0;
        }
      }
    }
  }
  else
  {
    v61 = 0;
  }
  if ( PrimaryToken )
  {
    if ( ((_BYTE)v56
       || v61
       || !HIDWORD(v158[0]) && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 && (*v59 < 0 || BYTE7(v158[1])))
      && !v145 )
    {
      v77 = *v59 >= 0;
      v78 = v132 | v14;
      v79 = SepLocateTokenTrustLevel(v52);
      SeLogAccessFailure(PrimaryToken, 0, 0, v79, v13, v78, v77, 0);
      v57 = v137;
      v59 = v136;
    }
    if ( *v59 < 0 && !HIDWORD(v158[0]) && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      if ( BYTE8(v158[1]) )
      {
        v124 = v14 & ~(DWORD1(v158[0]) | DWORD2(v158[0]) | 0x2000000);
        if ( ((unsigned int)v124 & v158[1]) == (_DWORD)v124 )
        {
          SepLogLpacAccessFailure(v124, v60);
          v57 = v137;
        }
      }
    }
  }
  if ( v128 )
  {
    v125 = *(_QWORD *)(v57 + 32);
    if ( v125 )
      SepRmDereferenceCapTable(v125, v60, v57, v56);
  }
  if ( !v127 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)v52);
  v62 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v62, 0);
  }
  return v58 && v126;
}

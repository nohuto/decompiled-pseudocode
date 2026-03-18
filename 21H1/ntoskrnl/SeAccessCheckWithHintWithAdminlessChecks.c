/*
 * XREFs of SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0
 * Callers:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140204C5C (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14020A2B0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14020A9F0 (SepAccessCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepLocateTokenTrustLevel @ 0x140257F58 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14025829C (SepFreeResourceInfo.c)
 *     RtlSidDominatesForTrust @ 0x1402597C0 (RtlSidDominatesForTrust.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeLogAccessFailure @ 0x14030A578 (SeLogAccessFailure.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405903AC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140590508 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140590668 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1405907D0 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140592294 (SepRmReferenceFindCap.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
        int *a11,
        char a12)
{
  int *v12; // r14
  __int64 v13; // r15
  unsigned int v14; // r12d
  int v17; // ebx
  __int16 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // edi
  _DWORD *PrimaryToken; // r14
  int v25; // eax
  int *v26; // rdx
  char v27; // r9
  char v28; // cl
  int v29; // eax
  char v30; // r8
  unsigned __int8 *v31; // rsi
  unsigned int *v32; // rdi
  int v33; // eax
  __int64 v34; // r8
  unsigned int v35; // r9d
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned __int64 v39; // r15
  int v40; // eax
  _WORD *v41; // rdx
  _WORD *v42; // r13
  char v43; // si
  __int16 v44; // ax
  __int64 v45; // rcx
  _WORD *SeOwnerRightsSid; // rdx
  int v47; // edx
  int v48; // eax
  int v49; // edi
  unsigned int v50; // r15d
  struct _SECURITY_SUBJECT_CONTEXT *v51; // r13
  PACCESS_TOKEN v52; // r9
  PACCESS_TOKEN v53; // r8
  char v54; // al
  __int64 v55; // r9
  __int64 v56; // r8
  char v57; // di
  int *v58; // rsi
  int *v59; // rdx
  char v60; // r10
  PVOID v61; // rbx
  bool result; // al
  __int64 v63; // rax
  int *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int8 *v67; // rdi
  unsigned int v68; // r13d
  int v69; // r8d
  unsigned int v70; // ecx
  __int64 v71; // rcx
  unsigned __int8 *v72; // rcx
  unsigned __int64 v73; // rax
  unsigned int v74; // eax
  int v75; // ecx
  char v76; // si
  char v77; // bl
  int v78; // eax
  int v79; // r14d
  __int64 v80; // r11
  __int64 v81; // rdi
  int v82; // eax
  bool v83; // zf
  PACCESS_TOKEN ClientToken; // rbx
  char v85; // r12
  int TokenTrustLevel; // eax
  __int64 v87; // rax
  __int16 v88; // cx
  __int64 v89; // rax
  __int64 v90; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v93; // rdx
  _WORD *v94; // rcx
  unsigned int v95; // eax
  int v96; // eax
  unsigned int v97; // edx
  int v98; // ecx
  __int64 v99; // r13
  int v100; // r8d
  int v101; // eax
  int v102; // r9d
  _QWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // r9
  __int64 v107; // r10
  int v108; // eax
  int v109; // ecx
  int v110; // r13d
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r10
  int v116; // edi
  int v117; // edx
  int v118; // r8d
  int v119; // eax
  char v120; // al
  int v121; // ecx
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rcx
  char v125; // [rsp+A0h] [rbp-80h] BYREF
  char v126; // [rsp+A1h] [rbp-7Fh]
  char v127; // [rsp+A2h] [rbp-7Eh]
  char v128; // [rsp+A3h] [rbp-7Dh] BYREF
  char v129; // [rsp+A4h] [rbp-7Ch] BYREF
  char v130; // [rsp+A5h] [rbp-7Bh]
  int v131; // [rsp+A8h] [rbp-78h]
  int v132; // [rsp+ACh] [rbp-74h]
  char v133; // [rsp+B0h] [rbp-70h]
  int v134; // [rsp+B4h] [rbp-6Ch]
  int *v135; // [rsp+B8h] [rbp-68h]
  __int64 v136; // [rsp+C0h] [rbp-60h]
  int *v137; // [rsp+C8h] [rbp-58h]
  unsigned int v138; // [rsp+D0h] [rbp-50h]
  PVOID P; // [rsp+D8h] [rbp-48h] BYREF
  int v140; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int v141; // [rsp+E4h] [rbp-3Ch]
  __int64 v142; // [rsp+E8h] [rbp-38h]
  int v143; // [rsp+F0h] [rbp-30h] BYREF
  int v144; // [rsp+F4h] [rbp-2Ch]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-28h]
  int v146; // [rsp+100h] [rbp-20h] BYREF
  __int64 v147; // [rsp+108h] [rbp-18h]
  __int64 v148; // [rsp+110h] [rbp-10h]
  _WORD *v149; // [rsp+118h] [rbp-8h]
  __int128 v150; // [rsp+120h] [rbp+0h] BYREF
  __int64 v151; // [rsp+130h] [rbp+10h]
  int v152; // [rsp+138h] [rbp+18h] BYREF
  __int64 v153; // [rsp+140h] [rbp+20h]
  _QWORD *v154; // [rsp+148h] [rbp+28h]
  _OWORD SecurityDescriptor[2]; // [rsp+150h] [rbp+30h] BYREF
  __int64 v156; // [rsp+170h] [rbp+50h]
  _OWORD v157[2]; // [rsp+178h] [rbp+58h] BYREF

  v12 = a11;
  v13 = a1;
  v14 = a5;
  v147 = a1;
  *(_QWORD *)&v157[1] = 0LL;
  DWORD2(v157[1]) = 0;
  v156 = 0LL;
  v127 = 0;
  v17 = -1;
  v152 = -1;
  SubjectContext = a3;
  v126 = a4;
  v131 = a6;
  v135 = a11;
  *a10 = 0;
  v137 = (int *)a10;
  v154 = a7;
  v151 = a8;
  v125 = 0;
  v148 = 0LL;
  v142 = 0LL;
  v132 = 0;
  P = 0LL;
  v140 = 0;
  *a11 = -1073741790;
  v143 = 0;
  v146 = -1073741790;
  v144 = a2 & 8;
  v150 = 0LL;
  v157[0] = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v74 = a6 | a5 & 0xFDFFFFFF | *(_DWORD *)(a8 + 12);
    else
      v74 = a6 | a5;
    *a10 = v74;
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
  LODWORD(v19) = 0;
  v128 = 0;
  v129 = 0;
  while ( 1 )
  {
    if ( (v18 & 0x10) != 0 )
    {
      if ( v18 >= 0 )
      {
        v20 = *(_QWORD *)(v13 + 24);
        goto LABEL_13;
      }
      v65 = *(unsigned int *)(v13 + 12);
      if ( (_DWORD)v65 )
        break;
    }
LABEL_18:
    v21 = 0LL;
LABEL_19:
    v19 = (unsigned int)(v19 + 1);
    if ( !v21 )
      goto LABEL_20;
  }
  v20 = v13 + v65;
LABEL_13:
  if ( !v20 )
    goto LABEL_18;
  v21 = v20 + 8;
  v22 = 0;
  if ( !*(_WORD *)(v20 + 4) )
    goto LABEL_18;
  while ( v22 < (unsigned int)v19 || *(_BYTE *)v21 != 20 )
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
    v79 = *(_DWORD *)(v21 + 4);
    v80 = v21 + 8;
    if ( v21 == -8 )
    {
      v12 = v135;
    }
    else
    {
      if ( !a3->ClientToken )
        goto LABEL_178;
      v81 = *((_QWORD *)a3->ClientToken + 138);
      v82 = RtlSidDominatesForTrust(*((_QWORD *)a3->PrimaryToken + 138), v81, &v129);
      if ( v82 >= 0 )
      {
        if ( !v129 )
LABEL_178:
          v81 = *((_QWORD *)a3->PrimaryToken + 138);
        v82 = RtlSidDominatesForTrust(v81, v80, &v128);
        if ( v82 >= 0 )
        {
          v17 = v79 | 0x1000000;
          if ( v128 )
            v17 = -1;
        }
      }
      v12 = v135;
      *v135 = v82;
      if ( v82 < 0 )
      {
LABEL_183:
        if ( v126 )
          return 0;
        goto LABEL_155;
      }
    }
  }
LABEL_20:
  v23 = a5 & 0xFDFFFFFF;
  if ( (v17 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v83 = v144 == 0;
    *v12 = -1073741790;
    if ( v83 )
    {
      ClientToken = a3->ClientToken;
      if ( !a3->ClientToken )
        ClientToken = a3->PrimaryToken;
      v85 = v131 | a5;
      TokenTrustLevel = SepLocateTokenTrustLevel(a3, v21, v19);
      SeLogAccessFailure((_DWORD)ClientToken, 0, 0, TokenTrustLevel, v13, v85, 0, 0);
    }
    if ( v126 )
      return 0;
    goto LABEL_155;
  }
  *v12 = 0;
  PrimaryToken = a3->ClientToken;
  if ( !a3->ClientToken )
    PrimaryToken = a3->PrimaryToken;
  if ( (a2 & 4) == 0 )
  {
    v25 = SepFilterCheck(v13, (unsigned int)&P, (_DWORD)PrimaryToken, 0, (__int64)&v152);
    v26 = v135;
    *v135 = v25;
    if ( v25 < 0 )
      goto LABEL_183;
    if ( (v152 & v23) == v23 )
    {
      *v26 = 0;
      goto LABEL_27;
    }
    v83 = v144 == 0;
    *v26 = -1073741790;
    if ( v83 )
      SeLogAccessFailure((_DWORD)PrimaryToken, 0, 0, 0, v13, v131 | a5, 0, 0);
    if ( v126 )
      return 0;
LABEL_155:
    SeUnlockSubjectContext(a3);
    return 0;
  }
  v26 = v135;
LABEL_27:
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v19) = 0;
    goto LABEL_29;
  }
  LOBYTE(v19) = 1;
  if ( (PrimaryToken[50] & 0x2000) != 0 )
    v27 = 1;
  else
LABEL_29:
    v27 = 0;
  v133 = v27;
  v130 = 0;
  if ( !SepAllowAccessUponLogoff && (PrimaryToken[50] & 0x20) == 0 )
  {
    v87 = *((_QWORD *)PrimaryToken + 27);
    if ( v87 )
    {
      if ( (*(_DWORD *)(v87 + 32) & 0x20) != 0 )
      {
        v83 = v126 == 0;
        *v137 = 0;
        *v26 = -1073741790;
        if ( !v83 )
          return 0;
        goto LABEL_155;
      }
    }
  }
  v28 = a12;
  if ( !v27 )
  {
    v29 = SepMandatoryIntegrityCheck(v151, v13, v19, (_DWORD)PrimaryToken, 0, a12, (__int64)&v150);
    v26 = v135;
    *v135 = v29;
    if ( v29 < 0 )
      goto LABEL_183;
    if ( DWORD2(v150) && (v23 & (unsigned int)v150) != v23 )
    {
      *v26 = -1073741790;
      if ( (PrimaryToken[50] & 0x4000) == 0 || HIDWORD(v150) > 0x2000 )
      {
        if ( v126 )
          return 0;
        goto LABEL_155;
      }
    }
    else
    {
      *v26 = 0;
      if ( (a5 & 0x2000000) == 0 || (PrimaryToken[50] & 0x4000) == 0 || HIDWORD(v150) > 0x2000 )
      {
LABEL_36:
        v28 = a12;
        goto LABEL_37;
      }
    }
    v130 = 1;
    goto LABEL_36;
  }
LABEL_37:
  if ( !SepRmEnforceCap )
  {
LABEL_38:
    v30 = 0;
    goto LABEL_39;
  }
  v88 = *(_WORD *)(v13 + 2);
  if ( (v88 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_215:
    v28 = a12;
    goto LABEL_38;
  }
  if ( v88 >= 0 )
  {
    v90 = *(_QWORD *)(v13 + 24);
  }
  else
  {
    v89 = *(unsigned int *)(v13 + 12);
    if ( !(_DWORD)v89 )
    {
      v148 = 0LL;
      goto LABEL_215;
    }
    v90 = v13 + v89;
  }
  v148 = v90;
  if ( !v90 )
    goto LABEL_215;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v90, v26, v19);
  if ( !ScopedPolicySid )
    goto LABEL_215;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v93 = v142;
  v28 = a12;
  v30 = 1;
  if ( Cap < 0 )
    v93 = SepRmDefaultCap;
  v142 = v93;
  v127 = 1;
LABEL_39:
  if ( (a2 & 1) != 0 )
  {
    v129 = 1;
    if ( (a5 & 0x2060000) == 0 && !v30 )
    {
      v43 = 0;
      goto LABEL_70;
    }
  }
  else
  {
    v129 = 0;
  }
  if ( *(__int16 *)(v13 + 2) < 0 )
  {
    v63 = *(unsigned int *)(v13 + 4);
    if ( (_DWORD)v63 )
      v31 = (unsigned __int8 *)(v13 + v63);
    else
      v31 = 0LL;
  }
  else
  {
    v31 = *(unsigned __int8 **)(v13 + 8);
  }
  v32 = PrimaryToken + 58;
  if ( v28 && v31 && RtlEqualSid(SeAliasAdminsSid, v31) )
  {
    v43 = 0;
    goto LABEL_56;
  }
  if ( PrimaryToken == (_DWORD *)-232LL || !v31 )
    goto LABEL_68;
  v33 = v31[1];
  v34 = *(unsigned __int16 *)v31;
  v153 = v34;
  v35 = 4 * v33 + 8;
  v138 = v35;
  v36 = (unsigned __int64)v31[4 * ((unsigned __int64)(unsigned int)v34 >> 8) + 4] >> 4;
  v37 = v31[4 * ((unsigned __int64)(unsigned int)v34 >> 8) + 4] & 0xF;
  LOBYTE(v38) = 0;
  v128 = 0;
  v39 = *(_QWORD *)&v32[2 * v37 + 4] & *(_QWORD *)&v32[2 * v36 + 36];
  if ( !v39 )
    goto LABEL_66;
  while ( 2 )
  {
    LOBYTE(v40) = v39;
    v134 = (unsigned __int8)v39;
    if ( !(_BYTE)v39 )
      goto LABEL_135;
    v41 = (_WORD *)*((_QWORD *)PrimaryToken + 30);
    v38 = (unsigned __int8)v38;
    v149 = v41;
    v141 = (unsigned __int8)v38;
    while ( 2 )
    {
      LODWORD(v136) = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v40);
      v42 = &v41[8 * v38 + 8 * (unsigned int)v136];
      if ( **(_WORD **)v42 == (_WORD)v34 )
      {
        if ( !memcmp(v31, *(const void **)v42, v35) )
        {
LABEL_51:
          if ( v42 == *((_WORD **)PrimaryToken + 30) && (*((_DWORD *)v42 + 2) & 0x10) == 0
            || (*((_DWORD *)v42 + 2) & 4) != 0 )
          {
            if ( PrimaryToken[32] )
              v43 = SepSidInTokenSidHash((__int64)(PrimaryToken + 126), 0LL, v31, 0, 1, 0, a12);
            else
              v43 = 1;
          }
          else
          {
            v43 = 0;
          }
          v13 = v147;
LABEL_56:
          if ( !v43 || (a5 & 0x2060000) == 0 )
            goto LABEL_69;
          if ( v129 )
            goto LABEL_62;
          v44 = *(_WORD *)(v13 + 2);
          if ( (v44 & 4) != 0 )
          {
            if ( v44 >= 0 )
            {
              v45 = *(_QWORD *)(v13 + 32);
            }
            else
            {
              v66 = *(unsigned int *)(v13 + 16);
              v45 = (_DWORD)v66 ? v13 + v66 : 0LL;
            }
          }
          else
          {
            v45 = 0LL;
          }
          SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
          v149 = SeOwnerRightsSid;
          if ( !v45
            || (v67 = (unsigned __int8 *)(v45 + 8),
                LODWORD(v136) = *(unsigned __int16 *)(v45 + 4),
                v68 = 0,
                !(_DWORD)v136) )
          {
LABEL_62:
            v30 = v127;
            v47 = 393216;
            if ( (a5 & 0x2000000) == 0 )
              v47 = a5 & 0x60000;
            v14 = a5 & 0xFFF9FFFF;
            v48 = v131 | v47;
            v131 = v48;
            v49 = v48;
            if ( !v127 )
            {
              v43 = 0;
              v131 = v48;
            }
            goto LABEL_71;
          }
          v69 = 104928;
          while ( 2 )
          {
            if ( (v67[1] & 8) != 0 )
              goto LABEL_117;
            v70 = *v67;
            if ( (unsigned __int8)v70 <= 0x10u && _bittest(&v69, v70) )
            {
              v71 = 16LL * (*((_DWORD *)v67 + 2) & 1) + ((8LL * (*((_DWORD *)v67 + 2) & 2)) | 0xC);
            }
            else
            {
              if ( (_BYTE)v70 != 4 )
              {
                if ( (unsigned __int8)v70 < 0xBu || (unsigned __int8)(v70 - 13) <= 1u )
                {
                  v71 = 8LL;
                  break;
                }
LABEL_117:
                ++v68;
                v67 += *((unsigned __int16 *)v67 + 1);
                if ( v68 >= (unsigned int)v136 )
                  goto LABEL_62;
                continue;
              }
              v71 = 12LL;
            }
            break;
          }
          v72 = &v67[v71];
          if ( v72 )
          {
            v73 = *(unsigned __int16 *)v72;
            if ( (_WORD)v73 == *SeOwnerRightsSid )
            {
              if ( !memcmp(v72, SeOwnerRightsSid, 4 * (v73 >> 8) + 8) )
                goto LABEL_69;
              SeOwnerRightsSid = v149;
              v69 = 104928;
            }
          }
          goto LABEL_117;
        }
        LOWORD(v34) = v153;
        v35 = v138;
        v38 = v141;
      }
      v40 = (unsigned __int8)v134 ^ (1 << v136);
      v41 = v149;
      v134 = v40;
      if ( (_BYTE)v40 )
        continue;
      break;
    }
    LOBYTE(v38) = v128;
LABEL_135:
    LOBYTE(v38) = v38 + 8;
    v39 >>= 8;
    v128 = v38;
    if ( v39 )
      continue;
    break;
  }
LABEL_66:
  v50 = *v32;
  if ( *v32 > 0x40 )
  {
    v94 = (_WORD *)*((_QWORD *)PrimaryToken + 30);
    v95 = 64;
    v134 = 64;
    v149 = v94;
    do
    {
      v42 = &v94[8 * v95];
      if ( **(_WORD **)v42 == (_WORD)v34 )
      {
        if ( !memcmp(v31, *(const void **)v42, v35) )
          goto LABEL_51;
        LOWORD(v34) = v153;
        v35 = v138;
        v95 = v134;
        v94 = v149;
      }
      v134 = ++v95;
    }
    while ( v95 < v50 );
  }
  v13 = v147;
LABEL_68:
  v43 = 0;
LABEL_69:
  v30 = v127;
LABEL_70:
  v47 = v132;
  v49 = v131;
LABEL_71:
  if ( !v14 && !v30 && ((PrimaryToken[50] & 0x2000) != 0 || !v47) )
  {
    if ( !v126 )
      SeUnlockSubjectContext(SubjectContext);
    v64 = v135;
    *v137 = v49;
    *v64 = 0;
    return 1;
  }
  v51 = SubjectContext;
  v52 = SubjectContext->ClientToken;
  v53 = SubjectContext->PrimaryToken;
  LODWORD(v157[0]) = v47;
  memset((char *)v157 + 4, 0, 24);
  v54 = SepAccessCheck(
          v13,
          0,
          (_DWORD)v53,
          (_DWORD)v52,
          v14,
          0LL,
          0,
          v151,
          v49,
          a9,
          (__int64)v137,
          (__int64)v154,
          (__int64)v135,
          0,
          v43,
          (__int64)v157,
          (__int64)&P,
          (__int64)&v125,
          0LL,
          a12);
  v56 = v142;
  v57 = v54;
  v136 = v142;
  if ( !SepRmEnforceCap || (v96 = *v135, v138 = v96, v96 < 0) || !v127 )
  {
    v58 = v135;
    v59 = v137;
    goto LABEL_74;
  }
  v97 = 0;
  v128 = 0;
  LOBYTE(v134) = 0;
  v141 = 0;
  v98 = *v137;
  v132 = *v137;
  if ( !*(_DWORD *)(v142 + 60) )
    goto LABEL_288;
  while ( 2 )
  {
    v99 = *(_QWORD *)(v56 + 8LL * v97 + 64);
    v142 = v99;
    if ( *(_QWORD *)(v99 + 24) )
    {
      v100 = (int)P;
      if ( !P )
      {
        v101 = AuthzBasepInitializeResourceClaimsFromSacl(v148, &P);
        v100 = (int)P;
        v102 = (unsigned __int8)v134;
        if ( v101 < 0 )
          v102 = 1;
        v134 = v102;
      }
      v103 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
      if ( v103 )
      {
        v104 = v103[75];
        v105 = v103[73];
        v106 = v103[74];
        v107 = v103[72];
      }
      else
      {
        v104 = 0LL;
        v105 = 0LL;
        v106 = 0LL;
        LODWORD(v107) = 0;
      }
      v108 = AuthzBasepEvaluateAceCondition(
               (_DWORD)PrimaryToken,
               *((_QWORD *)PrimaryToken + 97),
               v100,
               v107,
               v106,
               v105,
               v104,
               *(_QWORD *)(v99 + 24),
               *(_DWORD *)(v99 + 16),
               1,
               0,
               (__int64)&v140);
      v109 = v140;
      v110 = v108;
      if ( v140 != 1 )
      {
        if ( v108 < 0 )
        {
          if ( !v126 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v136 + 32) )
            goto LABEL_277;
          goto LABEL_278;
        }
        if ( (PrimaryToken[50] & 0x10) != 0 )
        {
          v111 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
          if ( v111 )
          {
            v112 = v111[75];
            v113 = v111[73];
            v114 = v111[74];
            v115 = v111[72];
          }
          else
          {
            v112 = 0LL;
            v113 = 0LL;
            v114 = 0LL;
            LODWORD(v115) = 0;
          }
          v110 = AuthzBasepEvaluateAceCondition(
                   (_DWORD)PrimaryToken,
                   *((_QWORD *)PrimaryToken + 97),
                   (_DWORD)P,
                   v115,
                   v114,
                   v113,
                   v112,
                   *(_QWORD *)(v142 + 24),
                   *(_DWORD *)(v142 + 16),
                   1,
                   1,
                   (__int64)&v140);
          if ( v110 >= 0 )
          {
            v109 = v140;
            goto LABEL_257;
          }
          if ( !v126 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v136 + 32) )
LABEL_277:
            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_278:
          *v137 = 0;
          *v135 = v110;
LABEL_280:
          SepFreeResourceInfo(P);
          return 0;
        }
LABEL_257:
        if ( !(_BYTE)v134 && v109 != 1 )
        {
          v96 = v138;
          v51 = SubjectContext;
          goto LABEL_272;
        }
      }
      v99 = v142;
    }
    v116 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v116 < 0 )
    {
      if ( !v126 )
        SeUnlockSubjectContext(SubjectContext);
      if ( *(_QWORD *)(v136 + 32) )
        ((void (*)(void))SepRmDereferenceCapTable)();
      *v137 = 0;
      *v135 = v116;
      goto LABEL_280;
    }
    v117 = v14;
    if ( (*(_DWORD *)(v99 + 48) & 1) != 0 )
    {
      v118 = 0;
      if ( (v14 & 0x2000000) == 0 )
        v117 = v131 | v14;
    }
    else
    {
      v118 = v131;
    }
    v51 = SubjectContext;
    v57 = SepAccessCheck(
            (unsigned int)SecurityDescriptor,
            0,
            SubjectContext->PrimaryToken,
            SubjectContext->ClientToken,
            v117,
            0LL,
            0,
            v151,
            v118,
            a9,
            (__int64)&v143,
            0LL,
            (__int64)&v146,
            0,
            v43,
            (__int64)v157,
            (__int64)&P,
            (__int64)&v125,
            0LL,
            a12);
    if ( v128 )
      v119 = v143 & v132;
    else
      v119 = v143;
    v132 = v119;
    if ( v119 )
    {
      v96 = v146;
      v138 = v146;
      v128 = 1;
      if ( v146 < 0 )
        goto LABEL_286;
LABEL_272:
      v56 = v136;
      v97 = v141 + 1;
      v141 = v97;
      if ( v97 >= *(_DWORD *)(v136 + 60) )
        goto LABEL_287;
      continue;
    }
    break;
  }
  v96 = -1073741790;
LABEL_286:
  v56 = v136;
LABEL_287:
  v98 = v132;
LABEL_288:
  v58 = v135;
  v59 = v137;
  *v135 = v96;
  v120 = v125;
  *v59 &= v98;
  if ( *v58 < 0 )
    v120 = 0;
  v125 = v120;
LABEL_74:
  if ( !v133 && (v14 & 0x2000000) != 0 )
  {
    if ( (!v130 || !*(_WORD *)((char *)&v157[1] + 5)) && DWORD2(v150) && (!BYTE4(v150) || !BYTE5(v150) || !BYTE6(v150)) )
    {
      v75 = *v59 & v150;
      if ( v75 != *v59 )
      {
        *v59 = v75;
        if ( v75 )
        {
          *v58 = 0;
          v125 = 1;
        }
        else
        {
          *v58 = -1073741790;
LABEL_166:
          v125 = 0;
        }
      }
    }
  }
  else if ( v130 && !*(_WORD *)((char *)&v157[1] + 5) )
  {
    *v58 = -1073741790;
    *v59 = 0;
    goto LABEL_166;
  }
  LOBYTE(v55) = 0;
  if ( (v14 & 0x2000000) != 0 )
  {
    if ( v17 != -1 )
    {
      v121 = v17 & *v59;
      if ( v121 != *v59 )
      {
        *v59 = v121;
        LOBYTE(v55) = 1;
        if ( v121 )
        {
          *v58 = 0;
          v125 = 1;
        }
        else
        {
          *v58 = -1073741790;
          v125 = 0;
        }
      }
    }
    v60 = 0;
    if ( v152 != -1 )
    {
      v122 = *v59;
      v59 = (int *)(v152 & (unsigned int)*v59);
      if ( (_DWORD)v59 != v122 )
      {
        v60 = 1;
        *v137 = (int)v59;
        if ( (_DWORD)v59 )
        {
          *v58 = 0;
          v125 = 1;
        }
        else
        {
          *v58 = -1073741790;
          v125 = 0;
        }
      }
    }
  }
  else
  {
    v60 = 0;
  }
  if ( PrimaryToken )
  {
    if ( ((_BYTE)v55 || v60 || !HIDWORD(v157[0]) && (PrimaryToken[50] & 0x4000) != 0 && (*v58 < 0 || BYTE7(v157[1])))
      && !v144 )
    {
      v76 = *v58 >= 0;
      v77 = v131 | v14;
      v78 = SepLocateTokenTrustLevel(v51, v59, v56);
      SeLogAccessFailure((_DWORD)PrimaryToken, 0, 0, v78, v13, v77, v76, 0);
      v56 = v136;
      v58 = v135;
    }
    if ( *v58 < 0 && !HIDWORD(v157[0]) && (PrimaryToken[50] & 0x4000) != 0 )
    {
      if ( BYTE8(v157[1]) )
      {
        v123 = v14 & ~(DWORD1(v157[0]) | DWORD2(v157[0]) | 0x2000000);
        if ( ((unsigned int)v123 & v157[1]) == (_DWORD)v123 )
        {
          SepLogLpacAccessFailure(v123, v59);
          v56 = v136;
        }
      }
    }
  }
  if ( v127 )
  {
    v124 = *(_QWORD *)(v56 + 32);
    if ( v124 )
      SepRmDereferenceCapTable(v124, v59, v56, v55);
  }
  if ( !v126 )
    SeUnlockSubjectContext(v51);
  v61 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v61, 0);
  }
  return v57 && v125;
}

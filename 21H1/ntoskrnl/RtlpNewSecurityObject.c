/*
 * XREFs of RtlpNewSecurityObject @ 0x140602F70
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140257E70 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x140696340 (SeAssignSecurity.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     RtlFindAceByType @ 0x140257F00 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140257F58 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x140257FA8 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlpOwnerAcesPresent @ 0x1402EFB70 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x140320E00 (RtlpValidTrustSubjectContext.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405E5240 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x1405E9C20 (SePrivilegeCheck.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1406046A0 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x140604B40 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x140604C00 (RtlpCombineAcls.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406CCABC (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406DE744 (RtlpCreateServerAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x14090F8A0 (RtlpComputeMergedAcl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  int v10; // r10d
  _OWORD *v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rsi
  char *v14; // r14
  char *v15; // r15
  char *v16; // r12
  char v17; // dl
  char *v18; // r9
  __int16 v19; // ax
  bool v20; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int8 *v24; // rbx
  unsigned __int16 *v25; // rsi
  unsigned __int8 *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdi
  unsigned __int8 *v30; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v32; // r15
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r9
  __int64 v38; // r8
  PVOID PoolWithTag; // rax
  size_t v40; // r8
  char *v41; // r13
  __int64 v42; // rax
  unsigned __int16 *v43; // rbx
  __int64 v44; // r8
  __int16 v45; // cx
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char v50; // r13
  int v51; // r14d
  char v52; // bl
  int v53; // r15d
  int v54; // r9d
  int v55; // r8d
  __int64 v56; // r12
  __int64 v57; // rsi
  int v58; // edi
  __int16 v59; // cx
  int v60; // edx
  char v61; // r12
  __int16 v62; // dx
  int v63; // r9d
  int v64; // r8d
  __int64 v65; // r15
  __int64 v66; // rdi
  int v67; // esi
  char *v68; // rdi
  __int16 v69; // cx
  char *v70; // r13
  __int16 v71; // ax
  ACL *v72; // rcx
  char *AceByType; // rax
  __int64 v74; // r8
  char *v75; // rbx
  unsigned int v76; // r14d
  int v77; // r15d
  _OWORD *v78; // rsi
  void *v79; // r12
  __int16 v80; // ax
  ACL *v81; // rdi
  _DWORD *v82; // rax
  __int64 v83; // r8
  _DWORD *v84; // rbx
  NTSTATUS ServerAcl; // ebx
  int v86; // edx
  ACCESS_MASK AccessMask; // ebx
  char *v88; // r13
  unsigned __int8 v89; // di
  ULONG v90; // edx
  ACL *v91; // rbx
  __int64 v92; // rsi
  unsigned int v93; // eax
  int v94; // r14d
  ACL *v95; // rax
  ACL *v96; // rdi
  __int16 v97; // si
  ACL *v98; // r12
  ACL *v99; // r14
  NTSTATUS v100; // eax
  int v101; // r15d
  __int64 v102; // r9
  int v103; // eax
  int v104; // r13d
  ACL *v105; // rbx
  int v106; // ecx
  int v107; // edx
  int v108; // r8d
  char *v109; // rax
  PSID v110; // rax
  char v111; // bl
  _OWORD *v112; // rdx
  int v113; // edi
  __int16 v114; // ax
  __int16 v115; // si
  __int64 v116; // r12
  __int64 v117; // r14
  int v118; // esi
  __int16 v119; // r14
  int v120; // ecx
  int v121; // r14d
  char v122; // r12
  struct _SECURITY_SUBJECT_CONTEXT *v123; // rsi
  KPROCESSOR_MODE v124; // r15
  unsigned __int16 *v125; // rbx
  bool v126; // al
  int v127; // edi
  unsigned int v128; // r15d
  unsigned int v129; // r13d
  int v130; // esi
  unsigned int v131; // r12d
  int v132; // r14d
  unsigned int v133; // edi
  _DWORD *v134; // rax
  _DWORD *v135; // rdx
  __int16 v136; // cx
  char *v137; // rbx
  bool v138; // zf
  PACL v139; // rsi
  __int64 AclSize; // rcx
  unsigned __int16 *v141; // r14
  char v142; // r12
  __int64 v143; // rcx
  char *v144; // rbx
  unsigned int v146; // eax
  int v147; // r15d
  ACL *v148; // rax
  __int16 v149; // ax
  ACL *v150; // rcx
  char *v151; // rax
  __int16 v152; // ax
  int v153; // r8d
  int v154; // edx
  int v155; // r15d
  __int16 v156; // cx
  unsigned int v157; // ecx
  char *v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rax
  int v161; // eax
  __int64 v162; // r8
  __int16 v163; // ax
  unsigned int v164; // eax
  __int16 v165; // ax
  __int64 v166; // rax
  __int16 v167; // ax
  __int64 v168; // rax
  __int16 v169; // ax
  __int64 v170; // rax
  unsigned int v171; // eax
  ACL *v172; // rax
  char v173; // r13
  unsigned int v174; // eax
  unsigned int v175; // r14d
  ACL *v176; // rax
  struct _KTHREAD *v177; // rax
  __int64 v178; // rax
  int v179; // eax
  int v180; // eax
  __int64 v181; // rax
  __int64 v182; // rax
  int v183; // ecx
  int v184; // eax
  __int64 v185; // rax
  unsigned __int16 *v186; // rax
  __int64 v187; // rax
  void *v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  ACL *v191; // rax
  __int64 v192; // rax
  __int16 v193; // ax
  ACL *v194; // rcx
  __int64 v195; // rax
  char *v196; // rax
  char *v197; // rsi
  ACCESS_MASK v198; // edi
  ULONG v199; // r14d
  int v200; // ecx
  BOOLEAN v201; // bl
  BOOLEAN v202; // bl
  UCHAR AceType; // [rsp+20h] [rbp-F0h]
  char v204; // [rsp+90h] [rbp-80h]
  KPROCESSOR_MODE AccessMode; // [rsp+91h] [rbp-7Fh]
  bool v206; // [rsp+92h] [rbp-7Eh]
  unsigned __int16 *Src; // [rsp+98h] [rbp-78h]
  BOOLEAN Dominates[8]; // [rsp+A0h] [rbp-70h] BYREF
  PACL v209; // [rsp+A8h] [rbp-68h]
  char v210; // [rsp+B0h] [rbp-60h]
  _DWORD v211[3]; // [rsp+B4h] [rbp-5Ch] BYREF
  __int16 v212; // [rsp+C0h] [rbp-50h] BYREF
  char v213; // [rsp+C2h] [rbp-4Eh] BYREF
  bool v214; // [rsp+C3h] [rbp-4Dh]
  char v215; // [rsp+C4h] [rbp-4Ch]
  char v216; // [rsp+C5h] [rbp-4Bh]
  bool v217; // [rsp+C6h] [rbp-4Ah]
  char v218; // [rsp+C7h] [rbp-49h] BYREF
  char v219; // [rsp+C8h] [rbp-48h]
  char v220; // [rsp+C9h] [rbp-47h]
  char v221; // [rsp+CAh] [rbp-46h]
  _DWORD v222[3]; // [rsp+CCh] [rbp-44h] BYREF
  _WORD v223[2]; // [rsp+D8h] [rbp-38h] BYREF
  ULONG v224; // [rsp+DCh] [rbp-34h] BYREF
  __int64 v225; // [rsp+E0h] [rbp-30h] BYREF
  _OWORD *v226; // [rsp+E8h] [rbp-28h]
  void *v227; // [rsp+F0h] [rbp-20h]
  int v228; // [rsp+F8h] [rbp-18h] BYREF
  void *v229; // [rsp+100h] [rbp-10h]
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  __int64 v231; // [rsp+110h] [rbp+0h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+8h]
  int v233; // [rsp+120h] [rbp+10h] BYREF
  ULONG v234; // [rsp+124h] [rbp+14h] BYREF
  __int64 v235; // [rsp+128h] [rbp+18h] BYREF
  int v236[2]; // [rsp+130h] [rbp+20h]
  PVOID SecurityDescriptor; // [rsp+138h] [rbp+28h] BYREF
  PSID Sid; // [rsp+140h] [rbp+30h]
  __int64 v239; // [rsp+148h] [rbp+38h]
  NTSTATUS v240; // [rsp+150h] [rbp+40h] BYREF
  NTSTATUS v241; // [rsp+154h] [rbp+44h] BYREF
  PSID Sid1; // [rsp+158h] [rbp+48h]
  __int64 v243; // [rsp+160h] [rbp+50h]
  PVOID P; // [rsp+168h] [rbp+58h]
  ACL *p_Acl; // [rsp+170h] [rbp+60h]
  unsigned __int16 *v246; // [rsp+178h] [rbp+68h]
  PVOID v247; // [rsp+180h] [rbp+70h] BYREF
  PVOID v248; // [rsp+188h] [rbp+78h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+190h] [rbp+80h] BYREF
  NTSTATUS AccessStatus; // [rsp+194h] [rbp+84h] BYREF
  __int64 v251; // [rsp+198h] [rbp+88h] BYREF
  char *v252; // [rsp+1A0h] [rbp+90h]
  __int64 v253; // [rsp+1A8h] [rbp+98h]
  ACL *v254; // [rsp+1B0h] [rbp+A0h] BYREF
  char *v255; // [rsp+1B8h] [rbp+A8h]
  _QWORD *v256; // [rsp+1C0h] [rbp+B0h]
  _OWORD v257[2]; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 v258; // [rsp+1E8h] [rbp+D8h]
  int v259; // [rsp+1F0h] [rbp+E0h]
  unsigned __int16 v260; // [rsp+1F4h] [rbp+E4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F8h] [rbp+E8h] BYREF
  ACL Acl; // [rsp+210h] [rbp+100h] BYREF
  _BYTE v263[120]; // [rsp+218h] [rbp+108h] BYREF
  ACL v264; // [rsp+290h] [rbp+180h] BYREF

  v10 = 0;
  GenericMapping = a9;
  v11 = a2;
  v12 = 0LL;
  v253 = a10;
  v13 = a1;
  v256 = a3;
  v258 = 0LL;
  v210 = 0;
  v14 = 0LL;
  v220 = 0;
  v15 = 0LL;
  v219 = 0;
  v16 = 0LL;
  v204 = 0;
  v212 = 0;
  v223[0] = 0;
  v213 = 0;
  v216 = 0;
  v218 = 0;
  v226 = a2;
  v17 = a7;
  v243 = a4;
  v18 = 0LL;
  p_Acl = &Acl;
  *(_QWORD *)v236 = a1;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v228 = 0;
  Src = 0LL;
  v247 = 0LL;
  P = 0LL;
  Sid1 = 0LL;
  v252 = 0LL;
  v231 = 0LL;
  v239 = 0LL;
  v246 = 0LL;
  *(_QWORD *)&v211[1] = 0LL;
  AccessMode = 1;
  memset(v222, 0, sizeof(v222));
  LODWORD(v251) = 0;
  v255 = 0LL;
  Sid = 0LL;
  v254 = 0LL;
  SecurityDescriptor = 0LL;
  Dominates[0] = 1;
  v248 = 0LL;
  v221 = 0;
  memset(v257, 0, sizeof(v257));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( v11 )
  {
    v215 = 1;
  }
  else
  {
    v11 = v257;
    v215 = 0;
    v226 = v257;
    LOBYTE(v257[0]) = 1;
  }
  v19 = *((_WORD *)v11 + 1);
  v20 = (v19 & 0x80u) != 0;
  v206 = (v19 & 0x80u) != 0;
  v217 = (v19 & 0x40) != 0;
  if ( a8 || (v19 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8
      && (v177 = KeGetCurrentThread(),
          --v177->KernelApcDisable,
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u),
          (v22 = *(_QWORD *)a8) != 0) )
    {
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v206 = 1;
      v23 = *(_QWORD *)(a8 + 16);
    }
    else
    {
      v22 = *(_QWORD *)(a8 + 16);
      v23 = v22;
    }
    v24 = *(unsigned __int8 **)(v22 + 168);
    v25 = *(unsigned __int16 **)(v22 + 184);
    v26 = *(unsigned __int8 **)(*(_QWORD *)(v22 + 152) + 16LL * *(unsigned int *)(v22 + 144));
    v27 = *(_QWORD *)(v23 + 152);
    v28 = *(unsigned int *)(v23 + 144);
    v29 = *(unsigned __int8 **)(v23 + 168);
    v30 = *(unsigned __int8 **)(v27 + 16 * v28);
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v22);
    if ( TokenIntegrity )
      v32 = *TokenIntegrity;
    else
      v32 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectSecurityContext);
    v34 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v35 = 4LL * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v35 = 0LL;
    if ( v24 )
      v36 = 4LL * v24[1] + 8;
    else
      v36 = 0LL;
    if ( v29 )
      v37 = 4LL * v29[1] + 32;
    else
      v37 = 24LL;
    if ( v25 )
      v38 = v25[1];
    else
      v38 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v37 + v38 + v36 + v35 + 4 * (v32[1] + v26[1] + (unsigned __int64)v30[1]),
                    0x64536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v26, 4LL * v26[1] + 8);
    v40 = 4LL * v32[1] + 8;
    v41 = (char *)P + 4 * v26[1] + 8;
    Sid1 = v41;
    memmove(v41, v32, v40);
    v42 = v32[1];
    v15 = &v41[4 * v42 + 8];
    v231 = (__int64)v15;
    if ( v34 )
    {
      v162 = v34[1];
      v252 = &v41[4 * v42 + 8];
      memmove(v252, v34, 4 * v162 + 8);
      v15 += 4 * v34[1] + 8;
      v231 = (__int64)v15;
    }
    else
    {
      v252 = 0LL;
    }
    if ( v24 )
    {
      v14 = v15;
      memmove(v15, v24, 4LL * v24[1] + 8);
      v15 += 4 * v24[1] + 8;
      v231 = (__int64)v15;
    }
    else
    {
      v14 = 0LL;
    }
    memmove(v15, v30, 4LL * v30[1] + 8);
    v43 = (unsigned __int16 *)&v15[4 * v30[1] + 8];
    v246 = v43;
    if ( v29 )
    {
      v44 = v29[1];
      v239 = (__int64)v43;
      v16 = (char *)v43;
      memmove(v43, v29, 4 * v44 + 8);
      v43 += 2 * v29[1] + 4;
      v246 = v43;
    }
    else
    {
      v16 = 0LL;
      v239 = 0LL;
    }
    if ( v25 )
      memmove(v43, v25, v25[1]);
    else
      v246 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v20 = v206;
    v10 = 0;
    v13 = *(_QWORD *)v236;
    v18 = (char *)P;
    v17 = a7;
    v11 = v226;
    v12 = *(_QWORD *)&v211[1];
  }
  v45 = *((_WORD *)v11 + 1);
  if ( v45 < 0 )
  {
    v159 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v159 )
      goto LABEL_33;
    v46 = (char *)v11 + v159;
  }
  else
  {
    v46 = (char *)*((_QWORD *)v11 + 1);
  }
  v227 = v46;
  if ( v46 )
  {
    HIBYTE(v212) = 1;
    goto LABEL_37;
  }
LABEL_33:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v13 )
    {
      v141 = 0LL;
      ServerAcl = -1073741734;
      v139 = 0LL;
      goto LABEL_502;
    }
    if ( *(__int16 *)(v13 + 2) >= 0 )
    {
      v188 = *(void **)(v13 + 8);
    }
    else
    {
      v187 = *(unsigned int *)(v13 + 4);
      if ( !(_DWORD)v187 )
        goto LABEL_378;
      v188 = (void *)(v13 + v187);
    }
    v227 = v188;
    HIBYTE(v212) = 1;
    if ( v188 )
      goto LABEL_37;
LABEL_378:
    v141 = 0LL;
    ServerAcl = -1073741734;
    v139 = 0LL;
    goto LABEL_502;
  }
  v47 = v15;
  if ( !v20 )
    v47 = v18;
  v227 = v47;
  if ( !v47 )
  {
    v141 = 0LL;
    ServerAcl = -1073741700;
    v139 = 0LL;
    goto LABEL_502;
  }
LABEL_37:
  if ( v45 < 0 )
  {
    v160 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v160 )
      goto LABEL_40;
    v48 = (char *)v11 + v160;
  }
  else
  {
    v48 = (char *)*((_QWORD *)v11 + 2);
  }
  v229 = v48;
  if ( v48 )
    goto LABEL_44;
LABEL_40:
  if ( (v17 & 0x40) != 0 )
  {
    if ( !v13 )
    {
      v141 = 0LL;
      ServerAcl = -1073741733;
      v139 = 0LL;
      goto LABEL_502;
    }
    if ( *(__int16 *)(v13 + 2) >= 0 )
    {
      v49 = *(char **)(v13 + 16);
    }
    else
    {
      v189 = *(unsigned int *)(v13 + 8);
      if ( !(_DWORD)v189 )
        goto LABEL_386;
      v49 = (char *)(v13 + v189);
    }
  }
  else
  {
    v49 = v14;
    if ( v20 )
      v49 = v16;
  }
  v229 = v49;
  if ( !v49 )
  {
LABEL_386:
    v141 = 0LL;
    ServerAcl = -1073741733;
    v139 = 0LL;
    goto LABEL_502;
  }
LABEL_44:
  LODWORD(v225) = v17 & 4;
  v50 = (v17 & 4) != 0;
  v51 = v17 & 2;
  v52 = v51 != 0;
  v214 = v51 != 0;
  if ( (v45 & 0x20) != 0 )
    v10 = 8;
  v53 = 0;
  if ( (v45 & 0x800) != 0 )
    v54 = 1024;
  else
    v54 = 0;
  if ( (v45 & 0x2000) != 0 )
    v55 = 4096;
  else
    v55 = 0;
  if ( (v45 & 0x10) != 0 )
  {
    if ( v45 >= 0 )
    {
      v56 = *((_QWORD *)v11 + 3);
    }
    else
    {
      v179 = *((_DWORD *)v11 + 3);
      if ( v179 )
        LODWORD(v56) = (_DWORD)v11 + v179;
      else
        LODWORD(v56) = 0;
    }
  }
  else
  {
    LODWORD(v56) = 0;
  }
  if ( !v13 )
    goto LABEL_53;
  v163 = *(_WORD *)(v13 + 2);
  if ( (v163 & 0x10) == 0 )
    goto LABEL_53;
  if ( v163 < 0 )
  {
    v164 = *(_DWORD *)(v13 + 12);
    if ( v164 )
    {
      v57 = *(_QWORD *)v236 + v164;
      goto LABEL_54;
    }
LABEL_53:
    v57 = 0LL;
    goto LABEL_54;
  }
  v57 = *(_QWORD *)(v13 + 24);
LABEL_54:
  v58 = v10 | v54 | v55 | ((v45 & 0x10) != 0 ? 4 : 0);
  if ( !v58 && !v57 )
  {
    v222[0] = v51 != 0 ? 0x400 : 0;
    v209 = 0LL;
    goto LABEL_57;
  }
  v171 = 200;
  v211[0] = 200;
  while ( 1 )
  {
    v172 = (ACL *)ExAllocatePoolWithTag(PagedPool, v171, 0x63416553u);
    v209 = v172;
    if ( !v172 )
    {
      v139 = 0LL;
      goto LABEL_499;
    }
    ServerAcl = RtlpInheritAcl2(
                  v57,
                  v56,
                  v58,
                  a6,
                  v52,
                  v50,
                  (int)v227,
                  (__int64)v229,
                  v231,
                  v239,
                  GenericMapping,
                  2,
                  v243,
                  a5,
                  (__int64)v211,
                  v172,
                  (__int64)&v212,
                  (__int64)v222);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v209, 0);
    v209 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_279;
    if ( (unsigned int)++v53 >= 2 )
      goto LABEL_279;
    v171 = v211[0];
    v52 = v214;
  }
  if ( !v211[0] )
  {
    ExFreePoolWithTag(v209, 0);
    v209 = 0LL;
  }
LABEL_279:
  if ( ServerAcl >= 0 )
  {
    v210 = 1;
    v183 = 32784;
    if ( (v222[0] & 8) != 0 )
      v183 = 32816;
    if ( (v222[0] & 0x1000) != 0 )
      v184 = 0x2000;
    else
      v184 = 0;
    v11 = v226;
    v211[0] = v183 | v184 | (2 * (v222[0] & 0x400));
    goto LABEL_60;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_424;
  v11 = v226;
LABEL_57:
  v59 = *((_WORD *)v11 + 1);
  v60 = 34816;
  if ( !v51 )
    v60 = 0x8000;
  v211[0] = v60;
  if ( (v59 & 0x30) == 0x30 )
  {
    if ( (v59 & 0x10) == 0 )
    {
      v209 = 0LL;
LABEL_404:
      LOBYTE(v212) = 1;
      v211[0] = v60 | v59 & 0x2000 | 0x10;
      goto LABEL_60;
    }
    if ( v59 >= 0 )
    {
      v191 = (ACL *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v190 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v190 )
      {
        v209 = 0LL;
        goto LABEL_404;
      }
      v191 = (ACL *)((char *)v11 + v190);
    }
    v209 = v191;
    goto LABEL_404;
  }
LABEL_60:
  v61 = (_DWORD)v225 != 0;
  v62 = *((_WORD *)v11 + 1);
  if ( (v62 & 0x20) != 0 )
    v63 = 8;
  else
    v63 = 0;
  if ( (v62 & 0x800) != 0 )
    v64 = 1024;
  else
    v64 = 0;
  if ( (v62 & 0x10) != 0 )
  {
    if ( v62 >= 0 )
    {
      v65 = *((_QWORD *)v11 + 3);
    }
    else
    {
      v180 = *((_DWORD *)v11 + 3);
      if ( v180 )
        LODWORD(v65) = (_DWORD)v11 + v180;
      else
        LODWORD(v65) = 0;
    }
  }
  else
  {
    LODWORD(v65) = 0;
  }
  if ( !*(_QWORD *)v236 )
    goto LABEL_67;
  v165 = *(_WORD *)(*(_QWORD *)v236 + 2LL);
  if ( (v165 & 0x10) == 0 )
    goto LABEL_67;
  if ( v165 >= 0 )
  {
    v66 = *(_QWORD *)(*(_QWORD *)v236 + 24LL);
    goto LABEL_68;
  }
  v166 = *(unsigned int *)(*(_QWORD *)v236 + 12LL);
  if ( (_DWORD)v166 )
    v66 = *(_QWORD *)v236 + v166;
  else
LABEL_67:
    v66 = 0LL;
LABEL_68:
  v67 = v63 | v64 | ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0);
  if ( !v67 && !v66 )
  {
    v68 = 0LL;
    *(_QWORD *)&v222[1] = 0LL;
    v241 = -2147483637;
    goto LABEL_71;
  }
  v173 = v214;
  v174 = 200;
  v233 = 200;
  v175 = 0;
  while ( 1 )
  {
    v176 = (ACL *)ExAllocatePoolWithTag(PagedPool, v174, 0x63416553u);
    *(_QWORD *)&v222[1] = v176;
    if ( !v176 )
      goto LABEL_497;
    ServerAcl = RtlpInheritAcl2(
                  v66,
                  v65,
                  v67,
                  a6,
                  v173,
                  v61,
                  (int)v227,
                  (__int64)v229,
                  v231,
                  v239,
                  GenericMapping,
                  2,
                  v243,
                  a5,
                  (__int64)&v233,
                  v176,
                  (__int64)v223,
                  (__int64)&v251);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
    *(_QWORD *)&v222[1] = 0LL;
    if ( ServerAcl != -1073741789 || (++v175, v175 >= 2) )
    {
      v68 = 0LL;
      goto LABEL_287;
    }
    v174 = v233;
  }
  if ( v233 )
  {
    v68 = *(char **)&v222[1];
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
    v68 = 0LL;
    *(_QWORD *)&v222[1] = 0LL;
  }
LABEL_287:
  v241 = ServerAcl;
  if ( ServerAcl >= 0 )
  {
    v11 = v226;
    v220 = 1;
    goto LABEL_72;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_424;
  v11 = v226;
LABEL_71:
  v69 = *((_WORD *)v11 + 1);
  if ( (v69 & 0x30) == 0x30 )
  {
    if ( (v69 & 0x10) == 0 )
    {
      v68 = 0LL;
      *(_QWORD *)&v222[1] = 0LL;
      goto LABEL_72;
    }
    if ( v69 >= 0 )
    {
      v68 = (char *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v192 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v192 )
      {
        v68 = 0LL;
        *(_QWORD *)&v222[1] = 0LL;
        goto LABEL_72;
      }
      v68 = (char *)v11 + v192;
    }
    *(_QWORD *)&v222[1] = v68;
  }
LABEL_72:
  v70 = v252;
  v224 = 0;
  while ( 2 )
  {
    v71 = *((_WORD *)v11 + 1);
    if ( (v71 & 0x10) != 0 )
    {
      if ( v71 >= 0 )
      {
        v72 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v178 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v178 )
          v72 = (ACL *)((char *)v11 + v178);
        else
          v72 = 0LL;
      }
    }
    else
    {
      v72 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v72, 0x14u, &v224);
    v75 = AceByType;
    if ( AceByType && AceByType != (char *)-8LL && !RtlpValidTrustSubjectContext(v70, AceByType + 8, v74, &v241) )
    {
LABEL_423:
      ServerAcl = -1073741790;
      goto LABEL_424;
    }
    ++v224;
    if ( v75 )
    {
      v11 = v226;
      continue;
    }
    break;
  }
  v76 = a7;
  v77 = 4;
  v78 = v226;
  if ( (a7 & 0x800) == 0 )
  {
LABEL_78:
    v79 = v229;
    v248 = v68;
    goto LABEL_79;
  }
  v224 = 0;
  do
  {
    v193 = *((_WORD *)v78 + 1);
    if ( (v193 & 0x10) != 0 )
    {
      if ( v193 >= 0 )
      {
        v194 = (ACL *)*((_QWORD *)v78 + 3);
      }
      else
      {
        v195 = *((unsigned int *)v78 + 3);
        if ( (_DWORD)v195 )
          v194 = (ACL *)((char *)v78 + v195);
        else
          v194 = 0LL;
      }
    }
    else
    {
      v194 = 0LL;
    }
    v196 = (char *)RtlFindAceByType(v194, 0x14u, &v224);
    ++v224;
    if ( !v196 )
    {
      if ( v70 )
      {
        if ( !v253 )
        {
          v139 = v209;
          ServerAcl = -1073741811;
          goto LABEL_500;
        }
        v198 = *(_DWORD *)(v253 + 4);
        v197 = v70;
        v199 = 0;
        goto LABEL_443;
      }
      goto LABEL_78;
    }
  }
  while ( (v196[1] & 8) != 0 );
  v197 = v196 + 8;
  v198 = *((_DWORD *)v196 + 1);
  v199 = (unsigned __int8)v196[1];
  if ( !v253 || (v198 & *(_DWORD *)(v253 + 4)) != v198 || v196 == (char *)-8LL )
  {
LABEL_438:
    v139 = v209;
    ServerAcl = -1073741811;
    goto LABEL_500;
  }
LABEL_443:
  ServerAcl = RtlCreateAcl(&v264, 0x58u, 2u);
  if ( ServerAcl < 0
    || (ServerAcl = RtlAddProcessTrustLabelAce(&v264, 2u, v199, v197, 0x14u, v198), ServerAcl < 0)
    || (v78 = v226,
        v79 = v229,
        ServerAcl = RtlpComputeMergedAcl(
                      v222[1],
                      (*((_WORD *)v226 + 1) & 0x800 | (*((unsigned __int16 *)v226 + 1) >> 1) & 0x18u) >> 1,
                      (int)&v264,
                      4,
                      (__int64)v227,
                      (__int64)v229,
                      (__int64)GenericMapping,
                      2,
                      (__int64)&v248,
                      (__int64)v222),
        ServerAcl < 0) )
  {
LABEL_424:
    v139 = v209;
LABEL_500:
    v141 = Src;
LABEL_501:
    v12 = *(_QWORD *)&v211[1];
LABEL_502:
    v142 = 0;
    goto LABEL_186;
  }
  v76 = a7;
  v221 = 1;
LABEL_79:
  v80 = *((_WORD *)v78 + 1);
  if ( (v80 & 0x10) != 0 )
  {
    if ( v80 >= 0 )
    {
      v81 = (ACL *)*((_QWORD *)v78 + 3);
    }
    else
    {
      v181 = *((unsigned int *)v78 + 3);
      if ( (_DWORD)v181 )
        v81 = (ACL *)((char *)v78 + v181);
      else
        v81 = 0LL;
    }
  }
  else
  {
    v81 = 0LL;
  }
  v240 = 0;
  v259 = 0;
  v260 = 256;
  v234 = 0;
  while ( 2 )
  {
    v82 = RtlFindAceByType(v81, 0x15u, &v234);
    v84 = v82;
    if ( !v82 )
      goto LABEL_83;
    if ( (v82[1] & 0xFF000000) != 0 )
      goto LABEL_438;
    if ( (*((_BYTE *)v82 + 1) & 0x40) != 0 )
    {
      if ( !RtlpValidTrustSubjectContext(v70, v82 + 2, v83, &v240) )
        goto LABEL_423;
      goto LABEL_83;
    }
    v200 = *(_DWORD *)((char *)v82 + 10) - v259;
    if ( !v200 )
      v200 = *((unsigned __int16 *)v82 + 7) - v260;
    if ( v200 )
      goto LABEL_438;
    if ( *((_BYTE *)v82 + 9) == 1 && !v82[4] )
    {
LABEL_83:
      ++v234;
      if ( !v84 )
      {
        ServerAcl = v240;
        goto LABEL_85;
      }
      continue;
    }
    break;
  }
  ServerAcl = -1073741811;
LABEL_85:
  if ( ServerAcl < 0 )
    goto LABEL_483;
  v86 = (v76 >> 8) & 1 | 2;
  if ( (v76 & 0x200) == 0 )
    v86 = (v76 >> 8) & 1;
  AccessMask = v86 | 4;
  if ( (v76 & 0x400) == 0 )
    AccessMask = v86;
  if ( AccessMask )
  {
    v88 = v255;
    goto LABEL_92;
  }
  v149 = *((_WORD *)v78 + 1);
  if ( (v149 & 0x10) != 0 )
  {
    if ( v149 >= 0 )
    {
      v150 = (ACL *)*((_QWORD *)v78 + 3);
    }
    else
    {
      v182 = *((unsigned int *)v78 + 3);
      if ( (_DWORD)v182 )
        v150 = (ACL *)((char *)v78 + v182);
      else
        v150 = 0LL;
    }
  }
  else
  {
    v150 = 0LL;
  }
  v151 = (char *)RtlFindAceByType(v150, 0x11u, 0LL);
  v88 = v151;
  if ( v151 )
  {
    v89 = v151[1];
    AccessMask = *((_DWORD *)v151 + 1);
    Sid = v151 + 8;
    if ( v89 == 8 || (v89 & 0x10) != 0 )
    {
      v88 = 0LL;
      Sid = 0LL;
      AccessMask = 0;
      goto LABEL_92;
    }
  }
  else
  {
LABEL_92:
    v89 = 0;
  }
  if ( (v89 & 8) != 0 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    v139 = v209;
    ServerAcl = -1073740730;
    goto LABEL_500;
  }
  if ( AccessMask )
  {
LABEL_95:
    if ( !v88 )
    {
      if ( !SubjectSecurityContext )
      {
        v139 = v209;
        ServerAcl = -1073741700;
        goto LABEL_500;
      }
      Sid = Sid1;
      v89 = 0;
    }
  }
  else if ( Sid1 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    AccessMask = 1;
    goto LABEL_95;
  }
  if ( !Sid )
  {
    v91 = 0LL;
    p_Acl = 0LL;
LABEL_101:
    if ( (v76 & 0x700) == 0 )
    {
      if ( !v88 && v91 )
      {
        v77 = 0;
      }
      else
      {
        v152 = *((_WORD *)v78 + 1);
        if ( (v152 & 0x20) != 0 )
          v153 = 8;
        else
          v153 = 0;
        if ( (v152 & 0x800) != 0 )
          v154 = 1024;
        else
          v154 = 0;
        if ( (v152 & 0x2000) != 0 )
          v155 = 4096;
        else
          v155 = 0;
        v77 = v153 | (*((unsigned __int16 *)v78 + 1) >> 2) & 4 | v154 | v155;
      }
    }
    if ( *(_QWORD *)v236 )
    {
      v167 = *(_WORD *)(*(_QWORD *)v236 + 2LL);
      if ( (v167 & 0x10) != 0 )
      {
        if ( v167 >= 0 )
        {
          v92 = *(_QWORD *)(*(_QWORD *)v236 + 24LL);
LABEL_104:
          if ( !v77 && !v92 )
          {
LABEL_206:
            v98 = p_Acl;
            v96 = p_Acl;
            v222[0] = 0;
            v97 = 0;
LABEL_113:
            v99 = v209;
            v100 = RtlpCombineAcls(
                     (_DWORD)v209,
                     (_DWORD)v96,
                     v222[1],
                     v222[1],
                     (__int64)v248,
                     *(__int64 *)&v222[1],
                     (__int64)&v254,
                     (__int64)&v228);
            v101 = v211[0];
            v102 = 0LL;
            ServerAcl = v100;
            if ( (v211[0] & 0x2000) != 0 )
              v103 = 0x40000000;
            else
              v103 = 0;
            v104 = v103 | v228;
            if ( v96 && v96 != v98 )
            {
              ExFreePoolWithTag(v96, 0);
              v102 = 0LL;
            }
            if ( ServerAcl < 0 )
              goto LABEL_424;
            v105 = v254;
            if ( v254 )
            {
              if ( v210 && v209 )
                ExFreePoolWithTag(v209, 0);
              v209 = v105;
              v99 = v105;
              v219 = 1;
              if ( (v97 & 8) != 0 )
                v106 = 48;
              else
                v106 = 16;
              v102 = 0LL;
              if ( (v97 & 0x1000) != 0 )
                v107 = 0x2000;
              else
                v107 = 0;
              v101 |= v106 | (2 * (v97 & 0x400)) | v107;
              v211[0] = v101;
            }
            v108 = a7;
            v228 = a7 & 8;
            if ( (a7 & 8) == 0 )
            {
              v109 = (char *)RtlFindAceByType(v99, 0x11u, 0LL);
              if ( v109 )
                v110 = v109 + 8;
              else
                v110 = Sid;
              if ( v110 )
              {
                if ( !SubjectSecurityContext )
                {
                  v139 = v209;
                  ServerAcl = -1073741700;
                  goto LABEL_500;
                }
                ServerAcl = RtlSidDominates(Sid1, v110, Dominates);
                if ( ServerAcl < 0 )
                  goto LABEL_483;
                v108 = a7;
                v102 = 0LL;
                if ( !Dominates[0] )
                  v216 = 1;
              }
              else
              {
                v108 = a7;
                v102 = 0LL;
              }
            }
            v111 = (_DWORD)v225 != 0;
            v112 = v226;
            v113 = v108 & 1;
            Dominates[0] = (_DWORD)v225 != 0;
            v114 = *((_WORD *)v226 + 1);
            v115 = v114;
            if ( (v114 & 4) != 0 )
            {
              if ( v114 >= 0 )
              {
                v116 = *((_QWORD *)v226 + 4);
              }
              else
              {
                v161 = *((_DWORD *)v226 + 4);
                if ( v161 )
                  LODWORD(v116) = (_DWORD)v226 + v161;
                else
                  LODWORD(v116) = 0;
              }
            }
            else
            {
              LODWORD(v116) = 0;
            }
            if ( !*(_QWORD *)v236 )
              goto LABEL_137;
            v169 = *(_WORD *)(*(_QWORD *)v236 + 2LL);
            if ( (v169 & 4) == 0 )
              goto LABEL_137;
            if ( v169 >= 0 )
            {
              v117 = *(_QWORD *)(*(_QWORD *)v236 + 32LL);
              goto LABEL_138;
            }
            v170 = *(unsigned int *)(*(_QWORD *)v236 + 16LL);
            if ( (_DWORD)v170 )
              v117 = *(_QWORD *)v236 + v170;
            else
LABEL_137:
              v117 = 0LL;
LABEL_138:
            v118 = v115 & 0x140C;
            if ( v118 || v117 )
            {
              v146 = 200;
              v147 = 0;
              LODWORD(v225) = 200;
              while ( 1 )
              {
                v148 = (ACL *)ExAllocatePoolWithTag(PagedPool, v146, 0x63416553u);
                Src = (unsigned __int16 *)v148;
                if ( !v148 )
                {
                  v139 = v209;
                  ServerAcl = -1073741801;
                  v141 = 0LL;
                  goto LABEL_501;
                }
                ServerAcl = RtlpInheritAcl2(
                              v117,
                              v116,
                              v118,
                              a6,
                              v113,
                              v111,
                              (int)v227,
                              (__int64)v229,
                              v231,
                              v239,
                              GenericMapping,
                              1,
                              v243,
                              a5,
                              (__int64)&v225,
                              v148,
                              (__int64)&v213,
                              (__int64)v222);
                if ( ServerAcl >= 0 )
                  break;
                ExFreePoolWithTag(Src, 0);
                v102 = 0LL;
                Src = 0LL;
                if ( ServerAcl != -1073741789 )
                  goto LABEL_203;
                if ( (unsigned int)++v147 >= 2 )
                  goto LABEL_203;
                v146 = v225;
                v111 = Dominates[0];
              }
              if ( (_DWORD)v225 )
              {
                v102 = 0LL;
              }
              else
              {
                ExFreePoolWithTag(Src, 0);
                v102 = 0LL;
                Src = 0LL;
              }
LABEL_203:
              if ( ServerAcl >= 0 )
              {
                v122 = 1;
                v108 = a7;
                v204 = 1;
                v121 = v222[0] & 0x1408 | 4 | v211[0];
                v211[0] = v121;
                goto LABEL_148;
              }
              if ( ServerAcl == -2147483637 )
              {
                v101 = v211[0];
                v112 = v226;
                v108 = a7;
                goto LABEL_141;
              }
              goto LABEL_424;
            }
            Src = 0LL;
LABEL_141:
            v119 = *((_WORD *)v112 + 1);
            v120 = v101 | 0x400;
            if ( !v113 )
              v120 = v101;
            if ( (*((_WORD *)v112 + 1) & 0xC) != 0xC )
            {
              v121 = v120;
              v211[0] = v120;
              if ( !v246 )
              {
LABEL_147:
                v122 = 0;
LABEL_148:
                v123 = SubjectSecurityContext;
                if ( (v108 & 0x1000) == 0 && v215 && SubjectSecurityContext && *(_QWORD *)v236 )
                {
                  GrantedAccess = 0;
                  AccessStatus = 0;
                  ServerAcl = RtlpNewSecurityObject(
                                v236[0],
                                0,
                                (int)&SecurityDescriptor,
                                v243,
                                a5,
                                a6,
                                v108 | 1u,
                                (__int64)SubjectSecurityContext,
                                (__int64)GenericMapping,
                                v253);
                  if ( ServerAcl < 0 )
                    goto LABEL_483;
                  v156 = *((_WORD *)SecurityDescriptor + 1);
                  if ( (v156 & 4) != 0 )
                  {
                    if ( v156 >= 0 )
                    {
                      v158 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                    }
                    else
                    {
                      v157 = *((_DWORD *)SecurityDescriptor + 4);
                      if ( v157 )
                        v158 = (char *)SecurityDescriptor + v157;
                      else
                        v158 = 0LL;
                    }
                  }
                  else
                  {
                    v158 = 0LL;
                  }
                  v124 = AccessMode;
                  if ( RtlpOwnerAcesPresent(0x10u, (__int64)v158)
                    && !SeAccessCheck(
                          SecurityDescriptor,
                          v123,
                          0,
                          0x40000u,
                          0,
                          0LL,
                          GenericMapping,
                          AccessMode,
                          &GrantedAccess,
                          &AccessStatus) )
                  {
                    ServerAcl = -1073741790;
                    goto LABEL_483;
                  }
                  LOBYTE(v108) = a7;
                }
                else
                {
                  v124 = AccessMode;
                }
                v125 = Src;
                if ( v113 && !Src )
                {
                  v121 |= 0x1000u;
                  v211[0] = v121;
                }
                v126 = !v104 || (v104 & 0x1B0) != v104;
                if ( v124 == 1 )
                {
                  v127 = v228;
                  if ( (_BYTE)v212 && !v228 && v126 )
                  {
                    if ( !v123 )
                    {
                      ServerAcl = -1073741700;
                      goto LABEL_483;
                    }
                    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    v201 = SePrivilegeCheck(&RequiredPrivileges, v123, 1);
                    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)v123, (int *)&RequiredPrivileges, v201);
                    if ( !v201 )
                    {
                      ServerAcl = -1073741727;
                      goto LABEL_483;
                    }
                    v125 = Src;
                    LOBYTE(v108) = a7;
                  }
                  if ( v216 && !v127 )
                  {
                    if ( !v123 )
                    {
                      ServerAcl = -1073741700;
                      goto LABEL_483;
                    }
                    RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v202 = SePrivilegeCheck(&RequiredPrivileges, v123, 1);
                    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)v123, (int *)&RequiredPrivileges, v202);
                    if ( !v202 )
                    {
                      ServerAcl = -1073741727;
                      goto LABEL_483;
                    }
                    v125 = Src;
                    LOBYTE(v108) = a7;
                  }
                  if ( HIBYTE(v212)
                    && (v108 & 0x10) == 0
                    && !(unsigned __int8)SepValidOwnerSubjectContext(v123, v227, v206, v102) )
                  {
                    ServerAcl = -1073741734;
                    goto LABEL_483;
                  }
                  if ( v213 && v206 )
                  {
                    ServerAcl = RtlpCreateServerAcl((_DWORD)v125, v217, v231, (unsigned int)&v247, (__int64)&v218);
                    if ( ServerAcl < 0 )
                      goto LABEL_483;
                    if ( v122 && Src )
                      ExFreePoolWithTag(Src, 0);
                    v125 = (unsigned __int16 *)v247;
                    Src = (unsigned __int16 *)v247;
                    v247 = 0LL;
                  }
                }
                v128 = 4 * *((unsigned __int8 *)v227 + 1) + 8;
                if ( v229 )
                  v129 = 4 * *((unsigned __int8 *)v229 + 1) + 8;
                else
                  v129 = 0;
                v130 = v121 & 0x10;
                if ( (v121 & 0x10) != 0 && v209 )
                  v131 = (v209->AclSize + 3) & 0xFFFFFFFC;
                else
                  v131 = 0;
                v132 = v121 & 4;
                if ( v132 && v125 )
                  v133 = (v125[1] + 3) & 0xFFFFFFFC;
                else
                  v133 = 0;
                v134 = ExAllocatePoolWithTag(
                         PagedPool,
                         v129 + v133 + v131 + 4 * *((unsigned __int8 *)v227 + 1) + 28,
                         0x64536553u);
                *(_QWORD *)&v211[1] = v134;
                v135 = v134;
                if ( !v134 )
                {
                  ServerAcl = -1073741670;
                  goto LABEL_483;
                }
                v136 = v211[0];
                v137 = (char *)(v134 + 5);
                *(_OWORD *)v134 = 0LL;
                v134[4] = 0;
                *((_WORD *)v134 + 1) |= v136;
                v138 = v130 == 0;
                *(_BYTE *)v134 = 1;
                v139 = v209;
                if ( !v138 && v209 )
                {
                  memmove(v137, v209, v209->AclSize);
                  if ( !v210 )
                    RtlpApplyAclToObject(v137, GenericMapping);
                  v135 = *(_DWORD **)&v211[1];
                  *(_DWORD *)(*(_QWORD *)&v211[1] + 12LL) = (_DWORD)v137 - v211[1];
                  AclSize = v139->AclSize;
                  if ( v131 > (unsigned int)AclSize )
                  {
                    memset(&v137[AclSize], 0, v131 - (unsigned int)AclSize);
                    v135 = *(_DWORD **)&v211[1];
                  }
                  v137 += v131;
                }
                v138 = v132 == 0;
                v141 = Src;
                if ( !v138 )
                {
                  if ( Src )
                  {
                    memmove(v137, Src, Src[1]);
                    v142 = v204;
                    if ( !v204 )
                      RtlpApplyAclToObject(v137, GenericMapping);
                    *(_DWORD *)(*(_QWORD *)&v211[1] + 16LL) = (_DWORD)v137 - v211[1];
                    v143 = Src[1];
                    if ( v133 > (unsigned int)v143 )
                      memset(&v137[v143], 0, v133 - (unsigned int)v143);
                    v137 += v133;
                    goto LABEL_183;
                  }
                  v135[4] = 0;
                }
                v142 = v204;
LABEL_183:
                memmove(v137, v227, v128);
                v12 = *(_QWORD *)&v211[1];
                *(_DWORD *)(*(_QWORD *)&v211[1] + 4LL) = (_DWORD)v137 - v211[1];
                v144 = &v137[v128];
                if ( v229 )
                {
                  memmove(v144, v229, v129);
                  *(_DWORD *)(v12 + 8) = (_DWORD)v144 - v12;
                }
                ServerAcl = 0;
                goto LABEL_186;
              }
              Src = v246;
LABEL_146:
              v121 |= 4u;
              v211[0] = v121;
              goto LABEL_147;
            }
            if ( (v119 & 4) != 0 )
            {
              if ( v119 >= 0 )
              {
                v186 = (unsigned __int16 *)*((_QWORD *)v112 + 4);
              }
              else
              {
                v185 = *((unsigned int *)v112 + 4);
                if ( !(_DWORD)v185 )
                {
                  Src = 0LL;
                  goto LABEL_354;
                }
                v186 = (unsigned __int16 *)((char *)v112 + v185);
              }
              Src = v186;
            }
            else
            {
              Src = 0LL;
            }
LABEL_354:
            v213 = 1;
            v121 = v120 | v119 & 0x1000;
            goto LABEL_146;
          }
          v93 = 200;
          v94 = 0;
          LODWORD(v235) = 200;
          while ( 1 )
          {
            v95 = (ACL *)ExAllocatePoolWithTag(PagedPool, v93, 0x63416553u);
            v96 = v95;
            if ( !v95 )
              break;
            ServerAcl = RtlpInheritAcl2(
                          v92,
                          (int)v91,
                          v77,
                          a6,
                          1,
                          0,
                          (int)v227,
                          (__int64)v79,
                          v231,
                          v239,
                          GenericMapping,
                          3,
                          v243,
                          a5,
                          (__int64)&v235,
                          v95,
                          (__int64)v223 + 1,
                          (__int64)v222);
            if ( ServerAcl >= 0 )
            {
              if ( !(_DWORD)v235 )
              {
                ExFreePoolWithTag(v96, 0);
                v96 = 0LL;
              }
LABEL_110:
              if ( ServerAcl == -2147483637 )
                goto LABEL_206;
              if ( ServerAcl >= 0 )
              {
                v97 = v222[0];
                v98 = p_Acl;
                goto LABEL_113;
              }
              goto LABEL_483;
            }
            ExFreePoolWithTag(v96, 0);
            v96 = 0LL;
            if ( ServerAcl != -1073741789 )
              goto LABEL_110;
            if ( (unsigned int)++v94 >= 2 )
              goto LABEL_110;
            v93 = v235;
            LODWORD(v91) = (_DWORD)p_Acl;
          }
LABEL_497:
          v139 = v209;
LABEL_499:
          ServerAcl = -1073741801;
          goto LABEL_500;
        }
        v168 = *(unsigned int *)(*(_QWORD *)v236 + 12LL);
        if ( (_DWORD)v168 )
        {
          v92 = *(_QWORD *)v236 + v168;
          goto LABEL_104;
        }
      }
    }
    v92 = 0LL;
    goto LABEL_104;
  }
  memset(v263, 0, sizeof(v263));
  Acl = (ACL)8388610LL;
  ServerAcl = RtlAddMandatoryAce(&Acl, v90, v89, Sid, AceType, AccessMask);
  if ( ServerAcl >= 0 )
  {
    v91 = &Acl;
    goto LABEL_101;
  }
LABEL_483:
  v12 = *(_QWORD *)&v211[1];
  v141 = Src;
  v139 = v209;
  v142 = v204;
LABEL_186:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v218 && v247 )
    ExFreePoolWithTag(v247, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v219 || v210) && v139 )
    ExFreePoolWithTag(v139, 0);
  if ( v220 && *(_QWORD *)&v222[1] )
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
  if ( v248 && v221 )
    ExFreePoolWithTag(v248, 0);
  if ( v142 )
  {
    if ( v141 )
      ExFreePoolWithTag(v141, 0);
  }
  *v256 = v12;
  return (unsigned int)ServerAcl;
}

/*
 * XREFs of RtlpNewSecurityObject @ 0x180038B7C
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x180079C20 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180085D10 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x180088530 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D6C50 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D70C0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180039EA0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x18003C040 (RtlFindAceByType.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D258 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpOwnerAcesPresent @ 0x18003FBD8 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x180066948 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180066DCC (RtlpGetDefaultsSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180067290 (RtlAddMandatoryAce.c)
 *     RtlpCombineAcls @ 0x1800719E4 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x180076CE8 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x18007BC40 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D3D0 (RtlpValidOwnerSubjectContext.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009D0B0 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18009D8F0 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x18009F780 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E880C (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE *v9; // r14
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  void *ProcessHeap; // r13
  __int64 result; // rax
  int v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  int v33; // ebx
  __int16 v34; // cx
  int v35; // r13d
  unsigned __int16 *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  _BYTE *v44; // rcx
  __int64 AceByType; // rbx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rdi
  _BYTE *v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edi
  _BYTE *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  _BYTE *v58; // rdi
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // eax
  __int16 v62; // si
  int v63; // r9d
  int v64; // r12d
  __int64 v65; // rdi
  void *v66; // rbx
  __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r8
  int v72; // edx
  int v73; // r13d
  __int64 v74; // r14
  __int64 v75; // rdx
  bool v76; // al
  unsigned __int8 *v77; // rsi
  int v78; // ecx
  unsigned int v79; // r13d
  __int16 v80; // bx
  int v81; // r15d
  unsigned int v82; // esi
  int v83; // r12d
  unsigned int v84; // r14d
  __int64 Heap; // rax
  __int64 v86; // rdx
  char *v87; // rbx
  bool v88; // zf
  unsigned __int16 *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdi
  int v92; // eax
  char *v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // ecx
  __int16 v100; // r13
  _BYTE *v101; // rax
  __int64 v102; // rax
  _BYTE *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  void *v106; // rdi
  int ServerAcl; // eax
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v109; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v110; // [rsp+95h] [rbp-7Bh]
  char v111; // [rsp+96h] [rbp-7Ah]
  char v112; // [rsp+97h] [rbp-79h]
  char v113; // [rsp+98h] [rbp-78h] BYREF
  char v114; // [rsp+99h] [rbp-77h]
  char v115[6]; // [rsp+9Ah] [rbp-76h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-70h]
  char v117; // [rsp+A8h] [rbp-68h] BYREF
  char v118; // [rsp+A9h] [rbp-67h] BYREF
  char v119; // [rsp+AAh] [rbp-66h]
  char v120; // [rsp+ABh] [rbp-65h]
  char v121; // [rsp+ACh] [rbp-64h]
  void *v122; // [rsp+B0h] [rbp-60h]
  int v123; // [rsp+B8h] [rbp-58h]
  bool v124; // [rsp+BCh] [rbp-54h]
  __int16 v125; // [rsp+BEh] [rbp-52h]
  int v126; // [rsp+C0h] [rbp-50h]
  char v127; // [rsp+C4h] [rbp-4Ch] BYREF
  char v128[3]; // [rsp+C5h] [rbp-4Bh] BYREF
  int v129; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v130; // [rsp+D0h] [rbp-40h] BYREF
  void *v131; // [rsp+D8h] [rbp-38h]
  void *v132; // [rsp+E0h] [rbp-30h]
  int v133; // [rsp+E8h] [rbp-28h] BYREF
  void *v134; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h] BYREF
  size_t Size; // [rsp+100h] [rbp-10h]
  __int64 v137; // [rsp+108h] [rbp-8h]
  _BYTE *v138; // [rsp+110h] [rbp+0h]
  __int64 v139; // [rsp+118h] [rbp+8h]
  int v140; // [rsp+120h] [rbp+10h]
  __int64 v141; // [rsp+128h] [rbp+18h]
  __int64 v142; // [rsp+130h] [rbp+20h]
  __int64 v143; // [rsp+138h] [rbp+28h] BYREF
  int v144; // [rsp+140h] [rbp+30h]
  __int64 v145; // [rsp+148h] [rbp+38h]
  __int64 v146; // [rsp+150h] [rbp+40h]
  __int64 v147; // [rsp+158h] [rbp+48h] BYREF
  void *v148; // [rsp+160h] [rbp+50h] BYREF
  int v149; // [rsp+168h] [rbp+58h] BYREF
  __int64 v150; // [rsp+170h] [rbp+60h]
  int v151; // [rsp+178h] [rbp+68h] BYREF
  int v152; // [rsp+17Ch] [rbp+6Ch] BYREF
  int v153; // [rsp+180h] [rbp+70h] BYREF
  __int64 v154; // [rsp+188h] [rbp+78h]
  HANDLE Handle; // [rsp+190h] [rbp+80h]
  void **v156; // [rsp+198h] [rbp+88h] BYREF
  __int64 *v157; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 *v158; // [rsp+1A8h] [rbp+98h] BYREF
  int v159; // [rsp+1B0h] [rbp+A0h] BYREF
  void **v160; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v161; // [rsp+1C0h] [rbp+B0h] BYREF
  __int64 *v162; // [rsp+1C8h] [rbp+B8h] BYREF
  void **v163; // [rsp+1D0h] [rbp+C0h] BYREF
  _BYTE *v164; // [rsp+1D8h] [rbp+C8h] BYREF
  _BYTE *v165; // [rsp+1E0h] [rbp+D0h]
  void *v166; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v167; // [rsp+1F0h] [rbp+E0h]
  __int64 *v168; // [rsp+200h] [rbp+F0h]
  int v169; // [rsp+208h] [rbp+F8h] BYREF
  __int64 v170; // [rsp+210h] [rbp+100h]
  __int64 v171; // [rsp+218h] [rbp+108h]
  int v172; // [rsp+220h] [rbp+110h]
  __int64 v173; // [rsp+228h] [rbp+118h]
  _DWORD *v174; // [rsp+230h] [rbp+120h]
  _BYTE v175[40]; // [rsp+238h] [rbp+128h] BYREF
  int v176; // [rsp+260h] [rbp+150h] BYREF
  int v177; // [rsp+264h] [rbp+154h]
  __int64 v178; // [rsp+268h] [rbp+158h]
  int v179; // [rsp+270h] [rbp+160h]
  _DWORD v180[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v181; // [rsp+280h] [rbp+170h]
  char v182[24]; // [rsp+288h] [rbp+178h] BYREF
  int v183; // [rsp+2A0h] [rbp+190h]
  int v184; // [rsp+2A4h] [rbp+194h]
  _BYTE v185[128]; // [rsp+2C0h] [rbp+1B0h] BYREF

  v9 = a2;
  v137 = a9;
  v147 = 0LL;
  v165 = v185;
  v11 = 0LL;
  v12 = 0LL;
  v146 = a4;
  v168 = a3;
  v13 = 0LL;
  v139 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v122 = ProcessHeap;
  v145 = a8;
  v131 = 0LL;
  v130 = 0LL;
  v143 = 0LL;
  v111 = 0;
  v120 = 0;
  v119 = 0;
  v149 = 0;
  Src = 0LL;
  v148 = 0LL;
  v112 = 0;
  v114 = 0;
  v109 = 0;
  v127 = 0;
  v128[0] = 0;
  v115[0] = 0;
  LOBYTE(v140) = 0;
  v118 = 0;
  v150 = 0LL;
  v154 = 0LL;
  v138 = 0LL;
  v142 = 0LL;
  v167 = 0LL;
  v116 = 0LL;
  v153 = 0;
  v141 = 0LL;
  v164 = 0LL;
  v166 = 0LL;
  v110 = 0;
  v117 = 1;
  LOBYTE(v144) = 1;
  v156 = 0LL;
  v163 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v182);
    if ( (int)result < 0 )
      return result;
    v144 = v183;
    if ( v183 == 2 && v184 < 1 )
      return 3221225637LL;
  }
  if ( v9 )
  {
    v121 = 1;
  }
  else
  {
    v121 = 0;
    RtlCreateSecurityDescriptor(v175, 1LL);
    v9 = v175;
  }
  v16 = *((unsigned __int16 *)v9 + 1);
  v125 = *((_WORD *)v9 + 1) & 0x80;
  v17 = v125;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v124 = v125 != 0;
  LODWORD(Size) = v16;
  if ( a8 || v125 )
  {
    LOBYTE(a2) = v125 != 0;
    result = RtlpGetDefaultsSubjectContext(
               a8,
               (_DWORD)a2,
               (unsigned int)&v156,
               (unsigned int)&v163,
               (__int64)&v160,
               (__int64)&v161,
               (__int64)&v157,
               (__int64)&v158,
               (__int64)&v162);
    if ( (int)result < 0 )
      return result;
    v11 = *v156;
    v12 = *v163;
    v167 = *v160;
    v150 = *v157;
    v154 = *v158;
    if ( v161 )
      v138 = (_BYTE *)*v161;
    else
      v138 = 0LL;
    v17 = v125;
    if ( v162 )
      v18 = *v162;
    else
      v18 = 0LL;
    v142 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)v9 + 1);
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 1) )
      goto LABEL_16;
    v20 = &v9[*((unsigned int *)v9 + 1)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)v9 + 1);
  }
  v132 = v20;
  if ( v20 )
  {
    v114 = 1;
    goto LABEL_20;
  }
LABEL_16:
  if ( (a7 & 0x20) != 0 )
  {
    if ( a1 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v20 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 4) )
          goto LABEL_277;
        v20 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 4));
      }
      v132 = v20;
      v114 = 1;
      if ( v20 )
        goto LABEL_20;
    }
LABEL_277:
    v33 = -1073741734;
LABEL_279:
    valid = v33;
    goto LABEL_352;
  }
  v20 = v138;
  if ( !v17 )
    v20 = v11;
  v132 = v20;
  if ( !v20 )
  {
    v33 = -1073741700;
    goto LABEL_279;
  }
LABEL_20:
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 2) )
      goto LABEL_23;
    v21 = &v9[*((unsigned int *)v9 + 2)];
  }
  else
  {
    v21 = (_BYTE *)*((_QWORD *)v9 + 2);
  }
  v134 = v21;
  if ( v21 )
    goto LABEL_27;
LABEL_23:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !a1 )
      goto LABEL_278;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v21 = *(_BYTE **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_278;
      v21 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 8));
    }
  }
  else
  {
    v21 = v12;
    if ( v17 )
      v21 = (_BYTE *)v18;
  }
  v134 = v21;
  if ( !v21 )
  {
LABEL_278:
    v33 = -1073741733;
    goto LABEL_279;
  }
LABEL_27:
  v22 = a7 >> 2;
  LOBYTE(v22) = (a7 & 4) != 0;
  v23 = a7 & 2;
  v133 = v22;
  v24 = (v19 >> 2) & 8;
  v25 = (v19 >> 1) & 0x400;
  v26 = (v19 >> 1) & 0x1000;
  v27 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == (_WORD)v131 )
  {
    LODWORD(v28) = 0;
  }
  else
  {
    LODWORD(v28) = 0;
    if ( (v19 & 0x8000u) == 0 )
    {
      v29 = *((_QWORD *)v9 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)v9 + 3) )
    {
      LODWORD(v29) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
      goto LABEL_30;
    }
  }
  LODWORD(v29) = 0;
LABEL_30:
  if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
    else if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v28) = a1 + *(_DWORD *)(a1 + 12);
    }
  }
  v30 = v25 | v26;
  v31 = v137;
  LOBYTE(v31) = a6;
  v32 = RtlpInheritAcl(
          v28,
          v29,
          v27 | v24 | (unsigned int)v30,
          v31,
          v23 != 0,
          v22,
          (__int64)v20,
          (__int64)v21,
          (__int64)v138,
          v142,
          v137,
          2,
          v146,
          a5,
          (__int64)&v130,
          (__int64)&v109,
          (__int64)&v129);
  valid = v32;
  v33 = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -2147483637 )
    {
      v34 = *((_WORD *)v9 + 1);
      v35 = v23 != 0 ? 34816 : 0x8000;
      v123 = v35;
      if ( (v34 & 0x30) != 0x30 )
      {
        v36 = v130;
        v131 = v130;
        goto LABEL_39;
      }
      if ( (v34 & 0x10) != 0 )
      {
        if ( v34 >= 0 )
        {
          v36 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
          goto LABEL_290;
        }
        if ( *((_DWORD *)v9 + 3) )
        {
          v36 = (unsigned __int16 *)&v9[*((unsigned int *)v9 + 3)];
LABEL_290:
          v131 = v36;
          goto LABEL_291;
        }
      }
      v36 = 0LL;
      v131 = 0LL;
LABEL_291:
      v130 = v36;
      v35 |= v34 & 0x2000 | 0x10;
      v109 = 1;
      goto LABEL_218;
    }
    v13 = v116;
LABEL_352:
    v36 = v130;
    goto LABEL_143;
  }
  v36 = v130;
  v111 = 1;
  v131 = v130;
  v35 = 2 * (v129 & 0x1400 | (2 * (v129 & 8 | 0x2004)));
LABEL_218:
  v123 = v35;
LABEL_39:
  v37 = *((_WORD *)v9 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
  {
LABEL_40:
    LODWORD(v39) = 0;
    goto LABEL_41;
  }
  if ( v37 < 0 )
  {
    if ( !*((_DWORD *)v9 + 3) )
      goto LABEL_40;
    LODWORD(v39) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
  }
  else
  {
    v39 = *((_QWORD *)v9 + 3);
  }
LABEL_41:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_230;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 24);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(a1 + 12) )
    LODWORD(v40) = a1 + *(_DWORD *)(a1 + 12);
  else
LABEL_230:
    LODWORD(v40) = 0;
LABEL_46:
  v41 = v38 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          v23 != 0,
          v133,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          2,
          v146,
          a5,
          (__int64)&v143,
          (__int64)&v127,
          (__int64)&v153);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v120 = 1;
  }
  else
  {
    if ( v42 != -2147483637 )
      goto LABEL_273;
    v43 = *((_WORD *)v9 + 1);
    if ( (v43 & 0x30) == 0x30 )
    {
      if ( (v43 & 0x10) != 0 )
      {
        if ( v43 >= 0 )
        {
          v102 = *((_QWORD *)v9 + 3);
        }
        else if ( *((_DWORD *)v9 + 3) )
        {
          v102 = (__int64)&v9[*((unsigned int *)v9 + 3)];
        }
        else
        {
          v102 = 0LL;
        }
        v143 = v102;
      }
      else
      {
        v143 = 0LL;
      }
    }
  }
  v126 = 0;
  do
  {
    if ( (v9[2] & 0x10) == 0 )
    {
LABEL_51:
      v44 = 0LL;
      goto LABEL_52;
    }
    if ( *((__int16 *)v9 + 1) < 0 )
    {
      if ( !*((_DWORD *)v9 + 3) )
        goto LABEL_51;
      v44 = &v9[*((unsigned int *)v9 + 3)];
    }
    else
    {
      v44 = (_BYTE *)*((_QWORD *)v9 + 3);
    }
LABEL_52:
    AceByType = RtlFindAceByType(v44, 20LL);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    v48 = v154;
    if ( v47 && !(unsigned __int8)RtlpValidTrustSubjectContext(v154, v47, v46, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_302;
    }
    ++v126;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_57;
  v126 = 0;
  while ( 2 )
  {
    if ( (v9[2] & 0x10) == 0 )
      goto LABEL_308;
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v103 = (_BYTE *)*((_QWORD *)v9 + 3);
    }
    else
    {
      if ( *((_DWORD *)v9 + 3) )
      {
        v103 = &v9[*((unsigned int *)v9 + 3)];
        goto LABEL_310;
      }
LABEL_308:
      v103 = 0LL;
    }
LABEL_310:
    v104 = RtlFindAceByType(v103, 20LL);
    ++v126;
    if ( v104 )
    {
      if ( (*(_BYTE *)(v104 + 1) & 8) == 0 )
        goto LABEL_312;
      continue;
    }
    break;
  }
  if ( v48 )
  {
LABEL_312:
    v33 = -1073741811;
    goto LABEL_302;
  }
LABEL_57:
  if ( (v9[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v9 + 1) < 0 )
    {
      if ( !*((_DWORD *)v9 + 3) )
        goto LABEL_58;
      v49 = &v9[*((unsigned int *)v9 + 3)];
    }
    else
    {
      v49 = (_BYTE *)*((_QWORD *)v9 + 3);
    }
  }
  else
  {
LABEL_58:
    v49 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v49, v48);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  v51 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v51 = (a7 >> 8) & 1;
  v52 = v51 | 4;
  if ( (a7 & 0x400) == 0 )
    v52 = v51;
  if ( v52 )
  {
    v55 = 0LL;
    goto LABEL_68;
  }
  if ( (v9[2] & 0x10) == 0 )
    goto LABEL_66;
  if ( *((__int16 *)v9 + 1) < 0 )
  {
    if ( *((_DWORD *)v9 + 3) )
      v53 = &v9[*((unsigned int *)v9 + 3)];
    else
LABEL_66:
      v53 = 0LL;
  }
  else
  {
    v53 = (_BYTE *)*((_QWORD *)v9 + 3);
  }
  v54 = RtlFindAceByType(v53, 17LL);
  v55 = v54;
  if ( v54 )
  {
    v52 = *(_DWORD *)(v54 + 4);
    v56 = v54 + 8;
    v57 = *(_BYTE *)(v54 + 1);
    v141 = v56;
    v110 = v57;
    if ( v57 == 8 || (v57 & 0x10) != 0 )
    {
      v56 = 0LL;
      v57 = 0;
      v141 = 0LL;
      v55 = 0LL;
      v110 = 0;
      v52 = 0;
    }
  }
  else
  {
LABEL_68:
    v56 = 0LL;
    v57 = 0;
  }
  if ( (v57 & 8) != 0 && *(_DWORD *)(v150 + 8) < 0x2000u )
  {
    v33 = -1073740730;
    goto LABEL_302;
  }
  if ( v52 )
  {
LABEL_194:
    if ( v55 )
      goto LABEL_73;
    if ( v145 )
    {
      v56 = v150;
      v141 = v150;
      v110 = 0;
      goto LABEL_73;
    }
    goto LABEL_319;
  }
  if ( v150 && *(_DWORD *)(v150 + 8) < 0x2000u )
  {
    v52 = 1;
    goto LABEL_194;
  }
LABEL_73:
  if ( !v56 )
  {
    v58 = 0LL;
    v165 = 0LL;
    goto LABEL_75;
  }
  valid = RtlCreateAcl(v185, 128LL, 2LL);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  valid = RtlAddMandatoryAce((unsigned int)v185, 2, v110, v141, 17, v52);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  v58 = v185;
LABEL_75:
  if ( (a7 & 0x700) != 0 )
  {
    v59 = 4;
  }
  else if ( !v55 && v58 )
  {
    v59 = 0;
  }
  else
  {
    v59 = (*((_WORD *)v9 + 1) & 0x2800 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_231;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v60 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v60) = a1 + *(_DWORD *)(a1 + 12);
      goto LABEL_84;
    }
LABEL_231:
    LODWORD(v60) = 0;
  }
LABEL_84:
  LOBYTE(v50) = a6;
  v61 = RtlpInheritAcl(
          v60,
          (_DWORD)v58,
          v59,
          v50,
          1,
          0,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          3,
          v146,
          a5,
          (__int64)&v164,
          (__int64)v128,
          (__int64)&v129);
  valid = v61;
  v33 = v61;
  if ( v61 != -2147483637 )
  {
    if ( v61 >= 0 )
    {
      v58 = v164;
      v62 = v129;
      goto LABEL_86;
    }
    goto LABEL_273;
  }
  v62 = 0;
  v129 = 0;
LABEL_86:
  v33 = RtlpCombineAcls((_DWORD)v36, (_DWORD)v58, v143, v143, v143, v143, (__int64)&v166, (__int64)&v149);
  valid = v33;
  v64 = ((v35 & 0x2000) << 17) | v149;
  if ( !v58 || v58 == v165 )
  {
    v65 = (__int64)v122;
  }
  else
  {
    v98 = (__int64)v58;
    v65 = (__int64)v122;
    RtlFreeHeap((__int64)v122, 0, v98);
  }
  if ( v33 < 0 )
    goto LABEL_273;
  v66 = v166;
  if ( v166 )
  {
    if ( v111 && v36 )
      RtlFreeHeap(v65, 0, (__int64)v36);
    v131 = v66;
    v130 = (unsigned __int16 *)v66;
    v36 = (unsigned __int16 *)v66;
    v119 = 1;
    v35 |= 2 * (v62 & 0x1400 | (2 * (v62 & 8 | 4)));
    v123 = v35;
  }
  if ( (a7 & 8) == 0 )
  {
    v94 = RtlFindAceByType(v36, 17LL);
    v95 = v94 ? v94 + 8 : v141;
    if ( v95 )
    {
      if ( v145 )
      {
        valid = RtlSidDominates(v150, v95, &v117);
        v33 = valid;
        if ( valid >= 0 )
        {
          v96 = (unsigned __int8)v140;
          if ( !v117 )
            v96 = 1;
          v140 = v96;
          goto LABEL_91;
        }
        goto LABEL_273;
      }
LABEL_319:
      v33 = -1073741700;
LABEL_302:
      valid = v33;
      goto LABEL_273;
    }
  }
LABEL_91:
  v67 = *((_WORD *)v9 + 1);
  if ( (v67 & 4) == 0 )
  {
LABEL_94:
    LODWORD(v68) = 0;
    goto LABEL_95;
  }
  if ( v67 < 0 )
  {
    if ( *((_DWORD *)v9 + 4) )
    {
      LODWORD(v68) = (_DWORD)v9 + *((_DWORD *)v9 + 4);
      goto LABEL_95;
    }
    goto LABEL_94;
  }
  v68 = *((_QWORD *)v9 + 4);
LABEL_95:
  if ( !v139 || (*(_BYTE *)(v139 + 2) & 4) == 0 )
    goto LABEL_253;
  if ( *(__int16 *)(v139 + 2) >= 0 )
  {
    v69 = *(_QWORD *)(v139 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v139 + 16) )
    {
      LODWORD(v69) = v139 + *(_DWORD *)(v139 + 16);
      goto LABEL_100;
    }
LABEL_253:
    LODWORD(v69) = 0;
  }
LABEL_100:
  LOBYTE(v63) = a6;
  v70 = RtlpInheritAcl(
          v69,
          v68,
          v67 & 0x140C,
          v63,
          a7 & 1,
          v133,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          1,
          v146,
          a5,
          (__int64)&Src,
          (__int64)v115,
          (__int64)&v129);
  valid = v70;
  v33 = v70;
  if ( v70 >= 0 )
  {
    v72 = 1;
    v112 = 1;
    v73 = v129 & 0x1408 | 4 | v35;
    goto LABEL_102;
  }
  if ( v70 != -2147483637 )
    goto LABEL_273;
  v99 = v35 | 0x400;
  if ( (a7 & 1) == 0 )
    v99 = v35;
  v100 = *((_WORD *)v9 + 1);
  if ( (v100 & 0xC) == 0xC )
  {
    if ( (v100 & 4) != 0 )
    {
      if ( v100 >= 0 )
      {
        v101 = (_BYTE *)*((_QWORD *)v9 + 4);
LABEL_272:
        v72 = 1;
        v73 = v99 | v100 & 0x1000;
        v115[0] = 1;
        goto LABEL_252;
      }
      if ( *((_DWORD *)v9 + 4) )
      {
        v101 = &v9[*((unsigned int *)v9 + 4)];
        goto LABEL_272;
      }
    }
    v101 = 0LL;
    goto LABEL_272;
  }
  v101 = v167;
  v73 = v99;
  v123 = v99;
  v72 = 1;
  if ( v167 )
  {
LABEL_252:
    v73 |= 4u;
    Src = v101;
LABEL_102:
    v123 = v73;
  }
  v74 = v145;
  if ( (a7 & 0x1000) == 0 && v121 && v145 && v139 )
  {
    v152 = 0;
    v133 = 0;
    valid = RtlpNewSecurityObject(v139, 0, (unsigned int)&v147, v146, a5, a6, a7 | 1, v145, v137);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( (*(_BYTE *)(v147 + 2) & 4) == 0 )
      goto LABEL_325;
    if ( *(__int16 *)(v147 + 2) >= 0 )
    {
      v75 = *(_QWORD *)(v147 + 32);
      goto LABEL_112;
    }
    if ( *(_DWORD *)(v147 + 16) )
      v75 = v147 + *(unsigned int *)(v147 + 16);
    else
LABEL_325:
      v75 = 0LL;
LABEL_112:
    if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v75) )
    {
      Handle = 0LL;
      v151 = 20;
      if ( (_BYTE)v144 != 1 )
        goto LABEL_330;
      v181 = 1;
      v180[1] = 2;
      v174 = v180;
      v180[0] = 12;
      v169 = 48;
      v170 = 0LL;
      v172 = 0;
      v171 = 0LL;
      v173 = 0LL;
      valid = NtDuplicateToken(v74, 8LL, &v169);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_273;
      v105 = (__int64)Handle;
      if ( !Handle )
LABEL_330:
        v105 = v74;
      valid = ZwAccessCheck(v147, v105, 0x40000LL, v137, &v176, &v151, &v152, &v133);
      v33 = valid;
      if ( Handle )
        NtClose(Handle);
      if ( v33 < 0 || (v33 = v133, valid = v133, v133 < 0) )
      {
LABEL_273:
        v13 = v116;
        goto LABEL_142;
      }
    }
  }
  if ( (a7 & 1) != 0 && !Src )
    v123 = v73 | 0x1000;
  v76 = !v64 || (v64 & 0x1B0) != v64;
  if ( v109 && (a7 & 8) == 0 && v76 )
  {
    if ( !v74 )
      goto LABEL_319;
    v139 = 8LL;
    v178 = 8LL;
    v176 = 1;
    v177 = 1;
    v179 = 0;
    valid = ZwPrivilegeCheck(v74, &v176, &v113);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( !v113 )
      goto LABEL_336;
  }
  if ( (_BYTE)v140 && (a7 & 8) == 0 )
  {
    if ( !v74 )
      goto LABEL_319;
    v139 = 32LL;
    v178 = 32LL;
    v176 = 1;
    v177 = 1;
    v179 = 0;
    valid = ZwPrivilegeCheck(v74, &v176, &v113);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( !v113 )
    {
LABEL_336:
      v33 = -1073741727;
      goto LABEL_302;
    }
  }
  if ( !v114 || (a7 & 0x10) != 0 )
  {
    v77 = (unsigned __int8 *)v132;
  }
  else
  {
    if ( !v74 )
      goto LABEL_319;
    v77 = (unsigned __int8 *)v132;
    LOBYTE(v71) = v124;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v74, v132, v71, &v159) )
    {
      v33 = v159;
      goto LABEL_302;
    }
  }
  if ( v125 && v115[0] )
  {
    v106 = Src;
    LOBYTE(v72) = Size;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v72, (_DWORD)v138, (unsigned int)&v148, (__int64)&v118);
    valid = ServerAcl;
    v33 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_273;
    if ( v112 && v106 )
      RtlFreeHeap((__int64)v122, 0, (__int64)v106);
    Src = v148;
    v148 = 0LL;
  }
  v78 = 4 * v77[1] + 8;
  LODWORD(Size) = v78;
  if ( v134 )
    v79 = 4 * *((unsigned __int8 *)v134 + 1) + 8;
  else
    v79 = 0;
  v80 = v123;
  v81 = v123 & 0x10;
  if ( (v123 & 0x10) != 0 && v131 )
    v82 = (*((unsigned __int16 *)v131 + 1) + 3) & 0xFFFFFFFC;
  else
    v82 = 0;
  v83 = v123 & 4;
  if ( (v123 & 4) != 0 && Src )
    v84 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v84 = 0;
  Heap = RtlAllocateHeap((__int64)v122, NtdllBaseTag + 1310720, v79 + v78 + 20 + v84 + v82);
  v116 = Heap;
  v86 = Heap;
  if ( !Heap )
  {
    v36 = (unsigned __int16 *)v131;
    v33 = -1073741801;
    goto LABEL_302;
  }
  *(_OWORD *)Heap = 0LL;
  *(_DWORD *)(Heap + 16) = 0;
  *(_WORD *)(Heap + 2) |= v80;
  v87 = (char *)(Heap + 20);
  v88 = v81 == 0;
  *(_BYTE *)Heap = 1;
  v36 = (unsigned __int16 *)v131;
  if ( !v88 && v131 )
  {
    memmove(v87, v131, *((unsigned __int16 *)v131 + 1));
    if ( !v111 )
      RtlpApplyAclToObject(v87, v137);
    v86 = v116;
    *(_DWORD *)(v116 + 12) = (_DWORD)v87 - v116;
    v97 = v36[1];
    if ( v82 > (unsigned int)v97 )
    {
      memset(&v87[v97], 0, v82 - (unsigned int)v97);
      v86 = v116;
    }
    v87 += v82;
  }
  if ( !v83 )
  {
LABEL_350:
    v13 = v116;
    goto LABEL_139;
  }
  v89 = (unsigned __int16 *)Src;
  if ( !Src )
  {
    *(_DWORD *)(v86 + 16) = 0;
    goto LABEL_350;
  }
  memmove(v87, Src, *((unsigned __int16 *)Src + 1));
  if ( !v112 )
    RtlpApplyAclToObject(v87, v137);
  v13 = v116;
  *(_DWORD *)(v116 + 16) = (_DWORD)v87 - v116;
  v90 = v89[1];
  if ( v84 > (unsigned int)v90 )
    memset(&v87[v90], 0, v84 - (unsigned int)v90);
  v87 += v84;
LABEL_139:
  v91 = (unsigned int)Size;
  memmove(v87, v132, (unsigned int)Size);
  v92 = (_DWORD)v87 - v13;
  v93 = &v87[v91];
  *(_DWORD *)(v13 + 4) = v92;
  if ( v134 )
  {
    memmove(v93, v134, v79);
    *(_DWORD *)(v13 + 8) = (_DWORD)v93 - v13;
  }
  v33 = 0;
  valid = 0;
LABEL_142:
  ProcessHeap = v122;
LABEL_143:
  if ( v147 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v147);
    v36 = v130;
    v33 = valid;
  }
  if ( v118 && v148 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v148);
    v36 = v130;
    v33 = valid;
  }
  RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v156);
  RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v157);
  RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v158);
  RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v163);
  RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v160);
  if ( v161 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v161);
  if ( v162 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v162);
  if ( (v119 || v111) && v36 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v36);
  if ( v120 && v143 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v143);
  if ( v112 )
  {
    if ( Src )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Src);
  }
  *v168 = v13;
  return (unsigned int)v33;
}

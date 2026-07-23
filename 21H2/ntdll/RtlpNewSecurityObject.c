/*
 * XREFs of RtlpNewSecurityObject @ 0x180038B7C
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18007AC50 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180086310 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x180088B30 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D69C0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D6E30 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180039EA0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x18003C040 (RtlFindAceByType.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D218 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpOwnerAcesPresent @ 0x18003FB98 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x180067E38 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800682BC (RtlpGetDefaultsSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlpCombineAcls @ 0x180072A14 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x180077D18 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x18007C5E0 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD70 (RtlpValidOwnerSubjectContext.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009D600 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009DA20 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18009DE40 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x18009FCF0 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E865C (RtlpCreateServerAcl.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9)
{
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  _DWORD *v13; // rsi
  void *ProcessHeap; // r13
  NTSTATUS result; // eax
  ULONG v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  unsigned int v22; // ebx
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
  NTSTATUS v33; // ebx
  __int16 v34; // cx
  int v35; // r13d
  ACL *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  ACL *v44; // rcx
  char *AceByType; // rbx
  __int64 v46; // r8
  char *v47; // rdx
  __int64 v48; // rdi
  ACL *v49; // rcx
  int v50; // r9d
  unsigned int v51; // edx
  ACCESS_MASK AccessMask; // edi
  ACL *v53; // rcx
  _DWORD *v54; // rax
  _DWORD *v55; // rsi
  PSID v56; // rcx
  unsigned __int8 v57; // al
  ACL *v58; // rdi
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // eax
  __int16 v62; // si
  int v63; // r9d
  int v64; // r12d
  PVOID v65; // rdi
  ACL *v66; // rbx
  __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r8
  int v72; // edx
  int v73; // r13d
  HANDLE v74; // r14
  char *v75; // rdx
  bool v76; // al
  unsigned __int8 *v77; // rsi
  ULONG v78; // ecx
  unsigned int v79; // r13d
  __int16 v80; // bx
  int v81; // r15d
  unsigned int v82; // esi
  int v83; // r12d
  unsigned int v84; // r14d
  _DWORD *Heap; // rax
  _DWORD *v86; // rdx
  char *v87; // rbx
  bool v88; // zf
  unsigned __int16 *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdi
  int v92; // eax
  char *v93; // rbx
  char *v94; // rax
  char *v95; // rax
  int v96; // eax
  __int64 AclSize; // rcx
  ACL *v98; // r8
  int v99; // ecx
  __int16 v100; // r13
  _BYTE *v101; // rax
  _BYTE *v102; // rax
  ACL *v103; // rcx
  _BYTE *v104; // rax
  HANDLE v105; // rdx
  void *v106; // rdi
  int ServerAcl; // eax
  NTSTATUS valid; // [rsp+90h] [rbp-80h] BYREF
  char v109; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v110; // [rsp+95h] [rbp-7Bh]
  char v111; // [rsp+96h] [rbp-7Ah]
  char v112; // [rsp+97h] [rbp-79h]
  BOOLEAN Result; // [rsp+98h] [rbp-78h] BYREF
  char v114; // [rsp+99h] [rbp-77h]
  char v115[6]; // [rsp+9Ah] [rbp-76h] BYREF
  _DWORD *v116; // [rsp+A0h] [rbp-70h]
  BOOLEAN Dominates; // [rsp+A8h] [rbp-68h] BYREF
  char v118; // [rsp+A9h] [rbp-67h] BYREF
  char v119; // [rsp+AAh] [rbp-66h]
  char v120; // [rsp+ABh] [rbp-65h]
  char v121; // [rsp+ACh] [rbp-64h]
  PVOID HeapHandle; // [rsp+B0h] [rbp-60h]
  int v123; // [rsp+B8h] [rbp-58h]
  bool v124; // [rsp+BCh] [rbp-54h]
  __int16 v125; // [rsp+BEh] [rbp-52h]
  ULONG Index; // [rsp+C0h] [rbp-50h] BYREF
  char v127; // [rsp+C4h] [rbp-4Ch] BYREF
  char v128[3]; // [rsp+C5h] [rbp-4Bh] BYREF
  int v129; // [rsp+C8h] [rbp-48h] BYREF
  PACL Acl; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v131; // [rsp+D8h] [rbp-38h]
  void *v132; // [rsp+E0h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp-28h] BYREF
  void *v134; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+100h] [rbp-10h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  _BYTE *v138; // [rsp+110h] [rbp+0h]
  int v139[2]; // [rsp+118h] [rbp+8h]
  int v140; // [rsp+120h] [rbp+10h]
  PSID Sid2; // [rsp+128h] [rbp+18h]
  __int64 v142; // [rsp+130h] [rbp+20h]
  PVOID v143; // [rsp+138h] [rbp+28h] BYREF
  int v144; // [rsp+140h] [rbp+30h]
  HANDLE ClientToken; // [rsp+148h] [rbp+38h]
  int v146[2]; // [rsp+150h] [rbp+40h]
  PVOID v147; // [rsp+158h] [rbp+48h] BYREF
  PVOID v148; // [rsp+160h] [rbp+50h] BYREF
  int v149; // [rsp+168h] [rbp+58h] BYREF
  PSID Sid1; // [rsp+170h] [rbp+60h]
  ULONG PrivilegeSetLength; // [rsp+178h] [rbp+68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+17Ch] [rbp+6Ch] BYREF
  int v153; // [rsp+180h] [rbp+70h] BYREF
  __int64 v154; // [rsp+188h] [rbp+78h]
  HANDLE NewTokenHandle; // [rsp+190h] [rbp+80h] BYREF
  PVOID BaseAddress; // [rsp+198h] [rbp+88h]
  PVOID v157; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v158; // [rsp+1A8h] [rbp+98h] BYREF
  NTSTATUS v159; // [rsp+1B0h] [rbp+A0h] BYREF
  PVOID v160; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v161; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v162; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v163; // [rsp+1D0h] [rbp+C0h]
  ACL *v164; // [rsp+1D8h] [rbp+C8h] BYREF
  ACL *v165; // [rsp+1E0h] [rbp+D0h]
  ACL *v166; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v167; // [rsp+1F0h] [rbp+E0h]
  _QWORD *v168; // [rsp+200h] [rbp+F0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+208h] [rbp+F8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+238h] [rbp+128h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+260h] [rbp+150h] BYREF
  _DWORD v172[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v173; // [rsp+280h] [rbp+170h]
  char TokenInformation[24]; // [rsp+288h] [rbp+178h] BYREF
  int v175; // [rsp+2A0h] [rbp+190h]
  int v176; // [rsp+2A4h] [rbp+194h]
  ACL v177; // [rsp+2C0h] [rbp+1B0h] BYREF

  GenericMapping = a9;
  v147 = 0LL;
  v165 = &v177;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v146 = a4;
  v168 = a3;
  v13 = 0LL;
  *(_QWORD *)v139 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  ClientToken = TokenHandle;
  v131 = 0LL;
  Acl = 0LL;
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
  Sid1 = 0LL;
  v154 = 0LL;
  v138 = 0LL;
  v142 = 0LL;
  v167 = 0LL;
  v116 = 0LL;
  v153 = 0;
  Sid2 = 0LL;
  v164 = 0LL;
  v166 = 0LL;
  v110 = 0;
  Dominates = 1;
  LOBYTE(v144) = 1;
  BaseAddress = 0LL;
  v163 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    v144 = v175;
    if ( v175 == 2 && v176 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v121 = 1;
  }
  else
  {
    v121 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v16 = *((unsigned __int16 *)a2 + 1);
  v125 = *((_WORD *)a2 + 1) & 0x80;
  v17 = v125;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v124 = v125 != 0;
  ReturnLength = v16;
  if ( TokenHandle || v125 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               (ULONG)&v160,
               (__int64)&v161,
               (__int64)&v157,
               (__int64)&v158,
               (ULONG)&v162);
    if ( result < 0 )
      return result;
    v11 = *(_BYTE **)BaseAddress;
    v12 = *(_BYTE **)v163;
    v167 = *(_BYTE **)v160;
    Sid1 = *(PSID *)v157;
    v154 = *(_QWORD *)v158;
    if ( v161 )
      v138 = *(_BYTE **)v161;
    else
      v138 = 0LL;
    v17 = v125;
    if ( v162 )
      v18 = *(_QWORD *)v162;
    else
      v18 = 0LL;
    v142 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)a2 + 1);
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_16;
    v20 = &a2[*((unsigned int *)a2 + 1)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)a2 + 1);
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
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_23;
    v21 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v21 = (_BYTE *)*((_QWORD *)a2 + 2);
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
  AccessStatus = v22;
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
      v29 = *((_QWORD *)a2 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v29) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
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
  v31 = (int)GenericMapping;
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
          (__int64)GenericMapping,
          2,
          *(__int64 *)v146,
          a5,
          (__int64)&Acl,
          (__int64)&v109,
          (__int64)&v129);
  valid = v32;
  v33 = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -2147483637 )
    {
      v34 = *((_WORD *)a2 + 1);
      v35 = v23 != 0 ? 34816 : 0x8000;
      v123 = v35;
      if ( (v34 & 0x30) != 0x30 )
      {
        v36 = Acl;
        v131 = Acl;
        goto LABEL_39;
      }
      if ( (v34 & 0x10) != 0 )
      {
        if ( v34 >= 0 )
        {
          v36 = (ACL *)*((_QWORD *)a2 + 3);
          goto LABEL_290;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v36 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_290:
          v131 = v36;
          goto LABEL_291;
        }
      }
      v36 = 0LL;
      v131 = 0LL;
LABEL_291:
      Acl = v36;
      v35 |= v34 & 0x2000 | 0x10;
      v109 = 1;
      goto LABEL_218;
    }
    v13 = v116;
LABEL_352:
    v36 = Acl;
    goto LABEL_143;
  }
  v36 = Acl;
  v111 = 1;
  v131 = Acl;
  v35 = 2 * (v129 & 0x1400 | (2 * (v129 & 8 | 0x2004)));
LABEL_218:
  v123 = v35;
LABEL_39:
  v37 = *((_WORD *)a2 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
  {
LABEL_40:
    LODWORD(v39) = 0;
    goto LABEL_41;
  }
  if ( v37 < 0 )
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_40;
    LODWORD(v39) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
  else
  {
    v39 = *((_QWORD *)a2 + 3);
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
  v41 = v38 | (*((unsigned __int16 *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          v23 != 0,
          AccessStatus,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          (__int64)GenericMapping,
          2,
          *(__int64 *)v146,
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
    v43 = *((_WORD *)a2 + 1);
    if ( (v43 & 0x30) == 0x30 )
    {
      if ( (v43 & 0x10) != 0 )
      {
        if ( v43 >= 0 )
        {
          v102 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v102 = &a2[*((unsigned int *)a2 + 3)];
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
  Index = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_51:
      v44 = 0LL;
      goto LABEL_52;
    }
    if ( *((__int16 *)a2 + 1) < 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_51;
      v44 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v44 = (ACL *)*((_QWORD *)a2 + 3);
    }
LABEL_52:
    AceByType = (char *)RtlFindAceByType(v44, 0x14u, &Index);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    v48 = v154;
    if ( v47 && !(unsigned __int8)RtlpValidTrustSubjectContext(v154, v47, v46, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_302;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_57;
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_308;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v103 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v103 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_310;
      }
LABEL_308:
      v103 = 0LL;
    }
LABEL_310:
    v104 = RtlFindAceByType(v103, 0x14u, &Index);
    ++Index;
    if ( v104 )
    {
      if ( (v104[1] & 8) == 0 )
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
  if ( (a2[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)a2 + 1) < 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_58;
      v49 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v49 = (ACL *)*((_QWORD *)a2 + 3);
    }
  }
  else
  {
LABEL_58:
    v49 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v49);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  v51 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v51 = (a7 >> 8) & 1;
  AccessMask = v51 | 4;
  if ( (a7 & 0x400) == 0 )
    AccessMask = v51;
  if ( AccessMask )
  {
    v55 = 0LL;
    goto LABEL_68;
  }
  if ( (a2[2] & 0x10) == 0 )
    goto LABEL_66;
  if ( *((__int16 *)a2 + 1) < 0 )
  {
    if ( *((_DWORD *)a2 + 3) )
      v53 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    else
LABEL_66:
      v53 = 0LL;
  }
  else
  {
    v53 = (ACL *)*((_QWORD *)a2 + 3);
  }
  v54 = RtlFindAceByType(v53, 0x11u, 0LL);
  v55 = v54;
  if ( v54 )
  {
    AccessMask = v54[1];
    v56 = v54 + 2;
    v57 = *((_BYTE *)v54 + 1);
    Sid2 = v56;
    v110 = v57;
    if ( v57 == 8 || (v57 & 0x10) != 0 )
    {
      v56 = 0LL;
      v57 = 0;
      Sid2 = 0LL;
      v55 = 0LL;
      v110 = 0;
      AccessMask = 0;
    }
  }
  else
  {
LABEL_68:
    v56 = 0LL;
    v57 = 0;
  }
  if ( (v57 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v33 = -1073740730;
    goto LABEL_302;
  }
  if ( AccessMask )
  {
LABEL_194:
    if ( v55 )
      goto LABEL_73;
    if ( ClientToken )
    {
      v56 = Sid1;
      Sid2 = Sid1;
      v110 = 0;
      goto LABEL_73;
    }
    goto LABEL_319;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    AccessMask = 1;
    goto LABEL_194;
  }
LABEL_73:
  if ( !v56 )
  {
    v58 = 0LL;
    v165 = 0LL;
    goto LABEL_75;
  }
  valid = RtlCreateAcl(&v177, 0x80u, 2u);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  valid = RtlAddMandatoryAce(&v177, 2u, v110, Sid2, 0x11u, AccessMask);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_273;
  v58 = &v177;
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
    v59 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
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
          (__int64)GenericMapping,
          3,
          *(__int64 *)v146,
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
  v33 = RtlpCombineAcls(
          (_DWORD)v36,
          (_DWORD)v58,
          (_DWORD)v143,
          (_DWORD)v143,
          (__int64)v143,
          (__int64)v143,
          (__int64)&v166,
          (__int64)&v149);
  valid = v33;
  v64 = ((v35 & 0x2000) << 17) | v149;
  if ( !v58 || v58 == v165 )
  {
    v65 = HeapHandle;
  }
  else
  {
    v98 = v58;
    v65 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v98);
  }
  if ( v33 < 0 )
    goto LABEL_273;
  v66 = v166;
  if ( v166 )
  {
    if ( v111 && v36 )
      RtlFreeHeap(v65, 0, v36);
    v131 = v66;
    Acl = v66;
    v36 = v66;
    v119 = 1;
    v35 |= 2 * (v62 & 0x1400 | (2 * (v62 & 8 | 4)));
    v123 = v35;
  }
  if ( (a7 & 8) == 0 )
  {
    v94 = (char *)RtlFindAceByType(v36, 0x11u, 0LL);
    v95 = v94 ? v94 + 8 : (char *)Sid2;
    if ( v95 )
    {
      if ( ClientToken )
      {
        valid = RtlSidDominates(Sid1, v95, &Dominates);
        v33 = valid;
        if ( valid >= 0 )
        {
          v96 = (unsigned __int8)v140;
          if ( !Dominates )
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
  v67 = *((_WORD *)a2 + 1);
  if ( (v67 & 4) == 0 )
  {
LABEL_94:
    LODWORD(v68) = 0;
    goto LABEL_95;
  }
  if ( v67 < 0 )
  {
    if ( *((_DWORD *)a2 + 4) )
    {
      LODWORD(v68) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
      goto LABEL_95;
    }
    goto LABEL_94;
  }
  v68 = *((_QWORD *)a2 + 4);
LABEL_95:
  if ( !*(_QWORD *)v139 || (*(_BYTE *)(*(_QWORD *)v139 + 2LL) & 4) == 0 )
    goto LABEL_253;
  if ( *(__int16 *)(*(_QWORD *)v139 + 2LL) >= 0 )
  {
    v69 = *(_QWORD *)(*(_QWORD *)v139 + 32LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v139 + 16LL) )
    {
      LODWORD(v69) = v139[0] + *(_DWORD *)(*(_QWORD *)v139 + 16LL);
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
          AccessStatus,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          (__int64)GenericMapping,
          1,
          *(__int64 *)v146,
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
  v100 = *((_WORD *)a2 + 1);
  if ( (v100 & 0xC) == 0xC )
  {
    if ( (v100 & 4) != 0 )
    {
      if ( v100 >= 0 )
      {
        v101 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_272:
        v72 = 1;
        v73 = v99 | v100 & 0x1000;
        v115[0] = 1;
        goto LABEL_252;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v101 = &a2[*((unsigned int *)a2 + 4)];
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
  v74 = ClientToken;
  if ( (a7 & 0x1000) == 0 && v121 && ClientToken && *(_QWORD *)v139 )
  {
    GrantedAccess = 0;
    AccessStatus = 0;
    valid = RtlpNewSecurityObject(v139[0], 0, (int)&v147, v146[0], a5, a6, a7 | 1, ClientToken, (__int64)GenericMapping);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( (*((_BYTE *)v147 + 2) & 4) == 0 )
      goto LABEL_325;
    if ( *((__int16 *)v147 + 1) >= 0 )
    {
      v75 = (char *)*((_QWORD *)v147 + 4);
      goto LABEL_112;
    }
    if ( *((_DWORD *)v147 + 4) )
      v75 = (char *)v147 + *((unsigned int *)v147 + 4);
    else
LABEL_325:
      v75 = 0LL;
LABEL_112:
    if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v75) )
    {
      NewTokenHandle = 0LL;
      PrivilegeSetLength = 20;
      if ( (_BYTE)v144 != 1 )
        goto LABEL_330;
      v173 = 1;
      v172[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v172;
      v172[0] = 12;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.SecurityDescriptor = 0LL;
      valid = NtDuplicateToken(v74, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_273;
      v105 = NewTokenHandle;
      if ( !NewTokenHandle )
LABEL_330:
        v105 = v74;
      valid = ZwAccessCheck(
                v147,
                v105,
                0x40000u,
                GenericMapping,
                &RequiredPrivileges,
                &PrivilegeSetLength,
                &GrantedAccess,
                &AccessStatus);
      v33 = valid;
      if ( NewTokenHandle )
        NtClose(NewTokenHandle);
      if ( v33 < 0 || (v33 = AccessStatus, valid = AccessStatus, AccessStatus < 0) )
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
    *(_QWORD *)v139 = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v74, &RequiredPrivileges, &Result);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( !Result )
      goto LABEL_336;
  }
  if ( (_BYTE)v140 && (a7 & 8) == 0 )
  {
    if ( !v74 )
      goto LABEL_319;
    *(_QWORD *)v139 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v74, &RequiredPrivileges, &Result);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_273;
    if ( !Result )
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
    LOBYTE(v72) = ReturnLength;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v72, (_DWORD)v138, (unsigned int)&v148, (__int64)&v118);
    valid = ServerAcl;
    v33 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_273;
    if ( v112 && v106 )
      RtlFreeHeap(HeapHandle, 0, v106);
    Src = v148;
    v148 = 0LL;
  }
  v78 = 4 * v77[1] + 8;
  ReturnLength = v78;
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
  Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v79 + v78 + 20 + v84 + v82);
  v116 = Heap;
  v86 = Heap;
  if ( !Heap )
  {
    v36 = (ACL *)v131;
    v33 = -1073741801;
    goto LABEL_302;
  }
  *(_OWORD *)Heap = 0LL;
  Heap[4] = 0;
  *((_WORD *)Heap + 1) |= v80;
  v87 = (char *)(Heap + 5);
  v88 = v81 == 0;
  *(_BYTE *)Heap = 1;
  v36 = (ACL *)v131;
  if ( !v88 && v131 )
  {
    memmove(v87, v131, *((unsigned __int16 *)v131 + 1));
    if ( !v111 )
      RtlpApplyAclToObject(v87, GenericMapping);
    v86 = v116;
    v116[3] = (_DWORD)v87 - (_DWORD)v116;
    AclSize = v36->AclSize;
    if ( v82 > (unsigned int)AclSize )
    {
      memset(&v87[AclSize], 0, v82 - (unsigned int)AclSize);
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
    v86[4] = 0;
    goto LABEL_350;
  }
  memmove(v87, Src, *((unsigned __int16 *)Src + 1));
  if ( !v112 )
    RtlpApplyAclToObject(v87, GenericMapping);
  v13 = v116;
  v116[4] = (_DWORD)v87 - (_DWORD)v116;
  v90 = v89[1];
  if ( v84 > (unsigned int)v90 )
    memset(&v87[v90], 0, v84 - (unsigned int)v90);
  v87 += v84;
LABEL_139:
  v91 = ReturnLength;
  memmove(v87, v132, ReturnLength);
  v92 = (_DWORD)v87 - (_DWORD)v13;
  v93 = &v87[v91];
  v13[1] = v92;
  if ( v134 )
  {
    memmove(v93, v134, v79);
    v13[2] = (_DWORD)v93 - (_DWORD)v13;
  }
  v33 = 0;
  valid = 0;
LABEL_142:
  ProcessHeap = HeapHandle;
LABEL_143:
  if ( v147 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v147);
    v36 = Acl;
    v33 = valid;
  }
  if ( v118 && v148 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v148);
    v36 = Acl;
    v33 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  RtlFreeHeap(ProcessHeap, 0, v157);
  RtlFreeHeap(ProcessHeap, 0, v158);
  RtlFreeHeap(ProcessHeap, 0, v163);
  RtlFreeHeap(ProcessHeap, 0, v160);
  if ( v161 )
    RtlFreeHeap(ProcessHeap, 0, v161);
  if ( v162 )
    RtlFreeHeap(ProcessHeap, 0, v162);
  if ( (v119 || v111) && v36 )
    RtlFreeHeap(ProcessHeap, 0, v36);
  if ( v120 && v143 )
    RtlFreeHeap(ProcessHeap, 0, v143);
  if ( v112 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0, Src);
  }
  *v168 = v13;
  return v33;
}

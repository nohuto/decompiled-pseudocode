/*
 * XREFs of _RtlpNewSecurityObject@40 @ 0x4B2D6852
 * Callers:
 *     _RtlNewSecurityObject@24 @ 0x4B2AC100 (_RtlNewSecurityObject@24.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlNewSecurityObjectEx@32 @ 0x4B2D93A0 (_RtlNewSecurityObjectEx@32.c)
 *     _RtlCreateUserSecurityObject@28 @ 0x4B335F30 (_RtlCreateUserSecurityObject@28.c)
 *     _RtlNewInstanceSecurityObject@40 @ 0x4B336270 (_RtlNewInstanceSecurityObject@40.c)
 *     _RtlNewSecurityObjectWithMultipleInheritance@36 @ 0x4B336430 (_RtlNewSecurityObjectWithMultipleInheritance@36.c)
 * Callees:
 *     _RtlpApplyAclToObject@8 @ 0x4B2A8EDE (_RtlpApplyAclToObject@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpInheritAcl@68 @ 0x4B2D7852 (_RtlpInheritAcl@68.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlpOwnerAcesPresent@8 @ 0x4B2D8769 (_RtlpOwnerAcesPresent@8.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB (_RtlpGetDefaultsSubjectContext@36.c)
 *     _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5 (_RtlCreateSecurityDescriptorRelative@8.c)
 *     _RtlSidDominates@12 @ 0x4B2D9420 (_RtlSidDominates@12.c)
 *     _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA (_RtlpValidOwnerSubjectContext@16.c)
 *     _NtAccessCheck@32 @ 0x4B2F2960 (_NtAccessCheck@32.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpCreateServerAcl@20 @ 0x4B348798 (_RtlpCreateServerAcl@20.c)
 *     _RtlpValidTrustSubjectContext@16 @ 0x4B34A352 (_RtlpValidTrustSubjectContext@16.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        int a1,
        _BYTE *a2,
        _DWORD *a3,
        int a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9,
        int a10)
{
  _BYTE *v10; // ebx
  void *v11; // esi
  void *ProcessHeap; // eax
  char *v13; // edi
  NTSTATUS result; // eax
  int v15; // ecx
  bool v16; // zf
  __int16 v17; // ax
  unsigned int v18; // edx
  char *v19; // eax
  void *v20; // eax
  int v21; // esi
  _BYTE *v22; // ebx
  char *v23; // ebx
  int v24; // eax
  NTSTATUS valid; // esi
  _BYTE *v26; // ebx
  __int16 v27; // cx
  int v28; // esi
  int v29; // eax
  _BYTE *v30; // ebx
  __int16 v31; // cx
  __int16 v32; // ax
  ACL *v33; // ecx
  char *AceByType; // eax
  int v35; // ecx
  char *v36; // esi
  void *v37; // edx
  PSID v38; // edi
  __int16 v39; // ax
  ACL *v40; // ecx
  ACCESS_MASK v41; // edi
  __int16 v42; // ax
  ACL *v43; // ecx
  ACCESS_MASK *v44; // eax
  char v45; // cl
  PSID v46; // edx
  ACL *v47; // edi
  int v48; // edx
  int v49; // eax
  __int16 v50; // bx
  PVOID v51; // edi
  ACL *v52; // edi
  char *v53; // eax
  char *v54; // eax
  int v55; // eax
  ACL *v56; // ebx
  HANDLE v57; // edx
  int v58; // ecx
  __int16 v59; // ax
  int v60; // eax
  int v61; // edx
  bool v62; // al
  int v63; // ebx
  HANDLE v64; // ebx
  unsigned __int8 *v65; // ebx
  NTSTATUS v66; // edx
  int v67; // esi
  unsigned int v68; // ebx
  _DWORD *v69; // ecx
  char *v70; // esi
  unsigned __int16 *v71; // edi
  unsigned int v72; // ecx
  NTSTATUS v73; // edi
  int v74; // ebx
  char *v75; // edi
  int v76; // eax
  char *v77; // esi
  PVOID v78; // ebx
  PACL v79; // edi
  unsigned int AclSize; // ecx
  __int16 v81; // dx
  int v82; // ecx
  bool v83; // sf
  char *v84; // eax
  ACL *v85; // edx
  __int16 v86; // ax
  ACL *v87; // ecx
  _BYTE *v88; // eax
  void *v89; // ecx
  HANDLE v90; // eax
  void *v91; // edi
  int ServerAcl; // eax
  SIZE_T v93; // [esp-4h] [ebp-1F4h]
  size_t v94; // [esp-4h] [ebp-1F4h]
  size_t v95; // [esp-4h] [ebp-1F4h]
  ACL *v96; // [esp-4h] [ebp-1F4h]
  NTSTATUS StackCookie; // [esp+Ch] [ebp-1E4h] BYREF
  __int16 StackCookie_6; // [esp+12h] [ebp-1DEh] BYREF
  PACL Acl; // [esp+14h] [ebp-1DCh]
  char v100; // [esp+1Ah] [ebp-1D6h]
  char v101; // [esp+1Bh] [ebp-1D5h]
  void *v102; // [esp+1Ch] [ebp-1D4h]
  int v103; // [esp+20h] [ebp-1D0h]
  BOOLEAN Result; // [esp+25h] [ebp-1CBh] BYREF
  char v105; // [esp+26h] [ebp-1CAh]
  _BYTE v106[5]; // [esp+27h] [ebp-1C9h] BYREF
  HANDLE ExistingTokenHandle; // [esp+2Ch] [ebp-1C4h]
  _BYTE *v108; // [esp+30h] [ebp-1C0h]
  void *v109; // [esp+34h] [ebp-1BCh]
  int v110; // [esp+38h] [ebp-1B8h] BYREF
  BOOLEAN Dominates; // [esp+3Eh] [ebp-1B2h] BYREF
  char v112; // [esp+3Fh] [ebp-1B1h]
  char v113; // [esp+40h] [ebp-1B0h] BYREF
  __int16 v114; // [esp+41h] [ebp-1AFh]
  char v115; // [esp+43h] [ebp-1ADh]
  ULONG Index; // [esp+44h] [ebp-1ACh] BYREF
  void *Src; // [esp+48h] [ebp-1A8h] BYREF
  void *v118; // [esp+4Ch] [ebp-1A4h]
  PGENERIC_MAPPING GenericMapping; // [esp+50h] [ebp-1A0h]
  HANDLE NewTokenHandle; // [esp+54h] [ebp-19Ch] BYREF
  _WORD v121[3]; // [esp+5Ah] [ebp-196h] BYREF
  int v122; // [esp+60h] [ebp-190h]
  NTSTATUS AccessStatus; // [esp+64h] [ebp-18Ch] BYREF
  int v124; // [esp+68h] [ebp-188h] BYREF
  PVOID HeapHandle; // [esp+6Ch] [ebp-184h]
  PVOID v126; // [esp+70h] [ebp-180h] BYREF
  _DWORD *Heap; // [esp+74h] [ebp-17Ch]
  PVOID v128; // [esp+78h] [ebp-178h] BYREF
  int v129; // [esp+7Ch] [ebp-174h]
  int v130; // [esp+80h] [ebp-170h] BYREF
  ACL *v131; // [esp+84h] [ebp-16Ch]
  void *Size; // [esp+88h] [ebp-168h]
  int Size_4; // [esp+8Ch] [ebp-164h]
  int v134; // [esp+90h] [ebp-160h] BYREF
  PSID Sid1; // [esp+94h] [ebp-15Ch]
  ACCESS_MASK *v136; // [esp+98h] [ebp-158h]
  ULONG ReturnLength; // [esp+9Ch] [ebp-154h] BYREF
  PVOID BaseAddress; // [esp+A0h] [ebp-150h] BYREF
  PVOID v139; // [esp+A4h] [ebp-14Ch] BYREF
  PVOID v140; // [esp+A8h] [ebp-148h] BYREF
  PVOID v141; // [esp+ACh] [ebp-144h] BYREF
  PVOID v142; // [esp+B0h] [ebp-140h] BYREF
  PVOID v143; // [esp+B4h] [ebp-13Ch] BYREF
  PVOID v144; // [esp+B8h] [ebp-138h] BYREF
  PSID v145; // [esp+BCh] [ebp-134h]
  ACL *v146; // [esp+C0h] [ebp-130h] BYREF
  int v147; // [esp+C4h] [ebp-12Ch]
  int v148; // [esp+C8h] [ebp-128h] BYREF
  int v149; // [esp+CCh] [ebp-124h] BYREF
  int v150; // [esp+D0h] [ebp-120h] BYREF
  ACCESS_MASK GrantedAccess; // [esp+D4h] [ebp-11Ch] BYREF
  ULONG PrivilegeSetLength; // [esp+D8h] [ebp-118h] BYREF
  int v153; // [esp+DCh] [ebp-114h]
  _DWORD *v154; // [esp+E0h] [ebp-110h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+E4h] [ebp-10Ch] BYREF
  _BYTE SecurityDescriptor[20]; // [esp+FCh] [ebp-F4h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [esp+110h] [ebp-E0h] BYREF
  _DWORD v158[2]; // [esp+124h] [ebp-CCh] BYREF
  __int16 v159; // [esp+12Ch] [ebp-C4h]
  char TokenInformation[24]; // [esp+130h] [ebp-C0h] BYREF
  int v161; // [esp+148h] [ebp-A8h]
  int v162; // [esp+14Ch] [ebp-A4h]
  ACL v163; // [esp+168h] [ebp-88h] BYREF

  v154 = a3;
  v129 = a4;
  GenericMapping = a9;
  v131 = &v163;
  v10 = a2;
  v108 = a2;
  *(_DWORD *)&v106[1] = a1;
  v11 = 0;
  v134 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  ExistingTokenHandle = TokenHandle;
  v110 = 0;
  v126 = 0;
  v100 = 0;
  v114 = 0;
  v130 = 0;
  Src = 0;
  v128 = 0;
  v101 = 0;
  v105 = 0;
  StackCookie_6 = 0;
  memset(v121, 0, sizeof(v121));
  v106[0] = 0;
  v112 = 0;
  v113 = 0;
  Sid1 = 0;
  v145 = 0;
  v118 = 0;
  v122 = 0;
  Size = 0;
  Heap = 0;
  v148 = 0;
  v136 = 0;
  v150 = 0;
  v146 = 0;
  Dominates = 1;
  LOBYTE(Size_4) = 1;
  BaseAddress = 0;
  v141 = 0;
  v142 = 0;
  v139 = 0;
  v140 = 0;
  v143 = 0;
  v144 = 0;
  HeapHandle = ProcessHeap;
  v13 = 0;
  if ( TokenHandle )
  {
    result = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    Size_4 = v161;
    if ( v161 == 2 && v162 < 1 )
      return -1073741659;
  }
  if ( v10 )
  {
    v115 = 1;
  }
  else
  {
    v115 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v10 = SecurityDescriptor;
    v108 = SecurityDescriptor;
  }
  v15 = *((unsigned __int16 *)v10 + 1);
  v17 = *((_WORD *)v10 + 1) & 0x80;
  v16 = (*((_WORD *)v10 + 1) & 0x80) == 0;
  v147 = *((_WORD *)v10 + 1) & 0x80;
  LOBYTE(v15) = (unsigned __int8)v15 >> 6;
  LOBYTE(v153) = !v16;
  ReturnLength = v15 & 0xFFFFFF01;
  if ( ExistingTokenHandle || v17 )
  {
    result = RtlpGetDefaultsSubjectContext(
               ExistingTokenHandle,
               (int)&BaseAddress,
               (int)&v141,
               (int)&v142,
               (int)&v143,
               (int)&v139,
               (int)&v140,
               (int)&v144);
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v13 = *(char **)v141;
    Size = *(void **)v142;
    Sid1 = *(PSID *)v139;
    v145 = *(PSID *)v140;
    if ( v143 )
      v118 = *(void **)v143;
    else
      v118 = 0;
    if ( v144 )
      v122 = *(_DWORD *)v144;
    else
      v122 = 0;
  }
  v18 = *((unsigned __int16 *)v10 + 1);
  v19 = (char *)*((_DWORD *)v10 + 1);
  v102 = v19;
  if ( (v18 & 0x8000u) != 0 )
  {
    v102 = v102 != 0 ? &v19[(_DWORD)v10] : 0;
    v10 = v108;
    v19 = (char *)v102;
  }
  if ( v19 )
  {
    v105 = 1;
LABEL_19:
    v21 = *(_DWORD *)&v106[1];
    goto LABEL_20;
  }
  if ( (a7 & 0x20) == 0 )
  {
    if ( (_WORD)v147 )
    {
      v20 = v118;
      v102 = v118;
    }
    else
    {
      v20 = v11;
      v102 = v11;
    }
    if ( !v20 )
    {
      valid = -1073741700;
      goto LABEL_214;
    }
    goto LABEL_19;
  }
  v21 = *(_DWORD *)&v106[1];
  if ( !*(_DWORD *)&v106[1] )
    goto LABEL_212;
  v83 = *(__int16 *)(*(_DWORD *)&v106[1] + 2) < 0;
  v84 = *(char **)(*(_DWORD *)&v106[1] + 4);
  v102 = v84;
  if ( v83 )
  {
    v102 = v102 != 0 ? &v84[*(_DWORD *)&v106[1]] : 0;
    v10 = v108;
    v84 = (char *)v102;
  }
  v105 = 1;
  if ( !v84 )
  {
LABEL_212:
    valid = -1073741734;
LABEL_214:
    StackCookie = valid;
    goto LABEL_201;
  }
LABEL_20:
  if ( (v18 & 0x8000u) != 0 )
    v22 = *((_DWORD *)v10 + 2) != 0 ? &v10[*((_DWORD *)v10 + 2)] : 0;
  else
    v22 = (_BYTE *)*((_DWORD *)v10 + 2);
  v109 = v22;
  if ( !v22 )
  {
    if ( (a7 & 0x40) != 0 )
    {
      if ( !v21 )
      {
LABEL_213:
        valid = -1073741733;
        goto LABEL_214;
      }
      v23 = *(char **)(v21 + 8);
      if ( *(__int16 *)(v21 + 2) < 0 )
        v23 = v23 != 0 ? &v23[v21] : 0;
    }
    else
    {
      if ( !(_WORD)v147 )
      {
        v23 = v13;
        v109 = v13;
        goto LABEL_26;
      }
      v23 = (char *)v122;
    }
    v109 = v23;
LABEL_26:
    if ( v23 )
      goto LABEL_27;
    goto LABEL_213;
  }
LABEL_27:
  LOBYTE(NewTokenHandle) = (a7 & 4) != 0;
  v103 = a7 & 2;
  LOBYTE(Index) = v103 != 0;
  AccessStatus = (v18 >> 1) & 0x1000;
  v24 = RtlpInheritAcl(
          ((v18 & 0x10) != 0 ? 4 : 0) | (v18 >> 2) & 8 | (v18 >> 1) & 0x1400,
          a6,
          v103 != 0,
          (char)NewTokenHandle,
          (int)v102,
          (int)v109,
          (int)v118,
          v122,
          GenericMapping,
          2,
          v129,
          a5,
          (int)&v110,
          (int)&StackCookie_6,
          (int)&v124);
  valid = v24;
  StackCookie = v24;
  if ( v24 >= 0 )
  {
    v26 = v108;
    Acl = (PACL)v110;
    v100 = 1;
    v82 = 2 * (v124 & 0x1400 | (2 * (v124 & 8 | 0x2004)));
LABEL_191:
    v103 = v82;
    goto LABEL_31;
  }
  if ( v24 != -2147483637 )
  {
LABEL_201:
    v52 = (ACL *)v110;
    goto LABEL_119;
  }
  v26 = v108;
  v27 = *((_WORD *)v108 + 1);
  v28 = v103 != 0 ? 34816 : 0x8000;
  v103 = v28;
  if ( (v27 & 0x30) == 0x30 )
  {
    if ( (v27 & 0x10) != 0 )
    {
      v85 = (ACL *)*((_DWORD *)v108 + 3);
      if ( v27 < 0 )
        v85 = v85 != 0 ? (ACL *)&v108[(_DWORD)v85] : 0;
    }
    else
    {
      v85 = 0;
    }
    Acl = v85;
    v110 = (int)v85;
    v82 = v28 | v27 & 0x2000 | 0x10;
    LOBYTE(StackCookie_6) = 1;
    goto LABEL_191;
  }
  Acl = (PACL)v110;
LABEL_31:
  v29 = RtlpInheritAcl(
          ((*((_WORD *)v26 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v26 + 1) >> 2) & 8 | (*((unsigned __int16 *)v26 + 1) >> 1) & 0x400,
          a6,
          Index,
          (char)NewTokenHandle,
          (int)v102,
          (int)v109,
          (int)v118,
          v122,
          GenericMapping,
          2,
          v129,
          a5,
          (int)&v126,
          (int)v121,
          (int)&v148);
  valid = v29;
  StackCookie = v29;
  if ( v29 >= 0 )
  {
    v30 = v108;
    HIBYTE(v114) = 1;
  }
  else
  {
    if ( v29 != -2147483637 )
      goto LABEL_193;
    v30 = v108;
    v31 = *((_WORD *)v108 + 1);
    if ( (v31 & 0x30) == 0x30 )
    {
      if ( (v31 & 0x10) != 0 )
      {
        if ( *((__int16 *)v108 + 1) >= 0 )
          v126 = (PVOID)*((_DWORD *)v108 + 3);
        else
          v126 = *((_DWORD *)v108 + 3) != 0 ? &v108[*((_DWORD *)v108 + 3)] : 0;
      }
      else
      {
        v126 = 0;
      }
    }
  }
  Index = 0;
  do
  {
    v32 = *((_WORD *)v30 + 1);
    if ( (v32 & 0x10) != 0 )
    {
      v33 = (ACL *)*((_DWORD *)v30 + 3);
      if ( v32 < 0 )
        v33 = v33 != 0 ? (ACL *)&v30[(_DWORD)v33] : 0;
    }
    else
    {
      v33 = 0;
    }
    AceByType = (char *)RtlFindAceByType(v33, 0x14u, &Index);
    v36 = AceByType;
    if ( AceByType )
      v37 = AceByType + 8;
    else
      v37 = 0;
    v38 = v145;
    if ( v37 && !(unsigned __int8)RtlpValidTrustSubjectContext(v145, v37, v35, (int)&StackCookie) )
    {
      valid = -1073741790;
      goto LABEL_236;
    }
    ++Index;
  }
  while ( v36 );
  if ( (a7 & 0x800) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      v86 = *((_WORD *)v30 + 1);
      if ( (v86 & 0x10) != 0 )
      {
        v87 = (ACL *)*((_DWORD *)v30 + 3);
        if ( v86 < 0 )
          v87 = v87 != 0 ? (ACL *)&v30[(_DWORD)v87] : 0;
      }
      else
      {
        v87 = 0;
      }
      v88 = RtlFindAceByType(v87, 0x14u, &Index);
      ++Index;
      if ( !v88 )
        break;
      if ( (v88[1] & 8) == 0 )
        goto LABEL_244;
    }
    if ( v38 )
    {
LABEL_244:
      valid = -1073741811;
      goto LABEL_236;
    }
  }
  v39 = *((_WORD *)v30 + 1);
  if ( (v39 & 0x10) != 0 )
  {
    v40 = (ACL *)*((_DWORD *)v30 + 3);
    if ( v39 < 0 )
      v40 = v40 != 0 ? (ACL *)&v30[(_DWORD)v40] : 0;
  }
  else
  {
    v40 = 0;
  }
  valid = RtlpValidFilterAclSubjectContext(v40);
  StackCookie = valid;
  if ( valid < 0 )
    goto LABEL_193;
  v41 = (a7 >> 8) & 1;
  if ( (a7 & 0x200) != 0 )
    v41 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v41 |= 4u;
  if ( v41 )
  {
    v44 = v136;
    v45 = (char)v136;
    v46 = v136;
  }
  else
  {
    v42 = *((_WORD *)v30 + 1);
    if ( (v42 & 0x10) != 0 )
    {
      v43 = (ACL *)*((_DWORD *)v30 + 3);
      if ( v42 < 0 )
        v43 = v43 != 0 ? (ACL *)&v30[(_DWORD)v43] : 0;
    }
    else
    {
      v43 = 0;
    }
    v44 = (ACCESS_MASK *)RtlFindAceByType(v43, 0x11u, 0);
    v136 = v44;
    if ( v44 )
    {
      v45 = *((_BYTE *)v44 + 1);
      v46 = v44 + 2;
      v41 = v44[1];
      *(_DWORD *)&v121[1] = v44 + 2;
      HIBYTE(StackCookie_6) = v45;
      if ( v45 == 8 || (v45 & 0x10) != 0 )
      {
        v45 = 0;
        v44 = 0;
        HIBYTE(StackCookie_6) = 0;
        v46 = 0;
        v136 = 0;
        *(_DWORD *)&v121[1] = 0;
        v41 = 0;
      }
    }
    else
    {
      v45 = HIBYTE(StackCookie_6);
      v46 = *(PSID *)&v121[1];
    }
  }
  if ( (v45 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    valid = -1073740730;
    goto LABEL_236;
  }
  if ( !v41 )
  {
    if ( !Sid1 || *((_DWORD *)Sid1 + 2) >= 0x2000u )
      goto LABEL_58;
    v41 = 1;
  }
  if ( !v44 )
  {
    if ( !ExistingTokenHandle )
    {
      valid = -1073741700;
      goto LABEL_236;
    }
    v46 = Sid1;
    *(_DWORD *)&v121[1] = Sid1;
    HIBYTE(StackCookie_6) = 0;
  }
LABEL_58:
  if ( !v46 )
  {
    v47 = 0;
    v131 = 0;
    goto LABEL_60;
  }
  valid = RtlCreateAcl(&v163, 0x80u, 2u);
  StackCookie = valid;
  if ( valid < 0 )
    goto LABEL_193;
  valid = RtlAddMandatoryAce(&v163, 2u, HIBYTE(StackCookie_6), *(PSID *)&v121[1], 0x11u, v41);
  StackCookie = valid;
  if ( valid < 0 )
    goto LABEL_193;
  v47 = &v163;
LABEL_60:
  if ( (a7 & 0x700) != 0 )
    v48 = 4;
  else
    v48 = !v136 && v47 ? 0 : (*((_WORD *)v30 + 1) & 0x2800 | (*((unsigned __int16 *)v30 + 1) >> 1) & 0x18u) >> 1;
  v49 = RtlpInheritAcl(
          v48,
          a6,
          1,
          0,
          (int)v102,
          (int)v109,
          (int)v118,
          v122,
          GenericMapping,
          3,
          v129,
          a5,
          (int)&v150,
          (int)v121 + 1,
          (int)&v124);
  valid = v49;
  StackCookie = v49;
  if ( v49 == -2147483637 )
  {
    v50 = 0;
    v124 = 0;
  }
  else
  {
    if ( v49 < 0 )
      goto LABEL_193;
    v47 = (ACL *)v150;
    v50 = v124;
  }
  valid = RtlpCombineAcls(v126, v126, v126, v126, &v146, &v130);
  StackCookie = valid;
  v148 = ((v103 & 0x2000) << 17) | v130;
  if ( !v47 || v47 == v131 )
  {
    v51 = HeapHandle;
  }
  else
  {
    v96 = v47;
    v51 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v96);
  }
  if ( valid < 0 )
    goto LABEL_193;
  if ( v146 )
  {
    if ( v100 && Acl )
      RtlFreeHeap(v51, 0, Acl);
    v52 = v146;
    Acl = v146;
    v110 = (int)v146;
    LOBYTE(v114) = 1;
    v103 |= 2 * (v50 & 0x1400 | (2 * (v50 & 8 | 4)));
  }
  else
  {
    v52 = Acl;
  }
  v130 = a7 & 8;
  if ( (a7 & 8) != 0 )
    goto LABEL_75;
  v53 = (char *)RtlFindAceByType(v52, 0x11u, 0);
  v54 = v53 ? v53 + 8 : *(char **)&v121[1];
  if ( !v54 )
    goto LABEL_75;
  if ( !ExistingTokenHandle )
    goto LABEL_253;
  valid = RtlSidDominates(Sid1, v54, &Dominates);
  StackCookie = valid;
  if ( valid < 0 )
    goto LABEL_119;
  if ( !Dominates )
    v112 = 1;
LABEL_75:
  v131 = (ACL *)(a7 & 1);
  v55 = RtlpInheritAcl(
          *((_WORD *)v108 + 1) & 0x140C,
          a6,
          a7 & 1,
          (char)NewTokenHandle,
          (int)v102,
          (int)v109,
          (int)v118,
          v122,
          GenericMapping,
          1,
          v129,
          a5,
          (int)&Src,
          (int)v106,
          (int)&v124);
  valid = v55;
  StackCookie = v55;
  if ( v55 < 0 )
  {
    if ( v55 != -2147483637 )
      goto LABEL_193;
    v56 = v131;
    if ( v131 )
      v103 |= 0x400u;
    v81 = *((_WORD *)v108 + 1);
    if ( (v81 & 0xC) == 0xC )
    {
      if ( (v81 & 4) != 0 )
      {
        v89 = (void *)*((_DWORD *)v108 + 4);
        if ( *((__int16 *)v108 + 1) < 0 )
          v89 = v89 != 0 ? &v108[(_DWORD)v89] : 0;
      }
      else
      {
        v89 = 0;
      }
      Src = v89;
      v106[0] = 1;
      v103 |= v81 & 0x1000 | 4;
    }
    else if ( Size )
    {
      v103 |= 4u;
      Src = Size;
    }
  }
  else
  {
    v56 = v131;
    v101 = 1;
    v103 |= v124 & 0x1408 | 4;
  }
  v57 = ExistingTokenHandle;
  if ( (a7 & 0x1000) != 0 || !v115 || !ExistingTokenHandle || !*(_DWORD *)&v106[1] )
  {
LABEL_88:
    if ( v56 && !Src )
      v103 |= 0x1000u;
    v62 = !v148 || (v148 & 0x1B0) != v148;
    v63 = v130;
    if ( (_BYTE)StackCookie_6 && !v130 && v62 )
    {
      if ( !v57 )
        goto LABEL_253;
      PrivilegeSet.Privilege[0].Luid.LowPart = 8;
      PrivilegeSet.Privilege[0].Luid.HighPart = 0;
      PrivilegeSet.PrivilegeCount = 1;
      PrivilegeSet.Control = 1;
      PrivilegeSet.Privilege[0].Attributes = 0;
      valid = ZwPrivilegeCheck(v57, &PrivilegeSet, &Result);
      StackCookie = valid;
      if ( valid < 0 )
        goto LABEL_193;
      if ( !Result )
      {
LABEL_275:
        valid = -1073741727;
        goto LABEL_254;
      }
    }
    if ( v112 )
    {
      v16 = v63 == 0;
      v64 = ExistingTokenHandle;
      if ( v16 )
      {
        if ( !ExistingTokenHandle )
          goto LABEL_253;
        PrivilegeSet.Privilege[0].Luid.LowPart = 32;
        PrivilegeSet.PrivilegeCount = 1;
        PrivilegeSet.Control = 1;
        PrivilegeSet.Privilege[0].Luid.HighPart = 0;
        PrivilegeSet.Privilege[0].Attributes = 0;
        valid = ZwPrivilegeCheck(ExistingTokenHandle, &PrivilegeSet, &Result);
        StackCookie = valid;
        if ( valid < 0 )
          goto LABEL_193;
        if ( !Result )
          goto LABEL_275;
      }
    }
    else
    {
      v64 = ExistingTokenHandle;
    }
    if ( !v105 || (a7 & 0x10) != 0 )
    {
      v65 = (unsigned __int8 *)v102;
      goto LABEL_98;
    }
    if ( v64 )
    {
      v65 = (unsigned __int8 *)v102;
      if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(ExistingTokenHandle, v102, v153, &v149) )
      {
        valid = v149;
LABEL_254:
        StackCookie = valid;
        goto LABEL_119;
      }
LABEL_98:
      if ( (_WORD)v147 && v106[0] )
      {
        v91 = Src;
        ServerAcl = RtlpCreateServerAcl(v118, (int)&v128, (int)&v113);
        valid = ServerAcl;
        StackCookie = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_193;
        if ( v101 && v91 )
          RtlFreeHeap(HeapHandle, 0, v91);
        v66 = 0;
        Src = v128;
        v128 = 0;
      }
      else
      {
        v66 = 0;
      }
      Size_4 = 4 * v65[1] + 8;
      if ( v109 )
      {
        v67 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
        Size = (void *)v67;
      }
      else
      {
        v67 = 0;
        Size = 0;
      }
      ReturnLength = v103 & 0x10;
      if ( (v103 & 0x10) != 0 && Acl )
        v68 = (Acl->AclSize + 3) & 0xFFFFFFFC;
      else
        v68 = 0;
      v149 = v103 & 4;
      if ( (v103 & 4) != 0 && Src )
        v66 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      AccessStatus = v66;
      LODWORD(v93) = v67 + Size_4 + v68 + v66 + 20;
      Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v93);
      if ( Heap )
      {
        RtlCreateSecurityDescriptorRelative();
        v70 = (char *)(v69 + 5);
        *((_WORD *)v69 + 1) |= v103;
        if ( ReturnLength )
        {
          v79 = Acl;
          if ( Acl )
          {
            LODWORD(v94) = Acl->AclSize;
            memcpy(v69 + 5, Acl, v94);
            if ( !v100 )
              RtlpApplyAclToObject((int)v70, GenericMapping);
            Heap[3] = 20;
            AclSize = v79->AclSize;
            if ( v68 > AclSize )
            {
              LODWORD(v94) = v68 - AclSize;
              memset(&v70[AclSize], 0, v94);
            }
            v69 = Heap;
            v70 += v68;
          }
          else
          {
            v69[3] = 0;
          }
        }
        if ( v149 )
        {
          v71 = (unsigned __int16 *)Src;
          if ( Src )
          {
            LODWORD(v94) = *((unsigned __int16 *)Src + 1);
            memcpy(v70, Src, v94);
            if ( !v101 )
              RtlpApplyAclToObject((int)v70, GenericMapping);
            Heap[4] = v70 - (char *)Heap;
            v72 = v71[1];
            v73 = AccessStatus;
            if ( AccessStatus > v72 )
            {
              LODWORD(v94) = AccessStatus - v72;
              memset(&v70[v72], 0, v94);
            }
            v70 += v73;
          }
          else
          {
            v69[4] = 0;
          }
        }
        v74 = Size_4;
        LODWORD(v94) = Size_4;
        memcpy(v70, v102, v94);
        v75 = (char *)Heap;
        v76 = v70 - (char *)Heap;
        v77 = &v70[v74];
        Heap[1] = v76;
        if ( v109 )
        {
          LODWORD(v95) = Size;
          memcpy(v77, v109, v95);
          *((_DWORD *)v75 + 2) = v77 - v75;
        }
        v52 = Acl;
        valid = 0;
        StackCookie = 0;
        goto LABEL_119;
      }
      valid = -1073741801;
LABEL_236:
      StackCookie = valid;
      goto LABEL_193;
    }
LABEL_253:
    valid = -1073741700;
    goto LABEL_254;
  }
  GrantedAccess = 0;
  AccessStatus = 0;
  valid = RtlpNewSecurityObject((int)&v134, v129, a5, a6, a7 | 1, ExistingTokenHandle, (int)GenericMapping, 0);
  StackCookie = valid;
  if ( valid < 0 )
    goto LABEL_193;
  v59 = *(_WORD *)(v134 + 2);
  if ( (v59 & 4) == 0 )
    goto LABEL_260;
  if ( v59 >= 0 )
  {
    v61 = *(_DWORD *)(v134 + 16);
  }
  else
  {
    v60 = *(_DWORD *)(v134 + 16);
    if ( v60 )
    {
      v61 = v60 + v134;
      goto LABEL_86;
    }
LABEL_260:
    v61 = 0;
  }
LABEL_86:
  LOBYTE(v58) = 16;
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(v58, v61) )
  {
LABEL_87:
    v57 = ExistingTokenHandle;
    goto LABEL_88;
  }
  PrivilegeSetLength = 20;
  NewTokenHandle = 0;
  if ( (_BYTE)Size_4 != 1 )
  {
LABEL_265:
    v90 = ExistingTokenHandle;
    goto LABEL_266;
  }
  v158[0] = 12;
  ObjectAttributes.SecurityQualityOfService = v158;
  v158[1] = 2;
  v159 = 1;
  ObjectAttributes.Length = 24;
  memset(&ObjectAttributes.RootDirectory, 0, 16);
  valid = NtDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
  StackCookie = valid;
  if ( valid >= 0 )
  {
    v90 = NewTokenHandle;
    if ( !NewTokenHandle )
      goto LABEL_265;
LABEL_266:
    valid = NtAccessCheck(
              (PSECURITY_DESCRIPTOR)v134,
              v90,
              0x40000u,
              GenericMapping,
              &PrivilegeSet,
              &PrivilegeSetLength,
              &GrantedAccess,
              &AccessStatus);
    StackCookie = valid;
    if ( NewTokenHandle )
      NtClose(NewTokenHandle);
    if ( valid >= 0 )
    {
      valid = AccessStatus;
      StackCookie = AccessStatus;
      if ( AccessStatus >= 0 )
        goto LABEL_87;
    }
  }
LABEL_193:
  v52 = Acl;
LABEL_119:
  if ( v134 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v134);
    v52 = (ACL *)v110;
    valid = StackCookie;
  }
  if ( v113 && v128 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v128);
    v52 = (ACL *)v110;
    valid = StackCookie;
  }
  v78 = HeapHandle;
  RtlFreeHeap(HeapHandle, 0, BaseAddress);
  RtlFreeHeap(v78, 0, v139);
  RtlFreeHeap(v78, 0, v140);
  RtlFreeHeap(v78, 0, v141);
  RtlFreeHeap(v78, 0, v142);
  if ( v143 )
    RtlFreeHeap(v78, 0, v143);
  if ( v144 )
    RtlFreeHeap(v78, 0, v144);
  if ( ((_BYTE)v114 || v100) && v52 )
    RtlFreeHeap(v78, 0, v52);
  if ( HIBYTE(v114) && v126 )
    RtlFreeHeap(v78, 0, v126);
  if ( v101 )
  {
    if ( Src )
      RtlFreeHeap(v78, 0, Src);
  }
  *v154 = Heap;
  return valid;
}

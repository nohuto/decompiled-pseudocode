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

int __fastcall RtlpNewSecurityObject(
        int a1,
        _BYTE *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        void *a8,
        int a9,
        int a10)
{
  _BYTE *v10; // ebx
  void *v11; // esi
  void *ProcessHeap; // eax
  char *v13; // edi
  int result; // eax
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
  int valid; // esi
  _BYTE *v26; // ebx
  __int16 v27; // cx
  int v28; // esi
  int v29; // eax
  _BYTE *v30; // ebx
  __int16 v31; // cx
  __int16 v32; // ax
  int v33; // ecx
  int AceByType; // eax
  int v35; // ecx
  int v36; // esi
  int v37; // edx
  int v38; // edi
  __int16 v39; // ax
  int v40; // ecx
  int v41; // edi
  __int16 v42; // ax
  int v43; // ecx
  int *v44; // eax
  unsigned __int8 v45; // cl
  void *v46; // edx
  int *v47; // edi
  unsigned int v48; // edx
  int v49; // eax
  int v50; // ebx
  int v51; // edi
  void *v52; // edi
  int v53; // eax
  void *v54; // eax
  int v55; // eax
  int *v56; // ebx
  void *v57; // edx
  int v58; // ecx
  __int16 v59; // ax
  int v60; // eax
  int v61; // edx
  bool v62; // al
  int v63; // ebx
  void *v64; // ebx
  unsigned __int8 *v65; // ebx
  unsigned int v66; // edx
  size_t v67; // esi
  unsigned int v68; // ebx
  _DWORD *v69; // ecx
  char *v70; // esi
  unsigned __int16 *v71; // edi
  unsigned int v72; // ecx
  int v73; // edi
  size_t v74; // ebx
  char *v75; // edi
  int v76; // eax
  char *v77; // esi
  int v78; // ebx
  int v79; // eax
  unsigned __int16 *v80; // edi
  unsigned int v81; // ecx
  __int16 v82; // dx
  int v83; // ecx
  bool v84; // sf
  char *v85; // eax
  void *v86; // edx
  __int16 v87; // ax
  int v88; // ecx
  int v89; // eax
  void *v90; // ecx
  HANDLE v91; // eax
  void *v92; // edi
  int ServerAcl; // eax
  int v94; // [esp-4h] [ebp-1F4h]
  int v95; // [esp+Ch] [ebp-1E4h] BYREF
  char v96; // [esp+12h] [ebp-1DEh] BYREF
  unsigned __int8 v97; // [esp+13h] [ebp-1DDh]
  void *v98; // [esp+14h] [ebp-1DCh]
  char v99; // [esp+1Ah] [ebp-1D6h]
  char v100; // [esp+1Bh] [ebp-1D5h]
  void *v101; // [esp+1Ch] [ebp-1D4h]
  int v102; // [esp+20h] [ebp-1D0h]
  char v103; // [esp+25h] [ebp-1CBh] BYREF
  char v104; // [esp+26h] [ebp-1CAh]
  char v105; // [esp+27h] [ebp-1C9h] BYREF
  int v106; // [esp+28h] [ebp-1C8h]
  void *v107; // [esp+2Ch] [ebp-1C4h]
  _BYTE *v108; // [esp+30h] [ebp-1C0h]
  void *v109; // [esp+34h] [ebp-1BCh]
  void *v110; // [esp+38h] [ebp-1B8h] BYREF
  int v111; // [esp+3Eh] [ebp-1B2h] BYREF
  char v112; // [esp+42h] [ebp-1AEh]
  char v113; // [esp+43h] [ebp-1ADh]
  int v114; // [esp+44h] [ebp-1ACh] BYREF
  void *Src; // [esp+48h] [ebp-1A8h] BYREF
  void *v116; // [esp+4Ch] [ebp-1A4h]
  int v117; // [esp+50h] [ebp-1A0h]
  HANDLE Handle; // [esp+54h] [ebp-19Ch] BYREF
  char v119; // [esp+5Ah] [ebp-196h] BYREF
  char v120; // [esp+5Bh] [ebp-195h] BYREF
  void *v121; // [esp+5Ch] [ebp-194h]
  char *v122; // [esp+60h] [ebp-190h]
  int v123; // [esp+64h] [ebp-18Ch] BYREF
  int v124; // [esp+68h] [ebp-188h] BYREF
  int v125; // [esp+6Ch] [ebp-184h]
  int v126; // [esp+70h] [ebp-180h] BYREF
  _DWORD *Heap; // [esp+74h] [ebp-17Ch]
  int v128; // [esp+78h] [ebp-178h] BYREF
  int v129; // [esp+7Ch] [ebp-174h]
  int v130; // [esp+80h] [ebp-170h] BYREF
  int *v131; // [esp+84h] [ebp-16Ch]
  size_t v132; // [esp+88h] [ebp-168h]
  size_t Size; // [esp+8Ch] [ebp-164h]
  int v134; // [esp+90h] [ebp-160h] BYREF
  void *Buf1; // [esp+94h] [ebp-15Ch]
  int *v136; // [esp+98h] [ebp-158h]
  unsigned int v137; // [esp+9Ch] [ebp-154h] BYREF
  void **v138; // [esp+A0h] [ebp-150h] BYREF
  void **v139; // [esp+A4h] [ebp-14Ch] BYREF
  int *v140; // [esp+A8h] [ebp-148h] BYREF
  void **v141; // [esp+ACh] [ebp-144h] BYREF
  size_t *v142; // [esp+B0h] [ebp-140h] BYREF
  void **v143; // [esp+B4h] [ebp-13Ch] BYREF
  void **v144; // [esp+B8h] [ebp-138h] BYREF
  int v145; // [esp+BCh] [ebp-134h]
  void *v146; // [esp+C0h] [ebp-130h] BYREF
  int v147; // [esp+C4h] [ebp-12Ch]
  int v148; // [esp+C8h] [ebp-128h] BYREF
  int v149; // [esp+CCh] [ebp-124h] BYREF
  int *v150; // [esp+D0h] [ebp-120h] BYREF
  int v151; // [esp+D4h] [ebp-11Ch] BYREF
  int v152; // [esp+D8h] [ebp-118h] BYREF
  int v153; // [esp+DCh] [ebp-114h]
  _DWORD *v154; // [esp+E0h] [ebp-110h]
  _DWORD v155[6]; // [esp+E4h] [ebp-10Ch] BYREF
  _BYTE v156[20]; // [esp+FCh] [ebp-F4h] BYREF
  int v157; // [esp+110h] [ebp-E0h] BYREF
  int v158; // [esp+114h] [ebp-DCh]
  int v159; // [esp+118h] [ebp-D8h]
  int v160; // [esp+11Ch] [ebp-D4h]
  int v161; // [esp+120h] [ebp-D0h]
  _DWORD v162[2]; // [esp+124h] [ebp-CCh] BYREF
  __int16 v163; // [esp+12Ch] [ebp-C4h]
  char v164[24]; // [esp+130h] [ebp-C0h] BYREF
  size_t v165; // [esp+148h] [ebp-A8h]
  int v166; // [esp+14Ch] [ebp-A4h]
  int v167[33]; // [esp+168h] [ebp-88h] BYREF

  v154 = a3;
  v129 = a4;
  v117 = a9;
  v131 = v167;
  v10 = a2;
  v108 = a2;
  v106 = a1;
  v11 = 0;
  v134 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v107 = a8;
  v110 = 0;
  v126 = 0;
  v99 = 0;
  v112 = 0;
  v130 = 0;
  Src = 0;
  v128 = 0;
  v100 = 0;
  v104 = 0;
  v96 = 0;
  v119 = 0;
  v120 = 0;
  v105 = 0;
  Buf1 = 0;
  v145 = 0;
  v116 = 0;
  v122 = 0;
  v132 = 0;
  Heap = 0;
  v148 = 0;
  v136 = 0;
  v121 = 0;
  v150 = 0;
  v146 = 0;
  v97 = 0;
  v111 = 1;
  LOBYTE(Size) = 1;
  v138 = 0;
  v141 = 0;
  v142 = 0;
  v139 = 0;
  v140 = 0;
  v143 = 0;
  v144 = 0;
  v125 = (int)ProcessHeap;
  v13 = 0;
  if ( a8 )
  {
    result = ZwQueryInformationToken(a8, 10, v164, 56, &v137);
    if ( result < 0 )
      return result;
    Size = v165;
    if ( v165 == 2 && v166 < 1 )
      return -1073741659;
  }
  if ( v10 )
  {
    v113 = 1;
  }
  else
  {
    v113 = 0;
    RtlCreateSecurityDescriptor(v156, 1);
    v10 = v156;
    v108 = v156;
  }
  v15 = *((unsigned __int16 *)v10 + 1);
  v17 = *((_WORD *)v10 + 1) & 0x80;
  v16 = (*((_WORD *)v10 + 1) & 0x80) == 0;
  v147 = *((_WORD *)v10 + 1) & 0x80;
  LOBYTE(v15) = (unsigned __int8)v15 >> 6;
  LOBYTE(v153) = !v16;
  v137 = v15 & 0xFFFFFF01;
  if ( v107 || v17 )
  {
    result = RtlpGetDefaultsSubjectContext(&v138, &v141, &v142, &v143, &v139, &v140, &v144);
    if ( result < 0 )
      return result;
    v11 = *v138;
    v13 = (char *)*v141;
    v132 = *v142;
    Buf1 = *v139;
    v145 = *v140;
    if ( v143 )
      v116 = *v143;
    else
      v116 = 0;
    if ( v144 )
      v122 = (char *)*v144;
    else
      v122 = 0;
  }
  v18 = *((unsigned __int16 *)v10 + 1);
  v19 = (char *)*((_DWORD *)v10 + 1);
  v101 = v19;
  if ( (v18 & 0x8000u) != 0 )
  {
    v101 = v101 != 0 ? &v19[(_DWORD)v10] : 0;
    v10 = v108;
    v19 = (char *)v101;
  }
  if ( v19 )
  {
    v104 = 1;
LABEL_19:
    v21 = v106;
    goto LABEL_20;
  }
  if ( (a7 & 0x20) == 0 )
  {
    if ( (_WORD)v147 )
    {
      v20 = v116;
      v101 = v116;
    }
    else
    {
      v20 = v11;
      v101 = v11;
    }
    if ( !v20 )
    {
      valid = -1073741700;
      goto LABEL_214;
    }
    goto LABEL_19;
  }
  v21 = v106;
  if ( !v106 )
    goto LABEL_212;
  v84 = *(__int16 *)(v106 + 2) < 0;
  v85 = *(char **)(v106 + 4);
  v101 = v85;
  if ( v84 )
  {
    v101 = v101 != 0 ? &v85[v106] : 0;
    v10 = v108;
    v85 = (char *)v101;
  }
  v104 = 1;
  if ( !v85 )
  {
LABEL_212:
    valid = -1073741734;
LABEL_214:
    v95 = valid;
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
      v23 = v122;
    }
    v109 = v23;
LABEL_26:
    if ( v23 )
      goto LABEL_27;
    goto LABEL_213;
  }
LABEL_27:
  LOBYTE(Handle) = (a7 & 4) != 0;
  v102 = a7 & 2;
  LOBYTE(v114) = v102 != 0;
  v123 = (v18 >> 1) & 0x1000;
  v24 = RtlpInheritAcl(
          ((v18 & 0x10) != 0 ? 4 : 0) | (v18 >> 2) & 8 | (v18 >> 1) & 0x1400,
          a6,
          v114,
          Handle,
          v101,
          v109,
          v116,
          v122,
          v117,
          2,
          v129,
          a5,
          &v110,
          &v96,
          &v124);
  valid = v24;
  v95 = v24;
  if ( v24 >= 0 )
  {
    v26 = v108;
    v98 = v110;
    v99 = 1;
    v83 = 2 * (v124 & 0x1400 | (2 * (v124 & 8 | 0x2004)));
LABEL_191:
    v102 = v83;
    goto LABEL_31;
  }
  if ( v24 != -2147483637 )
  {
LABEL_201:
    v52 = v110;
    goto LABEL_119;
  }
  v26 = v108;
  v27 = *((_WORD *)v108 + 1);
  v28 = v102 != 0 ? 34816 : 0x8000;
  v102 = v28;
  if ( (v27 & 0x30) == 0x30 )
  {
    if ( (v27 & 0x10) != 0 )
    {
      v86 = (void *)*((_DWORD *)v108 + 3);
      if ( v27 < 0 )
        v86 = v86 != 0 ? &v108[(_DWORD)v86] : 0;
    }
    else
    {
      v86 = 0;
    }
    v98 = v86;
    v110 = v86;
    v83 = v28 | v27 & 0x2000 | 0x10;
    v96 = 1;
    goto LABEL_191;
  }
  v98 = v110;
LABEL_31:
  v29 = RtlpInheritAcl(
          ((*((_WORD *)v26 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v26 + 1) >> 2) & 8 | (*((unsigned __int16 *)v26 + 1) >> 1) & 0x400,
          a6,
          v114,
          Handle,
          v101,
          v109,
          v116,
          v122,
          v117,
          2,
          v129,
          a5,
          &v126,
          &v119,
          &v148);
  valid = v29;
  v95 = v29;
  if ( v29 >= 0 )
  {
    v30 = v108;
    v112 = 1;
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
          v126 = *((_DWORD *)v108 + 3);
        else
          v126 = *((_DWORD *)v108 + 3) != 0 ? (unsigned int)&v108[*((_DWORD *)v108 + 3)] : 0;
      }
      else
      {
        v126 = 0;
      }
    }
  }
  v114 = 0;
  do
  {
    v32 = *((_WORD *)v30 + 1);
    if ( (v32 & 0x10) != 0 )
    {
      v33 = *((_DWORD *)v30 + 3);
      if ( v32 < 0 )
        v33 = v33 != 0 ? (unsigned int)&v30[v33] : 0;
    }
    else
    {
      v33 = 0;
    }
    AceByType = RtlFindAceByType(v33, 20, &v114);
    v36 = AceByType;
    if ( AceByType )
      v37 = AceByType + 8;
    else
      v37 = 0;
    v38 = v145;
    if ( v37 && !(unsigned __int8)RtlpValidTrustSubjectContext(v35, &v95) )
    {
      valid = -1073741790;
      goto LABEL_236;
    }
    ++v114;
  }
  while ( v36 );
  if ( (a7 & 0x800) != 0 )
  {
    v114 = 0;
    while ( 1 )
    {
      v87 = *((_WORD *)v30 + 1);
      if ( (v87 & 0x10) != 0 )
      {
        v88 = *((_DWORD *)v30 + 3);
        if ( v87 < 0 )
          v88 = v88 != 0 ? (unsigned int)&v30[v88] : 0;
      }
      else
      {
        v88 = 0;
      }
      v89 = RtlFindAceByType(v88, 20, &v114);
      ++v114;
      if ( !v89 )
        break;
      if ( (*(_BYTE *)(v89 + 1) & 8) == 0 )
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
    v40 = *((_DWORD *)v30 + 3);
    if ( v39 < 0 )
      v40 = v40 != 0 ? (unsigned int)&v30[v40] : 0;
  }
  else
  {
    v40 = 0;
  }
  valid = RtlpValidFilterAclSubjectContext(v40, v38);
  v95 = valid;
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
    v45 = (unsigned __int8)v136;
    v46 = v136;
  }
  else
  {
    v42 = *((_WORD *)v30 + 1);
    if ( (v42 & 0x10) != 0 )
    {
      v43 = *((_DWORD *)v30 + 3);
      if ( v42 < 0 )
        v43 = v43 != 0 ? (unsigned int)&v30[v43] : 0;
    }
    else
    {
      v43 = 0;
    }
    v44 = (int *)RtlFindAceByType(v43, 17, 0);
    v136 = v44;
    if ( v44 )
    {
      v45 = *((_BYTE *)v44 + 1);
      v46 = v44 + 2;
      v41 = v44[1];
      v121 = v44 + 2;
      v97 = v45;
      if ( v45 == 8 || (v45 & 0x10) != 0 )
      {
        v45 = 0;
        v44 = 0;
        v97 = 0;
        v46 = 0;
        v136 = 0;
        v121 = 0;
        v41 = 0;
      }
    }
    else
    {
      v45 = v97;
      v46 = v121;
    }
  }
  if ( (v45 & 8) != 0 && *((_DWORD *)Buf1 + 2) < 0x2000u )
  {
    valid = -1073740730;
    goto LABEL_236;
  }
  if ( !v41 )
  {
    if ( !Buf1 || *((_DWORD *)Buf1 + 2) >= 0x2000u )
      goto LABEL_58;
    v41 = 1;
  }
  if ( !v44 )
  {
    if ( !v107 )
    {
      valid = -1073741700;
      goto LABEL_236;
    }
    v46 = Buf1;
    v121 = Buf1;
    v97 = 0;
  }
LABEL_58:
  if ( !v46 )
  {
    v47 = 0;
    v131 = 0;
    goto LABEL_60;
  }
  valid = RtlCreateAcl(v167, 128, 2);
  v95 = valid;
  if ( valid < 0 )
    goto LABEL_193;
  valid = RtlAddMandatoryAce((int)v167, 2u, v97, (char *)v121, 17, v41);
  v95 = valid;
  if ( valid < 0 )
    goto LABEL_193;
  v47 = v167;
LABEL_60:
  if ( (a7 & 0x700) != 0 )
    v48 = 4;
  else
    v48 = !v136 && v47 ? 0 : (*((_WORD *)v30 + 1) & 0x2800 | (*((unsigned __int16 *)v30 + 1) >> 1) & 0x18u) >> 1;
  v49 = RtlpInheritAcl(v48, a6, 1, 0, v101, v109, v116, v122, v117, 3, v129, a5, &v150, &v120, &v124);
  valid = v49;
  v95 = v49;
  if ( v49 == -2147483637 )
  {
    v50 = 0;
    v124 = 0;
  }
  else
  {
    if ( v49 < 0 )
      goto LABEL_193;
    v47 = v150;
    v50 = v124;
  }
  valid = RtlpCombineAcls(v126, v126, v126, v126, &v146, &v130);
  v95 = valid;
  v148 = ((v102 & 0x2000) << 17) | v130;
  if ( !v47 || v47 == v131 )
  {
    v51 = v125;
  }
  else
  {
    v94 = (int)v47;
    v51 = v125;
    RtlFreeHeap(v125, 0, v94);
  }
  if ( valid < 0 )
    goto LABEL_193;
  if ( v146 )
  {
    if ( v99 && v98 )
      RtlFreeHeap(v51, 0, (int)v98);
    v52 = v146;
    v98 = v146;
    v110 = v146;
    v79 = 2 * (v50 & 8 | 4);
    HIBYTE(v111) = 1;
    v50 &= 0x1400u;
    v102 |= 2 * (v50 | v79);
  }
  else
  {
    v52 = v98;
  }
  v130 = a7 & 8;
  if ( (a7 & 8) != 0 )
    goto LABEL_75;
  v53 = RtlFindAceByType(v52, 17, 0);
  v54 = v53 ? (void *)(v53 + 8) : v121;
  if ( !v54 )
    goto LABEL_75;
  if ( !v107 )
    goto LABEL_253;
  valid = RtlSidDominates(Buf1, v54, (int)&v111);
  v95 = valid;
  if ( valid < 0 )
    goto LABEL_119;
  if ( !(_BYTE)v111 )
    LOWORD(v111) = 256;
LABEL_75:
  v131 = (int *)(a7 & 1);
  LOBYTE(v50) = a7 & 1;
  v55 = RtlpInheritAcl(
          *((_WORD *)v108 + 1) & 0x140C,
          a6,
          v50,
          Handle,
          v101,
          v109,
          v116,
          v122,
          v117,
          1,
          v129,
          a5,
          &Src,
          &v105,
          &v124);
  valid = v55;
  v95 = v55;
  if ( v55 < 0 )
  {
    if ( v55 != -2147483637 )
      goto LABEL_193;
    v56 = v131;
    if ( v131 )
      v102 |= 0x400u;
    v82 = *((_WORD *)v108 + 1);
    if ( (v82 & 0xC) == 0xC )
    {
      if ( (v82 & 4) != 0 )
      {
        v90 = (void *)*((_DWORD *)v108 + 4);
        if ( *((__int16 *)v108 + 1) < 0 )
          v90 = v90 != 0 ? &v108[(_DWORD)v90] : 0;
      }
      else
      {
        v90 = 0;
      }
      Src = v90;
      v105 = 1;
      v102 |= v82 & 0x1000 | 4;
    }
    else if ( v132 )
    {
      v102 |= 4u;
      Src = (void *)v132;
    }
  }
  else
  {
    v56 = v131;
    v100 = 1;
    v102 |= v124 & 0x1408 | 4;
  }
  v57 = v107;
  if ( (a7 & 0x1000) != 0 || !v113 || !v107 || !v106 )
  {
LABEL_88:
    if ( v56 && !Src )
      v102 |= 0x1000u;
    v62 = !v148 || (v148 & 0x1B0) != v148;
    v63 = v130;
    if ( v96 && !v130 && v62 )
    {
      if ( !v57 )
        goto LABEL_253;
      v159 = 8;
      v160 = 0;
      v157 = 1;
      v158 = 1;
      v161 = 0;
      valid = ZwPrivilegeCheck(v57, &v157, &v103);
      v95 = valid;
      if ( valid < 0 )
        goto LABEL_193;
      if ( !v103 )
      {
LABEL_275:
        valid = -1073741727;
        goto LABEL_254;
      }
    }
    if ( BYTE1(v111) )
    {
      v16 = v63 == 0;
      v64 = v107;
      if ( v16 )
      {
        if ( !v107 )
          goto LABEL_253;
        v159 = 32;
        v157 = 1;
        v158 = 1;
        v160 = 0;
        v161 = 0;
        valid = ZwPrivilegeCheck(v107, &v157, &v103);
        v95 = valid;
        if ( valid < 0 )
          goto LABEL_193;
        if ( !v103 )
          goto LABEL_275;
      }
    }
    else
    {
      v64 = v107;
    }
    if ( !v104 || (a7 & 0x10) != 0 )
    {
      v65 = (unsigned __int8 *)v101;
      goto LABEL_98;
    }
    if ( v64 )
    {
      v65 = (unsigned __int8 *)v101;
      if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v107, v101, v153, &v149) )
      {
        valid = v149;
LABEL_254:
        v95 = valid;
        goto LABEL_119;
      }
LABEL_98:
      if ( (_WORD)v147 && v105 )
      {
        v92 = Src;
        ServerAcl = RtlpCreateServerAcl(v116, (int)&v128, (int)&v111 + 2);
        valid = ServerAcl;
        v95 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_193;
        if ( v100 && v92 )
          RtlFreeHeap(v125, 0, (int)v92);
        v66 = 0;
        Src = (void *)v128;
        v128 = 0;
      }
      else
      {
        v66 = 0;
      }
      Size = 4 * v65[1] + 8;
      if ( v109 )
      {
        v67 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
        v132 = v67;
      }
      else
      {
        v67 = 0;
        v132 = 0;
      }
      v137 = v102 & 0x10;
      if ( (v102 & 0x10) != 0 && v98 )
        v68 = (*((unsigned __int16 *)v98 + 1) + 3) & 0xFFFFFFFC;
      else
        v68 = 0;
      v149 = v102 & 4;
      if ( (v102 & 4) != 0 && Src )
        v66 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      v123 = v66;
      Heap = (_DWORD *)RtlAllocateHeap(v125, NtdllBaseTag + 1310720, v67 + Size + v68 + v66 + 20);
      if ( Heap )
      {
        RtlCreateSecurityDescriptorRelative();
        v70 = (char *)(v69 + 5);
        *((_WORD *)v69 + 1) |= v102;
        if ( v137 )
        {
          v80 = (unsigned __int16 *)v98;
          if ( v98 )
          {
            memcpy(v69 + 5, v98, *((unsigned __int16 *)v98 + 1));
            if ( !v99 )
              RtlpApplyAclToObject((int)v70, v117);
            Heap[3] = 20;
            v81 = v80[1];
            if ( v68 > v81 )
              memset(&v70[v81], 0, v68 - v81);
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
            memcpy(v70, Src, *((unsigned __int16 *)Src + 1));
            if ( !v100 )
              RtlpApplyAclToObject((int)v70, v117);
            Heap[4] = v70 - (char *)Heap;
            v72 = v71[1];
            v73 = v123;
            if ( v123 > v72 )
              memset(&v70[v72], 0, v123 - v72);
            v70 += v73;
          }
          else
          {
            v69[4] = 0;
          }
        }
        v74 = Size;
        memcpy(v70, v101, Size);
        v75 = (char *)Heap;
        v76 = v70 - (char *)Heap;
        v77 = &v70[v74];
        Heap[1] = v76;
        if ( v109 )
        {
          memcpy(v77, v109, v132);
          *((_DWORD *)v75 + 2) = v77 - v75;
        }
        v52 = v98;
        valid = 0;
        v95 = 0;
        goto LABEL_119;
      }
      valid = -1073741801;
LABEL_236:
      v95 = valid;
      goto LABEL_193;
    }
LABEL_253:
    valid = -1073741700;
    goto LABEL_254;
  }
  v151 = 0;
  v123 = 0;
  valid = RtlpNewSecurityObject(&v134, v129, a5, a6, a7 | 1, v107, v117, 0);
  v95 = valid;
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
    v57 = v107;
    goto LABEL_88;
  }
  v152 = 20;
  Handle = 0;
  if ( (_BYTE)Size != 1 )
  {
LABEL_265:
    v91 = v107;
    goto LABEL_266;
  }
  v162[0] = 12;
  v155[5] = v162;
  v162[1] = 2;
  v163 = 1;
  v155[0] = 24;
  memset(&v155[1], 0, 16);
  valid = NtDuplicateToken(v107, 8, v155, 0, 2, &Handle);
  v95 = valid;
  if ( valid >= 0 )
  {
    v91 = Handle;
    if ( !Handle )
      goto LABEL_265;
LABEL_266:
    valid = NtAccessCheck(v134, v91, 0x40000, v117, &v157, &v152, &v151, &v123);
    v95 = valid;
    if ( Handle )
      NtClose(Handle);
    if ( valid >= 0 )
    {
      valid = v123;
      v95 = v123;
      if ( v123 >= 0 )
        goto LABEL_87;
    }
  }
LABEL_193:
  v52 = v98;
LABEL_119:
  if ( v134 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v134);
    v52 = v110;
    valid = v95;
  }
  if ( BYTE2(v111) && v128 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v128);
    v52 = v110;
    valid = v95;
  }
  v78 = v125;
  RtlFreeHeap(v125, 0, (int)v138);
  RtlFreeHeap(v78, 0, (int)v139);
  RtlFreeHeap(v78, 0, (int)v140);
  RtlFreeHeap(v78, 0, (int)v141);
  RtlFreeHeap(v78, 0, (int)v142);
  if ( v143 )
    RtlFreeHeap(v78, 0, (int)v143);
  if ( v144 )
    RtlFreeHeap(v78, 0, (int)v144);
  if ( (HIBYTE(v111) || v99) && v52 )
    RtlFreeHeap(v78, 0, (int)v52);
  if ( v112 && v126 )
    RtlFreeHeap(v78, 0, v126);
  if ( v100 )
  {
    if ( Src )
      RtlFreeHeap(v78, 0, (int)Src);
  }
  *v154 = Heap;
  return valid;
}

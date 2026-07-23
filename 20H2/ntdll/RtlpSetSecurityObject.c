/*
 * XREFs of RtlpSetSecurityObject @ 0x1800767AC
 * Callers:
 *     RtlSetSecurityObject @ 0x180076770 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x1800D7630 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlFindAceByType @ 0x18003C040 (RtlFindAceByType.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D258 (RtlpValidFilterAclSubjectContext.c)
 *     RtlInitializeSid @ 0x1800400B0 (RtlInitializeSid.c)
 *     RtlpValidTrustSubjectContext @ 0x180066948 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180067008 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800719E4 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x180076CE8 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D3D0 (RtlpValidOwnerSubjectContext.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x18009F5A0 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpComputeMergedAcl @ 0x1800E7660 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E880C (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8DB4 (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800E9F94 (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        char a5,
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v10; // rbx
  __int16 v12; // dx
  int v13; // r15d
  ACL *v14; // rdi
  char *v15; // rcx
  unsigned __int16 *v16; // r14
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  char *v22; // rax
  _QWORD *v23; // rax
  char *v24; // rcx
  PVOID v25; // rdi
  __int16 v26; // cx
  unsigned __int16 *v27; // rsi
  int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  char *v32; // rax
  _WORD *v33; // rdi
  char *v34; // r14
  int v35; // eax
  __int16 v36; // ax
  unsigned __int16 *v37; // r15
  __int64 v38; // rcx
  char v39; // bl
  PVOID *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  char *v44; // r14
  int valid; // ebx
  PVOID v46; // r14
  int v48; // esi
  unsigned int v49; // eax
  unsigned int v50; // eax
  void *v51; // rax
  __int64 v52; // r8
  void *v53; // rax
  void *v54; // r14
  _DWORD *v55; // rax
  _DWORD *v56; // rdi
  void *v57; // rcx
  PVOID v58; // rdi
  void *v59; // r14
  _DWORD *AceByType; // rax
  __int64 v61; // r8
  _DWORD *v62; // rbx
  __int64 v63; // rdx
  int v64; // r14d
  PVOID v65; // r8
  unsigned int v66; // edx
  ACL *v67; // rax
  PACL v68; // r14
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // edx
  __int16 v73; // ax
  unsigned __int8 *v74; // rdx
  __int64 v75; // r8
  _QWORD *v76; // rax
  __int16 v77; // dx
  __int64 v78; // rcx
  _QWORD *Heap; // rdi
  void *v80; // r8
  int v81; // edx
  char *v82; // rax
  char *v83; // rcx
  __int64 AceBySid; // rax
  char v85; // cl
  ACL *v86; // [rsp+50h] [rbp-B0h]
  char v87; // [rsp+59h] [rbp-A7h]
  char v88; // [rsp+5Ah] [rbp-A6h]
  char v89; // [rsp+5Bh] [rbp-A5h]
  char v90; // [rsp+5Ch] [rbp-A4h]
  char v91; // [rsp+5Dh] [rbp-A3h]
  char v92; // [rsp+5Eh] [rbp-A2h]
  char v93; // [rsp+5Fh] [rbp-A1h]
  char v94; // [rsp+60h] [rbp-A0h]
  char v95; // [rsp+61h] [rbp-9Fh]
  char v96[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v97; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG Index; // [rsp+68h] [rbp-98h] BYREF
  PVOID v99; // [rsp+70h] [rbp-90h] BYREF
  size_t v100; // [rsp+78h] [rbp-88h] BYREF
  PVOID v101; // [rsp+80h] [rbp-80h] BYREF
  bool v102; // [rsp+88h] [rbp-78h]
  bool v103; // [rsp+89h] [rbp-77h]
  void *v104; // [rsp+90h] [rbp-70h]
  void *v105; // [rsp+98h] [rbp-68h]
  PACL Acl; // [rsp+A0h] [rbp-60h]
  PVOID *v107; // [rsp+A8h] [rbp-58h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v109; // [rsp+B8h] [rbp-48h]
  __int16 v110; // [rsp+C0h] [rbp-40h]
  int v111; // [rsp+C4h] [rbp-3Ch]
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  size_t Size; // [rsp+D0h] [rbp-30h]
  void *Src; // [rsp+D8h] [rbp-28h]
  unsigned int v115; // [rsp+E0h] [rbp-20h]
  BOOL v116; // [rsp+E4h] [rbp-1Ch]
  ULONG TokenInformationLength; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v118; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v119; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v120; // [rsp+100h] [rbp+0h] BYREF
  ULONG ReturnLength; // [rsp+108h] [rbp+8h] BYREF
  PVOID v122; // [rsp+110h] [rbp+10h] BYREF
  PVOID v123; // [rsp+118h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+120h] [rbp+20h] BYREF
  PVOID v125[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v126; // [rsp+138h] [rbp+38h]
  _BYTE TokenInformation[24]; // [rsp+140h] [rbp+40h] BYREF
  int v128; // [rsp+158h] [rbp+58h]
  int v129; // [rsp+15Ch] [rbp+5Ch]
  char Sid[8]; // [rsp+178h] [rbp+78h] BYREF
  int v131; // [rsp+180h] [rbp+80h]

  v10 = TokenHandle;
  v126 = a3;
  v107 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v109 = a7;
  Size = (size_t)TokenHandle;
  v13 = 0x8000;
  v88 = 0;
  v87 = 0;
  v96[0] = 0;
  v89 = 0;
  v95 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v123 = 0LL;
  Src = 0LL;
  v122 = 0LL;
  v99 = 0LL;
  v118 = 0LL;
  v101 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  LOBYTE(v115) = 0;
  v116 = v8;
  BaseAddress = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(ACL **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = (char *)*a4;
  Acl = v14;
  if ( (v15[2] & 0x10) == 0 )
  {
LABEL_74:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v15 + 1) < 0 )
  {
    if ( *((_DWORD *)v15 + 3) )
    {
      v16 = (unsigned __int16 *)&v15[*((unsigned int *)v15 + 3)];
      goto LABEL_7;
    }
    goto LABEL_74;
  }
  v16 = (unsigned __int16 *)*((_QWORD *)v15 + 3);
LABEL_7:
  Handle = 0LL;
  v86 = (ACL *)v16;
  v125[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v110 = v12 & 0x80;
  v102 = v110 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v103 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v48 = a2 | 0x1FF;
    v49 = v48 & 0xFFFFFF7F;
    if ( v18 )
      v49 = v48;
    a2 = v49 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v49;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v12 & 0x10) != 0 )
        a2 |= 8u;
      else
        v116 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*((_DWORD *)v15 + 1) )
      return (unsigned int)-1073741734;
    v20 = *((unsigned int *)v15 + 1);
    v21 = &v15[v20] == 0LL;
    v22 = &v15[v20];
    v104 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v50 = a2 >> 2;
  LOBYTE(v50) = (a2 & 4) == 0;
  v115 = v50;
  if ( v12 >= 0 )
  {
    v51 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v104 = 0LL;
      goto LABEL_92;
    }
    v51 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v104 = v51;
LABEL_92:
  v87 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    LODWORD(v100) = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    valid = v100;
    if ( (v100 & 0x80000000) != 0LL )
      return (unsigned int)valid;
    if ( v128 == 2 && v129 < 1 )
      return (unsigned int)-1073741659;
    v10 = (HANDLE)Size;
    LOBYTE(v52) = v102;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(Size, v104, v52, &v100) )
      return (unsigned int)-1073741734;
  }
  v22 = (char *)v104;
LABEL_12:
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v53 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v105 = 0LL;
LABEL_105:
        v24 = (char *)v105;
        v88 = 1;
        goto LABEL_18;
      }
      v53 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v105 = v53;
    goto LABEL_105;
  }
  v23 = *v107;
  if ( *((__int16 *)*v107 + 1) >= 0 )
  {
    v24 = (char *)v23[2];
  }
  else
  {
    if ( !*((_DWORD *)v23 + 2) )
    {
LABEL_240:
      valid = -1073741733;
      goto LABEL_55;
    }
    v24 = (char *)v23 + *((unsigned int *)v23 + 2);
  }
  v105 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_240;
  if ( !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v25 = v101;
    Src = v16;
    goto LABEL_22;
  }
  v111 = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_125:
    LODWORD(v100) = RtlpGetDefaultTrustSubjectContext(v10, v125);
    valid = v100;
    if ( (v100 & 0x80000000) != 0LL )
      return (unsigned int)valid;
    v58 = v125[0];
    LODWORD(Size) = a2 & 0x80;
    v59 = *(void **)v125[0];
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v59 )
      {
LABEL_138:
        valid = -1073741790;
        goto LABEL_140;
      }
      Index = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &Index);
        v62 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_140;
          }
          if ( !RtlpValidTrustSubjectContext(v59, AceByType + 2, v61, (NTSTATUS *)&v100) )
            goto LABEL_138;
        }
        ++Index;
      }
      while ( v62 );
    }
    LODWORD(v100) = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_143;
    valid = RtlpValidFilterAclSubjectContext(Acl, (__int64)v59);
    if ( valid < 0 )
      goto LABEL_140;
    if ( (a5 & 2) != 0 )
    {
LABEL_143:
      v64 = (int)v86;
    }
    else
    {
      v63 = (__int64)v59;
      v64 = (int)v86;
      valid = RtlpValidFilterAclSubjectContext(v86, v63);
      if ( valid < 0 )
      {
LABEL_140:
        v65 = v58;
        goto LABEL_142;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, v58);
    if ( (a2 & 8) != 0 )
    {
      v66 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  v64,
                  (*((_WORD *)*v107 + 1) & 0x2800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                  (_DWORD)Acl,
                  (v66 & 0x2800 | (v66 >> 1) & 0x18) >> 1,
                  (__int64)v104,
                  (__int64)v105,
                  v109,
                  2,
                  (__int64)&v99,
                  (__int64)&v97);
        if ( valid < 0 )
        {
          v46 = v99;
          v25 = v101;
          goto LABEL_57;
        }
        v90 = 1;
        v13 = 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 0x2004)));
      }
      else
      {
        v99 = Acl;
        v13 = v66 & 0x2000 | 0x8010;
        if ( (v66 & 0xA00) == 0xA00 )
          v13 = v66 & 0x2000 | 0x8810;
      }
      v67 = v86;
    }
    else
    {
      v67 = v86;
      v99 = v86;
    }
    v68 = Acl;
    if ( (a2 & 0x20) != 0 )
    {
      v69 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v86,
                  (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                  (_DWORD)Acl,
                  (v69 & 0x800 | (v69 >> 1) & 0x18) >> 1,
                  (__int64)v104,
                  (__int64)v105,
                  v109,
                  2,
                  (__int64)&v101,
                  (__int64)&v97);
        if ( valid < 0 )
          goto LABEL_176;
        v91 = 1;
        v13 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
      }
      else
      {
        v101 = Acl;
        v13 |= v69 & 0x2000 | 0x10;
        if ( (v69 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v67 = v86;
    }
    else
    {
      v101 = v67;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v70 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v86,
                  (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                  (_DWORD)v68,
                  (v70 & 0x800 | (v70 >> 1) & 0x18) >> 1,
                  (__int64)v104,
                  (__int64)v105,
                  v109,
                  2,
                  (__int64)&v118,
                  (__int64)&v97);
        if ( valid < 0 )
          goto LABEL_176;
        v92 = 1;
        v13 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
      }
      else
      {
        v118 = v68;
        v13 |= v70 & 0x2000 | 0x10;
        if ( (v70 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v67 = v86;
    }
    else
    {
      v118 = v67;
    }
    if ( (_DWORD)Size )
    {
      v71 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v86,
                  (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                  (_DWORD)v68,
                  (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                  (__int64)v104,
                  (__int64)v105,
                  v109,
                  2,
                  (__int64)&v119,
                  (__int64)&v97);
        if ( valid < 0 )
          goto LABEL_176;
        v93 = 1;
        v13 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
      }
      else
      {
        v119 = v68;
        v13 |= v71 & 0x2000 | 0x10;
        if ( (v71 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v67 = v86;
    }
    else
    {
      v119 = v67;
    }
    if ( !(_DWORD)v100 )
    {
      v120 = v67;
      goto LABEL_173;
    }
    v72 = *(unsigned __int16 *)(a3 + 2);
    if ( (a5 & 2) == 0 )
    {
      v120 = v68;
      v13 |= v72 & 0x2000 | 0x10;
      if ( (v72 & 0xA00) == 0xA00 )
        v13 |= 0x800u;
      goto LABEL_172;
    }
    valid = RtlpComputeMergedAcl(
              (_DWORD)v86,
              (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
              (_DWORD)v68,
              (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
              (__int64)v104,
              (__int64)v105,
              v109,
              2,
              (__int64)&v120,
              (__int64)&v97);
    if ( valid >= 0 )
    {
      v94 = 1;
      v13 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
LABEL_172:
      v67 = v86;
LABEL_173:
      if ( v111 )
      {
        v73 = *(_WORD *)(a3 + 2);
        v13 |= v73 & 0x2000 | 0x10;
        if ( (v73 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      else
      {
        v68 = v67;
      }
      v25 = v101;
      v74 = (unsigned __int8 *)v68;
      v46 = v99;
      valid = RtlpCombineAcls(
                (unsigned __int8 *)v99,
                v74,
                (unsigned __int8 *)v101,
                (unsigned __int8 *)v118,
                (unsigned __int8 *)v119,
                (unsigned __int8 *)v120,
                (ACL **)&v122,
                0LL);
      if ( valid < 0 )
        goto LABEL_57;
      v16 = (unsigned __int16 *)v122;
      Src = v122;
      if ( !v99 && v122 && !*((_WORD *)v122 + 2) )
      {
        RtlFreeHeap(ProcessHeap, 0, v122);
        v16 = 0LL;
        Src = 0LL;
      }
      v95 = 1;
LABEL_22:
      if ( (a2 & 4) != 0 )
      {
        v26 = *(_WORD *)(a3 + 2);
        if ( (a5 & 1) == 0 )
        {
          if ( (v26 & 4) == 0 )
            goto LABEL_69;
          if ( v26 >= 0 )
          {
            v27 = *(unsigned __int16 **)(a3 + 32);
            goto LABEL_27;
          }
          if ( *(_DWORD *)(a3 + 16) )
            v27 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
          else
LABEL_69:
            v27 = 0LL;
LABEL_27:
          v13 |= v26 & 0x1000 | 4;
          if ( (v26 & 0x500) == 0x500 )
            v13 |= 0x400u;
LABEL_29:
          if ( !v110 )
            goto LABEL_30;
          TokenInformationLength = 76;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
          if ( !Heap )
          {
LABEL_216:
            valid = -1073741801;
            goto LABEL_55;
          }
          valid = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
          v80 = Heap;
          if ( valid < 0 )
          {
LABEL_215:
            RtlFreeHeap(ProcessHeap, 0, v80);
            goto LABEL_55;
          }
          valid = NtQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
          NtClose(Handle);
          if ( valid < 0 )
          {
            v80 = Heap;
            goto LABEL_215;
          }
          LOBYTE(v81) = v103;
          valid = RtlpCreateServerAcl((_DWORD)v27, v81, *Heap, (unsigned int)&BaseAddress, (__int64)v96);
          RtlFreeHeap(ProcessHeap, 0, Heap);
          if ( valid >= 0 )
          {
            v27 = (unsigned __int16 *)BaseAddress;
            goto LABEL_30;
          }
LABEL_55:
          v46 = v99;
          v25 = v101;
          if ( v89 )
            RtlFreeHeap(ProcessHeap, 0, v123);
          goto LABEL_57;
        }
        if ( (v26 & 4) != 0 )
        {
          if ( v26 >= 0 )
          {
            v75 = *(_QWORD *)(a3 + 32);
LABEL_203:
            v76 = *v107;
            v77 = *((_WORD *)*v107 + 1);
            if ( (v77 & 4) != 0 )
            {
              if ( v77 >= 0 )
              {
                v78 = v76[4];
LABEL_209:
                valid = RtlpComputeMergedAcl(
                          v78,
                          v77 & 0x140C,
                          v75,
                          *(_WORD *)(a3 + 2) & 0x140C,
                          (__int64)v104,
                          (__int64)v105,
                          v109,
                          1,
                          (__int64)&v123,
                          (__int64)&v97);
                if ( valid >= 0 )
                {
                  v27 = (unsigned __int16 *)v123;
                  v89 = 1;
                  v13 |= v97 & 0x1408 | 4;
                  goto LABEL_29;
                }
                goto LABEL_177;
              }
              if ( *((_DWORD *)v76 + 4) )
              {
                LODWORD(v78) = (_DWORD)v76 + *((_DWORD *)v76 + 4);
                goto LABEL_209;
              }
            }
            LODWORD(v78) = 0;
            goto LABEL_209;
          }
          if ( *(_DWORD *)(a3 + 16) )
          {
            LODWORD(v75) = a3 + *(_DWORD *)(a3 + 16);
            goto LABEL_203;
          }
        }
        LODWORD(v75) = 0;
        goto LABEL_203;
      }
      v82 = (char *)*v107;
      if ( (*((_BYTE *)*v107 + 2) & 4) != 0 )
      {
        if ( *((__int16 *)v82 + 1) >= 0 )
        {
          v27 = (unsigned __int16 *)*((_QWORD *)v82 + 4);
LABEL_30:
          v28 = 4 * *((unsigned __int8 *)v104 + 1) + 8;
          LODWORD(Size) = v28;
          v29 = 4 * *((unsigned __int8 *)v105 + 1) + 8;
          LODWORD(v100) = v29;
          if ( v16 )
            v30 = (v16[1] + 3) & 0xFFFFFFFC;
          else
            v30 = 0;
          if ( v27 )
            v31 = (v27[1] + 3) & 0xFFFFFFFC;
          else
            v31 = 0;
          v32 = (char *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v29 + v31 + v30 + v28 + 20);
          v33 = v32;
          if ( v32 )
          {
            v34 = v32 + 20;
            *(_OWORD *)v32 = 0LL;
            *((_DWORD *)v32 + 4) = 0;
            *v32 = 1;
            v35 = v13 | 0x800;
            if ( !v116 )
              v35 = v13;
            v111 = v35;
            v36 = v33[1] | v35;
            v33[1] = v36;
            if ( (*(_WORD *)(v126 + 2) & 0x4000) != 0 )
            {
              *((_BYTE *)v33 + 1) = *(_BYTE *)(v126 + 1);
              v33[1] = v36 | 0x4000;
            }
            v37 = (unsigned __int16 *)Src;
            if ( Src )
            {
              memmove(v33 + 10, Src, *((unsigned __int16 *)Src + 1));
              RtlpApplyAclToObject(v33 + 10, v109);
              *((_DWORD *)v33 + 3) = (_DWORD)v34 - (_DWORD)v33;
              v38 = v37[1];
              if ( v30 > (unsigned int)v38 )
                memset(&v34[v38], 0, v30 - (unsigned int)v38);
              v34 += v30;
            }
            else
            {
              *((_DWORD *)v33 + 3) = 0;
            }
            v39 = v111;
            v40 = v107;
            if ( (v111 & 0x10) == 0 )
              v33[1] |= *((_WORD *)*v107 + 1) & 0x2830;
            if ( v27 )
            {
              memmove(v34, v27, v27[1]);
              RtlpApplyAclToObject(v34, v109);
              *((_DWORD *)v33 + 4) = (_DWORD)v34 - (_DWORD)v33;
              v41 = v27[1];
              if ( v31 > (unsigned int)v41 )
                memset(&v34[v41], 0, v31 - (unsigned int)v41);
              v34 += v31;
            }
            else
            {
              *((_DWORD *)v33 + 4) = 0;
            }
            if ( (v39 & 4) != 0 || (v33[1] |= *((_WORD *)*v40 + 1) & 0x140C, !(_BYTE)v115) )
            {
LABEL_50:
              v42 = (unsigned int)Size;
              memmove(v34, v104, (unsigned int)Size);
              v43 = (int)v34;
              v44 = &v34[v42];
              valid = 0;
              *((_DWORD *)v33 + 1) = v43 - (_DWORD)v33;
              if ( !v87 )
                v33[1] |= *((_WORD *)*v40 + 1) & 1;
              memmove(v44, v105, (unsigned int)v100);
              *((_DWORD *)v33 + 2) = (_DWORD)v44 - (_DWORD)v33;
              if ( !v88 )
                v33[1] |= *((_WORD *)*v40 + 1) & 2;
              RtlFreeHeap(ProcessHeap, 0, *v40);
              *v40 = v33;
            }
            else
            {
              *(_DWORD *)IdentifierAuthority.Value = 0;
              *(_WORD *)&IdentifierAuthority.Value[4] = 768;
              valid = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
              if ( valid >= 0 )
              {
                v131 = 4;
                Index = 0;
                while ( 1 )
                {
                  if ( (v33[1] & 4) == 0 )
                    goto LABEL_236;
                  if ( (__int16)v33[1] < 0 )
                    break;
                  v83 = (char *)*((_QWORD *)v33 + 4);
LABEL_238:
                  AceBySid = RtlFindAceBySid(v83, Sid, &Index);
                  if ( !AceBySid )
                    goto LABEL_50;
                  v85 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                  ++Index;
                  *(_BYTE *)(AceBySid + 1) = v85;
                }
                if ( *((_DWORD *)v33 + 4) )
                {
                  v83 = (char *)v33 + *((unsigned int *)v33 + 4);
                  goto LABEL_238;
                }
LABEL_236:
                v83 = 0LL;
                goto LABEL_238;
              }
            }
            goto LABEL_55;
          }
          goto LABEL_216;
        }
        if ( *((_DWORD *)v82 + 4) )
        {
          v27 = (unsigned __int16 *)&v82[*((unsigned int *)v82 + 4)];
          goto LABEL_30;
        }
      }
      v27 = 0LL;
      goto LABEL_30;
    }
LABEL_176:
    v25 = v101;
LABEL_177:
    v46 = v99;
LABEL_57:
    if ( v46 && v90 )
      RtlFreeHeap(ProcessHeap, 0, v46);
    if ( v25 && v91 )
      RtlFreeHeap(ProcessHeap, 0, v25);
    if ( v118 && v92 )
      RtlFreeHeap(ProcessHeap, 0, v118);
    if ( v119 && v93 )
      RtlFreeHeap(ProcessHeap, 0, v119);
    if ( v120 && v94 )
      RtlFreeHeap(ProcessHeap, 0, v120);
    if ( Src && v95 )
      RtlFreeHeap(ProcessHeap, 0, Src);
    if ( !v96[0] )
      return (unsigned int)valid;
    v65 = BaseAddress;
LABEL_142:
    RtlFreeHeap(ProcessHeap, 0, v65);
    return (unsigned int)valid;
  }
  Index = 0;
  v54 = 0LL;
  while ( 1 )
  {
    v55 = RtlFindAceByType(v14, 0x11u, &Index);
    v56 = v55;
    if ( v55 )
    {
      v54 = v55 + 2;
      if ( (v55[1] & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v10 )
    {
      LODWORD(v100) = NtQueryInformationToken(v10, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      valid = v100;
      if ( (v100 & 0x80000000) != 0LL )
        return (unsigned int)valid;
      if ( v128 == 2 && v129 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      LODWORD(v100) = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      valid = v100;
      if ( (v100 & 0x80000000) != 0LL )
        return (unsigned int)valid;
    }
    v10 = (HANDLE)Size;
    v57 = Handle;
    if ( Size )
      v57 = (void *)Size;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v57, v54) )
    {
      NtClose(Handle);
      break;
    }
    NtClose(Handle);
    ++Index;
    if ( !v56 )
      goto LABEL_125;
    v14 = Acl;
  }
  return (unsigned int)-1073740730;
}

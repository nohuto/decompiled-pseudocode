/*
 * XREFs of RtlpSetSecurityObject @ 0x1405F64F0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x1405F64A0 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406D5250 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140209CB0 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x14020F8B0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14020F908 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14032F5B0 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpApplyAclToObject @ 0x1406047B0 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x140604870 (RtlpCombineAcls.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x1406305E4 (SepValidLabelSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406C1D3C (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406D4C44 (RtlpCreateServerAcl.c)
 *     RtlInitializeSid @ 0x14071B790 (RtlInitializeSid.c)
 *     RtlpComputeMergedAcl @ 0x140916780 (RtlpComputeMergedAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1409175E4 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x140923848 (SepGetDefaultsSubjectContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  _BOOL8 v8; // r12
  _QWORD *v9; // rsi
  __int64 v11; // r13
  unsigned __int16 *v12; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r11
  __int16 v14; // ax
  void *v15; // rdi
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  ACL *v19; // r15
  __int16 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 *v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  void *v28; // r15
  __int16 v29; // cx
  unsigned __int16 *v30; // r15
  __int16 v31; // dx
  unsigned int v32; // r13d
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v37; // rbx
  char *v38; // rdi
  __int16 v39; // ax
  __int64 v40; // rdx
  __int16 v41; // cx
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // rcx
  char *v45; // rdi
  NTSTATUS valid; // esi
  void *v47; // r12
  void *v48; // rdi
  void *v49; // rbx
  _BYTE *AceByType; // rax
  _BYTE *v52; // r13
  char *v53; // rax
  void *TokenTrustLevel; // r13
  ULONG v55; // ecx
  __int64 v56; // r8
  int v57; // r11d
  void *v58; // r10
  __int16 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int16 v62; // ax
  __int16 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int16 v67; // cx
  __int64 v68; // rcx
  __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v73; // cl
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // eax
  __int64 v77; // rax
  _DWORD *v78; // rax
  __int64 v79; // r8
  unsigned int v80; // edx
  __int64 v81; // rax
  int v82; // ebx
  unsigned int v83; // eax
  unsigned int v84; // edx
  unsigned int v85; // edx
  __int64 v86; // r8
  int v87; // eax
  __int64 v88; // rax
  __int16 v89; // dx
  __int64 v90; // rcx
  int v91; // ecx
  unsigned __int8 v92; // cl
  __int16 v93; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  int v95; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v96; // [rsp+64h] [rbp-A4h]
  bool v97; // [rsp+65h] [rbp-A3h]
  bool v98; // [rsp+66h] [rbp-A2h]
  char v99; // [rsp+67h] [rbp-A1h]
  char v100; // [rsp+68h] [rbp-A0h]
  char v101; // [rsp+69h] [rbp-9Fh]
  char v102; // [rsp+6Ah] [rbp-9Eh]
  char v103; // [rsp+6Bh] [rbp-9Dh]
  char v104; // [rsp+6Ch] [rbp-9Ch]
  char v105; // [rsp+6Dh] [rbp-9Bh]
  char v106; // [rsp+6Eh] [rbp-9Ah]
  char v107; // [rsp+6Fh] [rbp-99h]
  __int64 v108; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h]
  void *v110; // [rsp+80h] [rbp-88h]
  PVOID v111; // [rsp+88h] [rbp-80h]
  PVOID v112; // [rsp+90h] [rbp-78h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+98h] [rbp-70h] BYREF
  PVOID v114; // [rsp+A0h] [rbp-68h]
  PVOID v115; // [rsp+A8h] [rbp-60h]
  _QWORD *v116; // [rsp+B0h] [rbp-58h]
  __int64 v117; // [rsp+B8h] [rbp-50h]
  __int64 v118; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+C8h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp-38h] BYREF
  BOOL v121; // [rsp+D8h] [rbp-30h]
  unsigned int v122; // [rsp+DCh] [rbp-2Ch]
  void *v123; // [rsp+E0h] [rbp-28h]
  __int64 *v124; // [rsp+E8h] [rbp-20h]
  __int64 v125; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v126; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v127; // [rsp+100h] [rbp-8h] BYREF
  __int64 v128; // [rsp+108h] [rbp+0h] BYREF
  __int64 v129; // [rsp+110h] [rbp+8h] BYREF
  char *v130; // [rsp+118h] [rbp+10h]
  NTSTATUS v131; // [rsp+120h] [rbp+18h] BYREF
  PVOID v132; // [rsp+128h] [rbp+20h] BYREF
  PVOID v133; // [rsp+130h] [rbp+28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+138h] [rbp+30h] BYREF
  __int16 Sid; // [rsp+158h] [rbp+50h] BYREF
  int v136; // [rsp+160h] [rbp+58h]
  _BOOL8 v137; // [rsp+1B0h] [rbp+A8h]

  v9 = a4;
  v137 = v8;
  LOBYTE(v8) = 0;
  *(_DWORD *)PoolType.Value = a6;
  v11 = a3;
  v12 = 0LL;
  p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)a8;
  v118 = a7;
  v14 = *(_WORD *)(a3 + 2);
  v116 = a4;
  v117 = a3;
  v124 = a8;
  v100 = 0;
  v99 = 0;
  LOBYTE(v108) = 0;
  v101 = 0;
  v107 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v131 = 0;
  v132 = 0LL;
  P = 0LL;
  v111 = 0LL;
  v125 = 0LL;
  v112 = 0LL;
  v127 = 0LL;
  v114 = 0LL;
  v126 = 0LL;
  v110 = 0LL;
  v128 = 0LL;
  v115 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v96 = 0;
  LOBYTE(v122) = 0;
  v121 = v8;
  v95 = 0;
  v93 = 0x8000;
  v133 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v64 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v64 )
        v15 = (void *)(v64 + a3);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v16 = *v9;
    p_SubjectContext = &SubjectContext;
    v124 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v16 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_76;
  }
  v20 = *(_WORD *)(v11 + 2);
  v97 = (v20 & 0x80u) != 0;
  v98 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  LOBYTE(a4) = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v82 = a2 | 0x1FF;
    v83 = v82 & 0xFFFFFF7F;
    if ( v21 )
      v83 = v82;
    a2 = v83 & 0xFFFFFEFF;
    if ( (_BYTE)a4 )
      a2 = v83;
    if ( !v19 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
        a2 |= 8u;
      else
        v121 = (v20 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v16 + 2) >= 0 )
    {
      v23 = *(unsigned __int8 **)(v16 + 8);
    }
    else
    {
      v22 = *(unsigned int *)(v16 + 4);
      if ( !(_DWORD)v22 )
        goto LABEL_247;
      v23 = (unsigned __int8 *)(v16 + v22);
    }
    v123 = v23;
    v24 = v23 == 0LL;
LABEL_16:
    if ( !v24 )
      goto LABEL_17;
LABEL_247:
    valid = -1073741734;
    goto LABEL_76;
  }
  v76 = a2 >> 2;
  LOBYTE(v76) = (a2 & 4) == 0;
  v122 = v76;
  if ( v20 >= 0 )
  {
    v23 = *(unsigned __int8 **)(v11 + 8);
  }
  else
  {
    v77 = *(unsigned int *)(v11 + 4);
    if ( (_DWORD)v77 )
      v23 = (unsigned __int8 *)(v77 + v11);
    else
      v23 = 0LL;
  }
  v123 = v23;
  v99 = 1;
  if ( (a5 & 8) == 0 )
  {
    v24 = (unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v23, (v20 & 0x80u) != 0, a4) == 0;
    goto LABEL_16;
  }
LABEL_17:
  if ( !RtlValidSid(v23) )
    goto LABEL_247;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v11 + 16);
    }
    else
    {
      v81 = *(unsigned int *)(v11 + 8);
      if ( (_DWORD)v81 )
        v27 = (unsigned __int8 *)(v81 + v11);
      else
        v27 = 0LL;
    }
    v100 = 1;
  }
  else
  {
    v25 = *v9;
    if ( *(__int16 *)(*v9 + 2LL) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v25 + 16);
    }
    else
    {
      v26 = *(unsigned int *)(v25 + 8);
      if ( !(_DWORD)v26 )
      {
LABEL_191:
        valid = -1073741733;
        goto LABEL_76;
      }
      v27 = (unsigned __int8 *)(v25 + v26);
    }
  }
  if ( !v27 || !RtlValidSid(v27) )
    goto LABEL_191;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = (unsigned __int16 *)v19;
    Src = v19;
    v28 = v114;
    goto LABEL_26;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    do
    {
      AceByType = RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v52 = AceByType;
      if ( AceByType )
      {
        v73 = AceByType[1];
        v53 = AceByType + 8;
        v24 = (*((_DWORD *)v52 + 1) & 0xFFFFFFF8) == 0;
        v130 = v53;
        v96 = v73;
        if ( !v24 )
        {
LABEL_192:
          valid = -1073740730;
          goto LABEL_76;
        }
      }
      else
      {
        v53 = v130;
      }
      if ( !(unsigned __int8)SepValidLabelSubjectContext(v124, v53, v96) )
        goto LABEL_192;
      ++Index;
    }
    while ( v52 );
  }
  TokenTrustLevel = (void *)SepLocateTokenTrustLevel(v124);
  LODWORD(v130) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_86:
    v55 = a2 & 0x100;
    Index = v55;
    if ( (a2 & 0x100) != 0 )
    {
      valid = RtlpValidFilterAclSubjectContext((PACL)Src);
      if ( valid < 0 )
        goto LABEL_76;
      if ( (a5 & 2) == 0 )
      {
        valid = RtlpValidFilterAclSubjectContext(v19);
        if ( valid < 0 )
          goto LABEL_76;
      }
      v55 = Index;
      v9 = v116;
    }
    v56 = v117;
    if ( (a2 & 8) != 0 )
    {
      v75 = *(unsigned __int16 *)(v117 + 2);
      if ( (a5 & 2) == 0 )
      {
        v58 = Src;
        v111 = Src;
        v93 = v75 & 0x2000 | 0x8010;
        v57 = (int)Src;
        if ( (v75 & 0xA00) == 0xA00 )
          v93 = v75 & 0x2000 | 0x8810;
LABEL_90:
        if ( (a2 & 0x20) != 0 )
        {
          v74 = *(unsigned __int16 *)(v56 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v58,
                      (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      v118,
                      2,
                      (__int64)&v126,
                      (__int64)&v95);
            if ( valid < 0 )
            {
              v28 = (void *)v126;
              goto LABEL_63;
            }
            v9 = v116;
            v56 = v117;
            v58 = Src;
            v57 = (int)v111;
            v59 = (2 * (v95 & 0x1400 | (2 * (v95 & 8 | 4)))) | v93;
            v103 = 1;
            v55 = Index;
            v93 = v59;
            v114 = (PVOID)v126;
          }
          else
          {
            v114 = v58;
            v59 = v74 & 0x2000 | 0x10 | v93;
            v93 = v59;
            if ( (v74 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v93 = v59;
            }
          }
        }
        else
        {
          v59 = v93;
          v114 = v19;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v84 = *(unsigned __int16 *)(v56 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v58,
                      (v84 & 0x800 | (v84 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      v118,
                      2,
                      (__int64)&v127,
                      (__int64)&v95);
            if ( valid < 0 )
            {
              v47 = (void *)v127;
              v28 = v114;
              goto LABEL_64;
            }
            v9 = v116;
            v56 = v117;
            v58 = Src;
            v57 = (int)v111;
            v59 = (2 * (v95 & 0x1400 | (2 * (v95 & 8 | 4)))) | v93;
            v104 = 1;
            v55 = Index;
            v93 = v59;
            v112 = (PVOID)v127;
          }
          else
          {
            v112 = v58;
            v59 |= v84 & 0x2000 | 0x10;
            v93 = v59;
            if ( (v84 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v93 = v59;
            }
          }
        }
        else
        {
          v112 = v19;
        }
        if ( (_DWORD)v130 )
        {
          v80 = *(unsigned __int16 *)(v56 + 2);
          if ( (a5 & 2) == 0 )
          {
            v110 = v58;
            v59 |= v80 & 0x2000 | 0x10;
            v93 = v59;
            v24 = (v80 & 0xA00) == 2560;
            v60 = (__int64)v58;
            if ( v24 )
            {
              v59 |= 0x800u;
              v93 = v59;
            }
            goto LABEL_97;
          }
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v58,
                    (v80 & 0x800 | (v80 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v27,
                    v118,
                    2,
                    (__int64)&v128,
                    (__int64)&v95);
          if ( valid < 0 )
          {
            v48 = (void *)v128;
            v28 = v114;
            v47 = v112;
            goto LABEL_65;
          }
          v60 = v128;
          v9 = v116;
          v56 = v117;
          v58 = Src;
          v57 = (int)v111;
          v59 = (2 * (v95 & 0x1400 | (2 * (v95 & 8 | 4)))) | v93;
          v105 = 1;
          v55 = Index;
          v93 = v59;
        }
        else
        {
          v60 = (__int64)v19;
        }
        v110 = (void *)v60;
LABEL_97:
        if ( v55 )
        {
          v85 = *(unsigned __int16 *)(v56 + 2);
          v61 = (__int64)v58;
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v58,
                      (v85 & 0x800 | (v85 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      v118,
                      2,
                      (__int64)&v129,
                      (__int64)&v95);
            if ( valid < 0 )
            {
              v49 = (void *)v129;
              v48 = v110;
              v28 = v114;
              v47 = v112;
LABEL_66:
              if ( v111 && v102 )
                ExFreePoolWithTag(v111, 0);
              if ( v28 && v103 )
                ExFreePoolWithTag(v28, 0);
              if ( v47 && v104 )
                ExFreePoolWithTag(v47, 0);
              if ( v48 && v105 )
                ExFreePoolWithTag(v48, 0);
              if ( v49 && v106 )
                ExFreePoolWithTag(v49, 0);
              if ( v12 && v107 )
                ExFreePoolWithTag(v12, 0);
              if ( (_BYTE)v108 )
                ExFreePoolWithTag(v133, 0);
              goto LABEL_76;
            }
            v61 = v129;
            LODWORD(v58) = (_DWORD)Src;
            v57 = (int)v111;
            v106 = 1;
            v115 = (PVOID)v129;
            v59 = (2 * (v95 & 0x1400 | (2 * (v95 & 8 | 4)))) | v93;
            v93 = v59;
          }
          else
          {
            v115 = v58;
            v59 |= v85 & 0x2000 | 0x10;
            v93 = v59;
            if ( (v85 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v93 = v59;
            }
          }
          v60 = (__int64)v110;
        }
        else
        {
          v61 = (__int64)v19;
          v115 = v19;
        }
        v11 = v117;
        if ( (_DWORD)Size )
        {
          v62 = *(_WORD *)(v117 + 2);
          v63 = v62 & 0x2000 | 0x10 | v59;
          v93 = v63;
          if ( (v62 & 0xA00) == 0xA00 )
            v93 = v63 | 0x800;
        }
        else
        {
          LODWORD(v58) = (_DWORD)v19;
        }
        v28 = v114;
        valid = RtlpCombineAcls(v57, (_DWORD)v58, (_DWORD)v114, (_DWORD)v112, v60, v61, (__int64)&P, 0LL);
        if ( valid < 0 )
          goto LABEL_63;
        v12 = (unsigned __int16 *)P;
        Src = P;
        if ( !v111 && P && !*((_WORD *)P + 2) )
        {
          ExFreePoolWithTag(P, 0);
          v12 = 0LL;
          Src = 0LL;
        }
        v9 = v116;
        v107 = 1;
LABEL_26:
        if ( (a2 & 4) != 0 )
        {
          v29 = *(_WORD *)(v11 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v29 & 4) != 0 )
            {
              if ( v29 >= 0 )
              {
                v86 = *(_QWORD *)(v11 + 32);
              }
              else
              {
                v87 = *(_DWORD *)(v11 + 16);
                if ( v87 )
                  LODWORD(v86) = v87 + v11;
                else
                  LODWORD(v86) = 0;
              }
            }
            else
            {
              LODWORD(v86) = 0;
            }
            v88 = *v9;
            v89 = *(_WORD *)(*v9 + 2LL);
            if ( (v89 & 4) != 0 )
            {
              if ( v89 >= 0 )
              {
                v90 = *(_QWORD *)(v88 + 32);
              }
              else
              {
                v91 = *(_DWORD *)(v88 + 16);
                if ( v91 )
                  LODWORD(v90) = v88 + v91;
                else
                  LODWORD(v90) = 0;
              }
            }
            else
            {
              LODWORD(v90) = 0;
            }
            valid = RtlpComputeMergedAcl(
                      v90,
                      v89 & 0x140C,
                      v86,
                      *(_WORD *)(v11 + 2) & 0x140C,
                      (__int64)v23,
                      (__int64)v27,
                      v118,
                      1,
                      (__int64)&v132,
                      (__int64)&v95);
            if ( valid < 0 )
              goto LABEL_63;
            v30 = (unsigned __int16 *)v132;
            v101 = 1;
            v93 |= v95 & 0x1408 | 4;
          }
          else
          {
            if ( (v29 & 4) != 0 )
            {
              if ( v29 < 0 )
              {
                v65 = *(unsigned int *)(v11 + 16);
                if ( (_DWORD)v65 )
                  v30 = (unsigned __int16 *)(v65 + v11);
                else
                  v30 = 0LL;
              }
              else
              {
                v30 = *(unsigned __int16 **)(v11 + 32);
              }
            }
            else
            {
              v30 = 0LL;
            }
            v31 = v29 & 0x1000 | 4 | v93;
            v93 = v31;
            if ( (v29 & 0x500) == 0x500 )
              v93 = v31 | 0x400;
          }
          if ( v97 )
          {
            Size = 0LL;
            v125 = 0LL;
            P = 0LL;
            v126 = 0LL;
            v127 = 0LL;
            v128 = 0LL;
            v129 = 0LL;
            SepGetDefaultsSubjectContext(
              (_DWORD)v124,
              (unsigned int)&Size,
              (unsigned int)&v125,
              (unsigned int)&P,
              (__int64)&v126,
              (__int64)&v127,
              (__int64)&v128,
              (__int64)&v129);
            valid = RtlpCreateServerAcl((_DWORD)v30, v98, (_DWORD)P, (unsigned int)&v133, (__int64)&v108);
            if ( valid < 0 )
            {
LABEL_60:
              if ( v101 )
                ExFreePoolWithTag(v132, 0);
              goto LABEL_62;
            }
            v30 = (unsigned __int16 *)v133;
          }
        }
        else
        {
          v66 = *v9;
          v67 = *(_WORD *)(*v9 + 2LL);
          if ( (v67 & 4) != 0 )
          {
            if ( v67 >= 0 )
            {
              v30 = *(unsigned __int16 **)(v66 + 32);
            }
            else
            {
              v68 = *(unsigned int *)(v66 + 16);
              if ( (_DWORD)v68 )
                v30 = (unsigned __int16 *)(v66 + v68);
              else
                v30 = 0LL;
            }
          }
          else
          {
            v30 = 0LL;
          }
        }
        v32 = 4 * v23[1] + 8;
        v33 = 4 * v27[1] + 8;
        LODWORD(Size) = v33;
        if ( v12 )
          v34 = (v12[1] + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        if ( v30 )
          v35 = (v30[1] + 3) & 0xFFFFFFFC;
        else
          v35 = 0;
        PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v32 + v33 + 20 + v35 + v34, 0x64536553u);
        v37 = PoolWithTag;
        if ( PoolWithTag )
        {
          v38 = (char *)(PoolWithTag + 5);
          v24 = !v121;
          *(_OWORD *)PoolWithTag = 0LL;
          PoolWithTag[4] = 0;
          v39 = v93;
          *(_BYTE *)v37 = 1;
          if ( !v24 )
            v39 = v93 | 0x800;
          v40 = v117;
          v41 = *((_WORD *)v37 + 1) | v39;
          *((_WORD *)v37 + 1) = v41;
          if ( (*(_WORD *)(v40 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v37 + 1) = *(_BYTE *)(v40 + 1);
            *((_WORD *)v37 + 1) = v41 | 0x4000;
          }
          if ( Src )
          {
            memmove(v37 + 5, Src, *((unsigned __int16 *)Src + 1));
            RtlpApplyAclToObject(v37 + 5, v118);
            v37[3] = (_DWORD)v38 - (_DWORD)v37;
            v42 = *((unsigned __int16 *)Src + 1);
            if ( v34 > (unsigned int)v42 )
              memset(&v38[v42], 0, v34 - (unsigned int)v42);
            v38 += v34;
          }
          else
          {
            v37[3] = 0;
          }
          v43 = v116;
          if ( (v93 & 0x10) == 0 )
            *((_WORD *)v37 + 1) |= *(_WORD *)(*v116 + 2LL) & 0x2830;
          if ( v30 )
          {
            memmove(v38, v30, v30[1]);
            RtlpApplyAclToObject(v38, v118);
            v37[4] = (_DWORD)v38 - (_DWORD)v37;
            v44 = v30[1];
            if ( v35 > (unsigned int)v44 )
              memset(&v38[v44], 0, v35 - (unsigned int)v44);
            v38 += v35;
          }
          else
          {
            v37[4] = 0;
          }
          if ( (v93 & 4) != 0 )
            goto LABEL_54;
          *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2LL) & 0x140C;
          if ( !(_BYTE)v122 )
            goto LABEL_54;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          valid = RtlInitializeSid(&Sid, &PoolType, 1u);
          if ( valid >= 0 )
          {
            v136 = 4;
            Index = 0;
            while ( 1 )
            {
              v69 = *((_WORD *)v37 + 1);
              if ( (v69 & 4) != 0 )
              {
                if ( v69 >= 0 )
                {
                  v71 = *((_QWORD *)v37 + 4);
                }
                else
                {
                  v70 = (unsigned int)v37[4];
                  v71 = (_DWORD)v70 ? (__int64)v37 + v70 : 0LL;
                }
              }
              else
              {
                v71 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v71, &Sid, &Index);
              if ( !AceBySid )
                break;
              v92 = AceBySid[1] & 0xF4 | 8;
              ++Index;
              AceBySid[1] = v92;
            }
            v43 = v116;
LABEL_54:
            memmove(v38, v123, v32);
            v37[1] = (_DWORD)v38 - (_DWORD)v37;
            v45 = &v38[v32];
            if ( !v99 )
              *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2LL) & 1;
            memmove(v45, v27, (unsigned int)Size);
            v24 = v100 == 0;
            v37[2] = (_DWORD)v45 - (_DWORD)v37;
            if ( v24 )
              *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2LL) & 2;
            *v43 = v37;
            valid = 0;
          }
        }
        else
        {
          valid = -1073741801;
        }
        v12 = (unsigned __int16 *)Src;
        goto LABEL_60;
      }
      valid = RtlpComputeMergedAcl(
                (int)v19,
                (*(_WORD *)(*v9 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                (int)Src,
                (v75 & 0x2800 | (v75 >> 1) & 0x18) >> 1,
                (__int64)v23,
                (__int64)v27,
                v118,
                2,
                (__int64)&v125,
                (__int64)&v95);
      if ( valid < 0 )
      {
        v111 = (PVOID)v125;
LABEL_62:
        v28 = v114;
LABEL_63:
        v47 = v112;
LABEL_64:
        v48 = v110;
LABEL_65:
        v49 = v115;
        goto LABEL_66;
      }
      v57 = v125;
      v9 = v116;
      v56 = v117;
      v102 = 1;
      v111 = (PVOID)v125;
      v93 = 2 * (v95 & 0x1400 | (2 * (v95 & 8 | 0x2004)));
      v55 = Index;
    }
    else
    {
      v57 = (int)v19;
      v111 = v19;
    }
    v58 = Src;
    goto LABEL_90;
  }
  if ( TokenTrustLevel )
  {
    Index = 0;
    while ( 1 )
    {
      v78 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
      v111 = v78;
      if ( v78 )
      {
        if ( (v78[1] & 0xFF000000) != 0 )
          goto LABEL_192;
        if ( !RtlpValidTrustSubjectContext(TokenTrustLevel, v78 + 2, v79, &v131) )
          break;
        v78 = v111;
      }
      ++Index;
      if ( !v78 )
        goto LABEL_86;
    }
  }
  valid = -1073741790;
LABEL_76:
  if ( v124 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}

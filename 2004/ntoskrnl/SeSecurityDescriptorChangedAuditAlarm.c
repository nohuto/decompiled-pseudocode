/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4
 * Callers:
 *     NtSetSecurityObject @ 0x140626D40 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x1405909A4 (SeMaximumAuditMask.c)
 *     SepQueryNameString @ 0x1406321F0 (SepQueryNameString.c)
 *     SepAdtAuditThisEventWithContext @ 0x14068D710 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x14091D2C4 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140921548 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1409228B0 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x140922930 (SepIsSidEqual.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r13
  __int64 v17; // rdx
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v19; // rdx
  char v20; // r15
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // ax
  __int64 v33; // rax
  _WORD *v34; // r12
  __int16 v35; // r11
  unsigned __int16 *v36; // r13
  unsigned __int16 *v37; // r10
  __int16 v38; // r8
  _WORD *v39; // r15
  unsigned __int16 *v40; // r14
  __int16 v41; // dx
  unsigned int v42; // eax
  int v43; // edi
  __int64 v44; // rax
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int16 v48; // ax
  __int64 v49; // rax
  __int16 v50; // ax
  __int64 v51; // rax
  __int16 v52; // ax
  __int16 v53; // ax
  SIZE_T v54; // rsi
  SIZE_T v55; // rax
  SIZE_T v56; // rsi
  SIZE_T v57; // rax
  SIZE_T v58; // rsi
  SIZE_T v59; // rax
  bool v60; // cf
  SIZE_T v61; // rsi
  SIZE_T v62; // rax
  ACCESS_MASK v63; // edi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int16 v72; // ax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int16 v75; // ax
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // r13d
  __int64 v79; // rdi
  int v80; // r12d
  unsigned int v81; // ebx
  __int64 v82; // [rsp+38h] [rbp-B9h]
  unsigned __int16 *v83; // [rsp+58h] [rbp-99h]
  __int64 v84; // [rsp+60h] [rbp-91h]
  int v85; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+6Ch] [rbp-85h] BYREF
  int TypeString; // [rsp+70h] [rbp-81h]
  UNICODE_STRING *v88; // [rsp+78h] [rbp-79h]
  unsigned int v89; // [rsp+80h] [rbp-71h]
  PACCESS_TOKEN Token; // [rsp+88h] [rbp-69h]
  PVOID P; // [rsp+90h] [rbp-61h] BYREF
  PVOID v92[2]; // [rsp+98h] [rbp-59h] BYREF
  void *v93; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B0h] [rbp-41h]
  __int64 v95; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v97; // [rsp+138h] [rbp+47h]
  __int16 v99; // [rsp+150h] [rbp+5Fh]
  __int16 v100; // [rsp+160h] [rbp+6Fh]

  AuditMask = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v92[0] = 0LL;
  v14 = 0;
  v95 = 0LL;
  v15 = 0LL;
  v88 = 0LL;
  TypeString = 0;
  v89 = 0;
  v85 = 0;
  v93 = 0LL;
  v97 = 0;
  v83 = 0LL;
  v99 = 0;
  Source2 = 0LL;
  v100 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(3221225596LL);
    return;
  }
  LOBYTE(v17) = 1;
  v20 = SepAdtAuditThisEventWithContext(141LL, v17, 0LL, &SubjectContext);
  if ( v20 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    LOBYTE(v19) = 1;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(139LL, v19, 0LL, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v20 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( !a3 || !a3->Length )
  {
    if ( !a2 )
    {
      a3 = 0LL;
      goto LABEL_9;
    }
    TypeString = SepQueryTypeString(a2, v92);
    if ( TypeString < 0 )
      goto LABEL_210;
    a3 = 0LL;
    if ( v92[0] )
      a3 = (UNICODE_STRING *)v92[0];
  }
  v88 = a3;
LABEL_9:
  v21 = a10;
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) == 0 )
    goto LABEL_10;
  v45 = *(_WORD *)(a10 + 2);
  if ( (v45 & 0x10) == 0 )
    goto LABEL_87;
  if ( v45 >= 0 )
  {
    v47 = *(_QWORD *)(a10 + 24);
    goto LABEL_89;
  }
  v46 = *(unsigned int *)(a10 + 12);
  if ( (_DWORD)v46 )
    v47 = a10 + v46;
  else
LABEL_87:
    v47 = 0LL;
LABEL_89:
  SeMaximumAuditMask(v47, v22, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v22, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v20 )
    v14 |= a8 & 0x10;
LABEL_10:
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
  {
LABEL_69:
    v26 = 0LL;
    goto LABEL_14;
  }
  if ( v24 < 0 )
  {
    v25 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v25 )
    {
      v26 = a13 + v25;
      goto LABEL_14;
    }
    goto LABEL_69;
  }
  v26 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v84 = v26;
  if ( !a10 )
    goto LABEL_15;
  v32 = *(_WORD *)(a10 + 2);
  if ( (v32 & 0x10) == 0 )
  {
LABEL_44:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( v32 < 0 )
  {
    v33 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v33 )
    {
      v15 = a10 + v33;
      goto LABEL_15;
    }
    goto LABEL_44;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v27 = a9;
  if ( !a9 )
  {
    v28 = 0LL;
    goto LABEL_17;
  }
  v48 = *(_WORD *)(a9 + 2);
  if ( (v48 & 0x10) == 0 )
  {
LABEL_98:
    v28 = 0LL;
    goto LABEL_17;
  }
  if ( v48 < 0 )
  {
    v49 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v49 )
    {
      v28 = a9 + v49;
      goto LABEL_17;
    }
    goto LABEL_98;
  }
  v28 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    v29 = *(_WORD *)(a11 + 2);
    if ( (v29 & 0x10) == 0 )
    {
LABEL_19:
      v30 = 0LL;
      goto LABEL_20;
    }
    if ( v29 >= 0 )
    {
      v30 = *(_QWORD *)(a11 + 24);
    }
    else
    {
      v44 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v44 )
        goto LABEL_19;
      v30 = a11 + v44;
    }
  }
  else
  {
    v30 = 0LL;
  }
LABEL_20:
  if ( !a12 )
  {
    v31 = 0LL;
    goto LABEL_22;
  }
  v50 = *(_WORD *)(a12 + 2);
  if ( (v50 & 0x10) == 0 )
  {
LABEL_105:
    v31 = 0LL;
    goto LABEL_22;
  }
  if ( v50 < 0 )
  {
    v51 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v51 )
    {
      v31 = a12 + v51;
      goto LABEL_22;
    }
    goto LABEL_105;
  }
  v31 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v26 || !*(_WORD *)(v26 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x10;
    if ( v30 && *(_WORD *)(v30 + 4) )
      v13 |= v14 & 0x20;
    if ( v31 && *(_WORD *)(v31 + 4) )
    {
      v43 = v14 & 0x40;
LABEL_152:
      v13 |= v43;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v34 = (_WORD *)(v26 + 8);
  if ( v15 && (v52 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v36 = (unsigned __int16 *)(v15 + 8);
    v97 = v52;
    v35 = v52;
  }
  else
  {
    v35 = 0;
    v36 = 0LL;
  }
  if ( v28 && *(_WORD *)(v28 + 4) )
  {
    v85 = *(unsigned __int16 *)(v28 + 4);
    v93 = (void *)(v28 + 8);
  }
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v37 = (unsigned __int16 *)(v30 + 8);
    v99 = *(_WORD *)(v30 + 4);
    v83 = (unsigned __int16 *)(v30 + 8);
  }
  else
  {
    v37 = 0LL;
  }
  if ( v31 && (v53 = *(_WORD *)(v31 + 4)) != 0 )
  {
    v100 = *(_WORD *)(v31 + 4);
    Source2 = (void *)(v31 + 8);
    v38 = v53;
  }
  else
  {
    v38 = 0;
  }
  v39 = v93;
  v40 = (unsigned __int16 *)Source2;
  do
  {
    if ( *(_BYTE *)v34 != 17 )
    {
      if ( *(_BYTE *)v34 == 18 )
      {
        if ( (v14 & 0x20) == 0 )
          goto LABEL_56;
        if ( v37 && v34[1] == v37[1] )
        {
          v58 = v37[1];
          v59 = RtlCompareMemory(v34, v37, v58);
          v26 = v84;
          if ( v59 == v58 )
          {
            v41 = v99 - 1;
            v35 = v97;
            v38 = v100;
            v60 = v99-- != 1;
            v37 = (unsigned __int16 *)(((unsigned __int64)v83 + v58) & -(__int64)v60);
            v83 = v37;
            goto LABEL_57;
          }
          v37 = v83;
        }
        v13 |= 0x20u;
        v14 &= ~0x20u;
        goto LABEL_128;
      }
      if ( *(_BYTE *)v34 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_56;
        if ( v40 )
        {
          if ( v34[1] == v40[1] )
          {
            v56 = v40[1];
            v57 = RtlCompareMemory(v34, v40, v56);
            v26 = v84;
            if ( v57 == v56 )
            {
              v37 = v83;
              v35 = v97;
              v38 = --v100;
              v40 = (unsigned __int16 *)(((unsigned __int64)v40 + v56) & -(__int64)(v100 != 0));
              goto LABEL_56;
            }
          }
        }
        v13 |= 0x40u;
        v14 &= ~0x40u;
      }
      else
      {
        if ( (v14 & 8) == 0 )
          goto LABEL_56;
        if ( v36 )
        {
          if ( *(_BYTE *)v36 == *(_BYTE *)v34 && v34[1] == v36[1] )
          {
            v54 = v36[1];
            v55 = RtlCompareMemory(v34, v36, v54);
            v26 = v84;
            if ( v55 == v54 )
            {
              v35 = --v97;
              v36 = (unsigned __int16 *)(((unsigned __int64)v36 + v54) & -(__int64)(v97 != 0));
LABEL_144:
              v37 = v83;
              goto LABEL_145;
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
      }
LABEL_125:
      v37 = v83;
LABEL_128:
      v35 = v97;
LABEL_145:
      v38 = v100;
      goto LABEL_56;
    }
    if ( (v14 & 0x10) != 0 )
    {
      if ( !v39
        || v34[1] != v39[1]
        || (v61 = (unsigned __int16)v39[1], v62 = RtlCompareMemory(v34, v39, v61), v26 = v84, v62 != v61) )
      {
        v35 = v97;
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_144;
      }
      v39 = (_WORD *)(((unsigned __int64)v39 + v61) & -(__int64)(--v85 != 0));
      goto LABEL_125;
    }
LABEL_56:
    v41 = v99;
LABEL_57:
    v34 = (_WORD *)((char *)v34 + (unsigned __int16)v34[1]);
    v42 = *(unsigned __int16 *)(v26 + 4);
    ++v89;
  }
  while ( v89 < v42 && v14 );
  v27 = a9;
  v23 = a13;
  if ( v35 )
    v13 |= v14 & 8;
  if ( v41 )
    v13 |= v14 & 0x20;
  if ( v38 )
    v13 |= v14 & 0x40;
  v21 = a10;
  if ( v85 )
  {
    v43 = v14 & 0x10;
    goto LABEL_152;
  }
LABEL_28:
  if ( v27 )
  {
    v63 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v65 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v64 = *(unsigned int *)(v23 + 4);
          v65 = (_DWORD)v64 ? v23 + v64 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v67 = *(_QWORD *)(v27 + 8);
        }
        else
        {
          v66 = *(unsigned int *)(v27 + 4);
          v67 = (_DWORD)v66 ? v27 + v66 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v67, v65) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v69 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v68 = *(unsigned int *)(v23 + 8);
          v69 = (_DWORD)v68 ? v23 + v68 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v71 = *(_QWORD *)(v27 + 16);
        }
        else
        {
          v70 = *(unsigned int *)(v27 + 8);
          v71 = (_DWORD)v70 ? v27 + v70 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v71, v69) )
          v13 |= 2u;
      }
    }
    if ( (v63 & 0x40000) != 0 )
    {
      v72 = *(_WORD *)(v23 + 2);
      if ( (v72 & 4) == 0 )
        goto LABEL_185;
      if ( v72 >= 0 )
      {
        v74 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v73 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v73 )
        {
          v74 = v23 + v73;
          goto LABEL_187;
        }
LABEL_185:
        v74 = 0LL;
      }
LABEL_187:
      v75 = *(_WORD *)(v27 + 2);
      if ( (v75 & 4) == 0 )
        goto LABEL_191;
      if ( v75 >= 0 )
      {
        v77 = *(_QWORD *)(v27 + 32);
        goto LABEL_193;
      }
      v76 = *(unsigned int *)(v27 + 16);
      if ( (_DWORD)v76 )
        v77 = v27 + v76;
      else
LABEL_191:
        v77 = 0LL;
LABEL_193:
      if ( !(unsigned __int8)SepIsAclEqual(v77, v74) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v78 = v95;
LABEL_201:
      v79 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
      {
        v82 = v21;
        v80 = (int)v88;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v88,
          v78,
          a5,
          v79,
          v82,
          8,
          v23);
      }
      else
      {
        v80 = (int)v88;
      }
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v80,
          v78,
          a5,
          v79,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v80,
          v78,
          a5,
          v79,
          a12,
          64,
          v23);
      v81 = v13 & 0xFFFFFF97;
      if ( v81 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v80,
          v78,
          a5,
          v79,
          v27,
          v81,
          v23);
      goto LABEL_210;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v78 = v95;
      if ( P )
        v78 = (int)P;
      goto LABEL_201;
    }
LABEL_210:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v92[0] )
      ExFreePoolWithTag(v92[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}

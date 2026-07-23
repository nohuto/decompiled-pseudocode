/*
 * XREFs of LocalConvertAclToString @ 0x1406689C4
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1403D6E70 (_ultow_s.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x1405E9950 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140668730 (LocalConvertSidToStringSidW.c)
 *     LookupAccessMaskInTable @ 0x1406691B8 (LookupAccessMaskInTable.c)
 *     LocalGetAceCondition @ 0x140669250 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x140669378 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x140669428 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x14066955C (LookupSidInTable.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     SddlpUuidToString @ 0x140926CB8 (SddlpUuidToString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  __int64 v10; // rsi
  unsigned int v11; // edi
  size_t v12; // rcx
  __int64 v13; // r13
  char *v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // edi
  unsigned __int8 v20; // al
  unsigned int v21; // edi
  char *v22; // rbx
  ULONG AceCondition; // r14d
  int v24; // ebx
  _QWORD *v25; // rax
  unsigned int v26; // eax
  int v27; // edi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  wchar_t **v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // eax
  unsigned __int64 v40; // rbx
  PVOID *v41; // r15
  _WORD *v42; // rdi
  unsigned __int64 v43; // rbx
  wchar_t *v44; // rdi
  rsize_t v45; // rbx
  const wchar_t **v46; // rax
  const wchar_t **v47; // rsi
  __int64 v48; // rax
  char *v49; // r15
  unsigned int v50; // esi
  wchar_t *v51; // rdi
  rsize_t v52; // rbx
  __int64 v53; // r15
  char *v54; // r14
  rsize_t v55; // rbx
  wchar_t *v56; // rdi
  __int64 v57; // r12
  unsigned __int8 v58; // al
  unsigned int v59; // esi
  int v60; // eax
  __int64 v61; // rax
  rsize_t v62; // rbx
  wchar_t *v63; // rdi
  rsize_t v64; // rbx
  wchar_t *v65; // rdi
  _QWORD *v66; // r12
  __int64 v67; // r15
  rsize_t v68; // rbx
  wchar_t *v69; // rdi
  const wchar_t *v70; // rsi
  __int64 v71; // rax
  wchar_t *v72; // rsi
  wchar_t *v73; // rdi
  unsigned __int64 v74; // rbx
  char *v75; // rcx
  unsigned int v76; // r15d
  const wchar_t **v77; // rax
  const wchar_t **v78; // r14
  __int64 v79; // rax
  const wchar_t **v80; // rax
  const wchar_t **v81; // rsi
  unsigned int v82; // ebx
  _BYTE *v83; // r13
  void *v85; // rcx
  rsize_t v86; // rbx
  wchar_t *v87; // rdi
  __int64 v88; // rax
  bool v89; // cc
  __int64 v90; // rax
  unsigned int v91; // ecx
  PVOID v92; // rcx
  unsigned int v93; // eax
  int v94; // r8d
  __int64 v95; // r9
  __int64 v96; // rax
  wchar_t *v97; // rax
  int v98; // ecx
  unsigned int v99; // r8d
  __int64 v100; // rdx
  unsigned int v101; // eax
  const wchar_t **v102; // rax
  const wchar_t **v103; // r15
  __int64 v104; // rax
  PVOID v105; // r15
  __int64 v106; // rsi
  int v107; // eax
  PVOID v108; // r15
  __int64 v109; // rsi
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v112; // [rsp+60h] [rbp-61h]
  PVOID P; // [rsp+68h] [rbp-59h]
  ULONG v114; // [rsp+70h] [rbp-51h] BYREF
  wchar_t *Src; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid; // [rsp+80h] [rbp-41h]
  char *v117; // [rsp+88h] [rbp-39h]
  __int64 v118; // [rsp+90h] [rbp-31h] BYREF
  PVOID v119; // [rsp+98h] [rbp-29h]
  PVOID v120; // [rsp+A0h] [rbp-21h] BYREF
  int v121; // [rsp+A8h] [rbp-19h]
  PVOID v122; // [rsp+B0h] [rbp-11h]
  __int64 v123; // [rsp+B8h] [rbp-9h]
  unsigned int v126; // [rsp+140h] [rbp+7Fh]

  v126 = 0;
  v10 = a1;
  v121 = 0;
  v11 = 0;
  v120 = 0LL;
  Val = 0;
  Sid = 0LL;
  v118 = 0LL;
  Src = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v90 = SddlpAlloc(0x24uLL);
    *a4 = v90;
    if ( !v90 )
    {
      v91 = 8;
LABEL_123:
      *a5 = 0;
      return v91;
    }
    *(_OWORD *)v90 = *(_OWORD *)L"NO_ACCESS_CONTROL";
    *(_OWORD *)(v90 + 16) = *(_OWORD *)L"S_CONTROL";
    *(_DWORD *)(v90 + 32) = *(_DWORD *)L"L";
    return 0LL;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    v91 = 0;
    goto LABEL_123;
  }
  v12 = 8LL * *(unsigned __int16 *)(a1 + 4);
  v112 = 2 - (a3 != 0);
  P = (PVOID)SddlpAlloc(v12);
  if ( !P )
    return 8LL;
  v122 = (PVOID)SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v122 )
  {
    v92 = P;
LABEL_125:
    ExFreePoolWithTag(v92, 0);
    return 8LL;
  }
  v119 = (PVOID)SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v119 )
  {
    ExFreePoolWithTag(P, 0);
    v92 = v122;
    goto LABEL_125;
  }
  v13 = 0LL;
  v117 = (char *)(v10 + 8);
  v14 = (char *)(v10 + 8);
  if ( !*(_WORD *)(v10 + 4) )
  {
LABEL_145:
    AceCondition = 1336;
    goto LABEL_50;
  }
  while ( 1 )
  {
    v11 += 2;
    v126 = v11;
    v15 = (__int64 *)LookupAceTypeInTable(0LL);
    if ( !v15 )
    {
LABEL_112:
      AceCondition = 1336;
      goto LABEL_49;
    }
    v16 = *v15;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
    v18 = 0;
    v19 = v11 + 2 + 2 * v17;
    do
    {
      if ( ((unsigned __int8)(1 << v18) & (unsigned __int8)v14[1]) != 0 )
      {
        v31 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v31 )
        {
          v32 = *v31;
          v33 = -1LL;
          do
            ++v33;
          while ( *(_WORD *)(v32 + 2 * v33) );
          v19 += 2 * v33;
        }
      }
      ++v18;
    }
    while ( v18 < 8 );
    v20 = *v14;
    v11 = v19 + 2;
    v126 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v20 > 0xBu )
    {
      if ( v20 != 13 )
      {
        if ( v20 <= 0x10u )
          goto LABEL_112;
        v89 = v20 <= 0x15u;
LABEL_111:
        if ( !v89 )
          goto LABEL_112;
      }
LABEL_19:
      v21 = *((_DWORD *)v14 + 1);
      v22 = v14 + 8;
      Sid = v14 + 8;
      Val = v21;
      goto LABEL_20;
    }
    if ( v20 != 11 )
    {
      if ( v20 <= 3u )
        goto LABEL_19;
      if ( v20 <= 4u )
        goto LABEL_112;
      if ( v20 > 8u )
      {
        v89 = v20 <= 0xAu;
        goto LABEL_111;
      }
    }
    v93 = *((_DWORD *)v14 + 2) & 1;
    Val = *((_DWORD *)v14 + 1);
    v94 = *((_DWORD *)v14 + 2) & 2;
    v95 = 16LL * v93;
    v22 = &v14[v95 + (v94 != 0 ? 28LL : 12LL)];
    Sid = v22;
    if ( (-(__int64)(v93 != 0) & (unsigned __int64)(v14 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v94 )
      v96 = (__int64)&v14[v95 + 12];
    else
      v96 = 0LL;
    if ( v96 )
      *(_DWORD *)Str2 = v11 + 72;
LABEL_20:
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    v114 = 0;
    AceCondition = LocalGetAceCondition(v14, v22, &Src, &v114);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v126 = *(_DWORD *)Str2;
      goto LABEL_143;
    }
    v24 = 0;
    *((_DWORD *)v119 + (unsigned int)v13) = 0;
    v25 = (_QWORD *)LookupAccessMaskInTable(0LL);
    if ( !v25 )
    {
      v26 = Val;
      v27 = 0;
      while ( 1 )
      {
        if ( (v26 & (1 << v27)) != 0 )
        {
          v28 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v28 )
          {
            v24 = 20;
            *((_DWORD *)v119 + (unsigned int)v13) = 2;
            goto LABEL_37;
          }
          v29 = *v28;
          v30 = -1LL;
          do
            ++v30;
          while ( *(_WORD *)(v29 + 2 * v30) );
          v24 += 2 * v30;
          v26 = Val;
        }
        if ( (unsigned int)++v27 >= 0x20 )
          goto LABEL_37;
      }
    }
    v38 = -1LL;
    *((_DWORD *)v119 + (unsigned int)v13) = 1;
    do
      ++v38;
    while ( *(_WORD *)(*v25 + 2 * v38) );
    v24 = 2 * v38;
LABEL_37:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v126 = v11;
    v34 = LookupSidInTable(0LL, Sid, Str2, a9, (__int64)&v118);
    v35 = (wchar_t **)((char *)P + 8 * (unsigned int)v13);
    if ( v34 )
    {
      v36 = v34 + 2;
      *v35 = (wchar_t *)(v34 + 2);
      goto LABEL_39;
    }
    if ( v118 )
    {
      v97 = (wchar_t *)SddlpAlloc(6uLL);
      *v35 = v97;
      if ( !v97 )
      {
        AceCondition = 8;
        goto LABEL_143;
      }
      wcscpy_s(v97, 3uLL, L"SA");
      goto LABEL_48;
    }
    v39 = LocalConvertSidToStringSidW(Sid, (wchar_t **)P + (unsigned int)v13);
    if ( v39 < 0 )
      break;
LABEL_48:
    *((_BYTE *)v122 + (unsigned int)v13) = 1;
    v36 = (__int64)*v35;
LABEL_39:
    v37 = -1LL;
    do
      ++v37;
    while ( *(_WORD *)(v36 + 2 * v37) );
    v10 = a1;
    v11 += 2 * v37 + 4;
    v14 += *((unsigned __int16 *)v14 + 1);
    v126 = v11;
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_49;
  }
  AceCondition = RtlNtStatusToDosError(v39);
LABEL_143:
  v10 = a1;
LABEL_49:
  v13 = 0LL;
  if ( !v11 )
    goto LABEL_145;
LABEL_50:
  if ( AceCondition )
    goto LABEL_179;
  if ( (v11 & 1) != 0 )
    v126 = ++v11;
  v40 = v11;
  v41 = (PVOID *)a4;
  v42 = (_WORD *)SddlpAlloc(v11);
  *a4 = (__int64)v42;
  if ( !v42 )
  {
    v11 = v126;
    AceCondition = 8;
    goto LABEL_180;
  }
  v43 = v40 >> 1;
  *(_DWORD *)Str2 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_178;
  while ( 2 )
  {
    if ( !v43 )
      goto LABEL_177;
    *v42 = 40;
    v44 = v42 + 1;
    v45 = v43 - 1;
    v46 = (const wchar_t **)LookupAceTypeInTable(0LL);
    v47 = v46;
    if ( v46 )
    {
      wcscpy_s(v44, v45, *v46);
      v48 = *((unsigned int *)v47 + 2);
      v45 -= v48;
      v44 += v48;
    }
    if ( !v45 )
      goto LABEL_177;
    v49 = v117;
    *v44 = 59;
    v50 = v13;
    v51 = v44 + 1;
    v52 = v45 - 1;
    do
    {
      if ( ((unsigned __int8)(1 << v50) & (unsigned __int8)v49[1]) != 0 )
      {
        v77 = (const wchar_t **)LookupAceFlagsInTable(0LL);
        v78 = v77;
        if ( v77 )
        {
          wcscpy_s(v51, v52, *v77);
          v79 = *((unsigned int *)v78 + 2);
          v52 -= v79;
          v51 += v79;
        }
      }
      ++v50;
    }
    while ( v50 < 8 );
    v53 = *(unsigned int *)Str2;
    if ( !v52 )
    {
LABEL_177:
      AceCondition = 1336;
      goto LABEL_178;
    }
    v54 = v117;
    *v51 = 59;
    v55 = v52 - 1;
    v56 = v51 + 1;
    v123 = v13;
    v57 = v13;
    v118 = v13;
    v58 = *v54;
    if ( (unsigned __int8)*v54 > 0xBu )
    {
      if ( v58 == 13 || v58 > 0x10u && v58 <= 0x15u )
        goto LABEL_66;
    }
    else
    {
      if ( *v54 == 11 )
        goto LABEL_147;
      if ( v58 <= 3u )
        goto LABEL_66;
      if ( v58 > 4u )
      {
        if ( v58 > 8u )
        {
          if ( v58 > 0xAu )
            goto LABEL_67;
LABEL_66:
          Val = *((_DWORD *)v54 + 1);
          Sid = v54 + 8;
          goto LABEL_67;
        }
LABEL_147:
        v98 = *((_DWORD *)v54 + 2) & 2;
        v99 = *((_DWORD *)v54 + 2) & 1;
        v100 = 16LL * v99;
        Val = *((_DWORD *)v54 + 1);
        Sid = &v54[v100 + (v98 != 0 ? 28LL : 12LL)];
        if ( v98 )
          v13 = (__int64)&v54[v100 + 12];
        else
          v13 = 0LL;
        v118 = v13;
        v57 = (unsigned __int64)(v54 + 12) & -(__int64)(v99 != 0);
        v123 = v57;
      }
    }
LABEL_67:
    v59 = (unsigned int)Src;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      v59 = 0;
      Src = 0LL;
    }
    v114 = v59;
    v114 = LocalGetAceCondition(v54, Sid, &Src, &v114);
    AceCondition = v114;
    if ( v114 )
      goto LABEL_176;
    v60 = *((_DWORD *)v119 + v53);
    if ( v60 == 2 )
    {
      wcscpy_s(v56, v55, L"0x");
      v56 += 2;
      v55 -= 2LL;
      ultow_s(Val, v56, v55, AceCondition + 16);
      v61 = -1LL;
      do
        ++v61;
      while ( v56[v61] != (_WORD)v59 );
LABEL_73:
      v56 += v61;
      v55 -= v61;
    }
    else if ( v60 == 1 )
    {
      v80 = (const wchar_t **)LookupAccessMaskInTable(0LL);
      v81 = v80;
      if ( v80 )
      {
        wcscpy_s(v56, v55, *v80);
        v61 = *((unsigned int *)v81 + 2);
        goto LABEL_73;
      }
    }
    else
    {
      v101 = Val;
      do
      {
        if ( (v101 & (1 << v59)) != 0 )
        {
          v102 = (const wchar_t **)LookupAccessMaskInTable(0LL);
          v103 = v102;
          if ( v102 )
          {
            wcscpy_s(v56, v55, *v102);
            v104 = *((unsigned int *)v103 + 2);
            v55 -= v104;
            v56 += v104;
          }
          v101 = Val;
        }
        ++v59;
      }
      while ( v59 < 0x20 );
      AceCondition = v114;
      v57 = v123;
      v13 = v118;
    }
    if ( !v55 )
      break;
    v62 = v55 - 1;
    *v56 = 59;
    v63 = v56 + 1;
    if ( v57 )
    {
      if ( !(unsigned int)SddlpUuidToString(v57, &v120) )
        goto LABEL_176;
      v105 = v120;
      v106 = -1LL;
      do
        ++v106;
      while ( *((_WORD *)v120 + v106) );
      wcscpy_s(v63, v62, (const wchar_t *)v120);
      v62 -= v106;
      v63 += v106;
      if ( v105 )
        ExFreePoolWithTag(v105, 0);
    }
    if ( v62 )
    {
      *v63 = 59;
      v64 = v62 - 1;
      v65 = v63 + 1;
      if ( v13 )
      {
        v107 = SddlpUuidToString(v13, &v120);
        v13 = 0LL;
        if ( !v107 )
          goto LABEL_178;
        v108 = v120;
        v109 = -1LL;
        do
          ++v109;
        while ( *((_WORD *)v120 + v109) );
        wcscpy_s(v65, v64, (const wchar_t *)v120);
        v64 -= v109;
        v65 += v109;
        if ( v108 )
          ExFreePoolWithTag(v108, 0);
      }
      v66 = P;
      if ( !v64 )
      {
LABEL_174:
        AceCondition = 1336;
LABEL_91:
        v11 = v126;
        v41 = (PVOID *)a4;
        goto LABEL_92;
      }
      v67 = *(unsigned int *)Str2;
      v68 = v64 - 1;
      *v65 = 59;
      v69 = v65 + 1;
      v70 = (const wchar_t *)v66[v67];
      wcscpy_s(v69, v68, v70);
      v71 = -1LL;
      do
        ++v71;
      while ( v70[v71] != (_WORD)v13 );
      v72 = Src;
      v73 = &v69[v71];
      v74 = v68 - v71;
      if ( Src )
      {
        if ( !v74 )
          goto LABEL_174;
        v86 = v74 - 1;
        *v73 = 59;
        v87 = v73 + 1;
        wcscpy_s(v87, v86, v72);
        v88 = -1LL;
        do
          ++v88;
        while ( v72[v88] != (_WORD)v13 );
        v73 = &v87[v88];
        v74 = v86 - v88;
      }
      if ( v74 <= 1 )
        goto LABEL_174;
      v75 = v117;
      *v73 = 41;
      v76 = v67 + 1;
      v42 = v73 + 1;
      *(_DWORD *)Str2 = v76;
      v43 = v74 - 1;
      *v42 = v13;
      v117 = &v75[*((unsigned __int16 *)v75 + 1)];
      if ( v76 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_91;
      continue;
    }
    break;
  }
  AceCondition = 1336;
LABEL_176:
  v13 = 0LL;
LABEL_178:
  v11 = v126;
LABEL_179:
  v41 = (PVOID *)a4;
LABEL_180:
  v66 = P;
LABEL_92:
  v82 = v13;
  if ( (unsigned __int16)v13 < *(_WORD *)(a1 + 4) )
  {
    v83 = v122;
    do
    {
      if ( v83[v82] )
      {
        v85 = (void *)v66[v82];
        if ( v85 )
          ExFreePoolWithTag(v85, 0);
      }
      ++v82;
    }
    while ( v82 < *(unsigned __int16 *)(a1 + 4) );
    v13 = 0LL;
  }
  ExFreePoolWithTag(v66, 0);
  ExFreePoolWithTag(v122, 0);
  ExFreePoolWithTag(v119, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( AceCondition )
  {
    if ( *v41 )
      ExFreePoolWithTag(*v41, 0);
    *v41 = (PVOID)v13;
    *a5 = v13;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}

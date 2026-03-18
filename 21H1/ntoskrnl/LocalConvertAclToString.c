/*
 * XREFs of LocalConvertAclToString @ 0x14068FE40
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1403D28C0 (_ultow_s.c)
 *     wcscpy_s @ 0x1403D3E30 (wcscpy_s.c)
 *     LookupSidInTable @ 0x1405E4BB8 (LookupSidInTable.c)
 *     LocalConvertSidToStringSidW @ 0x14068FDAC (LocalConvertSidToStringSidW.c)
 *     LookupAccessMaskInTable @ 0x140690634 (LookupAccessMaskInTable.c)
 *     LocalGetAceCondition @ 0x1406906CC (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x1406907F4 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406908A4 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x140690940 (SddlpAlloc.c)
 *     RtlNtStatusToDosError @ 0x1406BA6D0 (RtlNtStatusToDosError.c)
 *     SddlpUuidToString @ 0x1409222B0 (SddlpUuidToString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // edi
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  wchar_t **v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  int v40; // eax
  unsigned __int64 v41; // rbx
  PVOID *v42; // r15
  _WORD *v43; // rdi
  unsigned __int64 v44; // rbx
  wchar_t *v45; // rdi
  rsize_t v46; // rbx
  const wchar_t **v47; // rax
  const wchar_t **v48; // rsi
  __int64 v49; // rax
  char *v50; // r15
  unsigned int v51; // esi
  wchar_t *v52; // rdi
  rsize_t v53; // rbx
  __int64 v54; // r15
  char *v55; // r14
  rsize_t v56; // rbx
  wchar_t *v57; // rdi
  __int64 v58; // r12
  unsigned __int8 v59; // al
  unsigned int v60; // esi
  int v61; // eax
  __int64 v62; // rax
  rsize_t v63; // rbx
  wchar_t *v64; // rdi
  rsize_t v65; // rbx
  wchar_t *v66; // rdi
  _QWORD *v67; // r12
  __int64 v68; // r15
  rsize_t v69; // rbx
  wchar_t *v70; // rdi
  const wchar_t *v71; // rsi
  __int64 v72; // rax
  wchar_t *v73; // rsi
  wchar_t *v74; // rdi
  unsigned __int64 v75; // rbx
  char *v76; // rcx
  unsigned int v77; // r15d
  const wchar_t **v78; // rax
  const wchar_t **v79; // r14
  __int64 v80; // rax
  const wchar_t **v81; // rax
  const wchar_t **v82; // rsi
  unsigned int v83; // ebx
  _BYTE *v84; // r13
  void *v86; // rcx
  rsize_t v87; // rbx
  wchar_t *v88; // rdi
  __int64 v89; // rax
  bool v90; // cc
  __int64 v91; // rax
  unsigned int v92; // ecx
  PVOID v93; // rcx
  unsigned int v94; // eax
  int v95; // r8d
  __int64 v96; // r9
  __int64 v97; // rax
  wchar_t *v98; // rax
  int v99; // ecx
  unsigned int v100; // r8d
  __int64 v101; // rdx
  unsigned int v102; // eax
  const wchar_t **v103; // rax
  const wchar_t **v104; // r15
  __int64 v105; // rax
  PVOID v106; // r15
  __int64 v107; // rsi
  int v108; // eax
  PVOID v109; // r15
  __int64 v110; // rsi
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v113; // [rsp+60h] [rbp-61h]
  PVOID P; // [rsp+68h] [rbp-59h]
  ULONG v115; // [rsp+70h] [rbp-51h] BYREF
  wchar_t *Src; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid1; // [rsp+80h] [rbp-41h]
  char *v118; // [rsp+88h] [rbp-39h]
  __int64 v119; // [rsp+90h] [rbp-31h] BYREF
  PVOID v120; // [rsp+98h] [rbp-29h]
  PVOID v121; // [rsp+A0h] [rbp-21h] BYREF
  int v122; // [rsp+A8h] [rbp-19h]
  PVOID v123; // [rsp+B0h] [rbp-11h]
  __int64 v124; // [rsp+B8h] [rbp-9h]
  unsigned int v127; // [rsp+140h] [rbp+7Fh]

  v127 = 0;
  v10 = a1;
  v122 = 0;
  v11 = 0;
  v121 = 0LL;
  Val = 0;
  Sid1 = 0LL;
  v119 = 0LL;
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
    v91 = SddlpAlloc(0x24uLL);
    *a4 = v91;
    if ( !v91 )
    {
      v92 = 8;
LABEL_123:
      *a5 = 0;
      return v92;
    }
    *(_OWORD *)v91 = *(_OWORD *)L"NO_ACCESS_CONTROL";
    *(_OWORD *)(v91 + 16) = *(_OWORD *)L"S_CONTROL";
    *(_DWORD *)(v91 + 32) = *(_DWORD *)L"L";
    return 0LL;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    v92 = 0;
    goto LABEL_123;
  }
  v12 = 8LL * *(unsigned __int16 *)(a1 + 4);
  v113 = 2 - (a3 != 0);
  P = (PVOID)SddlpAlloc(v12);
  if ( !P )
    return 8LL;
  v123 = (PVOID)SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v123 )
  {
    v93 = P;
LABEL_125:
    ExFreePoolWithTag(v93, 0);
    return 8LL;
  }
  v120 = (PVOID)SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v120 )
  {
    ExFreePoolWithTag(P, 0);
    v93 = v123;
    goto LABEL_125;
  }
  v13 = 0LL;
  v118 = (char *)(v10 + 8);
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
    v127 = v11;
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
        v32 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v32 )
        {
          v33 = *v32;
          v34 = -1LL;
          do
            ++v34;
          while ( *(_WORD *)(v33 + 2 * v34) );
          v19 += 2 * v34;
        }
      }
      ++v18;
    }
    while ( v18 < 8 );
    v20 = *v14;
    v11 = v19 + 2;
    v127 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v20 > 0xBu )
    {
      if ( v20 != 13 )
      {
        if ( v20 <= 0x10u )
          goto LABEL_112;
        v90 = v20 <= 0x15u;
LABEL_111:
        if ( !v90 )
          goto LABEL_112;
      }
LABEL_19:
      v21 = *((_DWORD *)v14 + 1);
      v22 = v14 + 8;
      Sid1 = v14 + 8;
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
        v90 = v20 <= 0xAu;
        goto LABEL_111;
      }
    }
    v94 = *((_DWORD *)v14 + 2) & 1;
    Val = *((_DWORD *)v14 + 1);
    v95 = *((_DWORD *)v14 + 2) & 2;
    v96 = 16LL * v94;
    v22 = &v14[v96 + (v95 != 0 ? 28LL : 12LL)];
    Sid1 = v22;
    if ( (-(__int64)(v94 != 0) & (unsigned __int64)(v14 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v95 )
      v97 = (__int64)&v14[v96 + 12];
    else
      v97 = 0LL;
    if ( v97 )
      *(_DWORD *)Str2 = v11 + 72;
LABEL_20:
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    v115 = 0;
    AceCondition = LocalGetAceCondition(v14, v22, &Src, &v115);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v127 = *(_DWORD *)Str2;
      goto LABEL_143;
    }
    v24 = 0;
    *((_DWORD *)v120 + (unsigned int)v13) = 0;
    v25 = (_QWORD *)LookupAccessMaskInTable(0LL);
    if ( !v25 )
    {
      v27 = Val;
      v28 = 0;
      while ( 1 )
      {
        if ( (v27 & (1 << v28)) != 0 )
        {
          v29 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v29 )
          {
            v24 = 20;
            *((_DWORD *)v120 + (unsigned int)v13) = 2;
            goto LABEL_37;
          }
          v30 = *v29;
          v31 = -1LL;
          do
            ++v31;
          while ( *(_WORD *)(v30 + 2 * v31) );
          v24 += 2 * v31;
          v27 = Val;
        }
        if ( (unsigned int)++v28 >= 0x20 )
          goto LABEL_37;
      }
    }
    v39 = -1LL;
    *((_DWORD *)v120 + (unsigned int)v13) = 1;
    do
      ++v39;
    while ( *(_WORD *)(*v25 + 2 * v39) );
    v24 = 2 * v39;
LABEL_37:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v127 = v11;
    v35 = LookupSidInTable(0LL, Sid1, a6, v26, Str2, a9, &v119);
    v36 = (wchar_t **)((char *)P + 8 * (unsigned int)v13);
    if ( v35 )
    {
      v37 = v35 + 2;
      *v36 = (wchar_t *)(v35 + 2);
      goto LABEL_39;
    }
    if ( v119 )
    {
      v98 = (wchar_t *)SddlpAlloc(6uLL);
      *v36 = v98;
      if ( !v98 )
      {
        AceCondition = 8;
        goto LABEL_143;
      }
      wcscpy_s(v98, 3uLL, L"SA");
      goto LABEL_48;
    }
    v40 = LocalConvertSidToStringSidW(Sid1, (wchar_t **)P + (unsigned int)v13);
    if ( v40 < 0 )
      break;
LABEL_48:
    *((_BYTE *)v123 + (unsigned int)v13) = 1;
    v37 = (__int64)*v36;
LABEL_39:
    v38 = -1LL;
    do
      ++v38;
    while ( *(_WORD *)(v37 + 2 * v38) );
    v10 = a1;
    v11 += 2 * v38 + 4;
    v14 += *((unsigned __int16 *)v14 + 1);
    v127 = v11;
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_49;
  }
  AceCondition = RtlNtStatusToDosError(v40);
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
    v127 = ++v11;
  v41 = v11;
  v42 = (PVOID *)a4;
  v43 = (_WORD *)SddlpAlloc(v11);
  *a4 = (__int64)v43;
  if ( !v43 )
  {
    v11 = v127;
    AceCondition = 8;
    goto LABEL_180;
  }
  v44 = v41 >> 1;
  *(_DWORD *)Str2 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_178;
  while ( 2 )
  {
    if ( !v44 )
      goto LABEL_177;
    *v43 = 40;
    v45 = v43 + 1;
    v46 = v44 - 1;
    v47 = (const wchar_t **)LookupAceTypeInTable(0LL);
    v48 = v47;
    if ( v47 )
    {
      wcscpy_s(v45, v46, *v47);
      v49 = *((unsigned int *)v48 + 2);
      v46 -= v49;
      v45 += v49;
    }
    if ( !v46 )
      goto LABEL_177;
    v50 = v118;
    *v45 = 59;
    v51 = v13;
    v52 = v45 + 1;
    v53 = v46 - 1;
    do
    {
      if ( ((unsigned __int8)(1 << v51) & (unsigned __int8)v50[1]) != 0 )
      {
        v78 = (const wchar_t **)LookupAceFlagsInTable(0LL);
        v79 = v78;
        if ( v78 )
        {
          wcscpy_s(v52, v53, *v78);
          v80 = *((unsigned int *)v79 + 2);
          v53 -= v80;
          v52 += v80;
        }
      }
      ++v51;
    }
    while ( v51 < 8 );
    v54 = *(unsigned int *)Str2;
    if ( !v53 )
    {
LABEL_177:
      AceCondition = 1336;
      goto LABEL_178;
    }
    v55 = v118;
    *v52 = 59;
    v56 = v53 - 1;
    v57 = v52 + 1;
    v124 = v13;
    v58 = v13;
    v119 = v13;
    v59 = *v55;
    if ( (unsigned __int8)*v55 > 0xBu )
    {
      if ( v59 == 13 || v59 > 0x10u && v59 <= 0x15u )
        goto LABEL_66;
    }
    else
    {
      if ( *v55 == 11 )
        goto LABEL_147;
      if ( v59 <= 3u )
        goto LABEL_66;
      if ( v59 > 4u )
      {
        if ( v59 > 8u )
        {
          if ( v59 > 0xAu )
            goto LABEL_67;
LABEL_66:
          Val = *((_DWORD *)v55 + 1);
          Sid1 = v55 + 8;
          goto LABEL_67;
        }
LABEL_147:
        v99 = *((_DWORD *)v55 + 2) & 2;
        v100 = *((_DWORD *)v55 + 2) & 1;
        v101 = 16LL * v100;
        Val = *((_DWORD *)v55 + 1);
        Sid1 = &v55[v101 + (v99 != 0 ? 28LL : 12LL)];
        if ( v99 )
          v13 = (__int64)&v55[v101 + 12];
        else
          v13 = 0LL;
        v119 = v13;
        v58 = (unsigned __int64)(v55 + 12) & -(__int64)(v100 != 0);
        v124 = v58;
      }
    }
LABEL_67:
    v60 = (unsigned int)Src;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      v60 = 0;
      Src = 0LL;
    }
    v115 = v60;
    v115 = LocalGetAceCondition(v55, Sid1, &Src, &v115);
    AceCondition = v115;
    if ( v115 )
      goto LABEL_176;
    v61 = *((_DWORD *)v120 + v54);
    if ( v61 == 2 )
    {
      wcscpy_s(v57, v56, L"0x");
      v57 += 2;
      v56 -= 2LL;
      ultow_s(Val, v57, v56, AceCondition + 16);
      v62 = -1LL;
      do
        ++v62;
      while ( v57[v62] != (_WORD)v60 );
LABEL_73:
      v57 += v62;
      v56 -= v62;
    }
    else if ( v61 == 1 )
    {
      v81 = (const wchar_t **)LookupAccessMaskInTable(0LL);
      v82 = v81;
      if ( v81 )
      {
        wcscpy_s(v57, v56, *v81);
        v62 = *((unsigned int *)v82 + 2);
        goto LABEL_73;
      }
    }
    else
    {
      v102 = Val;
      do
      {
        if ( (v102 & (1 << v60)) != 0 )
        {
          v103 = (const wchar_t **)LookupAccessMaskInTable(0LL);
          v104 = v103;
          if ( v103 )
          {
            wcscpy_s(v57, v56, *v103);
            v105 = *((unsigned int *)v104 + 2);
            v56 -= v105;
            v57 += v105;
          }
          v102 = Val;
        }
        ++v60;
      }
      while ( v60 < 0x20 );
      AceCondition = v115;
      v58 = v124;
      v13 = v119;
    }
    if ( !v56 )
      break;
    v63 = v56 - 1;
    *v57 = 59;
    v64 = v57 + 1;
    if ( v58 )
    {
      if ( !(unsigned int)SddlpUuidToString(v58, &v121) )
        goto LABEL_176;
      v106 = v121;
      v107 = -1LL;
      do
        ++v107;
      while ( *((_WORD *)v121 + v107) );
      wcscpy_s(v64, v63, (const wchar_t *)v121);
      v63 -= v107;
      v64 += v107;
      if ( v106 )
        ExFreePoolWithTag(v106, 0);
    }
    if ( v63 )
    {
      *v64 = 59;
      v65 = v63 - 1;
      v66 = v64 + 1;
      if ( v13 )
      {
        v108 = SddlpUuidToString(v13, &v121);
        v13 = 0LL;
        if ( !v108 )
          goto LABEL_178;
        v109 = v121;
        v110 = -1LL;
        do
          ++v110;
        while ( *((_WORD *)v121 + v110) );
        wcscpy_s(v66, v65, (const wchar_t *)v121);
        v65 -= v110;
        v66 += v110;
        if ( v109 )
          ExFreePoolWithTag(v109, 0);
      }
      v67 = P;
      if ( !v65 )
      {
LABEL_174:
        AceCondition = 1336;
LABEL_91:
        v11 = v127;
        v42 = (PVOID *)a4;
        goto LABEL_92;
      }
      v68 = *(unsigned int *)Str2;
      v69 = v65 - 1;
      *v66 = 59;
      v70 = v66 + 1;
      v71 = (const wchar_t *)v67[v68];
      wcscpy_s(v70, v69, v71);
      v72 = -1LL;
      do
        ++v72;
      while ( v71[v72] != (_WORD)v13 );
      v73 = Src;
      v74 = &v70[v72];
      v75 = v69 - v72;
      if ( Src )
      {
        if ( !v75 )
          goto LABEL_174;
        v87 = v75 - 1;
        *v74 = 59;
        v88 = v74 + 1;
        wcscpy_s(v88, v87, v73);
        v89 = -1LL;
        do
          ++v89;
        while ( v73[v89] != (_WORD)v13 );
        v74 = &v88[v89];
        v75 = v87 - v89;
      }
      if ( v75 <= 1 )
        goto LABEL_174;
      v76 = v118;
      *v74 = 41;
      v77 = v68 + 1;
      v43 = v74 + 1;
      *(_DWORD *)Str2 = v77;
      v44 = v75 - 1;
      *v43 = v13;
      v118 = &v76[*((unsigned __int16 *)v76 + 1)];
      if ( v77 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_91;
      continue;
    }
    break;
  }
  AceCondition = 1336;
LABEL_176:
  v13 = 0LL;
LABEL_178:
  v11 = v127;
LABEL_179:
  v42 = (PVOID *)a4;
LABEL_180:
  v67 = P;
LABEL_92:
  v83 = v13;
  if ( (unsigned __int16)v13 < *(_WORD *)(a1 + 4) )
  {
    v84 = v123;
    do
    {
      if ( v84[v83] )
      {
        v86 = (void *)v67[v83];
        if ( v86 )
          ExFreePoolWithTag(v86, 0);
      }
      ++v83;
    }
    while ( v83 < *(unsigned __int16 *)(a1 + 4) );
    v13 = 0LL;
  }
  ExFreePoolWithTag(v67, 0);
  ExFreePoolWithTag(v123, 0);
  ExFreePoolWithTag(v120, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( AceCondition )
  {
    if ( *v42 )
      ExFreePoolWithTag(*v42, 0);
    *v42 = (PVOID)v13;
    *a5 = v13;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}

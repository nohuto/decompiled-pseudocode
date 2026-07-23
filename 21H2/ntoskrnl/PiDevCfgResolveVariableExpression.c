/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x1408A8270
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     PnpStringToDwordValue @ 0x1403813EC (PnpStringToDwordValue.c)
 *     PnpMultiSzContainsString @ 0x140392F50 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x140392FCC (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlCompareUnicodeStrings @ 0x1405DCCD0 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x1408A5E84 (PiDevCfgCopyVariableData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  unsigned int v5; // r15d
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r12
  int v8; // edi
  _WORD *v9; // rsi
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r14
  WCHAR v13; // ax
  __int64 v14; // r12
  wchar_t *v15; // r13
  __int64 *v16; // rdx
  wchar_t **v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rcx
  size_t v23; // r14
  size_t v24; // rsi
  unsigned __int16 v25; // bx
  __int64 *v26; // r15
  int v27; // ecx
  int v28; // edx
  unsigned int v29; // eax
  _WORD *v30; // rdx
  int v31; // ecx
  int v32; // ebx
  bool v33; // zf
  __int64 v34; // rax
  unsigned int v35; // ebx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  wchar_t *PoolWithTag; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // ax
  _WORD *v42; // r8
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  char v46; // al
  bool v47; // zf
  unsigned int v48; // eax
  int v49; // ecx
  SIZE_T v50; // r15
  const WCHAR *v51; // r14
  const WCHAR *v52; // r12
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rax
  unsigned int v60; // esi
  unsigned __int16 v61; // bx
  unsigned __int64 v62; // rbx
  wchar_t *v63; // rax
  wchar_t *v64; // r13
  LONG v65; // eax
  BOOL v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  LONG v71; // eax
  unsigned int v72; // eax
  LONG v73; // eax
  LONG v74; // eax
  LONG v75; // eax
  int v76; // r8d
  _WORD *v77; // rbx
  unsigned int v78; // esi
  int v79; // ecx
  __int64 v80; // rax
  wchar_t *v81; // rax
  unsigned __int64 v82; // rsi
  _BYTE *v83; // r15
  const void *v84; // r13
  PCWSTR v85; // r12
  wchar_t *v86; // rax
  __int64 v87; // rbx
  SIZE_T v88; // r12
  wchar_t *v89; // rax
  int v90; // ecx
  unsigned int v91; // r9d
  unsigned int v92; // r8d
  int v93; // ecx
  int v94; // ecx
  int v95; // ecx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // r8d
  unsigned int v102; // r9d
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // ecx
  int v107; // ecx
  int v108; // ecx
  int v109; // ecx
  BOOL v110; // eax
  const void *v111; // r10
  size_t v112; // r8
  int v113; // r9d
  int v114; // eax
  __int64 *v115; // r12
  int v116; // ecx
  size_t v117; // rbx
  const void *v118; // r14
  const void *v119; // r15
  size_t v120; // rsi
  wchar_t *v121; // rax
  wchar_t *v122; // r12
  bool v123; // cc
  unsigned __int16 v124; // r8
  int v125; // ecx
  unsigned __int16 v126; // bx
  wchar_t *v127; // r15
  unsigned __int16 v128; // si
  int v129; // ecx
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  wchar_t *v137; // rax
  unsigned int v138; // eax
  bool v139; // al
  _BYTE *v140; // rdx
  int v141; // ecx
  wchar_t *v143; // rax
  __int64 v144; // r14
  __int128 *v145; // rsi
  _QWORD *v146; // rbx
  void *v147; // rcx
  __int64 v148; // rax
  unsigned int v149; // eax
  __int128 *v150; // rbx
  __int64 v151; // r14
  _QWORD *v152; // rsi
  void *v153; // rcx
  PVOID v154; // r14
  PVOID **v155; // rbx
  __int64 v156; // rsi
  PVOID *v157; // rcx
  wchar_t *v159; // [rsp+30h] [rbp-89h]
  wchar_t *v160; // [rsp+30h] [rbp-89h]
  __int16 v161; // [rsp+38h] [rbp-81h]
  unsigned int v162; // [rsp+3Ch] [rbp-7Dh]
  unsigned __int16 v163; // [rsp+40h] [rbp-79h]
  unsigned int v164; // [rsp+58h] [rbp-61h]
  __int64 v165; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v166; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v167; // [rsp+6Ch] [rbp-4Dh]
  __int64 v168; // [rsp+70h] [rbp-49h]
  PVOID P; // [rsp+78h] [rbp-41h]
  PVOID v170; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-31h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-21h] BYREF
  __int64 v173; // [rsp+A8h] [rbp-11h]
  __int64 v174; // [rsp+B0h] [rbp-9h]
  __int128 v175; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v176; // [rsp+C8h] [rbp+Fh]

  v168 = a3;
  v174 = a1;
  v173 = 0LL;
  v176 = 0LL;
  v3 = a3;
  v170 = 0LL;
  LODWORD(v4) = 0;
  v164 = 0;
  v5 = 0;
  v175 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v170);
  v7 = (unsigned int *)v170;
  v8 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_368;
  if ( !PnpValidateRegistryMultiSz(v170) )
    goto LABEL_367;
  v9 = (_WORD *)((char *)v7 + v7[2]);
  v165 = (__int64)v9;
  v10 = v9;
  if ( !*v9 )
    goto LABEL_367;
  do
  {
    ++v5;
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v10 += v11 + 1;
  }
  while ( *v10 );
  v167 = v5;
  if ( !v5 )
  {
LABEL_367:
    v8 = -1073741823;
    goto LABEL_368;
  }
  P = ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v12 = (__int64 *)P;
  if ( !P )
  {
    v8 = -1073741670;
    goto LABEL_368;
  }
  v13 = *v9;
  if ( !*v9 )
    goto LABEL_355;
  v14 = v175;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = 0LL;
    if ( v13 )
    {
      if ( v9[1] && v9[2] )
        goto LABEL_18;
      v17 = &off_140988680;
      v18 = 1;
      while ( *(_DWORD *)v9 != *(_DWORD *)*v17 )
      {
        ++v18;
        v17 += 3;
        if ( v18 >= 0x1B )
          goto LABEL_18;
      }
      v16 = &qword_140988660[3 * v18];
    }
    if ( v16 )
      break;
LABEL_18:
    if ( (unsigned int)v4 >= v5 )
    {
      v8 = -1073741571;
      goto LABEL_354;
    }
    v165 = 0LL;
    v19 = PiDevCfgResolveVariable(v174, v9, &v165);
    v8 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741772 )
        v8 = -1073741823;
      goto LABEL_354;
    }
    v12[(unsigned int)v4] = v165;
LABEL_331:
    LODWORD(v4) = v4 + 1;
    v164 = v4;
    v148 = -1LL;
    do
      ++v148;
    while ( v9[v148] );
    v9 += v148 + 1;
    v165 = (__int64)v9;
    v13 = *v9;
    if ( !*v9 )
    {
      v164 = v4;
LABEL_354:
      v3 = v168;
LABEL_355:
      if ( v8 < 0 )
        goto LABEL_358;
      if ( (_DWORD)v4 != 1 )
      {
        v8 = -1073741823;
        goto LABEL_358;
      }
      v8 = PiDevCfgCopyVariableData(v3, *v12);
      v149 = 0;
      goto LABEL_343;
    }
  }
  v20 = *((_DWORD *)v16 + 4);
  v21 = 0LL;
  v162 = 0;
  if ( v20 )
  {
    v162 = 0;
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v164 = v4;
      *((_QWORD *)&v175 + v21) = v12[v4];
      v21 = (unsigned int)(v21 + 1);
      v162 = v21;
      if ( (unsigned int)v21 >= v20 )
        goto LABEL_27;
    }
    v8 = -1073741823;
LABEL_27:
    v22 = v176;
    v14 = v175;
    v173 = v176;
  }
  else
  {
    v22 = v173;
  }
  if ( v8 < 0 )
    goto LABEL_342;
  v166 = 0;
  v159 = 0LL;
  LODWORD(v23) = 0;
  LOWORD(v24) = 0;
  v161 = 0;
  v25 = 0;
  v163 = 0;
  v26 = 0LL;
  if ( (_DWORD)v21 == 1 )
  {
    v27 = *(_DWORD *)v16;
    v28 = *(_DWORD *)v16 - 22;
    if ( v28 )
    {
      v14 = v175;
      if ( v28 != 1 )
      {
        v29 = *(_DWORD *)(v175 + 32);
        if ( !v29 )
          goto LABEL_40;
        if ( v29 > 2 )
        {
          if ( v29 == 4 )
          {
            v35 = **(_DWORD **)(v175 + 40);
            v36 = v27 - 11;
            if ( !v36 )
            {
              LODWORD(v23) = ~v35;
              goto LABEL_41;
            }
            v37 = v36 - 1;
            if ( v37 )
            {
              v38 = v37 - 13;
              if ( !v38 )
              {
                LODWORD(v23) = **(_DWORD **)(v175 + 40);
                goto LABEL_41;
              }
              if ( v38 == 1 )
              {
                v163 = 20;
                v161 = 22;
                LOWORD(v24) = 22;
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v8 = RtlStringCchPrintfW(PoolWithTag, 0xBuLL, L"%u", v35);
                  if ( v8 < 0 )
                  {
                    ExFreePoolWithTag(v15, 0);
                    v15 = 0LL;
                  }
                  else
                  {
                    v40 = -1LL;
                    do
                      ++v40;
                    while ( v15[v40] );
                    v41 = 2 * v40;
                    LOWORD(v24) = v41 + 2;
                    v163 = v41;
                    v161 = v41 + 2;
                  }
                  goto LABEL_42;
                }
                goto LABEL_335;
              }
LABEL_40:
              v26 = qword_1409838D8;
              goto LABEL_41;
            }
            v33 = v35 == 0;
          }
          else
          {
            if ( v29 != 7 )
              goto LABEL_40;
            v30 = *(_WORD **)(v175 + 40);
            v31 = v27 - 11;
            if ( !v31 )
            {
              while ( *v30 )
              {
                LODWORD(v23) = v23 + 1;
                v34 = -1LL;
                do
                  ++v34;
                while ( v30[v34] );
                v30 += v34 + 1;
              }
              goto LABEL_41;
            }
            if ( v31 != 1 )
              goto LABEL_40;
            v33 = *v30 == 0;
          }
LABEL_51:
          LODWORD(v23) = v33;
          goto LABEL_41;
        }
        v42 = *(_WORD **)(v175 + 40);
        v43 = v27 - 11;
        if ( !v43 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v42[v23] );
          goto LABEL_41;
        }
        v44 = v43 - 1;
        if ( !v44 )
        {
          v33 = *v42 == 0;
          goto LABEL_51;
        }
        v45 = v44 - 13;
        if ( v45 )
        {
          v15 = 0LL;
          if ( v45 != 1 )
          {
            v26 = qword_1409838D8;
LABEL_75:
            v14 = v175;
            goto LABEL_43;
          }
LABEL_76:
          v26 = (__int64 *)v14;
          goto LABEL_75;
        }
        v46 = PnpStringToDwordValue(*(_QWORD *)(v175 + 40), &v166);
        v14 = v175;
        if ( v46 )
          LODWORD(v23) = v166;
        else
          LODWORD(v23) = 0;
        v15 = 0LL;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(v175 + 32) )
        goto LABEL_43;
LABEL_89:
      LODWORD(v23) = 1;
      goto LABEL_43;
    }
    v47 = *(_DWORD *)(v14 + 32) == 0;
LABEL_88:
    if ( v47 )
      goto LABEL_43;
    goto LABEL_89;
  }
  if ( (_DWORD)v21 != 2 )
  {
    if ( (_DWORD)v21 != 3 )
      goto LABEL_43;
    v138 = *(_DWORD *)(v22 + 32);
    if ( v138 )
    {
      if ( v138 <= 2 )
      {
        v139 = *(_DWORD *)(v22 + 36) >= 2u;
      }
      else
      {
        switch ( v138 )
        {
          case 3u:
            v140 = *(_BYTE **)(v22 + 40);
            v141 = *(_DWORD *)(v22 + 36);
            if ( !v141 )
            {
LABEL_315:
              v26 = (__int64 *)v14;
              goto LABEL_43;
            }
            while ( !*v140++ )
            {
              if ( !--v141 )
                goto LABEL_315;
            }
LABEL_316:
            v26 = (__int64 *)*((_QWORD *)&v175 + 1);
            goto LABEL_43;
          case 4u:
            v139 = **(_DWORD **)(v22 + 40) != 0;
            break;
          case 7u:
            v139 = *(_DWORD *)(v22 + 36) > 4u;
            break;
          default:
            goto LABEL_316;
        }
      }
    }
    else
    {
      v139 = 0;
    }
    if ( !v139 )
      goto LABEL_315;
    goto LABEL_316;
  }
  v48 = *(_DWORD *)(*((_QWORD *)&v175 + 1) + 32LL);
  if ( !v48 )
  {
LABEL_298:
    v26 = qword_1409838D8;
    goto LABEL_43;
  }
  if ( v48 <= 2 )
  {
    v115 = (__int64 *)v175;
    v116 = *(_DWORD *)(v175 + 32);
    if ( (unsigned int)(v116 - 1) <= 1 )
    {
      v123 = *(_DWORD *)(*((_QWORD *)&v175 + 1) + 36LL) <= 0xFFFEu;
      String1 = 0LL;
      String2 = 0LL;
      if ( v123 && *(_DWORD *)(v175 + 36) <= 0xFFFEu )
      {
        v124 = *(_WORD *)(*((_QWORD *)&v175 + 1) + 36LL);
        v125 = *(_DWORD *)v16;
        v126 = v124 - 2;
        v127 = *(wchar_t **)(*((_QWORD *)&v175 + 1) + 40LL);
        v23 = *(_QWORD *)(v175 + 40);
        String2.MaximumLength = *(_WORD *)(v175 + 36);
        v128 = String2.MaximumLength - 2;
        String1.Buffer = v127;
        String1.MaximumLength = v124;
        String1.Length = v124 - 2;
        String2.Buffer = (wchar_t *)v23;
        String2.Length = String2.MaximumLength - 2;
        v129 = v125 - 1;
        if ( v129 )
        {
          v130 = v129 - 12;
          if ( !v130 )
          {
            if ( v126 >= 2u && v128 >= 2u )
              goto LABEL_107;
            goto LABEL_287;
          }
          v131 = v130 - 1;
          if ( !v131 )
          {
            if ( v126 >= 2u || v128 >= 2u )
              goto LABEL_107;
            goto LABEL_287;
          }
          v132 = v131 - 1;
          if ( !v132 )
          {
            v65 = RtlCompareUnicodeString(&String1, &String2, 1u);
            goto LABEL_138;
          }
          v133 = v132 - 1;
          if ( !v133 )
          {
            v66 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
            goto LABEL_139;
          }
          v134 = v133 - 1;
          if ( !v134 )
          {
            v72 = RtlCompareUnicodeString(&String1, &String2, 1u);
            goto LABEL_149;
          }
          v135 = v134 - 1;
          if ( v135 )
          {
            v136 = v135 - 1;
            if ( v136 )
            {
              if ( v136 != 1 )
                goto LABEL_146;
              v71 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_148:
              v72 = ~v71;
LABEL_149:
              v58 = v72 >> 31;
              goto LABEL_108;
            }
            v73 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_151:
            v66 = v73 <= 0;
            goto LABEL_139;
          }
          v74 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_153:
          v66 = v74 > 0;
          goto LABEL_139;
        }
        if ( *v127 )
        {
          if ( *(_WORD *)v23 )
          {
            if ( v126 + (unsigned int)v128 < 0xFFFE )
            {
              v163 = v126 + v128;
              v161 = v128 + v124;
              v137 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v128 + v124), 0x63647050u);
              v15 = v137;
              if ( v137 )
              {
                memmove(v137, v127, v126);
                memmove(&v15[(unsigned __int64)v126 >> 1], (const void *)v23, v128 + 2LL);
                LODWORD(v23) = 0;
                goto LABEL_109;
              }
              goto LABEL_335;
            }
            goto LABEL_337;
          }
          v26 = (__int64 *)*((_QWORD *)&v175 + 1);
        }
        else
        {
          v26 = (__int64 *)v175;
        }
LABEL_180:
        LODWORD(v23) = 0;
        v15 = 0LL;
        goto LABEL_110;
      }
LABEL_339:
      v8 = -2147483643;
      goto LABEL_336;
    }
    if ( v116 != 7 )
      goto LABEL_160;
    v117 = *(unsigned int *)(*((_QWORD *)&v175 + 1) + 36LL);
    v118 = *(const void **)(*((_QWORD *)&v175 + 1) + 40LL);
    v119 = *(const void **)(v175 + 40);
    v120 = *(unsigned int *)(v175 + 36);
    if ( (unsigned int)v117 > 0xFFFE || (unsigned int)v120 > 0xFFFE )
      goto LABEL_339;
    if ( *(_DWORD *)v16 != 1 )
    {
      if ( *(_DWORD *)v16 == 8 )
      {
        if ( PnpMultiSzContainsString(*(PCWSTR *)(v175 + 40), *(const WCHAR **)(*((_QWORD *)&v175 + 1) + 40LL)) )
          v26 = (__int64 *)*((_QWORD *)&v175 + 1);
        else
          v26 = 0LL;
        goto LABEL_267;
      }
      if ( *(_DWORD *)v16 != 9 )
      {
        v26 = qword_1409838D8;
        goto LABEL_267;
      }
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v175 + 40), *(const WCHAR **)(*((_QWORD *)&v175 + 1) + 40LL)) )
      {
        v26 = v115;
        goto LABEL_267;
      }
    }
    if ( (unsigned int)(v120 + v117) > 0xFFFE )
    {
LABEL_337:
      v8 = -2147483643;
LABEL_338:
      v149 = v162;
      goto LABEL_344;
    }
    v163 = v120 + v117;
    v121 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v120 + v117), 0x63647050u);
    v159 = v121;
    v122 = v121;
    if ( !v121 )
    {
      v8 = -1073741670;
      goto LABEL_338;
    }
    memmove(v121, v118, v117);
    memmove(&v122[v117 >> 1], v119, v120);
    v26 = 0LL;
LABEL_267:
    LOWORD(v24) = v163;
    goto LABEL_136;
  }
  if ( v48 == 3 )
  {
    if ( *(_DWORD *)(v175 + 32) != 3 )
      goto LABEL_160;
    v111 = *(const void **)(*((_QWORD *)&v175 + 1) + 40LL);
    v112 = *(unsigned int *)(*((_QWORD *)&v175 + 1) + 36LL);
    v113 = *(_DWORD *)(v175 + 36);
    if ( *(_DWORD *)v16 == 15 )
    {
      if ( (_DWORD)v112 != v113 )
        goto LABEL_42;
      v114 = memcmp(v111, *(const void **)(v175 + 40), v112);
      v14 = v175;
      if ( v114 )
        goto LABEL_43;
      goto LABEL_250;
    }
    if ( *(_DWORD *)v16 != 16 )
    {
LABEL_160:
      v26 = qword_1409838D8;
      goto LABEL_42;
    }
    if ( (_DWORD)v112 != v113 || (v33 = memcmp(v111, *(const void **)(v175 + 40), v112) == 0, v110 = 0, !v33) )
      v110 = 1;
LABEL_231:
    LODWORD(v23) = v110;
    goto LABEL_42;
  }
  if ( v48 == 4 )
  {
    if ( *(_DWORD *)(v175 + 32) != 4 )
      goto LABEL_160;
    v90 = *(_DWORD *)v16;
    v91 = **(_DWORD **)(*((_QWORD *)&v175 + 1) + 40LL);
    v92 = **(_DWORD **)(v175 + 40);
    if ( *(int *)v16 <= 10 )
    {
      if ( v90 == 10 )
      {
        v101 = v91 ^ v92;
        goto LABEL_208;
      }
      v93 = v90 - 1;
      if ( !v93 )
      {
        LODWORD(v23) = v92 + v91;
        goto LABEL_42;
      }
      v94 = v93 - 1;
      if ( !v94 )
      {
        v102 = v91 - v92;
LABEL_211:
        LODWORD(v23) = v102;
LABEL_42:
        v14 = v175;
        goto LABEL_43;
      }
      v95 = v94 - 1;
      if ( !v95 )
      {
        v101 = v91 * v92;
        goto LABEL_208;
      }
      v96 = v95 - 1;
      if ( v96 )
      {
        v97 = v96 - 1;
        if ( v97 )
        {
          v98 = v97 - 1;
          if ( !v98 )
          {
            v102 = v91 << v92;
            goto LABEL_211;
          }
          v99 = v98 - 1;
          if ( !v99 )
          {
            v102 = v91 >> v92;
            goto LABEL_211;
          }
          v100 = v99 - 1;
          if ( v100 )
          {
            if ( v100 != 1 )
              goto LABEL_160;
            v101 = v91 | v92;
          }
          else
          {
            v101 = v91 & v92;
          }
LABEL_208:
          LODWORD(v23) = v101;
          goto LABEL_42;
        }
        v14 = v175;
        if ( v92 )
        {
          LODWORD(v23) = v91 % v92;
          goto LABEL_43;
        }
      }
      else
      {
        v14 = v175;
        if ( v92 )
        {
          LODWORD(v23) = v91 / v92;
          goto LABEL_43;
        }
      }
      v8 = -1073741676;
      goto LABEL_43;
    }
    v103 = v90 - 13;
    if ( !v103 )
    {
      if ( !v91 )
        goto LABEL_42;
      v14 = v175;
      v47 = v92 == 0;
      goto LABEL_88;
    }
    v104 = v103 - 1;
    if ( v104 )
    {
      v105 = v104 - 1;
      if ( v105 )
      {
        v106 = v105 - 1;
        if ( v106 )
        {
          v107 = v106 - 1;
          if ( v107 )
          {
            v108 = v107 - 1;
            if ( v108 )
            {
              v109 = v108 - 1;
              if ( v109 )
              {
                if ( v109 != 1 )
                  goto LABEL_160;
                v110 = v91 >= v92;
              }
              else
              {
                v110 = v91 <= v92;
              }
            }
            else
            {
              v110 = v91 > v92;
            }
          }
          else
          {
            v110 = v91 < v92;
          }
        }
        else
        {
          v110 = v91 != v92;
        }
      }
      else
      {
        v110 = v91 == v92;
      }
    }
    else
    {
      v110 = 0;
      if ( v91 || v92 )
        v110 = 1;
    }
    goto LABEL_231;
  }
  if ( v48 != 7 )
    goto LABEL_298;
  v14 = v175;
  v49 = *(_DWORD *)(v175 + 32);
  if ( v49 != 7 )
  {
    if ( (unsigned int)(v49 - 1) > 1 )
    {
      if ( v49 == 4 )
      {
        v76 = **(_DWORD **)(v175 + 40);
        if ( *(_DWORD *)v16 == 24 )
        {
          v77 = *(_WORD **)(*((_QWORD *)&v175 + 1) + 40LL);
          v78 = 0;
          v79 = 0;
          while ( *v77 )
          {
            v80 = -1LL;
            do
              ++v80;
            while ( v77[v80] );
            v78 = 2 * v80 + 2;
            if ( v79 == v76 )
              goto LABEL_168;
            ++v79;
            v77 += (unsigned __int64)v78 >> 1;
          }
          if ( v79 == v76 )
          {
LABEL_168:
            if ( *v77 && v78 > 2 )
            {
              v163 = v78 - 16;
              v161 = v78;
              v81 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v78, 0x63647050u);
              v15 = v81;
              if ( v81 )
              {
                memmove(v81, v77, v78);
                goto LABEL_110;
              }
              goto LABEL_335;
            }
          }
          v26 = qword_1409838D8;
          goto LABEL_110;
        }
      }
      goto LABEL_160;
    }
    v82 = *(unsigned int *)(*((_QWORD *)&v175 + 1) + 36LL);
    v83 = *(_BYTE **)(*((_QWORD *)&v175 + 1) + 40LL);
    v84 = *(const void **)(v175 + 40);
    v23 = *(unsigned int *)(v175 + 36);
    if ( (unsigned int)v82 <= 0xFFFE && (unsigned int)v23 <= 0xFFFE )
    {
      if ( *(_DWORD *)v16 != 1 )
      {
        if ( *(_DWORD *)v16 == 2 )
        {
          v85 = PnpMultiSzContainsString(*(PCWSTR *)(*((_QWORD *)&v175 + 1) + 40LL), *(const WCHAR **)(v175 + 40));
          if ( v85 )
          {
            v163 = v82 - v23;
            v86 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v82 - v23), 0x63647050u);
            v15 = v86;
            if ( !v86 )
              goto LABEL_335;
            v87 = ((char *)v85 - v83) >> 1;
            if ( v87 > 0 )
              memmove(v86, v83, ((char *)v85 - v83) >> 1);
            memmove((char *)v15 + v87, (char *)v85 + v23, (unsigned int)(v82 - v23) - v87);
            v26 = 0LL;
            v25 = v82 - v23;
          }
          else
          {
            v26 = (__int64 *)*((_QWORD *)&v175 + 1);
            v15 = 0LL;
          }
          LODWORD(v23) = 0;
          LOWORD(v24) = v25;
          v161 = v25;
          goto LABEL_42;
        }
        if ( *(_DWORD *)v16 == 8 )
        {
          LODWORD(v23) = 0;
          v15 = 0LL;
          LOWORD(v24) = 0;
          if ( !PnpMultiSzContainsString(*(PCWSTR *)(*((_QWORD *)&v175 + 1) + 40LL), *(const WCHAR **)(v175 + 40)) )
          {
            v26 = 0LL;
            goto LABEL_75;
          }
          goto LABEL_76;
        }
        if ( *(_DWORD *)v16 != 9 )
        {
          v26 = qword_1409838D8;
          goto LABEL_180;
        }
        if ( PnpMultiSzContainsString(*(PCWSTR *)(*((_QWORD *)&v175 + 1) + 40LL), *(const WCHAR **)(v175 + 40)) )
        {
          v26 = (__int64 *)*((_QWORD *)&v175 + 1);
          goto LABEL_180;
        }
      }
      if ( (unsigned int)(v23 + v82) <= 0xFFFE )
      {
        v88 = (unsigned __int16)(v23 + v82);
        v163 = v23 + v82;
        v161 = v23 + v82;
        v89 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v88, 0x63647050u);
        v160 = v89;
        if ( v89 )
        {
          memmove(v89, v83, v82 - 2);
          memmove(&v160[(v82 >> 1) - 1], v84, v23);
          v15 = v160;
          LODWORD(v23) = 0;
          v26 = 0LL;
          v160[(v88 >> 1) - 1] = 0;
          goto LABEL_110;
        }
        goto LABEL_335;
      }
    }
    goto LABEL_339;
  }
  v50 = *(unsigned int *)(*((_QWORD *)&v175 + 1) + 36LL);
  v51 = *(const WCHAR **)(*((_QWORD *)&v175 + 1) + 40LL);
  v52 = *(const WCHAR **)(v175 + 40);
  v24 = *(unsigned int *)(v175 + 36);
  if ( (unsigned int)v50 > 0xFFFE || (unsigned int)v24 > 0xFFFE )
    goto LABEL_339;
  v53 = *(_DWORD *)v16;
  if ( *(int *)v16 > 15 )
  {
    v67 = v53 - 16;
    if ( v67 )
    {
      v68 = v67 - 1;
      if ( !v68 )
      {
        v72 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
        goto LABEL_149;
      }
      v69 = v68 - 1;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          if ( v70 != 1 )
            goto LABEL_146;
          v71 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
          goto LABEL_148;
        }
        v73 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
        goto LABEL_151;
      }
      v74 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
      goto LABEL_153;
    }
    v75 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
    v14 = v175;
    LOWORD(v24) = 0;
    v26 = 0LL;
    if ( !v75 )
    {
      LODWORD(v23) = 0;
LABEL_43:
      if ( v8 < 0 )
        goto LABEL_342;
      if ( !v26 )
      {
        v26 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
        if ( !v26 )
          goto LABEL_341;
        *((_DWORD *)v26 + 4) = 0;
        v26[3] = 0LL;
        if ( v15 )
        {
          v32 = 7;
          LODWORD(v24) = (unsigned __int16)v24;
          if ( v163 != v161 )
            v32 = 1;
        }
        else
        {
          v32 = 4;
          LODWORD(v24) = 4;
          v143 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          v15 = v143;
          if ( !v143 )
          {
LABEL_341:
            v8 = -1073741670;
LABEL_342:
            v149 = v162;
LABEL_343:
            if ( v149 )
              goto LABEL_344;
            goto LABEL_358;
          }
          *(_DWORD *)v143 = v23;
        }
        *((_DWORD *)v26 + 8) = v32;
        *((_DWORD *)v26 + 9) = v24;
        v26[5] = (__int64)v15;
      }
      LODWORD(v4) = v164;
      v15 = 0LL;
      v12 = (__int64 *)P;
      *((_QWORD *)P + v164) = v26;
      if ( v162 )
      {
        v144 = v162;
        v145 = &v175;
        do
        {
          v146 = *(_QWORD **)v145;
          if ( !*(_QWORD *)(*(_QWORD *)v145 + 24LL) )
          {
            v147 = (void *)v146[5];
            if ( v147 )
              ExFreePoolWithTag(v147, 0);
            ExFreePoolWithTag(v146, 0);
          }
          v145 = (__int128 *)((char *)v145 + 8);
          --v144;
        }
        while ( v144 );
        LODWORD(v4) = v164;
        v12 = (__int64 *)P;
      }
      v5 = v167;
      v9 = (_WORD *)v165;
      goto LABEL_331;
    }
LABEL_250:
    LODWORD(v23) = 1;
    goto LABEL_43;
  }
  if ( v53 == 15 )
  {
    v65 = RtlCompareUnicodeStrings(v51, v50 >> 1, v52, v24 >> 1, 1u);
LABEL_138:
    v66 = v65 == 0;
LABEL_139:
    LODWORD(v23) = v66;
LABEL_140:
    v26 = 0LL;
    goto LABEL_110;
  }
  v54 = v53 - 1;
  if ( !v54 )
    goto LABEL_128;
  v55 = v54 - 7;
  if ( !v55 )
  {
    if ( *v51 )
    {
      while ( 1 )
      {
        v59 = -1LL;
        do
          ++v59;
        while ( v51[v59] );
        v60 = 2 * v59 + 2;
        if ( PnpMultiSzContainsString(v52, v51) )
        {
          if ( !v15 )
          {
            v61 = 0;
            v163 = 0;
            v159 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v50, 0x63647050u);
            v15 = v159;
            if ( !v159 )
            {
              v8 = -1073741670;
LABEL_125:
              LODWORD(v23) = 0;
              v14 = v175;
              if ( v15 )
              {
                LOWORD(v24) = v61 + 2;
                v163 = v24;
                v161 = v61 + 2;
                v26 = 0LL;
                v15[((unsigned __int64)(unsigned __int16)v24 >> 1) - 1] = 0;
                v15 = v159;
                goto LABEL_43;
              }
              v26 = 0LL;
              v15 = v159;
LABEL_111:
              LOWORD(v24) = v161;
              goto LABEL_43;
            }
          }
          v62 = v60;
          memmove((char *)v15 + v163, v51, v60);
          v163 += v60;
        }
        else
        {
          v62 = v60;
        }
        v51 += v62 >> 1;
        if ( !*v51 )
        {
          v61 = v163;
          goto LABEL_125;
        }
      }
    }
    LODWORD(v23) = 0;
    goto LABEL_140;
  }
  v56 = v55 - 1;
  if ( v56 )
  {
    v57 = v56 - 4;
    if ( !v57 )
    {
      if ( (unsigned int)v50 > 2 )
        goto LABEL_113;
      goto LABEL_287;
    }
    if ( v57 == 1 )
    {
      if ( (unsigned int)v50 > 2 )
        goto LABEL_107;
LABEL_113:
      if ( (unsigned int)v24 > 2 )
      {
LABEL_107:
        v58 = 1;
        goto LABEL_108;
      }
LABEL_287:
      v58 = 0;
LABEL_108:
      LODWORD(v23) = v58;
LABEL_109:
      v26 = 0LL;
LABEL_110:
      v14 = v175;
      goto LABEL_111;
    }
LABEL_146:
    LODWORD(v23) = 0;
    v26 = qword_1409838D8;
    goto LABEL_110;
  }
LABEL_128:
  if ( !*v51 )
  {
    v26 = (__int64 *)v175;
    goto LABEL_135;
  }
  if ( !*v52 )
  {
    v26 = (__int64 *)*((_QWORD *)&v175 + 1);
    goto LABEL_135;
  }
  if ( (unsigned __int64)(unsigned int)(v24 + v50) - 2 > 0xFFFE )
    goto LABEL_337;
  v163 = v24 + v50 - 2;
  v63 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v163, 0x63647050u);
  v159 = v63;
  v64 = v63;
  if ( v63 )
  {
    memmove(v63, v51, v50 - 2);
    memmove(&v64[(v50 >> 1) - 1], v52, v24);
    v26 = 0LL;
    v25 = v163;
LABEL_135:
    LOWORD(v24) = v25;
LABEL_136:
    LODWORD(v23) = 0;
    v161 = v24;
LABEL_41:
    v15 = v159;
    goto LABEL_42;
  }
LABEL_335:
  v8 = -1073741670;
LABEL_336:
  v149 = v162;
LABEL_344:
  v150 = &v175;
  v151 = v149;
  do
  {
    v152 = *(_QWORD **)v150;
    if ( !*(_QWORD *)(*(_QWORD *)v150 + 24LL) )
    {
      v153 = (void *)v152[5];
      if ( v153 )
        ExFreePoolWithTag(v153, 0);
      ExFreePoolWithTag(v152, 0);
    }
    v150 = (__int128 *)((char *)v150 + 8);
    --v151;
  }
  while ( v151 );
LABEL_358:
  v154 = P;
  if ( v164 )
  {
    v155 = (PVOID **)P;
    v156 = v164;
    do
    {
      v157 = *v155;
      if ( !(*v155)[3] )
      {
        if ( v157[5] )
        {
          ExFreePoolWithTag(v157[5], 0);
          v157 = *v155;
        }
        ExFreePoolWithTag(v157, 0);
      }
      ++v155;
      --v156;
    }
    while ( v156 );
  }
  ExFreePoolWithTag(v154, 0);
  v7 = (unsigned int *)v170;
LABEL_368:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}

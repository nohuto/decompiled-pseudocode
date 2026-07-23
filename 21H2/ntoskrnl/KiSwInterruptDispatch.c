/*
 * XREFs of KiSwInterruptDispatch @ 0x1403DCD90
 * Callers:
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     KiGetTrapFrameMode @ 0x140394CB0 (KiGetTrapFrameMode.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KiReadKernelDr7 @ 0x140512E44 (KiReadKernelDr7.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     SdbpCheckDll @ 0x140A12080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A12340 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // r14
  int v14; // r10d
  _QWORD *v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  const char *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r8
  unsigned int i; // r11d
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned int *v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  int v34; // esi
  int v35; // r14d
  _QWORD *v36; // r9
  unsigned int v37; // r8d
  int *v38; // rdi
  __int64 v39; // r10
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rax
  int v45; // eax
  unsigned __int64 v46; // rax
  _QWORD *v47; // r11
  __int64 v48; // r8
  _QWORD *v49; // r9
  const char *v50; // rax
  int v51; // r14d
  __int64 v52; // r15
  unsigned __int64 v53; // rsi
  unsigned int v54; // r10d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  unsigned __int64 j; // rax
  unsigned int v62; // esi
  BOOL v63; // r12d
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int8 v66; // r13
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // r15
  int v69; // eax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int8 v74; // r12
  __int64 v75; // rdx
  unsigned int *v76; // rcx
  unsigned int *v77; // rsi
  char v78; // r13
  unsigned __int64 v79; // r15
  __int64 v80; // r8
  __int64 *v81; // r9
  unsigned int *v82; // r10
  __int64 v83; // rcx
  __int64 v84; // rax
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  unsigned __int8 v90; // r15
  unsigned __int64 v91; // rdx
  unsigned int *v92; // rcx
  unsigned int *v93; // rsi
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  __int64 v100; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v102; // rdx
  unsigned int *v103; // rcx
  char v104; // r13
  unsigned __int64 v105; // r15
  __int64 v106; // r8
  __int64 *v107; // r9
  unsigned int *v108; // r10
  __int64 v109; // rcx
  __int64 v110; // rax
  bool v111; // zf
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // r14
  unsigned __int64 v115; // r12
  __int64 v116; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v118; // rsi
  __int64 v119; // r15
  unsigned __int64 v120; // r9
  unsigned __int64 v121; // r14
  unsigned int v122; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v124; // rcx
  unsigned __int64 v125; // rax
  __int64 v126; // rdi
  _QWORD *v127; // rcx
  char *v128; // r8
  int v129; // r10d
  unsigned __int64 v130; // r11
  signed __int64 v131; // r8
  int v132; // edi
  _QWORD *v133; // r9
  const char *v134; // rax
  int v135; // r10d
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // r8
  unsigned __int64 v139; // rcx
  __int64 v140; // rax
  void (__fastcall *v141)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  volatile signed __int32 *v149; // rax
  __int64 v151; // [rsp+40h] [rbp-39h]
  unsigned int v152; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v153; // [rsp+50h] [rbp-29h] BYREF
  __int64 v154; // [rsp+58h] [rbp-21h]
  _QWORD *v155; // [rsp+60h] [rbp-19h]
  __int64 v156; // [rsp+68h] [rbp-11h]
  __int64 v157; // [rsp+70h] [rbp-9h]
  __int64 v158; // [rsp+78h] [rbp-1h]
  __int64 v159; // [rsp+80h] [rbp+7h]
  __int64 v160; // [rsp+88h] [rbp+Fh]
  unsigned int v162; // [rsp+E8h] [rbp+6Fh]
  int v163; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v164; // [rsp+F0h] [rbp+77h]
  int v165; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v166; // [rsp+F8h] [rbp+7Fh]
  int v167; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD **)&MaxDataSize;
  v4 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3);
  else
    _mm_lfence();
  v5 = __rdtsc();
  v6 = __ROR8__(v5, 3) ^ v5;
  v156 = (v6 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v3[338] + 2807LL,
                  dword_140C130A0[((unsigned __int8)v6 ^ (unsigned __int8)v156) & 0xF]);
  v155 = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v9 = PoolWithTag + 4;
    PoolWithTag[3] = PoolWithTag;
    PoolWithTag[2] = sub_1403EA3E0;
    v164 = PoolWithTag + 4;
    memmove(PoolWithTag + 4, v3, 0xAA0uLL);
    v8[339] = v3;
    v8[340] = v8 + 344;
    v10 = __rdtsc();
    v11 = *((unsigned int *)v8 + 523);
    v12 = (__ROR8__(v10, 3) ^ v10) * (unsigned __int128)0x7010008004002001uLL;
    v157 = *((_QWORD *)&v12 + 1);
    *((_DWORD *)v8 + 530) = 0;
    *((_DWORD *)v8 + 528) = (*((_QWORD *)&v12 + 1) ^ (unsigned __int64)v12) % v11;
    v13 = v8[339];
    v14 = *((_DWORD *)v8 + 525);
    v15 = (_QWORD *)v13;
    v16 = __rdtsc();
    v17 = __ROR8__(v16, 3);
    v18 = v8[263];
    v158 = ((v17 ^ v16) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v8 + 532) = v158 ^ (67117057 * (v17 ^ v16));
    v8[341] = ((unsigned __int64)v8 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v19 = (const char *)v13;
    v20 = *(unsigned int *)(v13 + 2020);
    if ( v13 < v13 + v20 )
    {
      do
      {
        _mm_prefetch(v19, 0);
        v19 += 64;
      }
      while ( (unsigned __int64)v19 < v13 + v20 );
    }
    v21 = v18;
    for ( i = (unsigned int)v20 >> 7; i; --i )
    {
      v23 = 8LL;
      do
      {
        v24 = v15[1] ^ __ROL8__(*v15 ^ v21, v14);
        v15 += 2;
        v21 = __ROL8__(v24, v14);
        --v23;
      }
      while ( v23 );
      v25 = __ROL8__(v18 ^ ((unsigned __int64)v15 - v13), 17) ^ v18 ^ ((unsigned __int64)v15 - v13);
      v159 = (v25 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v14 = ((unsigned __int8)(v159 ^ v25) ^ (unsigned __int8)v14) & 0x3F;
      if ( !v14 )
        LOBYTE(v14) = 1;
    }
    v26 = v20 & 0x7F;
    if ( v26 >= 8 )
    {
      v27 = (unsigned __int64)(v20 & 0x7F) >> 3;
      do
      {
        v21 = __ROL8__(*v15++ ^ v21, v14);
        v26 -= 8;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v26; --v26 )
    {
      v28 = *(unsigned __int8 *)v15;
      v15 = (_QWORD *)((char *)v15 + 1);
      v21 = __ROL8__(v28 ^ v21, v14);
    }
    if ( v21 != qword_140CFC3D0 )
    {
      v29 = v8[182];
      *(_QWORD *)v29 = v13;
      *(_DWORD *)(v29 + 16) = v20;
      if ( !*((_DWORD *)v8 + 582) )
      {
        *(_QWORD *)(v8[182] + 24LL) = v21 ^ qword_140CFC3D0;
        if ( !*((_DWORD *)v8 + 582) )
        {
          v8[293] = 0LL;
          v8[292] = v8 - 0xB8BF814EDC6E95FLL;
          v8[294] = 273LL;
          v8[295] = v21;
          *((_DWORD *)v8 + 582) = 1;
          __b8(v8 + 4, 0LL, v21, v15);
        }
      }
    }
    v30 = 4LL;
    v151 = 0LL;
    v31 = &v152;
    v32 = 4;
    v33 = 1LL;
    do
    {
      *(_BYTE *)v31 = 0;
      v31 = (unsigned int *)((char *)v31 + 1);
      --v32;
    }
    while ( v32 );
    v34 = 32;
    v162 = 0;
    v35 = 12;
    if ( *((_DWORD *)v8 + 523) )
    {
      while ( 1 )
      {
        v36 = v9;
        if ( v9[335] )
          v36 = (_QWORD *)v9[335];
        v37 = 0;
        v38 = (int *)((char *)v36 + *((unsigned int *)v36 + 514));
        if ( (_DWORD)v151 && HIDWORD(v151) <= v32 )
        {
          v37 = HIDWORD(v151);
          v38 = (int *)((char *)v36 + v152);
        }
        if ( v37 != v32 )
        {
          v39 = v32 - v37;
          v37 = v32;
          while ( 1 )
          {
            v40 = *v38;
            if ( *v38 > 12 )
              break;
            if ( v40 == 12 )
              goto LABEL_46;
            v41 = v40 - 1;
            if ( !v41 )
              goto LABEL_46;
            v42 = v41 - 6;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( !v43 )
              {
                v45 = *((unsigned __int16 *)v38 + 16);
LABEL_51:
                v44 = (v45 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v43 != 2 )
                goto LABEL_48;
              v44 = (unsigned int)(16 * (v38[7] + 3));
            }
            else
            {
              v44 = (unsigned int)(24 * (v38[6] + 2));
            }
LABEL_52:
            v38 = (int *)((char *)v38 + v44);
            if ( !--v39 )
            {
              v9 = v164;
              v32 = v162;
              goto LABEL_54;
            }
          }
          if ( v40 == 28 )
          {
            v45 = *((unsigned __int16 *)v38 + 20);
            goto LABEL_51;
          }
          if ( v40 == 30 )
          {
            v33 = ((v38[9] != 0 ? v38[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v44 = (unsigned int)v33 + 24 * (*((unsigned __int16 *)v38 + 20) + 2);
            goto LABEL_52;
          }
          if ( v40 <= 32 )
          {
LABEL_48:
            v44 = 48LL;
            goto LABEL_52;
          }
          if ( v40 <= 34 )
          {
            v33 = ((v38[8] & 0xFFF) + (unsigned __int64)(unsigned int)v38[10] + 4095) >> 12;
            v44 = (unsigned int)(20 * v33 + 48);
            goto LABEL_52;
          }
          if ( v40 != 43 )
            goto LABEL_48;
LABEL_46:
          v33 = (unsigned int)v38[4] / 0xCuLL;
          v44 = (unsigned int)(4 * v33 + 48);
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v151) = 1;
        HIDWORD(v151) = v37;
        v152 = (_DWORD)v38 - (_DWORD)v36;
        v46 = *v38;
        if ( (_DWORD)v46 == 36 )
          break;
        if ( (unsigned int)v46 > 0x2B )
          goto LABEL_139;
        v33 = 0x80200000002LL;
        if ( !_bittest64(&v33, v46) )
          goto LABEL_139;
        v100 = v9[168];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v9[42])(v100);
        v103 = *(unsigned int **)v9[194];
        v93 = v103 + 4;
        v104 = *((_BYTE *)v103 + 12);
        v105 = (unsigned __int64)&v103[6 * *v103 + 4];
        while ( 2 )
        {
          v106 = 24LL;
          v107 = (__int64 *)(v38 + 6);
          v108 = v93;
          while ( 1 )
          {
            v109 = *(_QWORD *)v108;
            v108 += 2;
            v110 = *v107++;
            if ( v109 != v110 )
              break;
            v106 = (unsigned int)(v106 - 8);
            if ( (unsigned int)v106 < 8 )
            {
              v111 = (_DWORD)v106 == 0;
              while ( !v111 )
              {
                v102 = *(unsigned __int8 *)v108;
                v108 = (unsigned int *)((char *)v108 + 1);
                v112 = *(unsigned __int8 *)v107;
                v107 = (__int64 *)((char *)v107 + 1);
                if ( v102 != v112 )
                  goto LABEL_128;
                v111 = (_DWORD)v106 == 1;
                v106 = (unsigned int)(v106 - 1);
              }
              goto LABEL_129;
            }
          }
LABEL_128:
          v93 += 6;
          if ( (unsigned __int64)v93 < v105 )
            continue;
          break;
        }
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v9[50])(v9[168], v102, v106, v107);
        __writecr8(CurrentIrql);
        if ( !v104 )
          goto LABEL_207;
        if ( (*((_DWORD *)v9 + 613) & 0x10) != 0 && !*((_DWORD *)v9 + 574) )
        {
          v9[288] = v9 - 0xB8BF814EDC6E963LL;
          v9[289] = (char *)v38 - 0x4C48B4211BBACBEBLL;
          v9[290] = *v38;
          v9[291] = 1LL;
          *((_DWORD *)v9 + 574) = 1;
          __b8(v9, 0LL, v97, v98);
        }
        if ( *((_QWORD *)v38 + 3) != 1LL )
        {
LABEL_207:
          if ( v93 == (unsigned int *)v105 && !*((_DWORD *)v9 + 574) )
          {
            v99 = v9 - 0xB8BF814EDC6E963LL;
LABEL_137:
            v9[288] = v99;
            v9[289] = (char *)v38 - 0x4C48B4211BBACBEBLL;
            v9[290] = *v38;
            v9[291] = v93;
            *((_DWORD *)v9 + 574) = 1;
            __b8(v9, 0LL, v97, v98);
          }
        }
LABEL_138:
        v32 = v162;
        v34 = 32;
        v35 = 12;
LABEL_139:
        v162 = ++v32;
        if ( v32 >= *((_DWORD *)v9 + 515) )
        {
          v8 = v155;
          v30 = 4LL;
          goto LABEL_141;
        }
      }
      v47 = (_QWORD *)*((_QWORD *)v38 + 1);
      v48 = (unsigned int)v38[4];
      v49 = v47;
      *((_DWORD *)v9 + 522) += v48;
      v50 = (const char *)v47;
      v51 = *((_DWORD *)v9 + 517);
      v52 = v9[259];
      if ( v47 < (_QWORD *)((char *)v47 + v48) )
      {
        do
        {
          _mm_prefetch(v50, 0);
          v50 += 64;
        }
        while ( v50 < (const char *)v47 + v48 );
      }
      v53 = v9[259];
      v54 = (unsigned int)v48 >> 7;
      if ( (unsigned int)v48 >> 7 )
      {
        do
        {
          v55 = 8LL;
          do
          {
            v56 = v53 ^ *v49;
            v57 = v49[1];
            v49 += 2;
            v53 = __ROL8__(__ROL8__(v56, v51) ^ v57, v51);
            --v55;
          }
          while ( v55 );
          v58 = __ROL8__(v52 ^ ((char *)v49 - (char *)v47), 17) ^ v52 ^ ((char *)v49 - (char *)v47);
          v33 = (v58 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v160 = v33;
          v51 = ((unsigned __int8)(v33 ^ v58) ^ (unsigned __int8)v51) & 0x3F;
          if ( !v51 )
            LOBYTE(v51) = 1;
          --v54;
        }
        while ( v54 );
        v9 = v164;
      }
      v59 = v48 & 0x7F;
      if ( (unsigned int)v59 >= 8 )
      {
        v33 = (unsigned __int64)(unsigned int)v59 >> 3;
        do
        {
          v53 = __ROL8__(*v49++ ^ v53, v51);
          v59 = (unsigned int)(v59 - 8);
          --v33;
        }
        while ( v33 );
      }
      if ( (_DWORD)v59 )
      {
        do
        {
          v60 = *(unsigned __int8 *)v49;
          v49 = (_QWORD *)((char *)v49 + 1);
          v53 = __ROL8__(v60 ^ v53, v51);
          v85 = (_DWORD)v59 == 1;
          v59 = (unsigned int)(v59 - 1);
        }
        while ( !v85 );
      }
      for ( j = v53; ; LODWORD(v53) = j ^ v53 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v62 = v53 & 0x7FFFFFFF;
      v63 = 0;
      if ( v62 != v38[5] )
      {
        if ( !*v38 )
          v63 = v38[6] != 0;
        v64 = (unsigned int)v38[4];
        v65 = *((_QWORD *)v38 + 1);
        if ( v38[4] && (*((_DWORD *)v9 + 613) & 0x40) != 0 )
        {
          v66 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v67 = v65 & 0xFFFFFFFFFFFFF000uLL;
          v154 = (v65 + v64 - 1) | 0xFFF;
          v166 = (v65 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v68 = v66;
            while ( 1 )
            {
              v69 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v9[141])(v67, 0LL, v59, v49);
              if ( v69 != -1073741267 )
                break;
              if ( v63 )
                goto LABEL_86;
              if ( v66 > 1u )
                goto LABEL_84;
              v68 = v66;
              __writecr8(v66);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v69 < 0 )
            {
LABEL_86:
              __writecr8(v68);
              goto LABEL_87;
            }
LABEL_84:
            v67 += 4096LL;
            v166 += 4096LL;
            if ( v166 != v154 )
              continue;
            break;
          }
          __writecr8(v68);
        }
        else
        {
LABEL_87:
          v70 = *((_DWORD *)v9 + 574);
          v33 = (unsigned int)v38[5];
          if ( !v70 )
          {
            *(_QWORD *)(v9[178] + 24LL) = v33 ^ v62;
            v70 = *((_DWORD *)v9 + 574);
          }
          v71 = *((_QWORD *)v38 + 1);
          if ( !v70 )
          {
            v9[288] = v9 - 0xB8BF814EDC6E963LL;
            v9[289] = (char *)v38 - 0x4C48B4211BBACBEBLL;
            v72 = *v38;
            v9[291] = v71;
            v9[290] = v72;
            *((_DWORD *)v9 + 574) = 1;
            __b8(v9, 0LL, v59, v49);
          }
        }
      }
      v73 = v9[168];
      v74 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v9[42])(v73, v33, v59, v49);
      v76 = *(unsigned int **)v9[194];
      v77 = v76 + 4;
      v78 = *((_BYTE *)v76 + 12);
      v79 = (unsigned __int64)&v76[6 * *v76 + 4];
      while ( 2 )
      {
        v80 = 24LL;
        v81 = (__int64 *)(v38 + 6);
        v82 = v77;
        while ( 1 )
        {
          v83 = *(_QWORD *)v82;
          v82 += 2;
          v84 = *v81++;
          if ( v83 != v84 )
            break;
          v80 = (unsigned int)(v80 - 8);
          if ( (unsigned int)v80 < 8 )
          {
            v85 = (_DWORD)v80 == 0;
            while ( !v85 )
            {
              v75 = *(unsigned __int8 *)v82;
              v82 = (unsigned int *)((char *)v82 + 1);
              v86 = *(unsigned __int8 *)v81;
              v81 = (__int64 *)((char *)v81 + 1);
              if ( v75 != v86 )
                goto LABEL_99;
              v85 = (_DWORD)v80 == 1;
              v80 = (unsigned int)(v80 - 1);
            }
            goto LABEL_100;
          }
        }
LABEL_99:
        v77 += 6;
        if ( (unsigned __int64)v77 < v79 )
          continue;
        break;
      }
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v9[50])(v9[168], v75, v80, v81);
      __writecr8(v74);
      if ( !v78 )
        goto LABEL_208;
      if ( (*((_DWORD *)v9 + 613) & 0x10) != 0 && !*((_DWORD *)v9 + 574) )
      {
        v9[288] = v9 - 0xB8BF814EDC6E963LL;
        v9[289] = (char *)v38 - 0x4C48B4211BBACBEBLL;
        v9[290] = *v38;
        v9[291] = 1LL;
        *((_DWORD *)v9 + 574) = 1;
        __b8(v9, 0LL, v87, v88);
      }
      if ( *((_QWORD *)v38 + 3) != 1LL )
      {
LABEL_208:
        if ( v77 == (unsigned int *)v79 && !*((_DWORD *)v9 + 574) )
        {
          v9[288] = v9 - 0xB8BF814EDC6E963LL;
          v9[289] = (char *)v38 - 0x4C48B4211BBACBEBLL;
          v9[290] = *v38;
          v9[291] = v77;
          *((_DWORD *)v9 + 574) = 1;
          __b8(v9, 0LL, v87, v88);
        }
      }
      v89 = v9[168];
      v90 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v9[42])(v89);
      v91 = 0LL;
      v92 = *(unsigned int **)v9[194];
      v93 = v92 + 4;
      v94 = (unsigned __int64)&v92[6 * *v92 + 4];
      while ( 1 )
      {
        v93 += 6;
        if ( (unsigned __int64)v93 >= v94 )
          break;
        v95 = *((_QWORD *)v93 + 1);
        if ( v95 < v91 )
          break;
        if ( (v95 & 0xFFFFFFFFFFFFF000uLL) != v95 )
          break;
        v96 = v95 + v93[4];
        if ( v96 <= v95 || v96 == v91 )
          break;
        v91 = v95 + v93[4];
      }
      ((void (__fastcall *)(_QWORD))v9[50])(v9[168]);
      __writecr8(v90);
      if ( v93 == (unsigned int *)v94 || *((_DWORD *)v9 + 574) )
        goto LABEL_138;
      v99 = v9 - 0xB8BF814EDC6E963LL;
      goto LABEL_137;
    }
LABEL_141:
    if ( *((_DWORD *)v9 + 574) )
    {
      v113 = v9[291];
      v114 = v9[289];
      v115 = v9[288];
      v116 = v9[290];
      v163 = v113;
      v165 = v114;
      v167 = v115;
      v153 = v9;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v118 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9[199]);
      v119 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9[201]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v9[200])
        || (unsigned __int64)&v153 > v118
        || (unsigned __int64)&v153 < v118 - 24576 )
      {
        v118 = *(_QWORD *)(v119 + v9[207]);
      }
      if ( (v9[306] & 0x8000000) == 0 )
      {
        v115 = __readcr0();
        __writecr0(v115 & 0xFFFFFFFFFFFEFFFFuLL);
        v120 = (unsigned __int64)(v9 + 341);
        v121 = (unsigned __int64)&v9[2 * *((unsigned int *)v9 + 680) + 341];
        v122 = 0;
        for ( k = (_QWORD *)v121; v122 < *((_DWORD *)v9 + 681); ++v122 )
        {
          *(_QWORD *)*k = k[1];
          v124 = __readcr4();
          if ( (v124 & 0x20080) != 0 )
          {
            __writecr4(v124 ^ 0x80);
            __writecr4(v124);
          }
          else
          {
            v125 = __readcr3();
            __writecr3(v125);
          }
          k += 2;
        }
        if ( v120 < v121 )
        {
          do
          {
            v126 = *(unsigned int *)(v120 + 8);
            v127 = k;
            v128 = *(char **)v120;
            v129 = v126;
            if ( (unsigned int)v126 >= 8 )
            {
              v130 = (unsigned __int64)(unsigned int)v126 >> 3;
              do
              {
                v129 -= 8;
                *(_QWORD *)v128 = *v127++;
                v128 += 8;
                --v130;
              }
              while ( v130 );
            }
            if ( v129 )
            {
              v131 = v128 - (char *)v127;
              do
              {
                *((_BYTE *)v127 + v131) = *(_BYTE *)v127;
                v127 = (_QWORD *)((char *)v127 + 1);
                --v129;
              }
              while ( v129 );
            }
            k = (_QWORD *)((char *)k + v126);
            v120 += 16LL;
          }
          while ( v120 < v121 );
          LODWORD(v113) = v163;
        }
        *(_BYTE *)v9[67] = -61;
        __writecr0(v115);
        LODWORD(v114) = v165;
        LODWORD(v115) = v167;
      }
      v144 = *((_DWORD *)v9 + 586);
      if ( v144 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v144 = *((_DWORD *)v9 + 586);
        }
        if ( v144 )
        {
          v145 = v144 - 1;
          if ( v145 )
          {
            v146 = v145 - 1;
            if ( v146 )
            {
              v147 = v146 - 1;
              if ( v147 )
              {
                v148 = v147 - 1;
                if ( v148 )
                {
                  if ( v148 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v9[201]),
                      (*((_DWORD *)v9 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v9[183] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v9[213]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v9[201])
                                                + v9[209]),
                    (*((_DWORD *)v9 + 612) >> 10) & 0x1F);
                }
                goto LABEL_202;
              }
              v149 = (volatile signed __int32 *)v9[172];
            }
            else
            {
              v149 = (volatile signed __int32 *)v9[171];
            }
          }
          else
          {
            v149 = (volatile signed __int32 *)v9[169];
          }
          _interlockedbittestandset64(v149, 0LL);
        }
      }
LABEL_202:
      *(_QWORD *)(v119 + v9[210]) = 0LL;
      *(_QWORD *)(v119 + v9[212]) = 0LL;
      SdbpCheckDll(265, v115, v114, v113, v116, v9[43], v118);
      JUMPOUT(0x1403DDC5FLL);
    }
    v132 = *((_DWORD *)v9 + 49);
    *((_DWORD *)v9 + 49) = 0;
    v133 = v9;
    *((_DWORD *)v9 + 522) += 1568;
    v134 = (const char *)v9;
    v135 = *((_DWORD *)v9 + 517);
    if ( v9 < v9 + 196 )
    {
      do
      {
        _mm_prefetch(v134, 0);
        v134 += 64;
      }
      while ( v134 < (const char *)v9 + 1568 );
    }
    v136 = v9[259];
    do
    {
      v137 = 8LL;
      do
      {
        v138 = v133[1] ^ __ROL8__(*v133 ^ v136, v135);
        v133 += 2;
        v136 = __ROL8__(v138, v135);
        --v137;
      }
      while ( v137 );
      v139 = __ROL8__(v9[259] ^ ((char *)v133 - (char *)v9), 17) ^ v9[259] ^ ((char *)v133 - (char *)v9);
      v135 = ((unsigned __int8)(((v139 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v139) ^ (unsigned __int8)v135) & 0x3F;
      if ( !v135 )
        LOBYTE(v135) = 1;
      --v35;
    }
    while ( v35 );
    v4 = a1;
    do
    {
      v136 = __ROL8__(*v133++ ^ v136, v135);
      v34 -= 8;
      --v30;
    }
    while ( v30 );
    for ( ; v34; --v34 )
    {
      v140 = *(unsigned __int8 *)v133;
      v133 = (_QWORD *)((char *)v133 + 1);
      v136 = __ROL8__(v140 ^ v136, v135);
    }
    v141 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v9[34];
    *((_DWORD *)v9 + 49) = v132;
    v9[324] = v136;
    v141(v8, 1LL, v136, v133);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v4);
  v143 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1608LL));
    _enable();
    v143 = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v143 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}

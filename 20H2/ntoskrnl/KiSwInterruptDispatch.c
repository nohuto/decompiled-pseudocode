/*
 * XREFs of KiSwInterruptDispatch @ 0x1403DC2B0
 * Callers:
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     KiGetTrapFrameMode @ 0x1403946F0 (KiGetTrapFrameMode.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     KiReadKernelDr7 @ 0x1405110C0 (KiReadKernelDr7.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     $$b8 @ 0x140A123CC ($$b8.c)
 *     SdbpCheckDll @ 0x140A14080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A14340 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r14
  int v13; // r10d
  _QWORD *v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  const char *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int i; // r11d
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  int v33; // esi
  int v34; // r14d
  _QWORD *v35; // r9
  unsigned int v36; // r8d
  int *v37; // rdi
  __int64 v38; // r10
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rax
  _QWORD *v46; // r11
  __int64 v47; // r8
  _QWORD *v48; // r9
  const char *v49; // rax
  int v50; // r14d
  __int64 v51; // r15
  unsigned __int64 v52; // rsi
  unsigned int v53; // r10d
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 j; // rax
  unsigned int v61; // esi
  BOOL v62; // r12d
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int8 v65; // r13
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // r15
  int v68; // eax
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int8 v73; // r12
  __int64 v74; // rdx
  unsigned int *v75; // rcx
  unsigned int *v76; // rsi
  char v77; // r13
  unsigned __int64 v78; // r15
  __int64 v79; // r8
  __int64 *v80; // r9
  unsigned int *v81; // r10
  __int64 v82; // rcx
  __int64 v83; // rax
  bool v84; // zf
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  unsigned __int8 v89; // r15
  unsigned __int64 v90; // rdx
  unsigned int *v91; // rcx
  unsigned int *v92; // rsi
  unsigned __int64 v93; // r14
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  __int64 v99; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v101; // rdx
  unsigned int *v102; // rcx
  char v103; // r13
  unsigned __int64 v104; // r15
  __int64 v105; // r8
  __int64 *v106; // r9
  unsigned int *v107; // r10
  __int64 v108; // rcx
  __int64 v109; // rax
  bool v110; // zf
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // r14
  unsigned __int64 v114; // r12
  __int64 v115; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v117; // rsi
  __int64 v118; // r15
  unsigned __int64 v119; // r9
  unsigned __int64 v120; // r14
  unsigned int v121; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rdi
  _QWORD *v126; // rcx
  char *v127; // r8
  int v128; // r10d
  unsigned __int64 v129; // r11
  signed __int64 v130; // r8
  int v131; // edi
  _QWORD *v132; // r9
  const char *v133; // rax
  int v134; // r10d
  __int64 v135; // r8
  __int64 v136; // rax
  __int64 v137; // r8
  unsigned __int64 v138; // rcx
  __int64 v139; // rax
  void (__fastcall *v140)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  volatile signed __int32 *v148; // rax
  __int64 v150; // [rsp+40h] [rbp-39h]
  unsigned int v151; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v152; // [rsp+50h] [rbp-29h] BYREF
  __int64 v153; // [rsp+58h] [rbp-21h]
  _QWORD *v154; // [rsp+60h] [rbp-19h]
  __int64 v155; // [rsp+68h] [rbp-11h]
  __int64 v156; // [rsp+70h] [rbp-9h]
  __int64 v157; // [rsp+78h] [rbp-1h]
  __int64 v158; // [rsp+80h] [rbp+7h]
  __int64 v159; // [rsp+88h] [rbp+Fh]
  unsigned int v161; // [rsp+E8h] [rbp+6Fh]
  int v162; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v163; // [rsp+F0h] [rbp+77h]
  int v164; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v165; // [rsp+F8h] [rbp+7Fh]
  int v166; // [rsp+F8h] [rbp+7Fh]

  v2 = *(_QWORD **)&MaxDataSize;
  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2);
  else
    _mm_lfence();
  v4 = __rdtsc();
  v5 = __ROR8__(v4, 3) ^ v4;
  v155 = (v5 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v2[338] + 2807LL,
                  dword_140C12EE0[((unsigned __int8)v5 ^ (unsigned __int8)v155) & 0xF]);
  v154 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v8 = PoolWithTag + 4;
    PoolWithTag[3] = PoolWithTag;
    PoolWithTag[2] = sub_1403E9900;
    v163 = PoolWithTag + 4;
    memmove(PoolWithTag + 4, v2, 0xAA0uLL);
    v7[339] = v2;
    v7[340] = v7 + 344;
    v9 = __rdtsc();
    v10 = *((unsigned int *)v7 + 523);
    v11 = (__ROR8__(v9, 3) ^ v9) * (unsigned __int128)0x7010008004002001uLL;
    v156 = *((_QWORD *)&v11 + 1);
    *((_DWORD *)v7 + 530) = 0;
    *((_DWORD *)v7 + 528) = (*((_QWORD *)&v11 + 1) ^ (unsigned __int64)v11) % v10;
    v12 = v7[339];
    v13 = *((_DWORD *)v7 + 525);
    v14 = (_QWORD *)v12;
    v15 = __rdtsc();
    v16 = __ROR8__(v15, 3);
    v17 = v7[263];
    v157 = ((v16 ^ v15) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v7 + 532) = v157 ^ (67117057 * (v16 ^ v15));
    v7[341] = ((unsigned __int64)v7 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = (const char *)v12;
    v19 = *(unsigned int *)(v12 + 2020);
    if ( v12 < v12 + v19 )
    {
      do
      {
        _mm_prefetch(v18, 0);
        v18 += 64;
      }
      while ( (unsigned __int64)v18 < v12 + v19 );
    }
    v20 = v17;
    for ( i = (unsigned int)v19 >> 7; i; --i )
    {
      v22 = 8LL;
      do
      {
        v23 = v14[1] ^ __ROL8__(*v14 ^ v20, v13);
        v14 += 2;
        v20 = __ROL8__(v23, v13);
        --v22;
      }
      while ( v22 );
      v24 = __ROL8__(v17 ^ ((unsigned __int64)v14 - v12), 17) ^ v17 ^ ((unsigned __int64)v14 - v12);
      v158 = (v24 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v13 = ((unsigned __int8)(v158 ^ v24) ^ (unsigned __int8)v13) & 0x3F;
      if ( !v13 )
        LOBYTE(v13) = 1;
    }
    v25 = v19 & 0x7F;
    if ( v25 >= 8 )
    {
      v26 = (unsigned __int64)(v19 & 0x7F) >> 3;
      do
      {
        v20 = __ROL8__(*v14++ ^ v20, v13);
        v25 -= 8;
        --v26;
      }
      while ( v26 );
    }
    for ( ; v25; --v25 )
    {
      v27 = *(unsigned __int8 *)v14;
      v14 = (_QWORD *)((char *)v14 + 1);
      v20 = __ROL8__(v27 ^ v20, v13);
    }
    if ( v20 != qword_140CFC3D0 )
    {
      v28 = v7[182];
      *(_QWORD *)v28 = v12;
      *(_DWORD *)(v28 + 16) = v19;
      if ( !*((_DWORD *)v7 + 582) )
      {
        *(_QWORD *)(v7[182] + 24LL) = v20 ^ qword_140CFC3D0;
        if ( !*((_DWORD *)v7 + 582) )
        {
          v7[293] = 0LL;
          v7[292] = v7 - 0xB8BF814EDC6E95FLL;
          v7[294] = 273LL;
          v7[295] = v20;
          *((_DWORD *)v7 + 582) = 1;
          __b8(v7 + 4, 0LL, v20, v14);
        }
      }
    }
    v29 = 4LL;
    v150 = 0LL;
    v30 = &v151;
    v31 = 4;
    v32 = 1LL;
    do
    {
      *(_BYTE *)v30 = 0;
      v30 = (unsigned int *)((char *)v30 + 1);
      --v31;
    }
    while ( v31 );
    v33 = 32;
    v161 = 0;
    v34 = 12;
    if ( *((_DWORD *)v7 + 523) )
    {
      while ( 1 )
      {
        v35 = v8;
        if ( v8[335] )
          v35 = (_QWORD *)v8[335];
        v36 = 0;
        v37 = (int *)((char *)v35 + *((unsigned int *)v35 + 514));
        if ( (_DWORD)v150 && HIDWORD(v150) <= v31 )
        {
          v36 = HIDWORD(v150);
          v37 = (int *)((char *)v35 + v151);
        }
        if ( v36 != v31 )
        {
          v38 = v31 - v36;
          v36 = v31;
          while ( 1 )
          {
            v39 = *v37;
            if ( *v37 > 12 )
              break;
            if ( v39 == 12 )
              goto LABEL_46;
            v40 = v39 - 1;
            if ( !v40 )
              goto LABEL_46;
            v41 = v40 - 6;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( !v42 )
              {
                v44 = *((unsigned __int16 *)v37 + 16);
LABEL_51:
                v43 = (v44 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v42 != 2 )
                goto LABEL_48;
              v43 = (unsigned int)(16 * (v37[7] + 3));
            }
            else
            {
              v43 = (unsigned int)(24 * (v37[6] + 2));
            }
LABEL_52:
            v37 = (int *)((char *)v37 + v43);
            if ( !--v38 )
            {
              v8 = v163;
              v31 = v161;
              goto LABEL_54;
            }
          }
          if ( v39 == 28 )
          {
            v44 = *((unsigned __int16 *)v37 + 20);
            goto LABEL_51;
          }
          if ( v39 == 30 )
          {
            v32 = ((v37[9] != 0 ? v37[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v43 = (unsigned int)v32 + 24 * (*((unsigned __int16 *)v37 + 20) + 2);
            goto LABEL_52;
          }
          if ( v39 <= 32 )
          {
LABEL_48:
            v43 = 48LL;
            goto LABEL_52;
          }
          if ( v39 <= 34 )
          {
            v32 = ((v37[8] & 0xFFF) + (unsigned __int64)(unsigned int)v37[10] + 4095) >> 12;
            v43 = (unsigned int)(20 * v32 + 48);
            goto LABEL_52;
          }
          if ( v39 != 43 )
            goto LABEL_48;
LABEL_46:
          v32 = (unsigned int)v37[4] / 0xCuLL;
          v43 = (unsigned int)(4 * v32 + 48);
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v150) = 1;
        HIDWORD(v150) = v36;
        v151 = (_DWORD)v37 - (_DWORD)v35;
        v45 = *v37;
        if ( (_DWORD)v45 == 36 )
          break;
        if ( (unsigned int)v45 > 0x2B )
          goto LABEL_139;
        v32 = 0x80200000002LL;
        if ( !_bittest64(&v32, v45) )
          goto LABEL_139;
        v99 = v8[168];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v8[42])(v99);
        v102 = *(unsigned int **)v8[194];
        v92 = v102 + 4;
        v103 = *((_BYTE *)v102 + 12);
        v104 = (unsigned __int64)&v102[6 * *v102 + 4];
        while ( 2 )
        {
          v105 = 24LL;
          v106 = (__int64 *)(v37 + 6);
          v107 = v92;
          while ( 1 )
          {
            v108 = *(_QWORD *)v107;
            v107 += 2;
            v109 = *v106++;
            if ( v108 != v109 )
              break;
            v105 = (unsigned int)(v105 - 8);
            if ( (unsigned int)v105 < 8 )
            {
              v110 = (_DWORD)v105 == 0;
              while ( !v110 )
              {
                v101 = *(unsigned __int8 *)v107;
                v107 = (unsigned int *)((char *)v107 + 1);
                v111 = *(unsigned __int8 *)v106;
                v106 = (__int64 *)((char *)v106 + 1);
                if ( v101 != v111 )
                  goto LABEL_128;
                v110 = (_DWORD)v105 == 1;
                v105 = (unsigned int)(v105 - 1);
              }
              goto LABEL_129;
            }
          }
LABEL_128:
          v92 += 6;
          if ( (unsigned __int64)v92 < v104 )
            continue;
          break;
        }
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[168], v101, v105, v106);
        __writecr8(CurrentIrql);
        if ( !v103 )
          goto LABEL_207;
        if ( (*((_DWORD *)v8 + 613) & 0x10) != 0 && !*((_DWORD *)v8 + 574) )
        {
          v8[288] = v8 - 0xB8BF814EDC6E963LL;
          v8[289] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v8[290] = *v37;
          v8[291] = 1LL;
          *((_DWORD *)v8 + 574) = 1;
          __b8(v8, 0LL, v96, v97);
        }
        if ( *((_QWORD *)v37 + 3) != 1LL )
        {
LABEL_207:
          if ( v92 == (unsigned int *)v104 && !*((_DWORD *)v8 + 574) )
          {
            v98 = v8 - 0xB8BF814EDC6E963LL;
LABEL_137:
            v8[288] = v98;
            v8[289] = (char *)v37 - 0x4C48B4211BBACBEBLL;
            v8[290] = *v37;
            v8[291] = v92;
            *((_DWORD *)v8 + 574) = 1;
            __b8(v8, 0LL, v96, v97);
          }
        }
LABEL_138:
        v31 = v161;
        v33 = 32;
        v34 = 12;
LABEL_139:
        v161 = ++v31;
        if ( v31 >= *((_DWORD *)v8 + 515) )
        {
          v7 = v154;
          v29 = 4LL;
          goto LABEL_141;
        }
      }
      v46 = (_QWORD *)*((_QWORD *)v37 + 1);
      v47 = (unsigned int)v37[4];
      v48 = v46;
      *((_DWORD *)v8 + 522) += v47;
      v49 = (const char *)v46;
      v50 = *((_DWORD *)v8 + 517);
      v51 = v8[259];
      if ( v46 < (_QWORD *)((char *)v46 + v47) )
      {
        do
        {
          _mm_prefetch(v49, 0);
          v49 += 64;
        }
        while ( v49 < (const char *)v46 + v47 );
      }
      v52 = v8[259];
      v53 = (unsigned int)v47 >> 7;
      if ( (unsigned int)v47 >> 7 )
      {
        do
        {
          v54 = 8LL;
          do
          {
            v55 = v52 ^ *v48;
            v56 = v48[1];
            v48 += 2;
            v52 = __ROL8__(__ROL8__(v55, v50) ^ v56, v50);
            --v54;
          }
          while ( v54 );
          v57 = __ROL8__(v51 ^ ((char *)v48 - (char *)v46), 17) ^ v51 ^ ((char *)v48 - (char *)v46);
          v32 = (v57 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v159 = v32;
          v50 = ((unsigned __int8)(v32 ^ v57) ^ (unsigned __int8)v50) & 0x3F;
          if ( !v50 )
            LOBYTE(v50) = 1;
          --v53;
        }
        while ( v53 );
        v8 = v163;
      }
      v58 = v47 & 0x7F;
      if ( (unsigned int)v58 >= 8 )
      {
        v32 = (unsigned __int64)(unsigned int)v58 >> 3;
        do
        {
          v52 = __ROL8__(*v48++ ^ v52, v50);
          v58 = (unsigned int)(v58 - 8);
          --v32;
        }
        while ( v32 );
      }
      if ( (_DWORD)v58 )
      {
        do
        {
          v59 = *(unsigned __int8 *)v48;
          v48 = (_QWORD *)((char *)v48 + 1);
          v52 = __ROL8__(v59 ^ v52, v50);
          v84 = (_DWORD)v58 == 1;
          v58 = (unsigned int)(v58 - 1);
        }
        while ( !v84 );
      }
      for ( j = v52; ; LODWORD(v52) = j ^ v52 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v61 = v52 & 0x7FFFFFFF;
      v62 = 0;
      if ( v61 != v37[5] )
      {
        if ( !*v37 )
          v62 = v37[6] != 0;
        v63 = (unsigned int)v37[4];
        v64 = *((_QWORD *)v37 + 1);
        if ( v37[4] && (*((_DWORD *)v8 + 613) & 0x40) != 0 )
        {
          v65 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v66 = v64 & 0xFFFFFFFFFFFFF000uLL;
          v153 = (v64 + v63 - 1) | 0xFFF;
          v165 = (v64 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v67 = v65;
            while ( 1 )
            {
              v68 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v8[141])(v66, 0LL, v58, v48);
              if ( v68 != -1073741267 )
                break;
              if ( v62 )
                goto LABEL_86;
              if ( v65 > 1u )
                goto LABEL_84;
              v67 = v65;
              __writecr8(v65);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v68 < 0 )
            {
LABEL_86:
              __writecr8(v67);
              goto LABEL_87;
            }
LABEL_84:
            v66 += 4096LL;
            v165 += 4096LL;
            if ( v165 != v153 )
              continue;
            break;
          }
          __writecr8(v67);
        }
        else
        {
LABEL_87:
          v69 = *((_DWORD *)v8 + 574);
          v32 = (unsigned int)v37[5];
          if ( !v69 )
          {
            *(_QWORD *)(v8[178] + 24LL) = v32 ^ v61;
            v69 = *((_DWORD *)v8 + 574);
          }
          v70 = *((_QWORD *)v37 + 1);
          if ( !v69 )
          {
            v8[288] = v8 - 0xB8BF814EDC6E963LL;
            v8[289] = (char *)v37 - 0x4C48B4211BBACBEBLL;
            v71 = *v37;
            v8[291] = v70;
            v8[290] = v71;
            *((_DWORD *)v8 + 574) = 1;
            __b8(v8, 0LL, v58, v48);
          }
        }
      }
      v72 = v8[168];
      v73 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v8[42])(v72, v32, v58, v48);
      v75 = *(unsigned int **)v8[194];
      v76 = v75 + 4;
      v77 = *((_BYTE *)v75 + 12);
      v78 = (unsigned __int64)&v75[6 * *v75 + 4];
      while ( 2 )
      {
        v79 = 24LL;
        v80 = (__int64 *)(v37 + 6);
        v81 = v76;
        while ( 1 )
        {
          v82 = *(_QWORD *)v81;
          v81 += 2;
          v83 = *v80++;
          if ( v82 != v83 )
            break;
          v79 = (unsigned int)(v79 - 8);
          if ( (unsigned int)v79 < 8 )
          {
            v84 = (_DWORD)v79 == 0;
            while ( !v84 )
            {
              v74 = *(unsigned __int8 *)v81;
              v81 = (unsigned int *)((char *)v81 + 1);
              v85 = *(unsigned __int8 *)v80;
              v80 = (__int64 *)((char *)v80 + 1);
              if ( v74 != v85 )
                goto LABEL_99;
              v84 = (_DWORD)v79 == 1;
              v79 = (unsigned int)(v79 - 1);
            }
            goto LABEL_100;
          }
        }
LABEL_99:
        v76 += 6;
        if ( (unsigned __int64)v76 < v78 )
          continue;
        break;
      }
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[168], v74, v79, v80);
      __writecr8(v73);
      if ( !v77 )
        goto LABEL_208;
      if ( (*((_DWORD *)v8 + 613) & 0x10) != 0 && !*((_DWORD *)v8 + 574) )
      {
        v8[288] = v8 - 0xB8BF814EDC6E963LL;
        v8[289] = (char *)v37 - 0x4C48B4211BBACBEBLL;
        v8[290] = *v37;
        v8[291] = 1LL;
        *((_DWORD *)v8 + 574) = 1;
        __b8(v8, 0LL, v86, v87);
      }
      if ( *((_QWORD *)v37 + 3) != 1LL )
      {
LABEL_208:
        if ( v76 == (unsigned int *)v78 && !*((_DWORD *)v8 + 574) )
        {
          v8[288] = v8 - 0xB8BF814EDC6E963LL;
          v8[289] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v8[290] = *v37;
          v8[291] = v76;
          *((_DWORD *)v8 + 574) = 1;
          __b8(v8, 0LL, v86, v87);
        }
      }
      v88 = v8[168];
      v89 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v8[42])(v88);
      v90 = 0LL;
      v91 = *(unsigned int **)v8[194];
      v92 = v91 + 4;
      v93 = (unsigned __int64)&v91[6 * *v91 + 4];
      while ( 1 )
      {
        v92 += 6;
        if ( (unsigned __int64)v92 >= v93 )
          break;
        v94 = *((_QWORD *)v92 + 1);
        if ( v94 < v90 )
          break;
        if ( (v94 & 0xFFFFFFFFFFFFF000uLL) != v94 )
          break;
        v95 = v94 + v92[4];
        if ( v95 <= v94 || v95 == v90 )
          break;
        v90 = v94 + v92[4];
      }
      ((void (__fastcall *)(_QWORD))v8[50])(v8[168]);
      __writecr8(v89);
      if ( v92 == (unsigned int *)v93 || *((_DWORD *)v8 + 574) )
        goto LABEL_138;
      v98 = v8 - 0xB8BF814EDC6E963LL;
      goto LABEL_137;
    }
LABEL_141:
    if ( *((_DWORD *)v8 + 574) )
    {
      v112 = v8[291];
      v113 = v8[289];
      v114 = v8[288];
      v115 = v8[290];
      v162 = v112;
      v164 = v113;
      v166 = v114;
      v152 = v8;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v117 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8[199]);
      v118 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8[201]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v8[200])
        || (unsigned __int64)&v152 > v117
        || (unsigned __int64)&v152 < v117 - 24576 )
      {
        v117 = *(_QWORD *)(v118 + v8[207]);
      }
      if ( (v8[306] & 0x8000000) == 0 )
      {
        v114 = __readcr0();
        __writecr0(v114 & 0xFFFFFFFFFFFEFFFFuLL);
        v119 = (unsigned __int64)(v8 + 341);
        v120 = (unsigned __int64)&v8[2 * *((unsigned int *)v8 + 680) + 341];
        v121 = 0;
        for ( k = (_QWORD *)v120; v121 < *((_DWORD *)v8 + 681); ++v121 )
        {
          *(_QWORD *)*k = k[1];
          v123 = __readcr4();
          if ( (v123 & 0x20080) != 0 )
          {
            __writecr4(v123 ^ 0x80);
            __writecr4(v123);
          }
          else
          {
            v124 = __readcr3();
            __writecr3(v124);
          }
          k += 2;
        }
        if ( v119 < v120 )
        {
          do
          {
            v125 = *(unsigned int *)(v119 + 8);
            v126 = k;
            v127 = *(char **)v119;
            v128 = v125;
            if ( (unsigned int)v125 >= 8 )
            {
              v129 = (unsigned __int64)(unsigned int)v125 >> 3;
              do
              {
                v128 -= 8;
                *(_QWORD *)v127 = *v126++;
                v127 += 8;
                --v129;
              }
              while ( v129 );
            }
            if ( v128 )
            {
              v130 = v127 - (char *)v126;
              do
              {
                *((_BYTE *)v126 + v130) = *(_BYTE *)v126;
                v126 = (_QWORD *)((char *)v126 + 1);
                --v128;
              }
              while ( v128 );
            }
            k = (_QWORD *)((char *)k + v125);
            v119 += 16LL;
          }
          while ( v119 < v120 );
          LODWORD(v112) = v162;
        }
        *(_BYTE *)v8[67] = -61;
        __writecr0(v114);
        LODWORD(v113) = v164;
        LODWORD(v114) = v166;
      }
      v143 = *((_DWORD *)v8 + 586);
      if ( v143 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v143 = *((_DWORD *)v8 + 586);
        }
        if ( v143 )
        {
          v144 = v143 - 1;
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
                  if ( v147 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v8[201]),
                      (*((_DWORD *)v8 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v8[183] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v8[213]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v8[201])
                                                + v8[209]),
                    (*((_DWORD *)v8 + 612) >> 10) & 0x1F);
                }
                goto LABEL_202;
              }
              v148 = (volatile signed __int32 *)v8[172];
            }
            else
            {
              v148 = (volatile signed __int32 *)v8[171];
            }
          }
          else
          {
            v148 = (volatile signed __int32 *)v8[169];
          }
          _interlockedbittestandset64(v148, 0LL);
        }
      }
LABEL_202:
      *(_QWORD *)(v118 + v8[210]) = 0LL;
      *(_QWORD *)(v118 + v8[212]) = 0LL;
      SdbpCheckDll(265, v114, v113, v112, v115, v8[43], v117);
      JUMPOUT(0x1403DD17FLL);
    }
    v131 = *((_DWORD *)v8 + 49);
    *((_DWORD *)v8 + 49) = 0;
    v132 = v8;
    *((_DWORD *)v8 + 522) += 1568;
    v133 = (const char *)v8;
    v134 = *((_DWORD *)v8 + 517);
    if ( v8 < v8 + 196 )
    {
      do
      {
        _mm_prefetch(v133, 0);
        v133 += 64;
      }
      while ( v133 < (const char *)v8 + 1568 );
    }
    v135 = v8[259];
    do
    {
      v136 = 8LL;
      do
      {
        v137 = v132[1] ^ __ROL8__(*v132 ^ v135, v134);
        v132 += 2;
        v135 = __ROL8__(v137, v134);
        --v136;
      }
      while ( v136 );
      v138 = __ROL8__(v8[259] ^ ((char *)v132 - (char *)v8), 17) ^ v8[259] ^ ((char *)v132 - (char *)v8);
      v134 = ((unsigned __int8)(((v138 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v138) ^ (unsigned __int8)v134) & 0x3F;
      if ( !v134 )
        LOBYTE(v134) = 1;
      --v34;
    }
    while ( v34 );
    v3 = a1;
    do
    {
      v135 = __ROL8__(*v132++ ^ v135, v134);
      v33 -= 8;
      --v29;
    }
    while ( v29 );
    for ( ; v33; --v33 )
    {
      v139 = *(unsigned __int8 *)v132;
      v132 = (_QWORD *)((char *)v132 + 1);
      v135 = __ROL8__(v139 ^ v135, v134);
    }
    v140 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v8[34];
    *((_DWORD *)v8 + 49) = v131;
    v8[324] = v135;
    v140(v7, 1LL, v135, v132);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v3);
  v142 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1608LL));
    _enable();
    v142 = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v142 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}

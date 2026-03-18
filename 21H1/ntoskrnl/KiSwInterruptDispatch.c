/*
 * XREFs of KiSwInterruptDispatch @ 0x1403D87E0
 * Callers:
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     KiGetTrapFrameMode @ 0x1403917C0 (KiGetTrapFrameMode.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     KiReadKernelDr7 @ 0x14050D140 (KiReadKernelDr7.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     $$b8 @ 0x140A0C3CC ($$b8.c)
 *     SdbpCheckDll @ 0x140A0E080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A0E340 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  const char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned int i; // r11d
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned int *v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  int v32; // esi
  int v33; // r14d
  _QWORD *v34; // r9
  unsigned int v35; // r8d
  int *v36; // rdi
  __int64 v37; // r10
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // rax
  _QWORD *v45; // r11
  __int64 v46; // r8
  _QWORD *v47; // r9
  const char *v48; // rax
  int v49; // r14d
  __int64 v50; // r15
  unsigned __int64 v51; // rsi
  unsigned int v52; // r10d
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 j; // rax
  unsigned int v60; // esi
  BOOL v61; // r12d
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int8 v64; // r13
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // r15
  int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int8 v72; // r12
  __int64 v73; // rdx
  unsigned int *v74; // rcx
  unsigned int *v75; // rsi
  char v76; // r13
  unsigned __int64 v77; // r15
  __int64 v78; // r8
  __int64 *v79; // r9
  unsigned int *v80; // r10
  __int64 v81; // rcx
  __int64 v82; // rax
  bool v83; // zf
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned __int8 v88; // r15
  unsigned __int64 v89; // rdx
  unsigned int *v90; // rcx
  unsigned int *v91; // rsi
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // rax
  __int64 v98; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v100; // rdx
  unsigned int *v101; // rcx
  char v102; // r13
  unsigned __int64 v103; // r15
  __int64 v104; // r8
  __int64 *v105; // r9
  unsigned int *v106; // r10
  __int64 v107; // rcx
  __int64 v108; // rax
  bool v109; // zf
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // r14
  unsigned __int64 v113; // r12
  __int64 v114; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v116; // rsi
  __int64 v117; // r15
  unsigned __int64 v118; // r9
  unsigned __int64 v119; // r14
  unsigned int v120; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rdi
  _QWORD *v125; // rcx
  char *v126; // r8
  int v127; // r10d
  unsigned __int64 v128; // r11
  signed __int64 v129; // r8
  int v130; // edi
  _QWORD *v131; // r9
  const char *v132; // rax
  int v133; // r10d
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // r8
  unsigned __int64 v137; // rcx
  __int64 v138; // rax
  void (__fastcall *v139)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  volatile signed __int32 *v147; // rax
  __int64 v149; // [rsp+40h] [rbp-39h]
  unsigned int v150; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v151; // [rsp+50h] [rbp-29h] BYREF
  __int64 v152; // [rsp+58h] [rbp-21h]
  _QWORD *v153; // [rsp+60h] [rbp-19h]
  __int64 v154; // [rsp+68h] [rbp-11h]
  __int64 v155; // [rsp+70h] [rbp-9h]
  __int64 v156; // [rsp+78h] [rbp-1h]
  __int64 v157; // [rsp+80h] [rbp+7h]
  __int64 v158; // [rsp+88h] [rbp+Fh]
  unsigned int v160; // [rsp+E8h] [rbp+6Fh]
  int v161; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v162; // [rsp+F0h] [rbp+77h]
  int v163; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v164; // [rsp+F8h] [rbp+7Fh]
  int v165; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3) ^ v3;
  v154 = (v4 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v1[338] + 2807LL,
                  dword_140C12EA0[((unsigned __int8)v4 ^ (unsigned __int8)v154) & 0xF]);
  v153 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v7 = PoolWithTag + 4;
    PoolWithTag[3] = PoolWithTag;
    PoolWithTag[2] = sub_1403E5E30;
    v162 = PoolWithTag + 4;
    memmove(PoolWithTag + 4, v1, 0xAA0uLL);
    v6[339] = v1;
    v6[340] = v6 + 344;
    v8 = __rdtsc();
    v9 = *((unsigned int *)v6 + 523);
    v10 = (__ROR8__(v8, 3) ^ v8) * (unsigned __int128)0x7010008004002001uLL;
    v155 = *((_QWORD *)&v10 + 1);
    *((_DWORD *)v6 + 530) = 0;
    *((_DWORD *)v6 + 528) = (*((_QWORD *)&v10 + 1) ^ (unsigned __int64)v10) % v9;
    v11 = v6[339];
    v12 = *((_DWORD *)v6 + 525);
    v13 = (_QWORD *)v11;
    v14 = __rdtsc();
    v15 = __ROR8__(v14, 3);
    v16 = v6[263];
    v156 = ((v15 ^ v14) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v6 + 532) = v156 ^ (67117057 * (v15 ^ v14));
    v6[341] = ((unsigned __int64)v6 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = (const char *)v11;
    v18 = *(unsigned int *)(v11 + 2020);
    if ( v11 < v11 + v18 )
    {
      do
      {
        _mm_prefetch(v17, 0);
        v17 += 64;
      }
      while ( (unsigned __int64)v17 < v11 + v18 );
    }
    v19 = v16;
    for ( i = (unsigned int)v18 >> 7; i; --i )
    {
      v21 = 8LL;
      do
      {
        v22 = v13[1] ^ __ROL8__(*v13 ^ v19, v12);
        v13 += 2;
        v19 = __ROL8__(v22, v12);
        --v21;
      }
      while ( v21 );
      v23 = __ROL8__(v16 ^ ((unsigned __int64)v13 - v11), 17) ^ v16 ^ ((unsigned __int64)v13 - v11);
      v157 = (v23 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v12 = ((unsigned __int8)(v157 ^ v23) ^ (unsigned __int8)v12) & 0x3F;
      if ( !v12 )
        LOBYTE(v12) = 1;
    }
    v24 = v18 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)(v18 & 0x7F) >> 3;
      do
      {
        v19 = __ROL8__(*v13++ ^ v19, v12);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      v19 = __ROL8__(v26 ^ v19, v12);
    }
    if ( v19 != qword_140CFC3D0 )
    {
      v27 = v6[182];
      *(_QWORD *)v27 = v11;
      *(_DWORD *)(v27 + 16) = v18;
      if ( !*((_DWORD *)v6 + 582) )
      {
        *(_QWORD *)(v6[182] + 24LL) = v19 ^ qword_140CFC3D0;
        if ( !*((_DWORD *)v6 + 582) )
        {
          v6[293] = 0LL;
          v6[292] = v6 - 0xB8BF814EDC6E95FLL;
          v6[294] = 273LL;
          v6[295] = v19;
          *((_DWORD *)v6 + 582) = 1;
          __b8(v6 + 4, 0LL, v19, v13);
        }
      }
    }
    v28 = 4LL;
    v149 = 0LL;
    v29 = &v150;
    v30 = 4;
    v31 = 1LL;
    do
    {
      *(_BYTE *)v29 = 0;
      v29 = (unsigned int *)((char *)v29 + 1);
      --v30;
    }
    while ( v30 );
    v32 = 32;
    v160 = 0;
    v33 = 12;
    if ( *((_DWORD *)v6 + 523) )
    {
      while ( 1 )
      {
        v34 = v7;
        if ( v7[335] )
          v34 = (_QWORD *)v7[335];
        v35 = 0;
        v36 = (int *)((char *)v34 + *((unsigned int *)v34 + 514));
        if ( (_DWORD)v149 && HIDWORD(v149) <= v30 )
        {
          v35 = HIDWORD(v149);
          v36 = (int *)((char *)v34 + v150);
        }
        if ( v35 != v30 )
        {
          v37 = v30 - v35;
          v35 = v30;
          while ( 1 )
          {
            v38 = *v36;
            if ( *v36 > 12 )
              break;
            if ( v38 == 12 )
              goto LABEL_46;
            v39 = v38 - 1;
            if ( !v39 )
              goto LABEL_46;
            v40 = v39 - 6;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( !v41 )
              {
                v43 = *((unsigned __int16 *)v36 + 16);
LABEL_51:
                v42 = (v43 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v41 != 2 )
                goto LABEL_48;
              v42 = (unsigned int)(16 * (v36[7] + 3));
            }
            else
            {
              v42 = (unsigned int)(24 * (v36[6] + 2));
            }
LABEL_52:
            v36 = (int *)((char *)v36 + v42);
            if ( !--v37 )
            {
              v7 = v162;
              v30 = v160;
              goto LABEL_54;
            }
          }
          if ( v38 == 28 )
          {
            v43 = *((unsigned __int16 *)v36 + 20);
            goto LABEL_51;
          }
          if ( v38 == 30 )
          {
            v31 = ((v36[9] != 0 ? v36[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v42 = (unsigned int)v31 + 24 * (*((unsigned __int16 *)v36 + 20) + 2);
            goto LABEL_52;
          }
          if ( v38 <= 32 )
          {
LABEL_48:
            v42 = 48LL;
            goto LABEL_52;
          }
          if ( v38 <= 34 )
          {
            v31 = ((v36[8] & 0xFFF) + (unsigned __int64)(unsigned int)v36[10] + 4095) >> 12;
            v42 = (unsigned int)(20 * v31 + 48);
            goto LABEL_52;
          }
          if ( v38 != 43 )
            goto LABEL_48;
LABEL_46:
          v31 = (unsigned int)v36[4] / 0xCuLL;
          v42 = (unsigned int)(4 * v31 + 48);
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v149) = 1;
        HIDWORD(v149) = v35;
        v150 = (_DWORD)v36 - (_DWORD)v34;
        v44 = *v36;
        if ( (_DWORD)v44 == 36 )
          break;
        if ( (unsigned int)v44 > 0x2B )
          goto LABEL_139;
        v31 = 0x80200000002LL;
        if ( !_bittest64(&v31, v44) )
          goto LABEL_139;
        v98 = v7[168];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v7[42])(v98);
        v101 = *(unsigned int **)v7[194];
        v91 = v101 + 4;
        v102 = *((_BYTE *)v101 + 12);
        v103 = (unsigned __int64)&v101[6 * *v101 + 4];
        while ( 2 )
        {
          v104 = 24LL;
          v105 = (__int64 *)(v36 + 6);
          v106 = v91;
          while ( 1 )
          {
            v107 = *(_QWORD *)v106;
            v106 += 2;
            v108 = *v105++;
            if ( v107 != v108 )
              break;
            v104 = (unsigned int)(v104 - 8);
            if ( (unsigned int)v104 < 8 )
            {
              v109 = (_DWORD)v104 == 0;
              while ( !v109 )
              {
                v100 = *(unsigned __int8 *)v106;
                v106 = (unsigned int *)((char *)v106 + 1);
                v110 = *(unsigned __int8 *)v105;
                v105 = (__int64 *)((char *)v105 + 1);
                if ( v100 != v110 )
                  goto LABEL_128;
                v109 = (_DWORD)v104 == 1;
                v104 = (unsigned int)(v104 - 1);
              }
              goto LABEL_129;
            }
          }
LABEL_128:
          v91 += 6;
          if ( (unsigned __int64)v91 < v103 )
            continue;
          break;
        }
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[168], v100, v104, v105);
        __writecr8(CurrentIrql);
        if ( !v102 )
          goto LABEL_207;
        if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v7[290] = *v36;
          v7[291] = 1LL;
          *((_DWORD *)v7 + 574) = 1;
          __b8(v7, 0LL, v95, v96);
        }
        if ( *((_QWORD *)v36 + 3) != 1LL )
        {
LABEL_207:
          if ( v91 == (unsigned int *)v103 && !*((_DWORD *)v7 + 574) )
          {
            v97 = v7 - 0xB8BF814EDC6E963LL;
LABEL_137:
            v7[288] = v97;
            v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
            v7[290] = *v36;
            v7[291] = v91;
            *((_DWORD *)v7 + 574) = 1;
            __b8(v7, 0LL, v95, v96);
          }
        }
LABEL_138:
        v30 = v160;
        v32 = 32;
        v33 = 12;
LABEL_139:
        v160 = ++v30;
        if ( v30 >= *((_DWORD *)v7 + 515) )
        {
          v6 = v153;
          v28 = 4LL;
          goto LABEL_141;
        }
      }
      v45 = (_QWORD *)*((_QWORD *)v36 + 1);
      v46 = (unsigned int)v36[4];
      v47 = v45;
      *((_DWORD *)v7 + 522) += v46;
      v48 = (const char *)v45;
      v49 = *((_DWORD *)v7 + 517);
      v50 = v7[259];
      if ( v45 < (_QWORD *)((char *)v45 + v46) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( v48 < (const char *)v45 + v46 );
      }
      v51 = v7[259];
      v52 = (unsigned int)v46 >> 7;
      if ( (unsigned int)v46 >> 7 )
      {
        do
        {
          v53 = 8LL;
          do
          {
            v54 = v51 ^ *v47;
            v55 = v47[1];
            v47 += 2;
            v51 = __ROL8__(__ROL8__(v54, v49) ^ v55, v49);
            --v53;
          }
          while ( v53 );
          v56 = __ROL8__(v50 ^ ((char *)v47 - (char *)v45), 17) ^ v50 ^ ((char *)v47 - (char *)v45);
          v31 = (v56 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v158 = v31;
          v49 = ((unsigned __int8)(v31 ^ v56) ^ (unsigned __int8)v49) & 0x3F;
          if ( !v49 )
            LOBYTE(v49) = 1;
          --v52;
        }
        while ( v52 );
        v7 = v162;
      }
      v57 = v46 & 0x7F;
      if ( (unsigned int)v57 >= 8 )
      {
        v31 = (unsigned __int64)(unsigned int)v57 >> 3;
        do
        {
          v51 = __ROL8__(*v47++ ^ v51, v49);
          v57 = (unsigned int)(v57 - 8);
          --v31;
        }
        while ( v31 );
      }
      if ( (_DWORD)v57 )
      {
        do
        {
          v58 = *(unsigned __int8 *)v47;
          v47 = (_QWORD *)((char *)v47 + 1);
          v51 = __ROL8__(v58 ^ v51, v49);
          v83 = (_DWORD)v57 == 1;
          v57 = (unsigned int)(v57 - 1);
        }
        while ( !v83 );
      }
      for ( j = v51; ; LODWORD(v51) = j ^ v51 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v60 = v51 & 0x7FFFFFFF;
      v61 = 0;
      if ( v60 != v36[5] )
      {
        if ( !*v36 )
          v61 = v36[6] != 0;
        v62 = (unsigned int)v36[4];
        v63 = *((_QWORD *)v36 + 1);
        if ( v36[4] && (*((_DWORD *)v7 + 613) & 0x40) != 0 )
        {
          v64 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v65 = v63 & 0xFFFFFFFFFFFFF000uLL;
          v152 = (v63 + v62 - 1) | 0xFFF;
          v164 = (v63 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v66 = v64;
            while ( 1 )
            {
              v67 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v7[141])(v65, 0LL, v57, v47);
              if ( v67 != -1073741267 )
                break;
              if ( v61 )
                goto LABEL_86;
              if ( v64 > 1u )
                goto LABEL_84;
              v66 = v64;
              __writecr8(v64);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v67 < 0 )
            {
LABEL_86:
              __writecr8(v66);
              goto LABEL_87;
            }
LABEL_84:
            v65 += 4096LL;
            v164 += 4096LL;
            if ( v164 != v152 )
              continue;
            break;
          }
          __writecr8(v66);
        }
        else
        {
LABEL_87:
          v68 = *((_DWORD *)v7 + 574);
          v31 = (unsigned int)v36[5];
          if ( !v68 )
          {
            *(_QWORD *)(v7[178] + 24LL) = v31 ^ v60;
            v68 = *((_DWORD *)v7 + 574);
          }
          v69 = *((_QWORD *)v36 + 1);
          if ( !v68 )
          {
            v7[288] = v7 - 0xB8BF814EDC6E963LL;
            v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
            v70 = *v36;
            v7[291] = v69;
            v7[290] = v70;
            *((_DWORD *)v7 + 574) = 1;
            __b8(v7, 0LL, v57, v47);
          }
        }
      }
      v71 = v7[168];
      v72 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v7[42])(v71, v31, v57, v47);
      v74 = *(unsigned int **)v7[194];
      v75 = v74 + 4;
      v76 = *((_BYTE *)v74 + 12);
      v77 = (unsigned __int64)&v74[6 * *v74 + 4];
      while ( 2 )
      {
        v78 = 24LL;
        v79 = (__int64 *)(v36 + 6);
        v80 = v75;
        while ( 1 )
        {
          v81 = *(_QWORD *)v80;
          v80 += 2;
          v82 = *v79++;
          if ( v81 != v82 )
            break;
          v78 = (unsigned int)(v78 - 8);
          if ( (unsigned int)v78 < 8 )
          {
            v83 = (_DWORD)v78 == 0;
            while ( !v83 )
            {
              v73 = *(unsigned __int8 *)v80;
              v80 = (unsigned int *)((char *)v80 + 1);
              v84 = *(unsigned __int8 *)v79;
              v79 = (__int64 *)((char *)v79 + 1);
              if ( v73 != v84 )
                goto LABEL_99;
              v83 = (_DWORD)v78 == 1;
              v78 = (unsigned int)(v78 - 1);
            }
            goto LABEL_100;
          }
        }
LABEL_99:
        v75 += 6;
        if ( (unsigned __int64)v75 < v77 )
          continue;
        break;
      }
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[168], v73, v78, v79);
      __writecr8(v72);
      if ( !v76 )
        goto LABEL_208;
      if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
      {
        v7[288] = v7 - 0xB8BF814EDC6E963LL;
        v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
        v7[290] = *v36;
        v7[291] = 1LL;
        *((_DWORD *)v7 + 574) = 1;
        __b8(v7, 0LL, v85, v86);
      }
      if ( *((_QWORD *)v36 + 3) != 1LL )
      {
LABEL_208:
        if ( v75 == (unsigned int *)v77 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v7[290] = *v36;
          v7[291] = v75;
          *((_DWORD *)v7 + 574) = 1;
          __b8(v7, 0LL, v85, v86);
        }
      }
      v87 = v7[168];
      v88 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v7[42])(v87);
      v89 = 0LL;
      v90 = *(unsigned int **)v7[194];
      v91 = v90 + 4;
      v92 = (unsigned __int64)&v90[6 * *v90 + 4];
      while ( 1 )
      {
        v91 += 6;
        if ( (unsigned __int64)v91 >= v92 )
          break;
        v93 = *((_QWORD *)v91 + 1);
        if ( v93 < v89 )
          break;
        if ( (v93 & 0xFFFFFFFFFFFFF000uLL) != v93 )
          break;
        v94 = v93 + v91[4];
        if ( v94 <= v93 || v94 == v89 )
          break;
        v89 = v93 + v91[4];
      }
      ((void (__fastcall *)(_QWORD))v7[50])(v7[168]);
      __writecr8(v88);
      if ( v91 == (unsigned int *)v92 || *((_DWORD *)v7 + 574) )
        goto LABEL_138;
      v97 = v7 - 0xB8BF814EDC6E963LL;
      goto LABEL_137;
    }
LABEL_141:
    if ( *((_DWORD *)v7 + 574) )
    {
      v111 = v7[291];
      v112 = v7[289];
      v113 = v7[288];
      v114 = v7[290];
      v161 = v111;
      v163 = v112;
      v165 = v113;
      v151 = v7;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v116 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[199]);
      v117 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[201]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v7[200])
        || (unsigned __int64)&v151 > v116
        || (unsigned __int64)&v151 < v116 - 24576 )
      {
        v116 = *(_QWORD *)(v117 + v7[207]);
      }
      if ( (v7[306] & 0x8000000) == 0 )
      {
        v113 = __readcr0();
        __writecr0(v113 & 0xFFFFFFFFFFFEFFFFuLL);
        v118 = (unsigned __int64)(v7 + 341);
        v119 = (unsigned __int64)&v7[2 * *((unsigned int *)v7 + 680) + 341];
        v120 = 0;
        for ( k = (_QWORD *)v119; v120 < *((_DWORD *)v7 + 681); ++v120 )
        {
          *(_QWORD *)*k = k[1];
          v122 = __readcr4();
          if ( (v122 & 0x20080) != 0 )
          {
            __writecr4(v122 ^ 0x80);
            __writecr4(v122);
          }
          else
          {
            v123 = __readcr3();
            __writecr3(v123);
          }
          k += 2;
        }
        if ( v118 < v119 )
        {
          do
          {
            v124 = *(unsigned int *)(v118 + 8);
            v125 = k;
            v126 = *(char **)v118;
            v127 = v124;
            if ( (unsigned int)v124 >= 8 )
            {
              v128 = (unsigned __int64)(unsigned int)v124 >> 3;
              do
              {
                v127 -= 8;
                *(_QWORD *)v126 = *v125++;
                v126 += 8;
                --v128;
              }
              while ( v128 );
            }
            if ( v127 )
            {
              v129 = v126 - (char *)v125;
              do
              {
                *((_BYTE *)v125 + v129) = *(_BYTE *)v125;
                v125 = (_QWORD *)((char *)v125 + 1);
                --v127;
              }
              while ( v127 );
            }
            k = (_QWORD *)((char *)k + v124);
            v118 += 16LL;
          }
          while ( v118 < v119 );
          LODWORD(v111) = v161;
        }
        *(_BYTE *)v7[67] = -61;
        __writecr0(v113);
        LODWORD(v112) = v163;
        LODWORD(v113) = v165;
      }
      v142 = *((_DWORD *)v7 + 586);
      if ( v142 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v142 = *((_DWORD *)v7 + 586);
        }
        if ( v142 )
        {
          v143 = v142 - 1;
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
                  if ( v146 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v7[201]),
                      (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v7[183] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v7[213]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v7[201])
                                                + v7[209]),
                    (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                }
                goto LABEL_202;
              }
              v147 = (volatile signed __int32 *)v7[172];
            }
            else
            {
              v147 = (volatile signed __int32 *)v7[171];
            }
          }
          else
          {
            v147 = (volatile signed __int32 *)v7[169];
          }
          _interlockedbittestandset64(v147, 0LL);
        }
      }
LABEL_202:
      *(_QWORD *)(v117 + v7[210]) = 0LL;
      *(_QWORD *)(v117 + v7[212]) = 0LL;
      SdbpCheckDll(265, v113, v112, v111, v114, v7[43], v116);
      JUMPOUT(0x1403D96AFLL);
    }
    v130 = *((_DWORD *)v7 + 49);
    *((_DWORD *)v7 + 49) = 0;
    v131 = v7;
    *((_DWORD *)v7 + 522) += 1568;
    v132 = (const char *)v7;
    v133 = *((_DWORD *)v7 + 517);
    if ( v7 < v7 + 196 )
    {
      do
      {
        _mm_prefetch(v132, 0);
        v132 += 64;
      }
      while ( v132 < (const char *)v7 + 1568 );
    }
    v134 = v7[259];
    do
    {
      v135 = 8LL;
      do
      {
        v136 = v131[1] ^ __ROL8__(*v131 ^ v134, v133);
        v131 += 2;
        v134 = __ROL8__(v136, v133);
        --v135;
      }
      while ( v135 );
      v137 = __ROL8__(v7[259] ^ ((char *)v131 - (char *)v7), 17) ^ v7[259] ^ ((char *)v131 - (char *)v7);
      v133 = ((unsigned __int8)(((v137 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v137) ^ (unsigned __int8)v133) & 0x3F;
      if ( !v133 )
        LOBYTE(v133) = 1;
      --v33;
    }
    while ( v33 );
    v2 = a1;
    do
    {
      v134 = __ROL8__(*v131++ ^ v134, v133);
      v32 -= 8;
      --v28;
    }
    while ( v28 );
    for ( ; v32; --v32 )
    {
      v138 = *(unsigned __int8 *)v131;
      v131 = (_QWORD *)((char *)v131 + 1);
      v134 = __ROL8__(v138 ^ v134, v133);
    }
    v139 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v7[34];
    *((_DWORD *)v7 + 49) = v130;
    v7[324] = v134;
    v139(v6, 1LL, v134, v131);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v141 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1608LL));
    _enable();
    v141 = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v141 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}

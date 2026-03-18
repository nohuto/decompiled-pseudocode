/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0055C4C
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0055B68 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C00562BC (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     strcmp_0 @ 0x1C00D1F51 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // r14
  BOOL v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // r8d
  void *v13; // rdx
  char *v14; // rcx
  char *v15; // r14
  __int16 v16; // ax
  __int64 v17; // r15
  int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // ebp
  char *v25; // rax
  void *v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  BOOL v30; // ebx
  __int64 v31; // r10
  unsigned __int64 *v32; // rcx
  unsigned __int64 v33; // rax
  _BYTE *v34; // rax
  _BYTE *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // rcx
  _WORD *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  _QWORD *v47; // rcx
  _WORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  _WORD *i; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  _DWORD *v60; // rax
  _DWORD *v61; // rcx
  unsigned __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  _WORD *v65; // rcx
  unsigned int v66; // eax
  unsigned __int64 v67; // r9
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r8
  bool v71; // cc
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  int v78; // eax
  unsigned __int64 v80; // rbx
  unsigned __int64 *v81; // r8
  unsigned __int64 v82; // r10
  unsigned __int64 v83; // r11
  _BYTE *j; // rdx
  __int64 v85; // rax
  _BYTE *v86; // r9
  _BYTE *v87; // rax
  _BYTE *v88; // rdx
  __int64 v89; // rax
  unsigned __int64 v90; // r9
  _QWORD *v91; // r8
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // r9
  _DWORD *v95; // rax
  unsigned __int64 v96; // rcx
  _DWORD *v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // rbx
  _BYTE *v101; // rdx
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // r11
  _WORD *k; // rax
  _WORD *v105; // r8
  __int64 v106; // rax
  unsigned __int64 v107; // r10
  _BYTE *v108; // rdx
  __int64 v109; // rax
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // rbx
  _BYTE *v112; // rdx
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // r11
  _WORD *m; // rax
  _WORD *v116; // r8
  __int64 v117; // rax
  unsigned __int64 v118; // r10
  _BYTE *v119; // rdx
  __int64 v120; // rax
  unsigned __int64 v121; // r8
  unsigned __int64 v122; // rbx
  unsigned __int64 *v123; // rdx
  unsigned __int64 v124; // r10
  unsigned __int64 v125; // r9
  _WORD *n; // rax
  _WORD *v127; // r8
  __int64 v128; // rax
  unsigned __int64 v129; // r11
  _QWORD *v130; // rdx
  __int64 v131; // rax
  unsigned __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // rdx
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // r9
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rdx
  __int64 v140; // rax
  unsigned __int64 v141; // r9
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rdx
  __int64 v145; // rax
  unsigned __int64 v146; // r9
  _BYTE *v147; // rdx
  unsigned __int64 v148; // r9
  int v149; // r8d
  __int16 *v150; // rcx
  unsigned __int64 v151; // r9
  __int16 v152; // ax
  __int64 v153; // r10
  unsigned __int64 v154; // r11
  _BYTE *v155; // rdx
  __int64 v156; // rax
  unsigned __int64 v157; // r8
  __int64 v158; // rcx
  __int64 v159; // rdx
  unsigned int v160; // [rsp+34h] [rbp-54h] BYREF
  BOOL v161; // [rsp+38h] [rbp-50h]
  void *v162; // [rsp+40h] [rbp-48h] BYREF

  v160 = 0;
  v5 = 0LL;
  v162 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v9 + 6) = 0LL;
  v161 = v10;
  if ( (int)LoadFileContent(a2, v11, v12, &v162, &v160) >= 0 )
  {
    v13 = v162;
    v14 = (char *)v162 + *((unsigned int *)v162 + 15);
    if ( v14 >= v162 && (v10 || v14 + 263 >= v14) )
    {
      v15 = (char *)v162 + v160;
      if ( v14 + 264 < v15 )
      {
        v16 = *((_WORD *)v14 + 2);
        if ( v16 == 512 || v16 == -31132 || v16 == -21916 )
          v17 = *((_QWORD *)v14 + 6);
        else
          v17 = *((unsigned int *)v14 + 13);
        v18 = *((unsigned __int16 *)v14 + 3);
        v19 = (unsigned __int64)&v14[*((unsigned __int16 *)v14 + 10) + 24];
        if ( *((_WORD *)v14 + 3) )
        {
          v20 = v19 + 40;
          while ( v19 >= (unsigned __int64)v13 && (v161 || v20 - 1 >= v19) && v20 < (unsigned __int64)v15 )
          {
            v21 = strcmp_0((const char *)v19, ".data");
            v13 = v162;
            if ( v21 )
            {
              v19 += 40LL;
              v20 += 40LL;
              if ( --v18 )
                continue;
            }
            if ( !v18 )
              break;
            v22 = *(_DWORD *)(v19 + 12);
            if ( a3 < v22 )
              break;
            v23 = *(unsigned int *)(v19 + 8);
            v24 = a3 - v22;
            if ( v24 >= (unsigned int)v23 )
              break;
            if ( (unsigned int)v23 >= 0x40000 )
              break;
            v25 = (char *)v162 + *(unsigned int *)(v19 + 20);
            if ( v25 < v162 || &v25[v23] < v25 || &v25[v23] >= v15 )
              break;
            v26 = (void *)Win32AllocPool((unsigned int)v23, 1953198933LL);
            v27 = (unsigned __int64)v26;
            if ( v26 )
            {
              *((_QWORD *)a1 + 3) = v26;
              memmove(v26, (char *)v162 + *(unsigned int *)(v19 + 20), (unsigned int)v23);
              *((_DWORD *)a1 + 10) = v23;
              v28 = v27 + (unsigned int)v23;
              v29 = *(unsigned int *)(v19 + 12);
              v5 = v27 + v24;
              if ( v27 >= v29 )
              {
                v30 = v161;
                v31 = v27 - v29 - v17;
                if ( v161 || v5 >= v27 && v5 <= v28 - 104 )
                {
                  v32 = *(unsigned __int64 **)v5;
                  if ( !*(_QWORD *)v5
                    || (v32 = (unsigned __int64 *)((char *)v32 + v31), *(_QWORD *)v5 = v32, (unsigned __int64)v32 >= v27)
                    && v32 + 2 >= v32
                    && (unsigned __int64)(v32 + 2) <= v28 )
                  {
                    if ( v30 || v32 )
                    {
                      if ( !*v32
                        || (*v32 += v31, v32 = *(unsigned __int64 **)v5, v33 = **(_QWORD **)v5, v33 >= v27)
                        && v33 + 2 >= v33
                        && v33 + 2 <= v28 )
                      {
                        if ( v30 || (unsigned __int64)v32 >= v27 && (unsigned __int64)v32 <= v28 - 16 )
                        {
                          v34 = (_BYTE *)*v32;
                          if ( *v32 >= v27 )
                          {
                            v35 = v34 + 2;
                            while ( v35 >= v34 && (unsigned __int64)v35 <= v28 )
                            {
                              if ( !*v34 )
                              {
                                v36 = *(_QWORD *)(v5 + 8);
                                if ( v36 )
                                {
                                  v37 = (unsigned __int64 *)(v31 + v36);
                                  *(_QWORD *)(v5 + 8) = v37;
                                  if ( (unsigned __int64)v37 < v27 || v37 + 2 < v37 || (unsigned __int64)(v37 + 2) > v28 )
                                    break;
                                  if ( v37 )
                                  {
                                    if ( (unsigned __int64)v37 >= v27 )
                                    {
                                      do
                                      {
                                        v38 = v37 + 2;
                                        if ( v37 + 2 < v37 || (unsigned __int64)v38 > v28 )
                                          break;
                                        if ( !*v37 )
                                          goto LABEL_56;
                                        v39 = v31 + *v37;
                                        *v37 = v39;
                                        if ( v39 < v27 )
                                          break;
                                        if ( v39 + 4 < v39 )
                                          break;
                                        if ( v39 + 4 > v28 )
                                          break;
                                        v37 += 2;
                                      }
                                      while ( (unsigned __int64)v38 >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_56:
                                v40 = *(_QWORD *)(v5 + 16);
                                if ( v40 )
                                {
                                  v60 = (_DWORD *)(v31 + v40);
                                  *(_QWORD *)(v5 + 16) = v60;
                                  if ( (unsigned __int64)v60 < v27 || v60 + 2 < v60 || (unsigned __int64)(v60 + 2) > v28 )
                                    break;
                                  if ( v60 )
                                  {
                                    while ( (unsigned __int64)v60 >= v27 )
                                    {
                                      v61 = v60 + 2;
                                      if ( v60 + 2 < v60 || (unsigned __int64)v61 > v28 )
                                        break;
                                      if ( *v60 )
                                      {
                                        v60 += 2;
                                        if ( v61 )
                                          continue;
                                      }
                                      goto LABEL_57;
                                    }
                                    break;
                                  }
                                }
LABEL_57:
                                if ( *(_WORD *)(v5 + 82) )
                                {
                                  v41 = *(_QWORD *)(v5 + 88);
                                  if ( v41 )
                                  {
                                    v62 = v31 + v41;
                                    *(_QWORD *)(v5 + 88) = v62;
                                    if ( v62 < v27 || v62 + 6 < v62 || v62 + 6 > v28 )
                                      break;
                                  }
                                }
                                v42 = *(_QWORD *)(v5 + 24);
                                if ( v42 )
                                {
                                  v42 += v31;
                                  *(_QWORD *)(v5 + 24) = v42;
                                  if ( v42 < v27 || v42 + 16 < v42 || v42 + 16 > v28 )
                                    break;
                                }
                                if ( v42 )
                                {
                                  if ( v42 >= v27 )
                                  {
                                    v43 = (_QWORD *)(v42 + 8);
                                    do
                                    {
                                      if ( v43 + 1 < v43 - 1 || (unsigned __int64)(v43 + 1) > v28 )
                                        break;
                                      if ( !*((_BYTE *)v43 - 8) )
                                        goto LABEL_76;
                                      if ( *v43 )
                                      {
                                        v44 = (_WORD *)(v31 + *v43);
                                        *v43 = v44;
                                        if ( (unsigned __int64)v44 < v27
                                          || v44 + 1 < v44
                                          || (unsigned __int64)(v44 + 1) > v28 )
                                        {
                                          goto LABEL_428;
                                        }
                                      }
                                      else
                                      {
                                        v44 = 0LL;
                                      }
                                      if ( !v30 && v44 )
                                      {
                                        for ( ; (unsigned __int64)v44 >= v27; ++v44 )
                                        {
                                          if ( (unsigned __int64)v44 > v28 - 2 )
                                            break;
                                          if ( !*v44 )
                                            goto LABEL_74;
                                        }
                                        *v43 = 0LL;
                                      }
LABEL_74:
                                      v43 += 2;
                                    }
                                    while ( (unsigned __int64)(v43 - 1) >= v27 );
                                  }
                                  break;
                                }
LABEL_76:
                                v45 = *(_QWORD *)(v5 + 32);
                                if ( v45 )
                                {
                                  v46 = v31 + v45;
                                  *(_QWORD *)(v5 + 32) = v46;
                                  if ( v46 < v27 || v46 + 16 < v46 || v46 + 16 > v28 )
                                    break;
                                  if ( v46 )
                                  {
                                    if ( v46 >= v27 )
                                    {
                                      v47 = (_QWORD *)(v46 + 8);
                                      do
                                      {
                                        if ( v47 + 1 < v47 - 1 || (unsigned __int64)(v47 + 1) > v28 )
                                          break;
                                        if ( !*((_BYTE *)v47 - 8) )
                                          goto LABEL_93;
                                        if ( *v47 )
                                        {
                                          v48 = (_WORD *)(v31 + *v47);
                                          *v47 = v48;
                                          if ( (unsigned __int64)v48 < v27
                                            || v48 + 1 < v48
                                            || (unsigned __int64)(v48 + 1) > v28 )
                                          {
                                            goto LABEL_428;
                                          }
                                        }
                                        else
                                        {
                                          v48 = 0LL;
                                        }
                                        if ( !v30 && v48 )
                                        {
                                          for ( ; (unsigned __int64)v48 >= v27; ++v48 )
                                          {
                                            if ( (unsigned __int64)v48 > v28 - 2 )
                                              break;
                                            if ( !*v48 )
                                              goto LABEL_91;
                                          }
                                          *v47 = 0LL;
                                        }
LABEL_91:
                                        v47 += 2;
                                      }
                                      while ( (unsigned __int64)(v47 - 1) >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_93:
                                v49 = *(_QWORD *)(v5 + 40);
                                if ( v49 )
                                {
                                  v63 = (_QWORD *)(v31 + v49);
                                  *(_QWORD *)(v5 + 40) = v63;
                                  if ( (unsigned __int64)v63 < v27 || v63 + 1 < v63 || (unsigned __int64)(v63 + 1) > v28 )
                                    break;
                                  if ( v63 )
                                  {
                                    if ( (unsigned __int64)v63 < v27 )
                                      break;
LABEL_183:
                                    v64 = v63 + 1;
                                    if ( v63 + 1 < v63 || (unsigned __int64)v64 > v28 )
                                      break;
                                    if ( *v63 )
                                    {
                                      v65 = (_WORD *)(v31 + *v63);
                                      *v63 = v65;
                                      if ( (unsigned __int64)v65 >= v27
                                        && v65 + 1 >= v65
                                        && (unsigned __int64)(v65 + 1) <= v28 )
                                      {
                                        while ( (unsigned __int64)v65 >= v27
                                             && v65 + 1 >= v65
                                             && (unsigned __int64)(v65 + 1) <= v28 )
                                        {
                                          if ( !*v65 )
                                          {
                                            ++v63;
                                            if ( (unsigned __int64)v64 >= v27 )
                                              goto LABEL_183;
                                            goto LABEL_428;
                                          }
                                          ++v65;
                                        }
                                      }
                                      break;
                                    }
                                  }
                                }
                                v50 = *(_QWORD *)(v5 + 48);
                                if ( !v50 )
                                  break;
                                v51 = v50 + v31;
                                *(_QWORD *)(v5 + 48) = v50 + v31;
                                if ( v50 + v31 < v27 )
                                  break;
                                if ( v51 + 2 < v51 )
                                  break;
                                if ( v51 + 2 > v28 )
                                  break;
                                v52 = v51 + 2LL * *(unsigned __int8 *)(v5 + 56);
                                if ( v52 < v27 || v52 + 2 < v52 || v52 + 2 > v28 )
                                  break;
                                v53 = *(_QWORD *)(v5 + 64);
                                if ( v53 )
                                {
                                  v54 = v31 + v53;
                                  *(_QWORD *)(v5 + 64) = v54;
                                  if ( v54 < v27 || v54 + 4 < v54 || v54 + 4 > v28 )
                                    break;
                                  if ( v54 )
                                  {
                                    for ( i = (_WORD *)(v54 + 2); !v30 || *i; i += 2 )
                                    {
                                      if ( (unsigned __int64)(i - 1) < v27
                                        || i + 1 < i - 1
                                        || (unsigned __int64)(i + 1) > v28 )
                                      {
                                        goto LABEL_428;
                                      }
                                      if ( !v30 && !*i )
                                        break;
                                    }
                                  }
                                }
                                v56 = *(_QWORD *)(v5 + 72);
                                if ( v56 )
                                {
                                  v57 = v31 + v56;
                                  *(_QWORD *)(v5 + 72) = v57;
                                  if ( v57 < v27 || v57 + 4 < v57 || v57 + 4 > v28 )
                                    break;
                                  if ( v57 )
                                  {
                                    if ( v57 >= v27 )
                                    {
                                      v58 = v57 + 4;
                                      do
                                      {
                                        if ( v58 < 4 || v58 > v28 )
                                          break;
                                        if ( !*(_WORD *)(v58 - 2) )
                                          goto LABEL_126;
                                        v58 += 4LL;
                                      }
                                      while ( v58 - 4 >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_126:
                                if ( a4 )
                                {
                                  v66 = *(_DWORD *)(v19 + 12);
                                  if ( a4 < v66 )
                                    break;
                                  v6 = v27 + a4 - v66;
                                  if ( v6 < v27 )
                                    break;
                                  v67 = v6 + 32;
                                  if ( v6 + 32 < v6 || v67 > v28 )
                                    break;
                                  v68 = *(_QWORD *)(v6 + 8);
                                  if ( v68 )
                                  {
                                    v69 = v31 + v68;
                                    *(_QWORD *)(v6 + 8) = v69;
                                    if ( v69 < v27 || v69 + 132 < v69 || v69 + 132 > v28 )
                                      break;
                                    if ( v69 )
                                    {
                                      v70 = *(unsigned int *)(v6 + 4);
                                      if ( v30 )
                                      {
                                        v72 = v69 + 132LL * (unsigned int)(v70 - 1);
                                        if ( v72 < v27 || v72 + 132 < v72 )
                                          break;
                                        v71 = v72 + 132 <= v28;
                                      }
                                      else
                                      {
                                        v71 = v70 <= (v28 - v69) / 0x84;
                                      }
                                      if ( !v71 )
                                        break;
                                    }
                                  }
                                  v73 = *(_QWORD *)(v6 + 24);
                                  if ( v73 )
                                  {
                                    v74 = v31 + v73;
                                    *(_QWORD *)(v6 + 24) = v74;
                                    if ( v74 < v27 )
                                      break;
                                    if ( v74 + 2 < v74 )
                                      break;
                                    if ( v74 + 2 > v28 )
                                      break;
                                    if ( v74 )
                                    {
                                      v75 = v74 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                      if ( v75 < v27 || v75 + 2 < v75 || v75 + 2 > v28 )
                                        break;
                                    }
                                  }
                                  if ( !v30 )
                                  {
                                    v76 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v76 )
                                    {
                                      v77 = *(_QWORD *)(v6 + 8);
                                      if ( v77 < v67 && v77 + 132 * v76 > v6 )
                                        break;
                                    }
                                    if ( v6 - 104 < v5 && v67 > v5 )
                                      break;
                                  }
                                  v78 = qword_1C0259338 ? qword_1C0259338() : -1073741637;
                                  if ( v78 >= 0 && !(qword_1C0259340 ? qword_1C0259340(v6) : 0) )
                                    break;
                                  *((_QWORD *)a1 + 6) = v6;
                                }
                                if ( v30 )
                                  goto LABEL_128;
                                v80 = *(_QWORD *)(v5 + 8);
                                if ( v80 )
                                {
                                  v81 = *(unsigned __int64 **)(v5 + 8);
                                  if ( v80 < v27 )
                                    break;
                                  v82 = v80 + 16;
LABEL_239:
                                  if ( v82 < (unsigned __int64)v81 || v82 > v28 )
                                    break;
                                  v83 = *v81;
                                  if ( *v81 )
                                  {
                                    for ( j = (_BYTE *)*v81;
                                          (unsigned __int64)j >= v27 && j + 4 >= j && (unsigned __int64)(j + 4) <= v28;
                                          j += *(unsigned __int8 *)(v82 - 7) )
                                    {
                                      if ( !*j )
                                      {
                                        v88 = j + 4;
                                        if ( !v6
                                          || (v89 = *(unsigned int *)(v6 + 4), !(_DWORD)v89)
                                          || (v90 = *(_QWORD *)(v6 + 8), v90 >= (unsigned __int64)v88)
                                          || v90 + 132 * v89 <= v83 )
                                        {
                                          if ( v83 - 104 >= v5 || (unsigned __int64)v88 <= v5 )
                                          {
                                            v81 += 2;
                                            v82 += 16LL;
                                            if ( (unsigned __int64)v81 >= v27 )
                                              goto LABEL_239;
                                          }
                                        }
                                        goto LABEL_428;
                                      }
                                      v85 = *(unsigned __int8 *)(v82 - 8);
                                      if ( (unsigned __int8)v85 > 1u )
                                      {
                                        v86 = &j[2 * v85];
                                        if ( (unsigned __int64)v86 < v27 )
                                          goto LABEL_428;
                                        v87 = &j[2 * v85 + 2];
                                        if ( v87 < v86 || (unsigned __int64)v87 > v28 )
                                          goto LABEL_428;
                                      }
                                    }
                                    break;
                                  }
                                  v91 = v81 + 2;
                                  if ( v6 )
                                  {
                                    v92 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v92 )
                                    {
                                      v93 = *(_QWORD *)(v6 + 8);
                                      if ( v93 < (unsigned __int64)v91 && v93 + 132 * v92 > v80 )
                                        break;
                                    }
                                  }
                                  if ( v80 - 104 < v5 && (unsigned __int64)v91 > v5 )
                                    break;
                                }
                                v94 = *(_QWORD *)(v5 + 16);
                                v95 = (_DWORD *)v94;
                                if ( v94 )
                                {
                                  v96 = v94 + 8;
                                  while ( (unsigned __int64)v95 >= v27 && v96 >= (unsigned __int64)v95 && v96 <= v28 )
                                  {
                                    v97 = v95 + 2;
                                    if ( !*v95 )
                                    {
                                      if ( v6 )
                                      {
                                        v98 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v98 )
                                        {
                                          v99 = *(_QWORD *)(v6 + 8);
                                          if ( v99 < (unsigned __int64)v97 && v99 + 132 * v98 > v94 )
                                            goto LABEL_428;
                                        }
                                      }
                                      if ( v94 - 104 < v5 && (unsigned __int64)v97 > v5 )
                                        goto LABEL_428;
                                      goto LABEL_280;
                                    }
                                    v96 += 8LL;
                                    v95 += 2;
                                    if ( !v97 )
                                      goto LABEL_280;
                                  }
                                }
                                else
                                {
LABEL_280:
                                  v100 = *(_QWORD *)(v5 + 24);
                                  if ( v100 )
                                  {
                                    v101 = *(_BYTE **)(v5 + 24);
                                    if ( v100 >= v27 )
                                    {
                                      v102 = v100 + 16;
                                      while ( v102 >= (unsigned __int64)v101 && v102 <= v28 )
                                      {
                                        if ( !*v101 )
                                        {
                                          v108 = v101 + 16;
                                          if ( v6 )
                                          {
                                            v109 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v109 )
                                            {
                                              v110 = *(_QWORD *)(v6 + 8);
                                              if ( v110 < (unsigned __int64)v108 && v110 + 132 * v109 > v100 )
                                                goto LABEL_428;
                                            }
                                          }
                                          if ( v100 - 104 < v5 && (unsigned __int64)v108 > v5 )
                                            goto LABEL_428;
                                          goto LABEL_307;
                                        }
                                        v103 = *(_QWORD *)(v102 - 8);
                                        if ( v103 )
                                        {
                                          for ( k = *(_WORD **)(v102 - 8); (unsigned __int64)k >= v27; ++k )
                                          {
                                            v105 = k + 1;
                                            if ( k + 1 < k || (unsigned __int64)v105 > v28 )
                                              break;
                                            if ( !*k )
                                            {
                                              if ( v6 )
                                              {
                                                v106 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v106 )
                                                {
                                                  v107 = *(_QWORD *)(v6 + 8);
                                                  if ( v107 < (unsigned __int64)v105 && v107 + 132 * v106 > v103 )
                                                    goto LABEL_428;
                                                }
                                              }
                                              if ( v103 - 104 < v5 && (unsigned __int64)v105 > v5 )
                                                goto LABEL_428;
                                              goto LABEL_299;
                                            }
                                          }
                                          goto LABEL_428;
                                        }
LABEL_299:
                                        v101 += 16;
                                        v102 += 16LL;
                                        if ( (unsigned __int64)v101 < v27 )
                                          goto LABEL_428;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_307:
                                    v111 = *(_QWORD *)(v5 + 32);
                                    if ( v111 )
                                    {
                                      v112 = *(_BYTE **)(v5 + 32);
                                      if ( v111 >= v27 )
                                      {
                                        v113 = v111 + 16;
                                        while ( v113 >= (unsigned __int64)v112 && v113 <= v28 )
                                        {
                                          if ( !*v112 )
                                          {
                                            v119 = v112 + 16;
                                            if ( v6 )
                                            {
                                              v120 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v120 )
                                              {
                                                v121 = *(_QWORD *)(v6 + 8);
                                                if ( v121 < (unsigned __int64)v119 && v121 + 132 * v120 > v111 )
                                                  goto LABEL_428;
                                              }
                                            }
                                            if ( v111 - 104 < v5 && (unsigned __int64)v119 > v5 )
                                              goto LABEL_428;
                                            goto LABEL_334;
                                          }
                                          v114 = *(_QWORD *)(v113 - 8);
                                          if ( v114 )
                                          {
                                            for ( m = *(_WORD **)(v113 - 8); (unsigned __int64)m >= v27; ++m )
                                            {
                                              v116 = m + 1;
                                              if ( m + 1 < m || (unsigned __int64)v116 > v28 )
                                                break;
                                              if ( !*m )
                                              {
                                                if ( v6 )
                                                {
                                                  v117 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v117 )
                                                  {
                                                    v118 = *(_QWORD *)(v6 + 8);
                                                    if ( v118 < (unsigned __int64)v116 && v118 + 132 * v117 > v114 )
                                                      goto LABEL_428;
                                                  }
                                                }
                                                if ( v114 - 104 < v5 && (unsigned __int64)v116 > v5 )
                                                  goto LABEL_428;
                                                goto LABEL_326;
                                              }
                                            }
                                            goto LABEL_428;
                                          }
LABEL_326:
                                          v112 += 16;
                                          v113 += 16LL;
                                          if ( (unsigned __int64)v112 < v27 )
                                            goto LABEL_428;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_334:
                                      v122 = *(_QWORD *)(v5 + 40);
                                      if ( v122 )
                                      {
                                        v123 = *(unsigned __int64 **)(v5 + 40);
                                        if ( v122 < v27 )
                                          break;
                                        v124 = v122 + 8;
LABEL_337:
                                        if ( v124 < (unsigned __int64)v123 || v124 > v28 )
                                          break;
                                        v125 = *v123;
                                        if ( *v123 )
                                        {
                                          for ( n = (_WORD *)*v123; (unsigned __int64)n >= v27; ++n )
                                          {
                                            v127 = n + 1;
                                            if ( n + 1 < n || (unsigned __int64)v127 > v28 )
                                              break;
                                            if ( !*n )
                                            {
                                              if ( !v6
                                                || (v128 = *(unsigned int *)(v6 + 4), !(_DWORD)v128)
                                                || (v129 = *(_QWORD *)(v6 + 8), v129 >= (unsigned __int64)v127)
                                                || v129 + 132 * v128 <= v125 )
                                              {
                                                if ( v125 - 104 >= v5 || (unsigned __int64)v127 <= v5 )
                                                {
                                                  ++v123;
                                                  v124 += 8LL;
                                                  if ( (unsigned __int64)v123 >= v27 )
                                                    goto LABEL_337;
                                                }
                                              }
                                              goto LABEL_428;
                                            }
                                          }
                                          break;
                                        }
                                        v130 = v123 + 1;
                                        if ( v6 )
                                        {
                                          v131 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v131 )
                                          {
                                            v132 = *(_QWORD *)(v6 + 8);
                                            if ( v132 < (unsigned __int64)v130 && v132 + 132 * v131 > v122 )
                                              break;
                                          }
                                        }
                                        if ( v122 - 104 < v5 && (unsigned __int64)v130 > v5 )
                                          break;
                                      }
                                      v133 = *(unsigned __int8 *)(v5 + 56);
                                      if ( (_BYTE)v133 )
                                      {
                                        if ( v6 )
                                        {
                                          v134 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v134 )
                                          {
                                            v135 = *(_QWORD *)(v5 + 48);
                                            v136 = *(_QWORD *)(v6 + 8);
                                            if ( v136 < v135 + 2 * v133 && v136 + 132 * v134 > v135 )
                                              break;
                                          }
                                        }
                                      }
                                      v137 = *(_QWORD *)(v5 + 64);
                                      if ( v137 )
                                      {
                                        v138 = *(_QWORD *)(v5 + 64);
                                        if ( v137 >= v27 )
                                        {
                                          while ( 1 )
                                          {
                                            v139 = v138 + 4;
                                            if ( v138 + 4 < v138 || v139 > v28 )
                                              break;
                                            if ( !*(_WORD *)(v138 + 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v140 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v140 )
                                                {
                                                  v141 = *(_QWORD *)(v6 + 8);
                                                  if ( v141 < v139 && v141 + 132 * v140 > v137 )
                                                    goto LABEL_428;
                                                }
                                              }
                                              if ( v137 - 104 < v5 && v139 > v5 )
                                                goto LABEL_428;
                                              goto LABEL_378;
                                            }
                                            v138 += 4LL;
                                            if ( v139 < v27 )
                                              goto LABEL_428;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_378:
                                        v142 = *(_QWORD *)(v5 + 72);
                                        if ( v142 )
                                        {
                                          v143 = *(_QWORD *)(v5 + 72);
                                          if ( v142 >= v27 )
                                          {
                                            while ( 1 )
                                            {
                                              v144 = v143 + 4;
                                              if ( v143 + 4 < v143 || v144 > v28 )
                                                break;
                                              if ( !*(_WORD *)(v143 + 2) )
                                              {
                                                if ( v6 )
                                                {
                                                  v145 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v145 )
                                                  {
                                                    v146 = *(_QWORD *)(v6 + 8);
                                                    if ( v146 < v144 && v146 + 132 * v145 > v142 )
                                                      goto LABEL_428;
                                                  }
                                                }
                                                if ( v142 - 104 < v5 && v144 > v5 )
                                                  goto LABEL_428;
                                                goto LABEL_391;
                                              }
                                              v143 += 4LL;
                                              if ( v144 < v27 )
                                                goto LABEL_428;
                                            }
                                          }
                                        }
                                        else
                                        {
LABEL_391:
                                          if ( *(_WORD *)(v5 + 82) )
                                          {
                                            v147 = *(_BYTE **)(v5 + 88);
                                            if ( v147 )
                                            {
                                              if ( (unsigned __int64)v147 >= v27 )
                                              {
                                                v148 = *(_QWORD *)(v5 + 88);
                                                while ( (unsigned __int64)v147 <= v28 - 6 )
                                                {
                                                  if ( !*v147 )
                                                    goto LABEL_416;
                                                  v149 = 0;
                                                  if ( *(_BYTE *)(v5 + 84) )
                                                  {
                                                    v150 = (__int16 *)(v147 + 4);
                                                    while ( 1 )
                                                    {
                                                      if ( v149 > 0 )
                                                      {
                                                        v151 = (unsigned __int64)&v147[2 * v149 + 4];
                                                        if ( v151 < v27 || v151 > v28 - 2 )
                                                          break;
                                                      }
                                                      v152 = *v150++;
                                                      ++v149;
                                                      if ( v152 == -4096 || v149 >= *(unsigned __int8 *)(v5 + 84) )
                                                        goto LABEL_406;
                                                    }
                                                    *(_QWORD *)(v5 + 88) = 0LL;
                                                  }
LABEL_406:
                                                  v148 = *(_QWORD *)(v5 + 88);
                                                  if ( !v148 )
                                                    goto LABEL_424;
                                                  if ( v149 > 0 )
                                                  {
                                                    if ( v6 )
                                                    {
                                                      v153 = *(unsigned int *)(v6 + 4);
                                                      if ( (_DWORD)v153 )
                                                      {
                                                        v154 = *(_QWORD *)(v6 + 8);
                                                        if ( v154 < (unsigned __int64)&v147[2 * v149 + 4]
                                                          && v154 + 132 * v153 > (unsigned __int64)(v147 + 4) )
                                                        {
                                                          goto LABEL_423;
                                                        }
                                                      }
                                                    }
                                                    if ( (unsigned __int64)(v147 - 100) < v5
                                                      && (unsigned __int64)&v147[2 * v149 + 4] > v5 )
                                                    {
                                                      goto LABEL_423;
                                                    }
                                                  }
                                                  v147 += *(unsigned __int8 *)(v5 + 85);
                                                  if ( (unsigned __int64)v147 < v27 )
                                                    break;
                                                }
                                              }
                                              *(_QWORD *)(v5 + 88) = 0LL;
                                              v148 = 0LL;
LABEL_416:
                                              if ( v148 )
                                              {
                                                if ( (v155 = v147 + 6, v6)
                                                  && (v156 = *(unsigned int *)(v6 + 4), (_DWORD)v156)
                                                  && (v157 = *(_QWORD *)(v6 + 8), v157 < (unsigned __int64)v155)
                                                  && v157 + 132 * v156 > v148
                                                  || v148 - 104 < v5 && (unsigned __int64)v155 > v5 )
                                                {
LABEL_423:
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
                                              }
                                            }
                                          }
LABEL_424:
                                          if ( !v6 )
                                            goto LABEL_128;
                                          v158 = *(unsigned int *)(v6 + 4);
                                          if ( !(_DWORD)v158 )
                                            goto LABEL_128;
                                          v159 = *(_QWORD *)(v6 + 8);
                                          if ( v159 - 104 >= v5 || v159 + 132 * v158 <= v5 )
                                            goto LABEL_128;
                                        }
                                      }
                                    }
                                  }
                                }
                                break;
                              }
                              v34 += 2;
                              v35 += 2;
                              if ( (unsigned __int64)v34 < v27 )
                                break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_428:
              Win32FreePool(v27);
              v7 = 0;
            }
            else
            {
LABEL_128:
              v7 = 1;
            }
            goto LABEL_129;
          }
        }
        v7 = 0;
      }
LABEL_129:
      v9 = a1;
    }
  }
  if ( v162 )
    Win32FreePool(v162);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}

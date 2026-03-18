/*
 * XREFs of BuildExpandAAInfo @ 0x1C00E9C30
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x1C00C8EB8 (RaisePower.c)
 *     DivFD6 @ 0x1C00D7050 (DivFD6.c)
 *     _ALIGN_MEM @ 0x1C00D7990 (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00E9F40 (BuildRepData.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  signed int v14; // r8d
  int v15; // r14d
  int v16; // r9d
  int v17; // eax
  int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned int v22; // esi
  int v23; // r10d
  unsigned int v24; // r14d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rax
  _DWORD *v29; // rbx
  _QWORD *v30; // r15
  _OWORD *v31; // r14
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rdx
  __int16 v36; // cx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  int *v43; // r14
  int *v44; // r12
  _DWORD *v45; // r13
  _DWORD *v46; // rdx
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned int v51; // r10d
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  int *v55; // r11
  __int64 v56; // r10
  __int64 v57; // rax
  int *v58; // r9
  int v59; // esi
  unsigned int *v60; // rdx
  int *v61; // r12
  __int64 v62; // r12
  int v63; // r14d
  int *v64; // rdi
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r10
  __int64 v68; // r8
  _QWORD *v69; // rcx
  __int64 v70; // rax
  int v71; // edx
  unsigned int v72; // r8d
  int v73; // eax
  unsigned int v74; // r10d
  unsigned int v75; // r11d
  unsigned int v76; // ecx
  signed int v77; // ebx
  int v78; // r10d
  unsigned int v79; // r9d
  unsigned int v80; // r8d
  unsigned int v81; // ecx
  int *v82; // r14
  unsigned int v83; // eax
  unsigned int v84; // r14d
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  int *v88; // rax
  __int64 v89; // r12
  int v90; // ebx
  int v91; // r10d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int128 v97; // rtt
  __int64 v98; // rax
  int v99; // eax
  int v100; // eax
  int v101; // r10d
  int v102; // ecx
  int v103; // r9d
  _DWORD *v104; // rax
  __int64 *v105; // rcx
  int v106; // eax
  int v107; // edx
  __int64 i; // rcx
  __int64 v109; // rcx
  __int16 v110; // ax
  unsigned int v111; // [rsp+20h] [rbp-A9h] BYREF
  int v112; // [rsp+24h] [rbp-A5h]
  unsigned int v113; // [rsp+28h] [rbp-A1h]
  unsigned int v114; // [rsp+2Ch] [rbp-9Dh]
  int v115; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v116; // [rsp+34h] [rbp-95h] BYREF
  int v117; // [rsp+38h] [rbp-91h]
  unsigned int v118; // [rsp+3Ch] [rbp-8Dh]
  int v119; // [rsp+40h] [rbp-89h]
  int v120; // [rsp+44h] [rbp-85h]
  int v121; // [rsp+48h] [rbp-81h]
  int v122; // [rsp+4Ch] [rbp-7Dh]
  _DWORD *v123; // [rsp+50h] [rbp-79h]
  int *v124; // [rsp+58h] [rbp-71h]
  int v125; // [rsp+60h] [rbp-69h]
  signed int v126; // [rsp+64h] [rbp-65h]
  int v127; // [rsp+68h] [rbp-61h]
  int *v128; // [rsp+70h] [rbp-59h]
  __int64 v129; // [rsp+78h] [rbp-51h]
  int *v130; // [rsp+80h] [rbp-49h]
  int *v131; // [rsp+88h] [rbp-41h]
  _QWORD *v132; // [rsp+90h] [rbp-39h]
  __int64 v133; // [rsp+98h] [rbp-31h]
  _DWORD *v134; // [rsp+A0h] [rbp-29h]
  int *v135; // [rsp+A8h] [rbp-21h]
  int *v136; // [rsp+B0h] [rbp-19h]
  _DWORD *v137; // [rsp+B8h] [rbp-11h]
  __int64 v138; // [rsp+C0h] [rbp-9h]
  int v139; // [rsp+140h] [rbp+77h]

  v10 = *a3;
  v11 = *a4;
  v12 = 0;
  v13 = *a4 - *a3;
  v135 = a3;
  v14 = a7 - a6;
  v136 = a4;
  v113 = a2;
  v137 = a8;
  v123 = a9;
  v126 = 0;
  v120 = 0;
  v127 = 0;
  v115 = 0;
  v118 = v10;
  v139 = a7 - a6;
  if ( (int)v13 <= 0 )
    return 0LL;
  v15 = *a8;
  v16 = 0;
  v125 = *a8;
  if ( v10 >= 0 )
    v16 = v10;
  v121 = 0;
  v17 = *a9;
  if ( v11 > a5 )
    v11 = a5;
  v18 = -1;
  v117 = v16;
  v112 = v11;
  v119 = v17;
  v122 = -1;
  if ( v15 >= v17 || (int)v13 >= v14 )
    return 0LL;
  if ( (a2 & 0x4A80) != 0 )
  {
    v19 = v11 - v16;
    v20 = v11 - v16 + 3;
    if ( v20 < v19 )
      return 0LL;
    v21 = 2LL * v20;
    if ( v21 > 0xFFFFFFFF || (int)v21 + 8 < (unsigned int)v21 )
      return 0LL;
    v22 = (v21 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v22 = 0;
  }
  if ( (a2 & 0x4200) != 0 )
  {
    v23 = 0;
    v111 = 0;
    v114 = 0;
  }
  else
  {
    v48 = v13 + v14 - 1;
    if ( v48 < v14 )
      return 0LL;
    v49 = 2LL * (v48 / v13);
    if ( v49 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v49 )
      return 0LL;
    v50 = 4LL * (unsigned int)(v49 - 1);
    v114 = v49 - 1;
    if ( v50 > 0xFFFFFFFF )
      return 0LL;
    v111 = 4 * (v49 - 1);
    if ( (int)ALIGN_MEM(&v111, v50) < 0 )
      return 0LL;
    v53 = 8LL * v51;
    if ( v53 > v52 )
      return 0LL;
    v116 = 8 * v51;
    if ( (int)ALIGN_MEM(&v116, v53) < 0 )
      return 0LL;
    if ( v111 + v116 < v116 )
      return 0LL;
    v54 = 8LL * (unsigned int)(v119 - v15);
    if ( v54 > 0xFFFFFFFF || (int)ALIGN_MEM(&v115, v54) < 0 )
      return 0LL;
    v12 = v115;
  }
  if ( a10 + 8 >= a10 )
  {
    v24 = (a10 + 8) & 0xFFFFFFF8;
    v25 = v12 + v22;
    if ( v12 + v22 >= v22 )
    {
      v26 = v24 + v25;
      if ( v24 + v25 >= v25 )
      {
        v27 = v26 + v23;
        if ( v26 + v23 >= v26 && v27 + 240 >= v27 )
        {
          v28 = (char *)EngAllocMem(1u, v27 + 240, 0x34355448u);
          v134 = v28;
          v29 = v28;
          if ( !v28 )
            return v29;
          v30 = v28 + 240;
          if ( v24 )
          {
            *((_QWORD *)v28 + 4) = v30;
            v30 = (_QWORD *)((char *)v30 + v24);
          }
          if ( v22 )
          {
            v31 = v28 + 48;
            v32 = v117;
            v33 = v125;
            *((_DWORD *)v28 + 13) = v139;
            v34 = v112;
            v29[17] = v112;
            v29[16] = v32;
            v29[18] = v33;
            v29[19] = v119;
            v35 = v118;
            *((_QWORD *)v29 + 12) = (char *)v30 + 2 * (v34 - v32);
            *((_QWORD *)v29 + 11) = v30;
            v30 = (_QWORD *)((char *)v30 + v22);
            v29[12] = v13;
            if ( !(unsigned int)BuildRepData(v29 + 12, v35, (unsigned int)a6) )
            {
LABEL_110:
              EngFreeMem(v29);
              return 0LL;
            }
            v36 = v113;
            v37 = *((_OWORD *)v29 + 4);
            *((_OWORD *)v29 + 7) = *v31;
            v38 = *((_OWORD *)v29 + 5);
            *((_OWORD *)v29 + 8) = v37;
            v39 = *((_OWORD *)v29 + 6);
            *((_OWORD *)v29 + 9) = v38;
            *((_OWORD *)v29 + 10) = v39;
            v40 = *((_OWORD *)v29 + 8);
            *((_OWORD *)v29 + 11) = *((_OWORD *)v29 + 7);
            v41 = *((_OWORD *)v29 + 9);
            *((_OWORD *)v29 + 12) = v40;
            v42 = *((_OWORD *)v29 + 10);
            *((_OWORD *)v29 + 13) = v41;
            *((_OWORD *)v29 + 14) = v42;
            if ( (v36 & 0x4000) != 0 )
            {
              v29[16] -= *((unsigned __int8 *)v29 + 80);
              v29[17] += *((unsigned __int8 *)v29 + 81);
            }
          }
          else
          {
            v36 = v113;
          }
          if ( !v12 )
          {
            v43 = v135;
            v44 = v136;
            v45 = v137;
            v46 = v123;
            *v135 = v29[16];
            *v44 = v29[17] - 1;
            *v45 = v29[18];
            *v46 = v29[19] - 1;
LABEL_29:
            *v29 = *v44 - *v43 + 1;
            v29[1] = *v46 - *v45 + 1;
            return v29;
          }
          v55 = (int *)v114;
          v56 = 1000000LL;
          v57 = v111;
          v58 = (int *)v114;
          v59 = 4;
          v60 = (unsigned int *)((char *)v30 + v12);
          *((_QWORD *)v29 + 5) = v30;
          v138 = 0LL;
          v132 = (_QWORD *)((char *)v60 + v57);
          v131 = (int *)v60;
          v130 = v55;
          v129 = 1000000LL;
          v61 = (int *)&v60[(unsigned __int64)(unsigned int)v55 >> 1];
          v124 = v61;
          *v61 = 1000000;
          if ( (v36 & 0x200) != 0 )
          {
            *((_WORD *)v29 + 4) |= 4u;
            v62 = 0LL;
LABEL_60:
            v71 = v139;
            v72 = 0;
            v73 = v139;
            v116 = 0;
            v129 = (int)v13 * v56;
            v74 = (unsigned int)v55 >> 1;
            v75 = 0;
            v111 = 0;
            v76 = v139 + v13 * v74;
            v113 = v76;
            if ( v139 )
            {
              v77 = v118;
              v78 = v74 - v139;
              while ( 1 )
              {
                v118 = v73 - 1;
                ++v78;
                v79 = v114;
                LOWORD(v115) = 0;
                v80 = v76;
                v81 = v76 - v13;
                v82 = 0LL;
                v128 = v131;
                v122 = v78;
                v83 = v81 + v71;
                v130 = 0LL;
                if ( v13 < v113 )
                  v83 = v81;
                v124 = 0LL;
                v113 = v83;
                v133 = 0LL;
                if ( v114 )
                {
                  while ( 1 )
                  {
                    v84 = v79--;
                    v85 = *v128++;
                    if ( v80 >= v13 )
                      break;
                    if ( v78 < 0 || v79 >= v78 )
                    {
                      v87 = v85;
                      if ( v80 )
                        v62 += v85 * v80;
                      v88 = (int *)v133;
                      v82 = v124;
                      v133 = v62;
                      v89 = v13 - v80;
                      v124 = v88;
                      v130 = v82;
                      v80 += v71 - v13;
                      v62 = v87 * v89;
                      if ( !v79 )
                      {
                        v90 = v77 + 1;
                        if ( v90 >= v117 && v90 < v112 )
                        {
                          ++v121;
                          ++v90;
                          v115 = 0x8000;
                          if ( v90 < v117 || v90 >= v112 )
                            LOWORD(v115) = -16384;
                        }
                        v77 = v90 - 1;
                        goto LABEL_86;
                      }
                    }
                    else
                    {
                      v80 -= v13;
                      v86 = v13;
LABEL_84:
                      v62 += v85 * v86;
                      if ( !v79 )
                      {
                        v82 = v130;
                        goto LABEL_86;
                      }
                    }
                  }
                  if ( v80 / v13 <= v84 )
                    v84 = v80 / v13;
                  v91 = v114 - v79 - 1;
                  if ( v114 - v79 == 1 )
                    v92 = 0LL;
                  else
                    v92 = v132[v114 - v79 - 2];
                  v80 -= v13 * v84;
                  v79 += 1 - v84;
                  v128 += v84 - 1;
                  v93 = v84 + v91 - 1;
                  v78 = v122;
                  v86 = v132[v93] - v92;
                  v85 = v13;
                  v71 = v139;
                  goto LABEL_84;
                }
LABEL_86:
                if ( v77 < v117 || v77 >= v112 || a6 < v125 || a6 >= v119 )
                {
                  if ( v18 != -1 )
                    goto LABEL_103;
                  v62 = 0LL;
                  goto LABEL_102;
                }
                v94 = v62 << 13;
                v62 = 0LL;
                HIWORD(v138) = v94 / v129;
                v95 = (v94 % v129 + (v133 << 13)) % v129;
                WORD2(v138) = (v94 % v129 + (v133 << 13)) / v129;
                if ( !v124 )
                  break;
                ++v111;
                v97 = v95 + ((_QWORD)v124 << 13);
                v96 = (v95 + ((_QWORD)v124 << 13)) % v129;
                WORD1(v138) = v97 / v129;
                if ( !v82 )
                  goto LABEL_94;
                ++v116;
                v98 = (v96 + ((_QWORD)v82 << 13)) / v129;
LABEL_95:
                LOWORD(v138) = v115 | v98;
                *v30++ = v138;
                v126 = v77;
                v99 = a6;
                v127 = a6;
                if ( v18 != -1 )
                  v99 = v120;
                v120 = v99;
                v100 = v77;
                if ( v18 != -1 )
                  v100 = v18;
                v18 = v100;
LABEL_102:
                v73 = v118;
                v71 = v139;
                v76 = v113;
                ++a6;
                if ( !v118 )
                {
LABEL_103:
                  v29 = v134;
                  v72 = v116;
                  v75 = v111;
                  goto LABEL_104;
                }
              }
              WORD1(v138) = 0;
LABEL_94:
              LOWORD(v98) = 0;
              goto LABEL_95;
            }
LABEL_104:
            if ( v18 != -1 )
            {
              v101 = v117;
              v102 = v126 + 1;
              v103 = v112;
              if ( v126 + 1 < v117 || v102 >= v112 )
                v102 = v126;
              v104 = v123;
              v43 = v135;
              v44 = v136;
              v45 = v137;
              *v135 = v18;
              *v44 = v102;
              *v45 = v120;
              *v104 = v127;
              v105 = (__int64 *)*((_QWORD *)v29 + 5);
              LODWORD(v104) = v121;
              v29[4] = v30 - v105;
              v29[5] = (_DWORD)v104;
              if ( v75 )
                v106 = (v72 != 0) + 3;
              else
                v106 = 2;
              v29[6] = v106;
              v138 = *v105;
              if ( (v138 & 0x8000u) == 0LL )
              {
                if ( v18 + 1 < v101 || v18 + 1 >= v103 )
                  *((_WORD *)v29 + 4) |= 2u;
              }
              else
              {
                --v18;
                v59 = 3;
              }
              v107 = 0;
              for ( i = 0LL; i < (unsigned int)v59; ++i )
              {
                if ( (*((_WORD *)&v138 + i) & 0x3FFF) != 0 )
                  break;
                ++v107;
              }
              if ( v59 <= v107 )
              {
                v110 = *((_WORD *)v29 + 6);
              }
              else
              {
                v109 = (unsigned int)(v59 - v107);
                do
                {
                  if ( v18 < v101 || v18 >= v103 )
                  {
                    *((_WORD *)v29 + 6) += 16;
                  }
                  else
                  {
                    *v43 = v18;
                    ++*((_WORD *)v29 + 6);
                  }
                  v110 = *((_WORD *)v29 + 6);
                  --v18;
                  --v109;
                }
                while ( v109 );
              }
              if ( v110 && v18 >= v101 )
              {
                v46 = v123;
                if ( v18 < v103 )
                {
                  *v43 = v18;
                  *((_WORD *)v29 + 4) |= 1u;
                }
              }
              else
              {
                v46 = v123;
              }
              goto LABEL_29;
            }
            goto LABEL_110;
          }
          v63 = v139 - v13;
          if ( (int)(v139 - v13) <= 0 )
          {
LABEL_57:
            v62 = 0LL;
            v68 = 0LL;
            if ( (_DWORD)v55 )
            {
              v69 = v132;
              do
              {
                v70 = *v60++;
                v68 += v70;
                *v69++ = v68;
                v58 = (int *)((char *)v58 - 1);
              }
              while ( v58 );
            }
            goto LABEL_60;
          }
          v64 = (int *)v60;
          while ( 1 )
          {
            if ( --v61 < v64 )
            {
LABEL_56:
              v29 = v134;
              v18 = v122;
              v58 = v130;
              v60 = (unsigned int *)v131;
              LODWORD(v55) = v114;
              goto LABEL_57;
            }
            v65 = DivFD6(v63, v139);
            if ( v65 < 500000 )
              break;
            if ( v65 > 500000 )
            {
              v66 = 1LL;
              goto LABEL_54;
            }
LABEL_55:
            v63 -= v13;
            v67 = v129;
            *++v124 = v65;
            *v61 = v65;
            v56 = v67 + 2LL * v65;
            v129 = v56;
            if ( v63 <= 0 )
              goto LABEL_56;
          }
          v66 = 0LL;
LABEL_54:
          v65 = RaisePower(v65, 1414214LL, v66);
          goto LABEL_55;
        }
      }
    }
  }
  return 0LL;
}

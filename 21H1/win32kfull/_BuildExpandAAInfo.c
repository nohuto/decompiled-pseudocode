/*
 * XREFs of _BuildExpandAAInfo @ 0x1C17F7
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __alldvrm @ 0xF91D9 (__alldvrm.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _BuildRepData @ 0x1C211D (_BuildRepData.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 */

_DWORD *__cdecl BuildExpandAAInfo(
        int a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // esi
  int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // kr08_4
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  char *v23; // ecx
  const void *v24; // esi
  int v25; // edi
  int v26; // eax
  unsigned int v27; // eax
  char *v28; // ecx
  int v29; // edx
  int v30; // edi
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // ebx
  unsigned int v35; // edi
  int v36; // eax
  unsigned int v37; // eax
  ULONG v38; // ecx
  unsigned int v39; // ebx
  int v40; // edx
  unsigned int v41; // eax
  ULONG v42; // edx
  _DWORD *v43; // eax
  __int64 v44; // rax
  unsigned __int64 v46; // rax
  int v47; // ecx
  ULONG v48; // edx
  unsigned int v49; // ecx
  unsigned __int64 v50; // kr30_8
  int v51; // eax
  int v52; // eax
  bool v53; // cc
  int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // ecx
  signed __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // ebx
  unsigned int v60; // kr38_4
  __int64 v61; // rcx
  __int64 v62; // rax
  char *v63; // ecx
  int v65; // ecx
  char *v66; // edx
  bool v67; // zf
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // edx
  int v72; // ecx
  __int16 v73; // ax
  int *v74; // edx
  signed __int64 v75; // [esp-14h] [ebp-D0h]
  unsigned __int64 v76; // [esp-10h] [ebp-CCh]
  __int64 v77; // [esp-8h] [ebp-C4h]
  int v78; // [esp-4h] [ebp-C0h]
  unsigned int v79; // [esp+Ch] [ebp-B0h]
  int v80; // [esp+14h] [ebp-A8h]
  int v81; // [esp+18h] [ebp-A4h]
  int v82; // [esp+1Ch] [ebp-A0h]
  unsigned int v83; // [esp+20h] [ebp-9Ch]
  unsigned int v84; // [esp+24h] [ebp-98h]
  __int16 v85; // [esp+28h] [ebp-94h]
  int v86; // [esp+2Ch] [ebp-90h]
  unsigned int v87; // [esp+38h] [ebp-84h]
  int v88; // [esp+3Ch] [ebp-80h]
  int v89; // [esp+40h] [ebp-7Ch]
  unsigned int v90; // [esp+44h] [ebp-78h]
  unsigned int v91; // [esp+48h] [ebp-74h]
  int v92; // [esp+50h] [ebp-6Ch]
  int v93; // [esp+54h] [ebp-68h]
  ULONG v94; // [esp+58h] [ebp-64h]
  unsigned int v95; // [esp+5Ch] [ebp-60h]
  int v96; // [esp+60h] [ebp-5Ch]
  ULONG v97; // [esp+64h] [ebp-58h]
  unsigned int v98; // [esp+64h] [ebp-58h]
  unsigned int v99; // [esp+64h] [ebp-58h]
  unsigned int v100; // [esp+68h] [ebp-54h] BYREF
  _DWORD *v101; // [esp+6Ch] [ebp-50h] BYREF
  int *v102; // [esp+70h] [ebp-4Ch]
  char *v103; // [esp+74h] [ebp-48h]
  int v104; // [esp+78h] [ebp-44h]
  int v105; // [esp+7Ch] [ebp-40h]
  unsigned int v106; // [esp+80h] [ebp-3Ch]
  int v107; // [esp+84h] [ebp-38h]
  int v108; // [esp+88h] [ebp-34h]
  unsigned int v109; // [esp+8Ch] [ebp-30h]
  int v110; // [esp+90h] [ebp-2Ch]
  int v111; // [esp+94h] [ebp-28h]
  int v112; // [esp+98h] [ebp-24h] BYREF
  unsigned int v113; // [esp+9Ch] [ebp-20h] BYREF
  unsigned int v114; // [esp+A0h] [ebp-1Ch] BYREF
  int v115; // [esp+A4h] [ebp-18h]
  unsigned int v116; // [esp+A8h] [ebp-14h] BYREF
  ULONG cjMemSize; // [esp+ACh] [ebp-10h] BYREF
  int v118; // [esp+B0h] [ebp-Ch]
  int v119; // [esp+B4h] [ebp-8h]
  unsigned int v120; // [esp+DCh] [ebp+20h]

  v10 = *a4;
  v11 = *a4;
  v102 = a3;
  v111 = a10;
  v112 = a10;
  v12 = *a3;
  v13 = v11 - *a3;
  v14 = a7 - a6;
  v15 = 0;
  v108 = v10;
  v101 = 0;
  v82 = 0;
  v81 = 0;
  v80 = 0;
  v113 = 0;
  v114 = 0;
  v105 = v12;
  v110 = v12;
  v104 = v13;
  v120 = a7 - a6;
  if ( v13 <= 0 )
    return 0;
  if ( v12 < 0 )
  {
    v12 = 0;
    v110 = 0;
  }
  if ( v10 > a5 )
  {
    v10 = a5;
    v108 = a5;
  }
  v93 = *a8;
  v89 = 0;
  v92 = *a9;
  v115 = -1;
  v16 = -1;
  if ( v93 >= v92 )
    return 0;
  if ( v13 >= v14 )
    return 0;
  if ( (a2 & 0x4A80) != 0 )
  {
    v116 = 0;
    if ( (ULongAdd(v10 - v12, 3, (int *)&v116) & 0x80000000) != 0
      || !is_mul_ok(2u, v116)
      || ALIGN_MEM(&v113, 2 * v116) < 0 )
    {
      return 0;
    }
  }
  v116 = 0;
  if ( (a2 & 0x4200) != 0 )
  {
    v106 = 0;
  }
  else
  {
    if ( (ULongAdd(v120, v13 - 1, (int *)&v116) & 0x80000000) != 0 )
      return 0;
    v17 = 2 * (v116 / v13);
    if ( !is_mul_ok(2u, v116 / v13) )
      return 0;
    if ( !v17 )
      return 0;
    v18 = v17 - 1;
    v106 = v17 - 1;
    v20 = v17 - 1;
    v19 = 4 * (v17 - 1);
    if ( !is_mul_ok(4u, v20) )
      return 0;
    v116 = v19;
    if ( ALIGN_MEM(&v116, v19) < 0 )
      return 0;
    if ( !is_mul_ok(8u, v18) )
      return 0;
    v100 = 8 * v18;
    if ( ALIGN_MEM(&v100, 8 * v18) < 0
      || (ULongAdd(v100, v116, (int *)&v101) & 0x80000000) != 0
      || !is_mul_ok(8u, v92 - v93)
      || ALIGN_MEM(&v114, 8 * (v92 - v93)) < 0 )
    {
      return 0;
    }
  }
  if ( ALIGN_MEM(&v112, v111) < 0 )
    return 0;
  cjMemSize = 0;
  if ( (ULongAdd(v113, v114, (int *)&cjMemSize) & 0x80000000) != 0
    || (ULongAdd(cjMemSize, v112, (int *)&cjMemSize) & 0x80000000) != 0
    || (ULongAdd(cjMemSize, (int)v101, (int *)&cjMemSize) & 0x80000000) != 0
    || (ULongAdd(cjMemSize, 180, (int *)&cjMemSize) & 0x80000000) != 0 )
  {
    return 0;
  }
  v21 = EngAllocMem(1u, cjMemSize, 0x34355448u);
  v22 = v21;
  v101 = v21;
  if ( v21 )
  {
    v23 = (char *)(v21 + 45);
    v103 = (char *)(v21 + 45);
    if ( v112 )
    {
      v21[7] = v23;
      v23 += v112;
      v103 = v23;
    }
    if ( v113 )
    {
      v24 = v21 + 9;
      v25 = v110;
      v21[9] = v104;
      v21[10] = v120;
      v26 = v108;
      v22[14] = v108;
      v22[18] = v23;
      v22[15] = v93;
      v22[16] = v92;
      v103 = &v23[v113];
      v22[13] = v25;
      v22[19] = &v23[2 * (v26 - v25)];
      if ( !BuildRepData(a6) )
      {
LABEL_100:
        EngFreeMem(v22);
        return 0;
      }
      qmemcpy(v22 + 21, v24, 0x30u);
      qmemcpy(v22 + 33, v22 + 21, 0x30u);
      v16 = v115;
      v23 = v103;
      if ( (a2 & 0x4000) != 0 )
      {
        v22[13] -= *((unsigned __int8 *)v22 + 68);
        v22[14] += *((unsigned __int8 *)v22 + 69);
      }
      v15 = 0;
    }
    v27 = v114;
    if ( v114 )
    {
      v22[8] = v23;
      v84 = (unsigned int)&v23[v27];
      v95 = (unsigned int)&v23[v27 + v116];
      v112 = v106 >> 1;
      v118 = 0;
      v28 = &v23[4 * (v106 >> 1) + v27];
      v119 = 0;
      v116 = (unsigned int)v28;
      v107 = 1000000;
      *(_DWORD *)v28 = 1000000;
      v114 = 0;
      if ( (a2 & 0x200) != 0 )
      {
        *((_WORD *)v22 + 4) |= 4u;
      }
      else
      {
        v29 = v120;
        if ( (int)(v120 - v104) > 0 )
        {
          v30 = v120 - v104;
          do
          {
            v111 = (int)(v28 - 4);
            if ( (unsigned int)(v28 - 4) < v84 )
              break;
            v31 = DivFD6(v30, v29);
            if ( v31 >= (int)&loc_7A120 )
            {
              if ( v31 > (int)&loc_7A120 )
                v31 = RaisePower(v31, 1414214, 1);
            }
            else
            {
              v31 = RaisePower(v31, 1414214, 0);
            }
            v116 += 4;
            *(_DWORD *)v116 = v31;
            v28 = (char *)v111;
            *(_DWORD *)v111 = v31;
            v114 = (2LL * v31 + __PAIR64__(v114, v107)) >> 32;
            v107 += 2 * v31;
            v30 -= v104;
            v29 = v120;
          }
          while ( v30 > 0 );
          v22 = v101;
          v16 = v115;
        }
        v32 = 0;
        v33 = 0;
        if ( v106 )
        {
          v34 = v106;
          v35 = 0;
          do
          {
            v35 = (__PAIR64__(v35, *(_DWORD *)(v84 + 4 * v33)) + v32) >> 32;
            v32 += *(_DWORD *)(v84 + 4 * v33);
            *(_QWORD *)(v95 + 8 * v33++) = __PAIR64__(v35, v32);
          }
          while ( v33 < v34 );
          v22 = v101;
          v16 = v115;
        }
      }
      v36 = v104 * v107;
      v107 = (v104 * __PAIR64__(v114, v107)) >> 32;
      v114 = v36;
      v37 = v120;
      v116 = 0;
      v100 = 0;
      v38 = v120 + v104 * v112;
      v113 = v38;
      if ( v120 )
      {
        v39 = v104;
        v40 = v112 - v120;
        while ( 1 )
        {
          cjMemSize = v38;
          v91 = v37 - 1;
          v96 = v84;
          v41 = v113 - v39;
          v112 = v40 + 1;
          v42 = v106;
          v79 = 0;
          v111 = 0;
          v87 = 0;
          v86 = 0;
          v90 = 0;
          v88 = 0;
          v109 = 0;
          v115 = 0;
          v85 = 0;
          if ( v39 >= v113 )
            v41 += v120;
          v113 = v41;
          if ( v106 )
          {
            while ( 1 )
            {
              v43 = (_DWORD *)v96;
              v96 += 4;
              v97 = v42;
              HIDWORD(v44) = v42 - 1;
              v94 = HIDWORD(v44);
              LODWORD(v44) = *v43;
              if ( v38 >= v39 )
                break;
              if ( v112 >= 0 && HIDWORD(v44) < v112 )
              {
                v77 = v39;
                cjMemSize = v38 - v39;
                v76 = (int)v44;
LABEL_72:
                v50 = v76 * v77 + __PAIR64__(v115, v109);
                v49 = v50;
                v42 = v94;
                v115 = HIDWORD(v50);
                if ( !v94 )
                {
                  v52 = v105;
                  goto LABEL_83;
                }
                v115 = HIDWORD(v50);
                v109 = v50;
                goto LABEL_65;
              }
              v44 = (int)v44;
              v111 = (int)v44 >> 31;
              v98 = v44;
              if ( v38 )
              {
                v44 = v38 * (__int64)(int)v44;
                v38 = cjMemSize;
                v115 = (v44 + __PAIR64__(v115, v109)) >> 32;
                v109 += v44;
                HIDWORD(v44) = v111;
              }
              v79 = v87;
              v111 = v86;
              v87 = v90;
              v86 = v88;
              v90 = v109;
              v88 = v115;
              v46 = (v39 - v38) * __PAIR64__(HIDWORD(v44), v98);
              v115 = HIDWORD(v46);
              cjMemSize += v120 - v39;
              v42 = v94;
              v109 = v46;
              if ( !v94 )
              {
                v51 = v105 + 1;
                if ( v105 + 1 >= v110 && v51 < v108 )
                {
                  ++v89;
                  v51 = v105 + 2;
                  v85 = 0x8000;
                  if ( v105 + 2 < v110 || v51 >= v108 )
                    v85 = -16384;
                }
                v52 = v51 - 1;
                v105 = v52;
                goto LABEL_82;
              }
LABEL_65:
              v38 = cjMemSize;
            }
            v47 = v106 - HIDWORD(v44) - 1;
            v48 = cjMemSize / v39;
            if ( cjMemSize / v39 > v97 )
              v48 = v97;
            if ( v47 )
            {
              v83 = *(_DWORD *)(v95 + 8 * v47 - 8);
              v99 = *(_DWORD *)(v95 + 8 * v47 - 4);
            }
            else
            {
              v83 = 0;
              v99 = 0;
            }
            v77 = v39;
            cjMemSize -= v39 * v48;
            v94 += 1 - v48;
            v96 = v96 + 4 * v48 - 4;
            v76 = *(_QWORD *)(v95 + 8 * (v47 + v48) - 8) - __PAIR64__(v99, v83);
            goto LABEL_72;
          }
          v52 = v105;
LABEL_82:
          v49 = v109;
LABEL_83:
          if ( v52 < v110 )
            break;
          v53 = v52 < v108;
          v54 = a6;
          if ( !v53 || a6 < v93 || a6 >= v92 )
            goto LABEL_96;
          v55 = __PAIR64__(v115, v49) >> 19;
          v56 = v49 << 13;
          HIWORD(v119) = __SPAIR64__(v55, v56) / __SPAIR64__(v107, v114);
          v57 = __SPAIR64__(v55, v56) % __SPAIR64__(v107, v114) + (__PAIR64__(v88, v90) << 13);
          v58 = v57 % __SPAIR64__(v107, v114);
          LOWORD(v119) = v57 / __SPAIR64__(v107, v114);
          if ( v86 | v87 )
          {
            ++v100;
            HIDWORD(v58) = __PAIR64__(v86, v87) >> 19;
            v60 = v58 + (v87 << 13);
            v59 = (v58 + __PAIR64__((unsigned __int64)(v57 % __SPAIR64__(v107, v114)) >> 32, v87 << 13)) >> 32;
            v75 = __PAIR64__(v59, v60);
            v61 = __SPAIR64__(v59, v60) % __SPAIR64__(v107, v114);
            HIWORD(v118) = v75 / __SPAIR64__(v107, v114);
            if ( v111 | v79 )
            {
              ++v116;
              v62 = (__int64)(v61 + (__PAIR64__(v111, v79) << 13)) / __SPAIR64__(v107, v114);
            }
            else
            {
              LOWORD(v62) = 0;
            }
          }
          else
          {
            LOWORD(v62) = 0;
            HIWORD(v118) = 0;
          }
          v63 = v103;
          LOWORD(v118) = v85 | v62;
          *(_DWORD *)v103 = v118;
          *((_DWORD *)v63 + 1) = v119;
          v103 = v63 + 8;
          if ( v16 == -1 )
          {
            v16 = v105;
            v81 = a6;
          }
          v39 = v104;
          v15 = 0;
          v82 = v105;
          v54 = a6;
          v80 = a6;
LABEL_97:
          v38 = v113;
          v40 = v112;
          a6 = v54 + 1;
          v37 = v91;
          if ( !v91 )
          {
LABEL_98:
            v22 = v101;
            goto LABEL_99;
          }
        }
        v54 = a6;
LABEL_96:
        if ( v16 != -1 )
          goto LABEL_98;
        goto LABEL_97;
      }
LABEL_99:
      if ( v16 == -1 )
        goto LABEL_100;
      v65 = v82 + 1;
      if ( v82 + 1 < v110 || v65 >= v108 )
        v65 = v82;
      *v102 = v16;
      *a4 = v65;
      *a8 = v81;
      *a9 = v80;
      v66 = (char *)v22[8];
      v67 = v100 == 0;
      v22[4] = (v103 - v66) >> 3;
      v22[5] = v89;
      if ( v67 )
        v68 = 2;
      else
        v68 = (v116 != 0) + 3;
      v22[6] = v68;
      v69 = *(_DWORD *)v66;
      v70 = *((_DWORD *)v66 + 1);
      v71 = v110;
      v118 = v69;
      v119 = v70;
      if ( (v69 & 0x8000) != 0 )
      {
        --v16;
        v78 = 3;
      }
      else
      {
        if ( v16 + 1 < v110 || v16 + 1 >= v108 )
          *((_WORD *)v22 + 4) |= 2u;
        v78 = 4;
      }
      do
      {
        if ( (*((_WORD *)&v118 + v15) & 0x3FFF) != 0 )
          break;
        ++v15;
      }
      while ( v15 < v78 );
      if ( v78 <= v15 )
      {
        v73 = *((_WORD *)v22 + 6);
      }
      else
      {
        v72 = v78 - v15;
        do
        {
          if ( v16 < v71 || v16 >= v108 )
          {
            *((_WORD *)v22 + 6) += 16;
          }
          else
          {
            *v102 = v16;
            ++*((_WORD *)v22 + 6);
          }
          v73 = *((_WORD *)v22 + 6);
          --v16;
          --v72;
        }
        while ( v72 );
      }
      if ( v73 )
      {
        v53 = v16 < v71;
        v74 = v102;
        if ( !v53 && v16 < v108 )
        {
          *v102 = v16;
          *((_WORD *)v22 + 4) |= 1u;
        }
      }
      else
      {
        v74 = v102;
      }
    }
    else
    {
      v74 = v102;
      *v102 = v22[13];
      *a4 = v22[14] - 1;
      *a8 = v22[15];
      *a9 = v22[16] - 1;
    }
    *v22 = *a4 - *v74 + 1;
    v22[1] = *a9 - *a8 + 1;
  }
  return v22;
}

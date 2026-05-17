/*
 * XREFs of RtlRbRemoveNode @ 0x18002A0A0
 * Callers:
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x180005EE8 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180047D08 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180051638 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180066448 (RtlpHpVsFreeChunkRemove.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbp
  char v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  BOOL v14; // esi
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r8
  char v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rax
  char v25; // r11
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // r8
  unsigned __int64 v30; // r8
  char v31; // cl
  unsigned __int64 v32; // r9
  char v33; // cl
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  char v38; // r9
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  unsigned __int64 *v41; // r11
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // r15
  __int64 v47; // r10
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  _QWORD *v50; // r8
  __int64 v51; // r8
  char v52; // cl
  __int64 v53; // r8
  char v54; // al
  char v55; // cl
  unsigned __int64 v56; // rcx
  char v57; // cl
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r9
  _QWORD *v62; // r11
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rax
  int v65; // r9d
  __int64 v66; // rax
  unsigned __int64 v67; // r8
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // r8
  unsigned __int64 *v71; // rsi
  unsigned __int64 v72; // r8
  _BOOL8 v73; // rcx
  unsigned __int64 v74; // rax
  int v75; // r9d
  _BOOL8 v76; // r11
  __int64 *v77; // r15
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 *v83; // r14
  unsigned __int64 v84; // r11
  unsigned __int64 v85; // rax
  bool v86; // zf
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // r13
  unsigned __int64 v90; // rcx
  int v91; // r14d
  unsigned __int64 v92; // r11
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  unsigned __int64 *v95; // r11
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // r14
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // r12
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // r12
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rcx
  bool v113; // zf

  v3 = *(_QWORD *)a2;
  if ( (a1[1] & 1) != 0 && v3 )
    v3 ^= a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( (a1[1] & 1) != 0 && v4 )
    v4 ^= a2;
  v5 = v4;
  if ( v3 )
    v5 = v3;
  v6 = 0LL;
  v7 = a1[1] & 1;
  v8 = 0LL;
  if ( v3 )
    v8 = v4;
  if ( v8 )
  {
    v21 = *(_QWORD *)v4;
    v10 = v4;
    v9 = v4;
    v14 = 1;
    if ( *(_QWORD *)v4 )
    {
      v14 = 0;
      do
      {
        v9 = v10;
        if ( v7 && v21 )
          v10 ^= v21;
        else
          v10 = v21;
        v21 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    if ( v7 && v3 )
      v22 = v3 ^ v10;
    else
      v22 = v3;
    *(_QWORD *)v10 = v22;
    v23 = *(_QWORD *)(v3 + 16);
    v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
    v25 = a1[1] & 1;
    if ( v25 && v24 )
      v24 ^= v3;
    if ( v24 != a2 )
      goto LABEL_200;
    v26 = v10;
    if ( v25 )
      v26 = v3 ^ v10;
    *(_QWORD *)(v3 + 16) = v26 | v23 & 3;
    v27 = *(_QWORD *)(v4 + 16);
    v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
    v29 = a1[1] & 1;
    if ( v29 && v28 )
      v28 ^= v4;
    if ( v28 != a2 )
      goto LABEL_200;
    if ( v29 )
      v30 = v4 ^ v10;
    else
      v30 = v10;
    *(_QWORD *)(v4 + 16) = v30 | v27 & 3;
    v5 = *(_QWORD *)(v10 + 8);
    v31 = a1[1] & 1;
    if ( v31 && v5 )
      v5 ^= v10;
    v17 = *(_QWORD *)(v10 + 16);
    if ( v31 )
      v4 ^= v10;
    *(_QWORD *)(v10 + 8) = v4;
    v32 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    v33 = a1[1] & 1;
    if ( v33 && v32 )
      v34 = v10 ^ v32;
    else
      v34 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v34 == v9 )
      goto LABEL_48;
    if ( v33 )
    {
      if ( !v32 )
        goto LABEL_218;
      v32 ^= v10;
    }
    if ( v32 )
      goto LABEL_200;
LABEL_218:
    if ( v10 != v9 )
      goto LABEL_200;
LABEL_48:
    v35 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v33 )
    {
      if ( v35 )
        v35 ^= a2;
      if ( v35 )
        v35 ^= v10;
    }
    v36 = v35 | v17 & 3;
    *(_QWORD *)(v10 + 16) = v36;
    *(_BYTE *)(v10 + 16) = v36 ^ (*(_BYTE *)(a2 + 16) ^ v36) & 1;
    v37 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v37 )
    {
      v38 = a1[1] & 1;
      if ( v38 )
        v37 ^= a2;
      v39 = *(_QWORD *)(v37 + 8);
      if ( v38 && v39 )
        v39 ^= v37;
      v40 = 0LL;
      if ( v39 == a2 )
        v40 = 8LL;
      v41 = (unsigned __int64 *)(v40 + v37);
      v42 = *(_QWORD *)(v40 + v37);
      if ( v38 && v42 )
        v42 ^= v37;
      if ( v42 != a2 )
        goto LABEL_200;
      v43 = v10 ^ v37;
      v44 = v10;
      if ( v38 )
        v44 = v43;
      *v41 = v44;
    }
    else
    {
      v58 = a1[1];
      v59 = *a1;
      if ( (v58 & 1) != 0 )
      {
        if ( v59 )
          v59 ^= (unsigned __int64)a1;
        else
          v59 = 0LL;
      }
      if ( v59 != a2 )
        goto LABEL_200;
      v60 = v10;
      if ( (v58 & 1) != 0 )
        v60 = (unsigned __int64)a1 ^ v10;
      *a1 = v60;
    }
    goto LABEL_22;
  }
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v7 && v9 )
    v9 ^= a2;
  v10 = a2;
  if ( !v9 )
  {
    if ( v5 )
      *(_QWORD *)(v5 + 16) = 0LL;
    v20 = a1[1];
    v56 = *a1;
    if ( (v20 & 1) != 0 )
    {
      if ( v56 )
        v56 ^= (unsigned __int64)a1;
      else
        v56 = 0LL;
    }
    if ( v56 != a2 )
      goto LABEL_200;
    if ( (v20 & 1) != 0 )
    {
      v112 = 0LL;
      LOBYTE(v20) = (unsigned __int8)a1 ^ v5;
      if ( v5 )
        v112 = (unsigned __int64)a1 ^ v5;
      a1[1] = v112;
      v57 = v112 | 1;
      *((_BYTE *)a1 + 8) = v57;
    }
    else
    {
      a1[1] = v5;
      v57 = v5;
    }
    if ( (v57 & 1) != 0 )
    {
      v20 = (unsigned __int64)a1 ^ v5;
      v113 = v5 == 0;
      goto LABEL_329;
    }
    v6 = v5;
LABEL_80:
    *a1 = v6;
    return v20;
  }
  v11 = *(_QWORD *)(v9 + 8);
  if ( v7 && v11 )
    v11 ^= v9;
  if ( v11 == a2 )
  {
    v14 = 1;
  }
  else
  {
    v12 = *(_QWORD *)v9;
    if ( v7 && v12 )
      v12 ^= v9;
    if ( v12 != a2 )
      goto LABEL_200;
    v13 = a1[1];
    v14 = 0;
    if ( (v13 & 1) != 0 )
    {
      if ( v13 == 1 )
        v15 = 0LL;
      else
        v15 = v13 ^ ((unsigned __int64)a1 | 1);
    }
    else
    {
      v15 = a1[1];
    }
    if ( v15 == a2 )
    {
      v16 = v13 & 1;
      if ( v5 )
      {
        if ( v16 )
        {
          a1[1] = (unsigned __int64)a1 ^ v5;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v5 | 1;
        }
        else
        {
          a1[1] = v5;
        }
      }
      else if ( v16 )
      {
        a1[1] = (unsigned __int64)a1 ^ v9;
        *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v9 | 1;
      }
      else
      {
        a1[1] = v9;
      }
    }
  }
  LOBYTE(v17) = *(_BYTE *)(a2 + 16);
LABEL_22:
  v18 = v17 & 1;
  if ( (a1[1] & 1) != 0 && v5 )
    v19 = v5 ^ v9;
  else
    v19 = v5;
  LOBYTE(v20) = v14;
  *(_QWORD *)(v9 + 8LL * v14) = v19;
  if ( !v5 )
  {
    if ( v18 )
      return v20;
    v45 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v46 = v9;
      v47 = !v14;
      v48 = *(_QWORD *)(v9 + 8 * v47);
      if ( (v45 & 1) != 0 && v48 )
        v49 = v9 ^ v48;
      else
        v49 = *(_QWORD *)(v9 + 8 * v47);
      v50 = (_QWORD *)(v49 + 16);
      if ( (*(_BYTE *)(v49 + 16) & 1) == 0 )
        goto LABEL_64;
      v89 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v89 )
          v89 ^= (unsigned __int64)a1;
        else
          v89 = 0LL;
      }
      v90 = *v50 & 0xFFFFFFFFFFFFFFFCuLL;
      v91 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v90 )
        v90 ^= v49;
      if ( v90 != v9 )
        goto LABEL_200;
      if ( (a1[1] & 1) != 0 && v48 )
        v48 ^= v9;
      if ( v48 != v49 )
        goto LABEL_200;
      v92 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v92 )
        {
LABEL_193:
          if ( v89 != v9 )
            goto LABEL_200;
          v89 = v49;
          goto LABEL_159;
        }
        v92 ^= v9;
      }
      if ( !v92 )
        goto LABEL_193;
      v93 = *(_QWORD *)(v92 + 8);
      if ( (a1[1] & 1) != 0 && v93 )
        v93 ^= v92;
      if ( v93 == v9 )
      {
        v94 = v49;
        if ( (a1[1] & 1) != 0 )
          v94 = v49 ^ v92;
        *(_QWORD *)(v92 + 8) = v94;
      }
      else
      {
        v107 = *(_QWORD *)v92;
        if ( (a1[1] & 1) != 0 && v107 )
          v107 ^= v92;
        if ( v107 != v9 )
          goto LABEL_200;
        v108 = v49;
        if ( (a1[1] & 1) != 0 )
          v108 = v49 ^ v92;
        *(_QWORD *)v92 = v108;
      }
LABEL_159:
      if ( v91 && v92 )
        v92 ^= v49;
      *v50 &= 3uLL;
      *v50 |= v92;
      v95 = (unsigned __int64 *)(v49 + 8LL * v14);
      v96 = *v95;
      if ( !v91 )
        goto LABEL_161;
      if ( v96 )
      {
        v96 ^= v49;
LABEL_161:
        if ( v96 )
        {
          v109 = *(_QWORD *)(v96 + 16);
          v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v91 && v110 )
            v110 ^= v96;
          if ( v110 != v49 )
            goto LABEL_200;
          v111 = v9;
          if ( v91 )
            v111 = v9 ^ v96;
          *(_QWORD *)(v96 + 16) = v111 | v109 & 3;
        }
      }
      if ( v91 && v96 )
        v96 ^= v9;
      *(_QWORD *)(v9 + 8 * v47) = v96;
      v97 = v9;
      if ( v91 )
      {
        v97 = v9 ^ v49;
        v49 ^= v9;
      }
      *v95 = v97;
      *(_QWORD *)(v9 + 16) &= 3uLL;
      *(_QWORD *)(v9 + 16) |= v49;
      if ( (a1[1] & 1) != 0 )
      {
        v98 = 0LL;
        if ( v89 )
          v98 = (unsigned __int64)a1 ^ v89;
      }
      else
      {
        v98 = v89;
      }
      *a1 = v98;
      *(_BYTE *)v50 &= ~1u;
      *(_BYTE *)(v9 + 16) |= 1u;
      v45 = *((_BYTE *)a1 + 8);
      v49 = *(_QWORD *)(v9 + 8 * v47);
      if ( (v45 & 1) != 0 && v49 )
        v49 ^= v9;
LABEL_64:
      v51 = *(_QWORD *)v49;
      v52 = v45 & 1;
      if ( *(_QWORD *)v49 )
      {
        if ( v52 )
          v51 ^= v49;
        if ( (*(_BYTE *)(v51 + 16) & 1) != 0 )
          goto LABEL_94;
      }
      v53 = *(_QWORD *)(v49 + 8);
      if ( v53 )
      {
        if ( v52 )
          v53 ^= v49;
        if ( (*(_BYTE *)(v53 + 16) & 1) != 0 )
        {
LABEL_94:
          v61 = *(_QWORD *)(v49 + 8 * v47);
          if ( v52 )
          {
            if ( v61 )
            {
              v61 ^= v49;
              goto LABEL_95;
            }
          }
          else
          {
LABEL_95:
            if ( v61 && (*(_BYTE *)(v61 + 16) & 1) != 0 )
              goto LABEL_97;
          }
          v72 = *(_QWORD *)(v49 + 8LL * v14);
          if ( v52 && v72 )
            v72 ^= v49;
          *(_BYTE *)(v72 + 16) &= ~1u;
          v73 = !v14;
          v74 = *(_QWORD *)(v72 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v75 = a1[1] & 1;
          if ( (a1[1] & 1) != 0 && v74 )
            v74 ^= v72;
          if ( v74 != v49 )
            goto LABEL_200;
          v76 = v73;
          v77 = (__int64 *)(v49 + 8LL * v14);
          v78 = *v77;
          if ( (a1[1] & 1) != 0 && v78 )
            v78 ^= v49;
          if ( v78 != v72 )
            goto LABEL_200;
          v79 = *(_QWORD *)(v9 + 8 * v73);
          if ( (a1[1] & 1) != 0 && v79 )
            v79 ^= v9;
          if ( v79 != v49 )
            goto LABEL_200;
          v80 = *(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (a1[1] & 1) != 0 && v80 )
            v80 ^= v49;
          if ( v80 != v9 )
            goto LABEL_200;
          v81 = v72;
          v82 = v72 ^ v9;
          if ( (a1[1] & 1) != 0 )
            v81 = v72 ^ v9;
          *(_QWORD *)(v9 + 8 * v76) = v81;
          if ( !v75 || !v9 )
            v82 = v9;
          *(_QWORD *)(v72 + 16) &= 3uLL;
          v83 = (unsigned __int64 *)(v72 + 8 * v76);
          *(_QWORD *)(v72 + 16) |= v82;
          v84 = *v83;
          if ( !v75 )
          {
LABEL_135:
            if ( !v84 )
              goto LABEL_136;
            v104 = *(_QWORD *)(v84 + 16);
            v105 = v104 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v75 && v105 )
              v105 ^= v84;
            if ( v105 == v72 )
            {
              v106 = v49;
              if ( v75 )
                v106 = v49 ^ v84;
              *(_QWORD *)(v84 + 16) = v106 | v104 & 3;
              goto LABEL_136;
            }
            goto LABEL_200;
          }
          if ( v84 )
          {
            v84 ^= v72;
            goto LABEL_135;
          }
LABEL_136:
          if ( v75 && v84 )
            v84 ^= v49;
          *v77 = v84;
          v85 = v49;
          v86 = v75 == 0;
          v61 = v49;
          if ( !v86 )
            v85 = v72 ^ v49;
          *v83 = v85;
          v87 = v72;
          if ( !v86 )
            v87 = v72 ^ v49;
          *(_QWORD *)(v49 + 16) &= 3uLL;
          *(_QWORD *)(v49 + 16) |= v87;
          v49 = v72;
LABEL_97:
          v62 = (_QWORD *)(v9 + 16);
          *(_BYTE *)(v49 + 16) ^= (*(_BYTE *)(v9 + 16) ^ *(_BYTE *)(v49 + 16)) & 1;
          *(_BYTE *)(v9 + 16) &= ~1u;
          *(_BYTE *)(v61 + 16) &= ~1u;
          v63 = *a1;
          if ( (a1[1] & 1) != 0 )
          {
            if ( v63 )
              v63 ^= (unsigned __int64)a1;
            else
              v63 = 0LL;
          }
          v64 = *(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v65 = a1[1] & 1;
          if ( (a1[1] & 1) != 0 && v64 )
            v64 ^= v49;
          if ( v64 != v9 )
            goto LABEL_200;
          v66 = *(_QWORD *)(v9 + 8 * v47);
          if ( (a1[1] & 1) != 0 && v66 )
            v66 ^= v9;
          if ( v66 != v49 )
LABEL_200:
            __fastfail(0x1Du);
          v67 = *v62 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (a1[1] & 1) != 0 )
          {
            if ( v67 )
            {
              v67 ^= v9;
              goto LABEL_103;
            }
          }
          else
          {
LABEL_103:
            if ( v67 )
            {
              v68 = *(_QWORD *)(v67 + 8);
              if ( (a1[1] & 1) != 0 && v68 )
                v68 ^= v67;
              if ( v68 == v9 )
              {
                v69 = v49;
                if ( (a1[1] & 1) != 0 )
                  v69 = v49 ^ v67;
                *(_QWORD *)(v67 + 8) = v69;
              }
              else
              {
                v99 = *(_QWORD *)v67;
                if ( (a1[1] & 1) != 0 && v99 )
                  v99 ^= v67;
                if ( v99 != v9 )
                  goto LABEL_200;
                v100 = v49;
                if ( (a1[1] & 1) != 0 )
                  v100 = v49 ^ v67;
                *(_QWORD *)v67 = v100;
              }
LABEL_109:
              if ( v65 && v67 )
                v67 ^= v49;
              *(_QWORD *)(v49 + 16) &= 3uLL;
              *(_QWORD *)(v49 + 16) |= v67;
              v70 = *(_QWORD *)(v49 + 8LL * v14);
              v71 = (unsigned __int64 *)(v49 + 8LL * v14);
              if ( v65 )
              {
                if ( v70 )
                {
                  v70 ^= v49;
                  goto LABEL_111;
                }
              }
              else
              {
LABEL_111:
                if ( v70 )
                {
                  v101 = *(_QWORD *)(v70 + 16);
                  v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v65 && v102 )
                    v102 ^= v70;
                  if ( v102 != v49 )
                    goto LABEL_200;
                  v103 = v9;
                  if ( v65 )
                    v103 = v9 ^ v70;
                  *(_QWORD *)(v70 + 16) = v103 | v101 & 3;
                }
              }
              if ( v65 && v70 )
                v70 ^= v9;
              *(_QWORD *)(v9 + 8 * v47) = v70;
              v20 = v9 ^ v49;
              if ( v65 )
              {
                v9 ^= v49;
                v49 = v20;
              }
              *v71 = v9;
              *v62 &= 3uLL;
              *v62 |= v49;
              if ( (a1[1] & 1) == 0 )
              {
                *a1 = v63;
                return v20;
              }
              v20 = (unsigned __int64)a1 ^ v63;
              v113 = v63 == 0;
LABEL_329:
              if ( !v113 )
                v6 = v20;
              goto LABEL_80;
            }
          }
          if ( v63 != v9 )
            goto LABEL_200;
          v63 = v49;
          goto LABEL_109;
        }
      }
      v54 = *(_BYTE *)(v9 + 16);
      if ( (v54 & 1) != 0 )
      {
        LOBYTE(v20) = v54 & 0xFE;
        *(_BYTE *)(v9 + 16) = v20;
        *(_BYTE *)(v49 + 16) |= 1u;
        return v20;
      }
      *(_BYTE *)(v49 + 16) |= 1u;
      v45 = *((_BYTE *)a1 + 8);
      v20 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v45 & 1) != 0 && v20 )
        v9 ^= v20;
      else
        v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        return v20;
      v88 = *(_QWORD *)(v9 + 8);
      if ( (v45 & 1) != 0 && v88 )
        v88 ^= v9;
      v14 = v88 == v46;
    }
  }
  v20 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v55 = a1[1] & 1;
  if ( v55 && v20 )
    v20 ^= v5;
  if ( v20 != v10 )
    goto LABEL_200;
  if ( v55 && v9 )
    v9 ^= v5;
  *(_QWORD *)(v5 + 16) = v9;
  return v20;
}

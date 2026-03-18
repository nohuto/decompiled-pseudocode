/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0001F70
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00D7990 (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00E9F40 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r15d
  int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r10d
  unsigned int v25; // r10d
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int16 v28; // r11
  int v29; // esi
  unsigned int v30; // eax
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  _DWORD *v33; // rbx
  int *v34; // rdi
  __int64 v35; // rax
  int v36; // r14d
  int v37; // r9d
  _DWORD *v38; // r8
  int *v39; // rcx
  __int64 v40; // rax
  int v41; // esi
  int v42; // eax
  int v43; // eax
  _WORD *v44; // r8
  __int16 v45; // di
  unsigned int v46; // ecx
  int v47; // r15d
  int v48; // r10d
  int v49; // r11d
  int v50; // edx
  int v51; // edx
  __int64 v52; // r9
  unsigned int v53; // edx
  __int16 v54; // r11
  int v55; // eax
  __int64 v56; // rdx
  __int16 v57; // di
  int v58; // r10d
  bool v59; // zf
  int v60; // r9d
  _WORD *v61; // r8
  _WORD *v62; // r10
  int v63; // r11d
  int v64; // edx
  int v65; // eax
  int v66; // ecx
  int v68; // ecx
  __int16 v69; // ax
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  __int16 v72; // r11
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  int v81; // [rsp+20h] [rbp-60h]
  unsigned int v82; // [rsp+24h] [rbp-5Ch] BYREF
  int v83; // [rsp+28h] [rbp-58h]
  int v84; // [rsp+2Ch] [rbp-54h]
  unsigned int v85; // [rsp+30h] [rbp-50h]
  int v86; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v87; // [rsp+38h] [rbp-48h] BYREF
  int v88; // [rsp+40h] [rbp-40h]
  int v89; // [rsp+44h] [rbp-3Ch]
  int v90; // [rsp+48h] [rbp-38h]
  int v91; // [rsp+4Ch] [rbp-34h]
  int v92; // [rsp+50h] [rbp-30h]
  unsigned int v93; // [rsp+54h] [rbp-2Ch]
  int v94; // [rsp+58h] [rbp-28h]
  __int64 v95; // [rsp+60h] [rbp-20h]
  unsigned __int64 v96; // [rsp+68h] [rbp-18h]
  unsigned __int64 v97; // [rsp+70h] [rbp-10h]
  __int64 v98; // [rsp+78h] [rbp-8h]
  int v101; // [rsp+E8h] [rbp+68h]
  unsigned int v102; // [rsp+F0h] [rbp+70h]
  __int64 v103; // [rsp+108h] [rbp+88h] BYREF
  va_list va; // [rsp+108h] [rbp+88h]
  va_list va1; // [rsp+110h] [rbp+90h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v103 = va_arg(va1, _QWORD);
  v9 = *a3;
  v10 = *a4;
  v90 = 0;
  v11 = 0;
  v91 = 0;
  v92 = 0;
  v86 = 0;
  LODWORD(v87) = 0;
  v82 = 0;
  v85 = v9;
  if ( v10 < v9 )
    return 0LL;
  v12 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v13 = a7 - a6;
  v101 = 0;
  v102 = a7 - v12;
  v14 = v10 - v9;
  v15 = 0;
  v88 = v10 - v9;
  if ( v9 >= 0 )
    v15 = v9;
  if ( v10 > a5 )
    v10 = a5;
  v83 = -1;
  v89 = v10;
  v84 = *a8;
  v94 = v15;
  v16 = v84 - 1;
  v17 = *a9;
  v81 = *a9;
  if ( v84 - 1 >= *a9 )
    return 0LL;
  if ( v14 <= v13 )
    return 0LL;
  v18 = v17 - v16;
  v19 = v17 - v16 + 1;
  if ( v18 + 1 < v18 )
    return 0LL;
  v20 = v14;
  v21 = v14 * (unsigned __int64)v19;
  v98 = v14;
  if ( v21 > 0xFFFFFFFF )
    return 0LL;
  v22 = v21 + v13 - 1;
  if ( v22 < (unsigned int)v21 )
    return 0LL;
  v23 = v22 / v13;
  if ( v23 + 4 < v23 )
    return 0LL;
  v24 = v14;
  if ( v23 + 4 <= v14 )
    v24 = v23 + 4;
  v93 = v24;
  if ( (int)ALIGN_MEM(&v87, 2048LL) < 0 )
    return 0LL;
  v26 = v25 + 1;
  if ( (unsigned int)v26 < v25 )
    return 0LL;
  v27 = 2 * v26;
  if ( v27 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v82, (unsigned int)v27) < 0 )
    return 0LL;
  v29 = v82 + v87;
  if ( v82 + (unsigned int)v87 < v82 )
    return 0LL;
  v96 = ((unsigned __int64)v13 << 13) / v20;
  if ( (v28 & 0x4A80) != 0 )
  {
    v70 = v18 + 4;
    if ( (unsigned int)v70 < v18 )
      return 0LL;
    v71 = 2 * v70;
    if ( v71 > 0xFFFFFFFF || (int)ALIGN_MEM(&v86, (unsigned int)v71) < 0 )
      return 0LL;
    v11 = v86;
    if ( (v72 & 0x200) != 0 )
      v29 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v103) >= 0 )
  {
    v30 = v29 + v11;
    if ( v29 + v11 >= v11 )
    {
      v31 = v30 + v103;
      if ( v30 + (unsigned int)v103 >= v30 && v31 + 240 >= v31 )
      {
        v32 = EngAllocMem(1u, v31 + 240, 0x35355448u);
        v33 = v32;
        if ( !v32 )
          return v33;
        v34 = v32 + 60;
        v35 = (unsigned int)v103;
        if ( (_DWORD)v103 )
        {
          *((_QWORD *)v33 + 4) = v34;
          v34 = (int *)((char *)v34 + v35);
        }
        if ( v11 )
        {
          v33[12] = v88;
          v33[13] = v102;
          v33[16] = v94;
          v33[17] = v89;
          v33[18] = v84;
          v33[19] = v81;
          v73 = v18 + 1;
          v36 = v85;
          v74 = v85;
          *((_QWORD *)v33 + 11) = v34;
          *((_QWORD *)v33 + 12) = (char *)v34 + 2 * (int)v73;
          v34 = (int *)((char *)v34 + (int)v11);
          if ( !(unsigned int)BuildRepData(v33 + 12, v74, (unsigned int)v12) )
          {
LABEL_96:
            EngFreeMem(v33);
            return 0LL;
          }
          v75 = *((_OWORD *)v33 + 4);
          *((_OWORD *)v33 + 7) = *((_OWORD *)v33 + 3);
          v76 = *((_OWORD *)v33 + 5);
          *((_OWORD *)v33 + 8) = v75;
          v77 = *((_OWORD *)v33 + 6);
          v13 = v102;
          *((_OWORD *)v33 + 9) = v76;
          *((_OWORD *)v33 + 10) = v77;
          v78 = *((_OWORD *)v33 + 8);
          *((_OWORD *)v33 + 11) = *((_OWORD *)v33 + 7);
          v79 = *((_OWORD *)v33 + 9);
          *((_OWORD *)v33 + 12) = v78;
          v80 = *((_OWORD *)v33 + 10);
          *((_OWORD *)v33 + 13) = v79;
          *((_OWORD *)v33 + 14) = v80;
        }
        else
        {
          v36 = v85;
        }
        if ( !v29 )
        {
          v64 = v33[17] - 1;
          v60 = v33[16];
          v66 = v33[19] - 1;
          v63 = v33[18];
LABEL_67:
          *a3 = v60;
          *a4 = v64;
          *a8 = v63;
          *a9 = v66;
          *v33 = v64 - v60 + 1;
          v33[1] = v66 - v63 + 1;
          return v33;
        }
        v37 = v96;
        v38 = v34 + 512;
        *((_QWORD *)v33 + 3) = v34;
        *((_WORD *)v33 + 6) = 1;
        v39 = v34 + 256;
        v40 = v93;
        *((_QWORD *)v33 + 5) = v34 + 512;
        v41 = ~v37;
        v97 = (unsigned __int64)v34 + 2 * v40 + 2048;
        v42 = -v37;
        do
        {
          v42 += v37;
          v41 += v37 + 1;
          *v34 = v42;
          v34[256] = v41;
          ++v34;
        }
        while ( v34 < v39 );
        v43 = v88;
        v44 = (_WORD *)v38 - 1;
        v95 = 0LL;
        v45 = 0;
        v87 = 0LL;
        v46 = v88;
        v47 = v88;
        if ( v88 )
        {
          v48 = v83;
          v49 = -v88;
          v93 = v84 - 2;
          v86 = -v88;
          v50 = -v88;
          while ( 1 )
          {
            --v46;
            v51 = v13 + v50;
            LODWORD(v52) = v47;
            v82 = v46;
            v47 -= v13;
            v85 = v51;
            if ( v47 > 0 )
            {
              LODWORD(v52) = v13;
              v54 = 0;
            }
            else
            {
              v41 = v51;
              v47 += v43;
              v53 = v49 + v51;
              v54 = 0x4000;
              v85 = v53;
              ++v12;
            }
            v55 = v81;
            if ( v12 >= (int)v93 && v12 <= v81 )
            {
              v56 = (((__int64)(int)v52 << 13) + v95) % v98;
              v52 = (((__int64)(int)v52 << 13) + v95) / v98;
              v95 = v56;
              v57 = v54 | 0x8000;
              if ( (int)v52 <= (int)v96 )
                v57 = v54;
              v87 = (unsigned int)(v52 + v87);
              v54 = v57;
              if ( (v57 & 0x4000) != 0 )
              {
                v87 = ((__int64)v41 << 13) / v98;
                v95 = ((__int64)v41 << 13) % v98;
                v41 = 0;
                v54 = v57 | 0x8000;
                if ( (int)v87 + (int)v52 <= (int)v96 )
                  v54 = v57 & 0x7FFF;
              }
              v55 = v81;
              v45 = v87;
              v46 = v82;
            }
            v13 = v102;
            if ( v12 >= v84 - 1 && v12 <= v55 )
              break;
            if ( v48 != -1 )
            {
              v90 = v36;
              if ( (unsigned __int64)(v44 + 1) < v97 )
                ++v44;
              *v44 = (0x2000 - v45) | 0x4000;
LABEL_74:
              v46 = 0;
              ++v101;
            }
LABEL_54:
            v50 = v85;
            ++v36;
            v43 = v88;
            v49 = v86;
            if ( !v46 )
              goto LABEL_55;
          }
          if ( v36 < v94 || v36 >= v89 )
          {
            if ( v48 == -1 )
              goto LABEL_54;
            if ( (unsigned __int64)(v44 + 1) < v97 )
              ++v44;
            if ( (v54 & 0x4000) == 0 )
              LOWORD(v52) = 0x2000 - v45 + v52;
            *v44 = v54 | v52 | 0x4000;
            goto LABEL_74;
          }
          v58 = ((v54 & 0x4000) != 0) + v101;
          v101 = v58;
          if ( (unsigned __int64)(v44 + 1) < v97 )
            ++v44;
          v59 = v83 == -1;
          *v44 = v54 | v52;
          if ( !v59 )
          {
            v92 = v12;
LABEL_53:
            v48 = v83;
            v46 = v82;
            v90 = v36;
            goto LABEL_54;
          }
          v83 = v36;
          v68 = v12;
          v91 = v12;
          if ( (v54 & 0x4000) != 0 )
          {
            if ( v12 == v84 - 1 )
            {
              *((_WORD *)v33 + 7) = v45;
              *((_WORD *)v33 + 5) = 1;
              v101 = v58 - 1;
              --v44;
LABEL_78:
              v92 = v68;
              goto LABEL_53;
            }
            v68 = v12 - 1;
            v69 = 0x2000;
            v91 = v12 - 1;
          }
          else
          {
            v69 = v45;
          }
          *((_WORD *)v33 + 7) = v69 - v52;
          goto LABEL_78;
        }
LABEL_55:
        v60 = v83;
        v61 = v44 + 1;
        if ( v83 != -1 )
        {
          v62 = (_WORD *)*((_QWORD *)v33 + 5);
          if ( v61 != v62 )
          {
            v63 = v91;
            v64 = v89 - 1;
            v65 = v84;
            if ( v90 < v89 )
              v64 = v90;
            if ( v91 < v84 )
            {
              ++*((_WORD *)v33 + 6);
              v63 = v65;
            }
            v66 = v81 - 1;
            if ( v92 < v81 )
              v66 = v92;
            if ( *((_WORD *)v33 + 5) )
            {
              if ( !*((_WORD *)v33 + 7) )
              {
                *((_WORD *)v33 + 5) = 0;
                ++v60;
              }
            }
            v33[4] = v61 - v62;
            v33[5] = v101;
            *v61 = 0;
            goto LABEL_67;
          }
        }
        goto LABEL_96;
      }
    }
  }
  return 0LL;
}

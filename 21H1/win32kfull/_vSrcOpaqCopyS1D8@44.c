/*
 * XREFs of _vSrcOpaqCopyS1D8@44 @ 0x1F07F3
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char __stdcall vSrcOpaqCopyS1D8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned __int8 *v13; // edx
  int v14; // ebx
  _DWORD *v15; // esi
  _DWORD *v16; // ebx
  _DWORD *v17; // edi
  _DWORD *v18; // edi
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dh
  unsigned __int8 v21; // bl
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned __int8 v25; // dl
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // ecx
  char *v32; // edi
  int v33; // esi
  unsigned int *v34; // edx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  bool v46; // zf
  int v47; // ecx
  int v48; // ebx
  char v49; // al
  int v50; // edx
  char v51; // al
  int v52; // ebx
  char v53; // al
  unsigned int v54; // eax
  unsigned int v55; // ecx
  int v56; // edx
  char v57; // al
  int v58; // ebx
  unsigned int v59; // ecx
  int v60; // edx
  unsigned int v61; // ecx
  int v62; // ebx
  unsigned int v63; // edx
  int v64; // ecx
  int v65; // esi
  int v66; // edi
  unsigned __int8 *v67; // ebx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  int v71; // edx
  int v72; // edx
  int v73; // edx
  unsigned int v74; // ecx
  int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v82; // [esp+Ch] [ebp-80h]
  unsigned int v83; // [esp+10h] [ebp-7Ch]
  char *v84; // [esp+18h] [ebp-74h]
  char *v85; // [esp+1Ch] [ebp-70h]
  int v86; // [esp+1Ch] [ebp-70h]
  int v87; // [esp+24h] [ebp-68h]
  int v88; // [esp+2Ch] [ebp-60h]
  int v89; // [esp+2Ch] [ebp-60h]
  int v90; // [esp+34h] [ebp-58h]
  int v91; // [esp+34h] [ebp-58h]
  int v92; // [esp+38h] [ebp-54h]
  unsigned int v93; // [esp+3Ch] [ebp-50h]
  int v94; // [esp+3Ch] [ebp-50h]
  unsigned __int8 *v95; // [esp+44h] [ebp-48h]
  unsigned int v96; // [esp+44h] [ebp-48h]
  _DWORD v97[2]; // [esp+48h] [ebp-44h]
  int v98; // [esp+50h] [ebp-3Ch]
  int v99; // [esp+54h] [ebp-38h]
  int v100; // [esp+58h] [ebp-34h]
  int v101; // [esp+5Ch] [ebp-30h]
  int v102; // [esp+60h] [ebp-2Ch]
  int v103; // [esp+64h] [ebp-28h]
  int v104; // [esp+68h] [ebp-24h]
  int v105; // [esp+6Ch] [ebp-20h]
  int v106; // [esp+70h] [ebp-1Ch]
  int v107; // [esp+74h] [ebp-18h]
  int v108; // [esp+78h] [ebp-14h]
  int v109; // [esp+7Ch] [ebp-10h]
  int v110; // [esp+80h] [ebp-Ch]
  int v111; // [esp+84h] [ebp-8h]

  v11 = (a5 + 7) & 0xFFFFFFF8;
  v12 = (a6 & 0xFFFFFFF8) - v11;
  v93 = v12;
  v83 = v12 & 0xFFFFFFF0;
  v82 = v12 & 0xFFFFFFE0;
  v97[0] = ((a10 | (a10 << 8)) << 16) | a10 | (a10 << 8);
  v104 = a9 | (v97[0] << 8);
  v100 = a10 | (v104 << 8);
  v106 = a9 | (v100 << 8);
  v101 = a10 | (v106 << 8);
  v98 = a10 | (v101 << 8);
  v105 = a9 | (v98 << 8);
  v108 = a9 | (v105 << 8);
  v110 = a9 | (v108 << 8);
  v111 = a9 | (v110 << 8);
  v103 = a10 | (v111 << 8);
  v107 = a9 | (v103 << 8);
  v109 = a9 | (v107 << 8);
  v102 = a10 | (v109 << 8);
  v99 = a10 | (v102 << 8);
  v97[1] = a10 | (v99 << 8);
  v87 = a8 * a7;
  v90 = a8 * a7 + v11 + a4;
  v13 = (unsigned __int8 *)(a1 + ((a2 + 7) >> 3));
  v92 = a3 - (v12 >> 3);
  v14 = a6;
  v95 = v13;
  v88 = a7 - v12;
  if ( (a6 & 0xFFFFFFF8) > v11 )
  {
    v15 = (_DWORD *)(v11 + a4);
    do
    {
      v16 = (_DWORD *)((char *)v15 + v12);
      v17 = (_DWORD *)((char *)v15 + v83);
      v84 = (char *)v15 + v12;
      v85 = (char *)v15 + v83;
      if ( v15 != (_DWORD *)((char *)v15 + v82) )
      {
        v18 = (_DWORD *)((char *)v15 + v82);
        do
        {
          v19 = v13[1];
          v20 = v95[3];
          v21 = v95[2];
          v22 = *v95 & 0xF;
          *v15 = v97[*v95 >> 4];
          v15[1] = v97[v22];
          v15[2] = v97[v19 >> 4];
          v15[3] = v97[v19 & 0xF];
          v15[4] = v97[v21 >> 4];
          v15[5] = v97[v21 & 0xF];
          v23 = v20 >> 4;
          v24 = v20 & 0xF;
          v13 = v95 + 4;
          v95 += 4;
          v15[6] = v97[v23];
          v15[7] = v97[v24];
          v15 += 8;
        }
        while ( v15 != v18 );
        v17 = v85;
        v16 = v84;
      }
      while ( v15 != v17 )
      {
        v25 = v13[1];
        v26 = *v95;
        *v15 = v97[v26 >> 4];
        v15[1] = v97[v26 & 0xF];
        v27 = v25 >> 4;
        v28 = v25 & 0xF;
        v13 = v95 + 2;
        v95 += 2;
        v15[2] = v97[v27];
        v15[3] = v97[v28];
        v15 += 4;
      }
      while ( v15 != v16 )
      {
        v29 = *v13++;
        *v15 = v97[v29 >> 4];
        v15[1] = v97[v29 & 0xF];
        v15 += 2;
      }
      v15 = (_DWORD *)((char *)v15 + v88);
      v13 += v92;
      v12 = v93;
      v95 = v13;
    }
    while ( v15 != (_DWORD *)v90 );
    v14 = a6;
  }
  v30 = v14 & 7;
  v31 = a5 & 7;
  v94 = v30;
  if ( (a5 & 7) != 0 )
  {
    v96 = a5 & 0xFFFFFFFC;
    v32 = (char *)(a1 + (a2 >> 3));
    if ( (a5 & 0xFFFFFFFC) == ((v14 - 1) & 0xFFFFFFFC) )
    {
      v33 = gTextLeftMask[2 * (a5 & 3)] & gTextRightMask[2 * (v30 & 3)];
      v34 = (unsigned int *)(v96 + a4);
      do
      {
        v35 = (unsigned __int8)*v32;
        if ( v31 >= 4 )
          v36 = v35 & 0xF;
        else
          v36 = v35 >> 4;
        v32 += a3;
        v37 = v97[v36] & v33;
        v12 = ~v33 & *v34;
        *v34 = v12 | v37;
        v34 = (unsigned int *)((char *)v34 + a7);
        v31 = a5 & 7;
      }
      while ( v34 != (unsigned int *)(v96 + a4 + v87) );
      return v12;
    }
    v38 = a4 + (a5 & 0xFFFFFFF8);
    if ( (a5 & 0xFFFFFFF8) == ((v14 - 1) & 0xFFFFFFF8) )
    {
      v91 = gTextRightMask[2 * v30] & gTextLeftMask[2 * v31];
      v89 = dword_25D49C[2 * v30] & dword_25D4DC[2 * v31];
      v86 = v38 + v87;
      do
      {
        v39 = (unsigned __int8)*v32;
        v32 += a3;
        v12 = ~v89 & *(_DWORD *)(v38 + 4);
        *(_DWORD *)v38 = ~v91 & *(_DWORD *)v38 | v91 & v97[v39 >> 4];
        *(_DWORD *)(v38 + 4) = v12 | v89 & v97[v39 & 0xF];
        v38 += a7;
      }
      while ( v38 != v86 );
      return v12;
    }
    LOBYTE(v12) = v38 + v87;
    v40 = v31 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          v58 = v38 + v87;
          do
          {
            v59 = (unsigned __int8)*v32;
            v32 += a3;
            *(_BYTE *)(v38 + 3) = HIBYTE(v97[v59 >> 4]);
            v12 = v97[v59 & 0xF];
            v47 = a7;
            *(_DWORD *)(v38 + 4) = v12;
            v38 += a7;
          }
          while ( v38 != v58 );
          goto LABEL_47;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 == 1;
              v47 = a7;
              if ( !v46 )
                goto LABEL_55;
              v48 = v38 + v87;
              do
              {
                v49 = *v32;
                v32 += a3;
                LOBYTE(v12) = HIBYTE(v97[v49 & 0xF]);
                *(_BYTE *)(v38 + 7) = v12;
                v38 += a7;
              }
              while ( v38 != v48 );
              goto LABEL_47;
            }
            v47 = a7;
            v50 = v38 + v87;
            do
            {
              v51 = *v32;
              v32 += a3;
              LOWORD(v12) = HIWORD(v97[v51 & 0xF]);
              *(_WORD *)(v38 + 6) = v12;
              v38 += a7;
            }
            while ( v38 != v50 );
            goto LABEL_50;
          }
          v52 = v38 + v87;
          do
          {
            v53 = *v32;
            v32 += a3;
            v54 = v97[v53 & 0xF];
            v55 = HIWORD(v54);
            v12 = v54 >> 8;
            *(_WORD *)(v38 + 6) = v55;
            v47 = a7;
            *(_BYTE *)(v38 + 5) = v12;
            v38 += a7;
          }
          while ( v38 != v52 );
LABEL_47:
          v14 = a6;
          goto LABEL_55;
        }
        v47 = a7;
        v56 = v38 + v87;
        do
        {
          v57 = *v32;
          v32 += a3;
          v12 = v97[v57 & 0xF];
          *(_DWORD *)(v38 + 4) = v12;
          v38 += a7;
        }
        while ( v38 != v56 );
      }
      else
      {
        v60 = v38 + v87;
        do
        {
          v61 = (unsigned __int8)*v32;
          v32 += a3;
          *(_WORD *)(v38 + 2) = HIWORD(v97[v61 >> 4]);
          v12 = v97[v61 & 0xF];
          v47 = a7;
          *(_DWORD *)(v38 + 4) = v12;
          v38 += a7;
        }
        while ( v38 != v60 );
      }
    }
    else
    {
      v62 = v38 + v87;
      do
      {
        v63 = (unsigned __int8)*v32;
        v32 += a3;
        v64 = v97[v63 >> 4];
        *(_BYTE *)(v38 + 1) = BYTE1(v64);
        v12 = v97[v63 & 0xF];
        *(_WORD *)(v38 + 2) = HIWORD(v64);
        v47 = a7;
        *(_DWORD *)(v38 + 4) = v12;
        v38 += a7;
      }
      while ( v38 != v62 );
      v14 = a6;
    }
LABEL_50:
    v30 = v94;
    goto LABEL_55;
  }
  v47 = a7;
LABEL_55:
  if ( v30 )
  {
    v65 = a4 + (v14 & 0xFFFFFFF8);
    v66 = v65 + v87;
    v67 = (unsigned __int8 *)(a1 + ((a2 + v14 - a5) >> 3));
    v68 = v30 - 1;
    if ( v68 )
    {
      v69 = v68 - 1;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            v72 = v71 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                if ( v73 == 1 )
                {
                  do
                  {
                    v74 = *v67;
                    v67 += a3;
                    v75 = v97[v74 & 0xF];
                    v12 = v97[v74 >> 4];
                    *(_WORD *)(v65 + 4) = v75;
                    *(_DWORD *)v65 = v12;
                    *(_BYTE *)(v65 + 6) = BYTE2(v75);
                    v65 += a7;
                  }
                  while ( v65 != v66 );
                }
              }
              else
              {
                do
                {
                  v76 = *v67;
                  v67 += a3;
                  *(_DWORD *)v65 = v97[v76 >> 4];
                  LOWORD(v12) = v97[v76 & 0xF];
                  *(_WORD *)(v65 + 4) = v12;
                  v65 += a7;
                }
                while ( v65 != v66 );
              }
            }
            else
            {
              do
              {
                v77 = *v67;
                v67 += a3;
                *(_DWORD *)v65 = v97[v77 >> 4];
                LOBYTE(v12) = v97[v77 & 0xF];
                *(_BYTE *)(v65 + 4) = v12;
                v65 += a7;
              }
              while ( v65 != v66 );
            }
          }
          else
          {
            do
            {
              v78 = *v67;
              v67 += a3;
              v12 = v97[v78 >> 4];
              *(_DWORD *)v65 = v12;
              v65 += v47;
            }
            while ( v65 != v66 );
          }
        }
        else
        {
          do
          {
            v79 = *v67;
            v67 += a3;
            v80 = v97[v79 >> 4];
            *(_WORD *)v65 = v80;
            v12 = HIWORD(v80);
            *(_BYTE *)(v65 + 2) = v12;
            v65 += v47;
          }
          while ( v65 != v66 );
        }
      }
      else
      {
        do
        {
          v12 = *v67;
          v67 += a3;
          LOWORD(v12) = v97[v12 >> 4];
          *(_WORD *)v65 = v12;
          v65 += v47;
        }
        while ( v65 != v66 );
      }
    }
    else
    {
      do
      {
        v12 = *v67;
        v67 += a3;
        LOBYTE(v12) = v97[v12 >> 4];
        *(_BYTE *)v65 = v12;
        v65 += v47;
      }
      while ( v65 != v66 );
    }
  }
  return v12;
}

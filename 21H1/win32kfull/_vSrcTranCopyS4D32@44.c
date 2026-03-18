/*
 * XREFs of _vSrcTranCopyS4D32@44 @ 0x9B032
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS4D32(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // edi
  int v18; // eax
  unsigned int v19; // esi
  _BYTE *v20; // esi
  int result; // eax
  bool v22; // zf
  int *v23; // ecx
  char v24; // bl
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // bl
  unsigned int *v27; // edi
  _BYTE *v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // edx
  _DWORD *v32; // esi
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // esi
  _DWORD *v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // esi
  _DWORD *v39; // eax
  _DWORD *v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // esi
  _DWORD *v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // esi
  _DWORD *v47; // eax
  int *v48; // eax
  unsigned __int8 v49; // dl
  int v50; // edx
  int v51; // edi
  unsigned int v52; // eax
  _DWORD *v53; // esi
  int v54; // ebx
  unsigned int v55; // edx
  _DWORD *v56; // eax
  int v57; // edx
  unsigned int v58; // esi
  unsigned int v59; // eax
  unsigned int v60; // esi
  int v61; // edx
  _DWORD *v62; // eax
  unsigned int v63; // eax
  unsigned __int8 v64; // dl
  unsigned int v65; // edx
  _DWORD *v66; // esi
  unsigned int v67; // ebx
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // esi
  _DWORD *v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // esi
  _DWORD *v74; // eax
  unsigned int v75; // [esp+0h] [ebp-34h]
  int v76; // [esp+4h] [ebp-30h]
  int v77; // [esp+8h] [ebp-2Ch]
  int v78; // [esp+Ch] [ebp-28h]
  unsigned int v79; // [esp+10h] [ebp-24h]
  unsigned int v80; // [esp+14h] [ebp-20h]
  unsigned int v81; // [esp+18h] [ebp-1Ch]
  unsigned int v82; // [esp+1Ch] [ebp-18h]
  int v83; // [esp+20h] [ebp-14h]
  int v84; // [esp+24h] [ebp-10h]
  char v85; // [esp+28h] [ebp-Ch]
  int v86; // [esp+2Ch] [ebp-8h]
  char v87; // [esp+30h] [ebp-4h]
  _BYTE *v88; // [esp+3Ch] [ebp+8h]
  int *v89; // [esp+40h] [ebp+Ch]
  int v90; // [esp+48h] [ebp+14h]
  _BYTE *v91; // [esp+4Ch] [ebp+18h]
  int v92; // [esp+4Ch] [ebp+18h]
  int v93; // [esp+50h] [ebp+1Ch]
  char v94; // [esp+64h] [ebp+30h]

  v11 = *(_DWORD *)(a11 + 88);
  if ( !v11 )
    v11 = *(_DWORD *)(*(_DWORD *)(a11 + 28) + 1112);
  v12 = *(_DWORD *)(v11 + 16);
  if ( (v12 & 2) != 0 )
  {
    v48 = *(int **)(v11 + 76);
    v15 = *v48;
    v14 = v48[6];
    v13 = v48[1];
    v17 = v48[7];
    v16 = v48[2];
    v18 = v48[8];
  }
  else
  {
    v13 = 65280;
    if ( (v12 & 4) != 0 )
    {
      LOBYTE(v17) = 8;
      v15 = 255;
      LOBYTE(v14) = 0;
      v16 = 16711680;
      LOBYTE(v18) = 16;
    }
    else
    {
      LOBYTE(v14) = 16;
      v15 = 16711680;
      v16 = 255;
      LOBYTE(v17) = 8;
      LOBYTE(v18) = 0;
    }
  }
  v85 = v18;
  v82 = (a9 & v15) >> v14;
  v94 = v14;
  v81 = (a9 & v13) >> v17;
  v84 = v16;
  v87 = v17;
  v86 = v13;
  v19 = a6 & 0xFFFFFFFE;
  v80 = (a9 & v16) >> v18;
  v93 = a6 - (a6 & 0xFFFFFFFE);
  v83 = v15;
  v77 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v76 = (int)(v19 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v20 = (_BYTE *)(a2 / 2 + a1);
  result = a4;
  v22 = a8 == 0;
  v23 = (int *)(a4 + 4 * a5);
  while ( 1 )
  {
    v89 = v23;
    v88 = v20;
    if ( v22 )
      break;
    v28 = v20;
    v91 = v20;
    v27 = (unsigned int *)v23;
    if ( v77 )
    {
      v49 = *v20 & 0xF;
      if ( v49 )
      {
        if ( v49 == 15 )
        {
          v50 = a9;
        }
        else
        {
          v51 = *v23;
          v52 = (*v23 & (unsigned int)v15) >> v94;
          v53 = &unk_25D240;
          if ( (int)(v82 - v52) >= 0 )
            v53 = &unk_24FA98;
          v54 = v49;
          v55 = (v52 << 16) + (v82 - v52) * v53[v49];
          v56 = &unk_25D240;
          v57 = v83 & (HIWORD(v55) << v94);
          v58 = (v51 & (unsigned int)v86) >> v87;
          if ( (int)(v81 - v58) >= 0 )
            v56 = &unk_24FA98;
          v59 = (v58 << 16) + (v81 - v58) * v56[v54];
          v60 = (v51 & (unsigned int)v84) >> v85;
          v61 = v86 & (HIWORD(v59) << v87) | v57;
          v62 = &unk_25D240;
          if ( (int)(v80 - v60) >= 0 )
            v62 = &unk_24FA98;
          v63 = (v60 << 16) + (v80 - v60) * v62[v54];
          v20 = v88;
          v50 = v84 & (HIWORD(v63) << v85) | v61;
        }
        *v23 = v50;
      }
      v28 = v20 + 1;
      v27 = (unsigned int *)(v23 + 1);
      v91 = v20 + 1;
    }
    if ( v76 > 0 )
    {
      v29 = v76;
      v90 = v76;
      do
      {
        v24 = *v28;
        v25 = *v28 >> 4;
        if ( v25 )
        {
          if ( v25 == 15 )
          {
            v30 = a9;
          }
          else
          {
            v32 = &unk_25D240;
            v79 = *v27;
            v33 = (*v27 & v83) >> v94;
            if ( (int)(v82 - v33) >= 0 )
              v32 = &unk_24FA98;
            v78 = v25;
            v34 = v83 & (((v33 << 16) + (v82 - v33) * v32[v25]) >> 16 << v94);
            v35 = (v79 & v86) >> v87;
            v36 = &unk_25D240;
            if ( (int)(v81 - v35) >= 0 )
              v36 = &unk_24FA98;
            v37 = v86 & (((v35 << 16) + (v81 - v35) * v36[v78]) >> 16 << v87) | v34;
            v38 = (v79 & v84) >> v85;
            v39 = &unk_25D240;
            if ( (int)(v80 - v38) >= 0 )
              v39 = &unk_24FA98;
            v29 = v90;
            v30 = v84 & (((v38 << 16) + (v80 - v38) * v39[v78]) >> 16 << v85) | v37;
            v28 = v91;
          }
          *v27 = v30;
        }
        v26 = v24 & 0xF;
        if ( v26 )
        {
          if ( v26 == 15 )
          {
            v31 = a9;
          }
          else
          {
            v40 = &unk_25D240;
            v75 = v27[1];
            v41 = (v75 & v83) >> v94;
            if ( (int)(v82 - v41) >= 0 )
              v40 = &unk_24FA98;
            v42 = v83 & (((v41 << 16) + (v82 - v41) * v40[v26]) >> 16 << v94);
            v43 = (v75 & v86) >> v87;
            v44 = &unk_25D240;
            if ( (int)(v81 - v43) >= 0 )
              v44 = &unk_24FA98;
            v45 = v86 & (((v43 << 16) + (v81 - v43) * v44[v26]) >> 16 << v87) | v42;
            v46 = (v75 & v84) >> v85;
            v47 = &unk_25D240;
            if ( (int)(v80 - v46) >= 0 )
              v47 = &unk_24FA98;
            v31 = v84 & (((v46 << 16) + (v80 - v46) * v47[v26]) >> 16 << v85) | v45;
          }
          v28 = v91;
          v29 = v90;
          v27[1] = v31;
        }
        v27 += 2;
        ++v28;
        --v29;
        v91 = v28;
        v90 = v29;
      }
      while ( v29 );
      v23 = v89;
      v20 = v88;
    }
    if ( v93 )
    {
      v64 = *v28 >> 4;
      if ( v64 )
      {
        if ( v64 == 15 )
        {
          v65 = a9;
        }
        else
        {
          v66 = &unk_25D240;
          v67 = *v27;
          v68 = (*v27 & v83) >> v94;
          if ( (int)(v82 - v68) >= 0 )
            v66 = &unk_24FA98;
          v92 = v64;
          v69 = v83 & (((v68 << 16) + (v82 - v68) * v66[v64]) >> 16 << v94);
          v70 = (v67 & v86) >> v87;
          v71 = &unk_25D240;
          if ( (int)(v81 - v70) >= 0 )
            v71 = &unk_24FA98;
          v72 = v86 & (((v70 << 16) + (v81 - v70) * v71[v92]) >> 16 << v87) | v69;
          v73 = (v67 & v84) >> v85;
          v74 = &unk_25D240;
          if ( (int)(v80 - v73) >= 0 )
            v74 = &unk_24FA98;
          v65 = v84 & (((v73 << 16) + (v80 - v73) * v74[v92]) >> 16 << v85) | v72;
        }
        v23 = v89;
        v20 = v88;
        *v27 = v65;
      }
    }
    v20 += a3;
    result = a8 - 1;
    v23 = (int *)((char *)v23 + a7);
    v22 = a8 == 1;
    v15 = v83;
    --a8;
  }
  return result;
}

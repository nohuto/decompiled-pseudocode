/*
 * XREFs of _vSrcTranCopyS4D16@44 @ 0x1D5C49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS4D16(
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
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // ebx
  int v15; // ecx
  int v16; // esi
  int v17; // edi
  int v18; // edx
  int v19; // eax
  unsigned int v20; // esi
  _BYTE *v21; // esi
  int result; // eax
  bool v23; // zf
  _WORD *v24; // ecx
  char *v25; // eax
  unsigned __int16 *v26; // edi
  unsigned __int8 v27; // dl
  int v28; // edx
  int v29; // edi
  unsigned int v30; // eax
  _DWORD *v31; // esi
  int v32; // ebx
  unsigned int v33; // edx
  _DWORD *v34; // eax
  int v35; // edx
  unsigned int v36; // esi
  unsigned int v37; // eax
  unsigned int v38; // esi
  int v39; // edx
  _DWORD *v40; // eax
  unsigned int v41; // eax
  int v42; // ecx
  char v43; // bl
  unsigned __int8 v44; // al
  unsigned int v45; // edx
  _DWORD *v46; // edx
  int v47; // esi
  unsigned int v48; // edx
  unsigned int v49; // esi
  _DWORD *v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // esi
  _DWORD *v53; // eax
  unsigned __int8 v54; // bl
  unsigned int v55; // edx
  _DWORD *v56; // edx
  int v57; // eax
  unsigned int v58; // edx
  unsigned int v59; // esi
  _DWORD *v60; // eax
  unsigned int v61; // edx
  unsigned int v62; // esi
  _DWORD *v63; // eax
  unsigned __int8 v64; // dl
  unsigned int v65; // edx
  int v66; // ebx
  _DWORD *v67; // esi
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // esi
  _DWORD *v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // esi
  _DWORD *v74; // eax
  int v75; // [esp+0h] [ebp-34h]
  int v76; // [esp+4h] [ebp-30h]
  int v77; // [esp+8h] [ebp-2Ch]
  int v78; // [esp+Ch] [ebp-28h]
  int v79; // [esp+10h] [ebp-24h]
  unsigned int v80; // [esp+14h] [ebp-20h]
  unsigned int v81; // [esp+18h] [ebp-1Ch]
  unsigned int v82; // [esp+1Ch] [ebp-18h]
  int v83; // [esp+20h] [ebp-14h]
  int v84; // [esp+24h] [ebp-10h]
  char v85; // [esp+28h] [ebp-Ch]
  int v86; // [esp+2Ch] [ebp-8h]
  char v87; // [esp+30h] [ebp-4h]
  _BYTE *v88; // [esp+3Ch] [ebp+8h]
  _BYTE *v89; // [esp+40h] [ebp+Ch]
  int v90; // [esp+40h] [ebp+Ch]
  int v91; // [esp+48h] [ebp+14h]
  _WORD *v92; // [esp+4Ch] [ebp+18h]
  int v93; // [esp+50h] [ebp+1Ch]
  char v94; // [esp+64h] [ebp+30h]

  v11 = *(_DWORD *)(a11 + 88);
  if ( !v11 )
    v11 = *(_DWORD *)(*(_DWORD *)(a11 + 28) + 1112);
  v12 = *(_DWORD *)(v11 + 16);
  if ( (v12 & 2) != 0 )
  {
    v13 = *(int **)(v11 + 76);
    v14 = *v13;
    v15 = v13[6];
    v16 = v13[1];
    v17 = v13[7];
    v18 = v13[2];
    v19 = v13[8];
  }
  else
  {
    v16 = 992;
    if ( (v12 & 4) != 0 )
    {
      v14 = 31;
      LOBYTE(v17) = 5;
      LOBYTE(v15) = 0;
      v18 = 31744;
      LOBYTE(v19) = 10;
    }
    else
    {
      LOBYTE(v15) = 10;
      LOBYTE(v17) = 5;
      v14 = 31744;
      LOBYTE(v19) = 0;
      v18 = 31;
    }
  }
  v85 = v19;
  v82 = (a9 & (unsigned int)v14) >> v15;
  v94 = v15;
  v81 = (a9 & (unsigned int)v16) >> v17;
  v84 = v18;
  v87 = v17;
  v86 = v16;
  v20 = a6 & 0xFFFFFFFE;
  v80 = (a9 & (unsigned int)v18) >> v19;
  v93 = a6 - (a6 & 0xFFFFFFFE);
  v83 = v14;
  v77 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v76 = (int)(v20 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v21 = (_BYTE *)(a2 / 2 + a1);
  result = a4;
  v23 = a8 == 0;
  v24 = (_WORD *)(a4 + 2 * a5);
  while ( 1 )
  {
    v92 = v24;
    v88 = v21;
    if ( v23 )
      break;
    v25 = v21;
    v89 = v21;
    v26 = v24;
    if ( v77 )
    {
      v27 = *v21 & 0xF;
      if ( v27 )
      {
        if ( v27 == 15 )
        {
          LOWORD(v28) = a9;
        }
        else
        {
          v29 = (unsigned __int16)*v24;
          v30 = (v29 & (unsigned int)v14) >> v94;
          v31 = &unk_25D240;
          if ( (int)(v82 - v30) >= 0 )
            v31 = &unk_24FA98;
          v32 = v27;
          v33 = (v30 << 16) + (v82 - v30) * v31[v27];
          v34 = &unk_25D240;
          v35 = v83 & (HIWORD(v33) << v94);
          v36 = (v29 & (unsigned int)v86) >> v87;
          if ( (int)(v81 - v36) >= 0 )
            v34 = &unk_24FA98;
          v37 = (v36 << 16) + (v81 - v36) * v34[v32];
          v38 = (v29 & (unsigned int)v84) >> v85;
          v39 = v86 & (HIWORD(v37) << v87) | v35;
          v40 = &unk_25D240;
          if ( (int)(v80 - v38) >= 0 )
            v40 = &unk_24FA98;
          v41 = (v38 << 16) + (v80 - v38) * v40[v32];
          v21 = v88;
          v28 = v84 & (HIWORD(v41) << v85) | v39;
        }
        *v24 = v28;
      }
      v25 = v21 + 1;
      v26 = v24 + 1;
      v89 = v21 + 1;
    }
    if ( v76 > 0 )
    {
      v42 = v76;
      v91 = v76;
      do
      {
        v43 = *v25;
        v44 = (unsigned __int8)*v25 >> 4;
        if ( v44 )
        {
          if ( v44 == 15 )
          {
            LOWORD(v45) = a9;
          }
          else
          {
            v46 = &unk_25D240;
            v79 = *v26;
            v47 = (unsigned __int16)(v79 & v83) >> v94;
            if ( (int)(v82 - v47) >= 0 )
              v46 = &unk_24FA98;
            v78 = v44;
            v48 = v83 & (((v47 << 16) + (v82 - v47) * v46[v44]) >> 16 << v94);
            v49 = (v79 & (unsigned int)v86) >> v87;
            v50 = &unk_25D240;
            if ( (int)(v81 - v49) >= 0 )
              v50 = &unk_24FA98;
            v51 = v86 & (((v49 << 16) + (v81 - v49) * v50[v78]) >> 16 << v87) | v48;
            v52 = (v79 & (unsigned int)v84) >> v85;
            v53 = &unk_25D240;
            if ( (int)(v80 - v52) >= 0 )
              v53 = &unk_24FA98;
            v42 = v91;
            v45 = v84 & (((v52 << 16) + (v80 - v52) * v53[v78]) >> 16 << v85) | v51;
          }
          *v26 = v45;
        }
        v54 = v43 & 0xF;
        if ( v54 )
        {
          if ( v54 == 15 )
          {
            LOWORD(v55) = a9;
          }
          else
          {
            v56 = &unk_25D240;
            v57 = (unsigned __int16)(v26[1] & v83) >> v94;
            if ( (int)(v82 - v57) >= 0 )
              v56 = &unk_24FA98;
            v58 = v83 & (((v57 << 16) + (v82 - v57) * v56[v54]) >> 16 << v94);
            v75 = v26[1];
            v59 = (v75 & (unsigned int)v86) >> v87;
            v60 = &unk_25D240;
            if ( (int)(v81 - v59) >= 0 )
              v60 = &unk_24FA98;
            v61 = v86 & (((v59 << 16) + (v81 - v59) * v60[v54]) >> 16 << v87) | v58;
            v62 = (v75 & (unsigned int)v84) >> v85;
            v63 = &unk_25D240;
            if ( (int)(v80 - v62) >= 0 )
              v63 = &unk_24FA98;
            v55 = v84 & (((v62 << 16) + (v80 - v62) * v63[v54]) >> 16 << v85) | v61;
          }
          v42 = v91;
          v26[1] = v55;
        }
        v26 += 2;
        v25 = v89 + 1;
        --v42;
        ++v89;
        v91 = v42;
      }
      while ( v42 );
      v24 = v92;
      v21 = v88;
    }
    if ( v93 )
    {
      v64 = (unsigned __int8)*v25 >> 4;
      if ( v64 )
      {
        if ( v64 == 15 )
        {
          LOWORD(v65) = a9;
        }
        else
        {
          v66 = *v26;
          v67 = &unk_25D240;
          v68 = (v66 & (unsigned int)v83) >> v94;
          if ( (int)(v82 - v68) >= 0 )
            v67 = &unk_24FA98;
          v90 = v64;
          v69 = v83 & (((v68 << 16) + (v82 - v68) * v67[v64]) >> 16 << v94);
          v70 = (v66 & (unsigned int)v86) >> v87;
          v71 = &unk_25D240;
          if ( (int)(v81 - v70) >= 0 )
            v71 = &unk_24FA98;
          v72 = v86 & (((v70 << 16) + (v81 - v70) * v71[v90]) >> 16 << v87) | v69;
          v73 = (v66 & (unsigned int)v84) >> v85;
          v74 = &unk_25D240;
          if ( (int)(v80 - v73) >= 0 )
            v74 = &unk_24FA98;
          v65 = v84 & (((v73 << 16) + (v80 - v73) * v74[v90]) >> 16 << v85) | v72;
        }
        v24 = v92;
        v21 = v88;
        *v26 = v65;
      }
    }
    v21 += a3;
    result = a8 - 1;
    v24 = (_WORD *)((char *)v24 + a7);
    v23 = a8 == 1;
    v14 = v83;
    --a8;
  }
  return result;
}

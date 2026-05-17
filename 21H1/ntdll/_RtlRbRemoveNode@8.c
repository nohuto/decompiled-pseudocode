/*
 * XREFs of _RtlRbRemoveNode@8 @ 0x4B2D9B10
 * Callers:
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _EtwpRemoveRegistrationFromTable@4 @ 0x4B2D9AD8 (_EtwpRemoveRegistrationFromTable@4.c)
 *     _EtwpDereferenceUmGuidEntry@4 @ 0x4B2EE4C1 (_EtwpDereferenceUmGuidEntry@4.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrRangeCoalesce@8 @ 0x4B37AF85 (_RtlpHpVaMgrRangeCoalesce@8.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpVsFreeChunkRemove@12 @ 0x4B37FAC1 (_RtlpHpVsFreeChunkRemove@12.c)
 * Callees:
 *     <none>
 */

char __stdcall RtlRbRemoveNode(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // edi
  unsigned int v4; // esi
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // cl
  char v12; // cl
  unsigned int v13; // eax
  int v14; // edi
  BOOL i; // edx
  unsigned int v16; // ebx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  char v20; // al
  int v21; // edx
  char v22; // al
  int v23; // edx
  unsigned int v24; // edx
  int v25; // eax
  int v26; // edx
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // ebx
  int v41; // eax
  unsigned int v42; // edx
  int v43; // edx
  unsigned int v44; // edx
  int v45; // edi
  int v46; // edi
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edi
  int v51; // ebx
  unsigned int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned int v55; // eax
  int v56; // edx
  int v57; // eax
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // eax
  int v64; // ebx
  unsigned int v65; // eax
  int v66; // eax
  unsigned int v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // eax
  unsigned int v77; // edx
  int v78; // edx
  unsigned int v79; // edx
  int v80; // edx
  unsigned int v81; // eax
  unsigned int v82; // eax
  int v83; // eax
  unsigned int v84; // eax
  int v86; // [esp+Ch] [ebp-20h]
  int *v87; // [esp+10h] [ebp-1Ch]
  unsigned int *v88; // [esp+10h] [ebp-1Ch]
  unsigned int v89; // [esp+14h] [ebp-18h]
  _DWORD *v90; // [esp+14h] [ebp-18h]
  int v91; // [esp+14h] [ebp-18h]
  int v92; // [esp+14h] [ebp-18h]
  unsigned int v93; // [esp+14h] [ebp-18h]
  int v94; // [esp+18h] [ebp-14h]
  int v95; // [esp+18h] [ebp-14h]
  int v96; // [esp+18h] [ebp-14h]
  int v97; // [esp+18h] [ebp-14h]
  int v98; // [esp+1Ch] [ebp-10h]
  unsigned int v99; // [esp+1Ch] [ebp-10h]
  int v100; // [esp+20h] [ebp-Ch]
  int v101; // [esp+24h] [ebp-8h]
  int v102; // [esp+24h] [ebp-8h]
  int v103; // [esp+24h] [ebp-8h]
  int v104; // [esp+24h] [ebp-8h]
  char v105; // [esp+2Ah] [ebp-2h]
  char v106; // [esp+2Bh] [ebp-1h]
  char v107; // [esp+2Bh] [ebp-1h]
  char v108; // [esp+2Bh] [ebp-1h]

  v2 = *(_DWORD *)a2;
  v3 = a1;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && v2 )
    v2 ^= a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && v4 )
    v4 ^= a2;
  v89 = v4;
  v5 = v4;
  if ( v2 )
    v5 = v2;
  v106 = *(_BYTE *)(a1 + 4) & 1;
  if ( (v2 != 0 ? v4 : 0) != 0 )
  {
    v6 = v4;
    v100 = 1;
    if ( *(_DWORD *)v4 )
    {
      v100 = 0;
      v50 = *(_DWORD *)v4;
      do
      {
        v4 = v6;
        if ( v106 && v50 )
          v6 ^= v50;
        else
          v6 = v50;
        v50 = *(_DWORD *)v6;
      }
      while ( *(_DWORD *)v6 );
      v3 = a1;
    }
    if ( v106 && v2 )
      v23 = v2 ^ v6;
    else
      v23 = v2;
    *(_DWORD *)v6 = v23;
    v24 = *(_DWORD *)(v2 + 8) & 0xFFFFFFFC;
    v25 = v89;
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 && v24 )
      v24 ^= v2;
    if ( v24 != a2 )
      goto LABEL_196;
    v26 = v6;
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
      v26 = v2 ^ v6;
    *(_DWORD *)(v2 + 8) = v26 | *(_DWORD *)(v2 + 8) & 3;
    v27 = *(_DWORD *)(v89 + 8) & 0xFFFFFFFC;
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 && v27 )
      v27 ^= v89;
    if ( v27 != a2 )
      goto LABEL_196;
    v92 = v89 ^ v6;
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
    {
      v28 = v25 ^ v6;
    }
    else
    {
      v28 = v6;
      v92 = v25 ^ v6;
    }
    *(_DWORD *)(v25 + 8) = v28 | *(_DWORD *)(v25 + 8) & 3;
    v5 = *(_DWORD *)(v6 + 4);
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 && v5 )
      v5 ^= v6;
    if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
      v25 = v92;
    *(_DWORD *)(v6 + 4) = v25;
    v98 = *(_DWORD *)(v6 + 8);
    v29 = v98 & 0xFFFFFFFC;
    v107 = *(_BYTE *)(v3 + 4) & 1;
    if ( v107 && v29 )
      v93 = v6 ^ v29;
    else
      v93 = v98 & 0xFFFFFFFC;
    if ( v93 == v4 )
      goto LABEL_57;
    if ( v107 )
    {
      if ( !v29 )
        goto LABEL_214;
      v29 ^= v6;
    }
    if ( v29 )
      goto LABEL_196;
LABEL_214:
    if ( v6 != v4 )
      goto LABEL_196;
LABEL_57:
    v105 = *(_BYTE *)(v6 + 8);
    v30 = *(_DWORD *)(a2 + 8) & 0xFFFFFFFC;
    if ( v107 )
    {
      if ( v30 )
        v30 ^= a2;
      if ( v30 )
        v30 ^= v6;
    }
    v31 = v30 | *(_DWORD *)(v6 + 8) & 3;
    *(_DWORD *)(v6 + 8) = v31;
    *(_BYTE *)(v6 + 8) ^= (*(_BYTE *)(a2 + 8) ^ v31) & 1;
    v32 = *(_DWORD *)(a2 + 8);
    if ( (v32 & 0xFFFFFFFC) != 0 )
    {
      v33 = v32 & 0xFFFFFFFC;
      v108 = *(_BYTE *)(v3 + 4) & 1;
      if ( v108 && v33 )
        v33 ^= a2;
      v34 = *(_DWORD *)(v33 + 4);
      if ( v108 && v34 )
        v34 ^= v33;
      v3 = a1;
      v87 = (int *)(v33 + 4 * (v34 == a2));
      v35 = *v87;
      if ( v108 && v35 )
        v35 ^= v33;
      if ( v35 != a2 )
        goto LABEL_196;
      if ( v108 )
        v36 = v6 ^ v33;
      else
        v36 = v6;
      *v87 = v36;
    }
    else
    {
      v82 = *(_DWORD *)v3;
      if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
      {
        if ( v82 )
          v82 ^= v3;
        else
          v82 = 0;
      }
      if ( v82 != a2 )
        goto LABEL_196;
      v83 = v6;
      if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
        v83 = v3 ^ v6;
      *(_DWORD *)v3 = v83;
    }
    v11 = v105;
    goto LABEL_18;
  }
  v4 = *(_DWORD *)(a2 + 8) & 0xFFFFFFFC;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && v4 )
    v4 ^= a2;
  v6 = a2;
  if ( !v4 )
  {
    if ( v5 )
      *(_DWORD *)(v5 + 8) = 0;
    v84 = *(_DWORD *)a1;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      if ( v84 )
        v84 ^= a1;
      else
        v84 = 0;
    }
    if ( v84 != a2 )
      goto LABEL_196;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v5 != 0 ? v5 ^ a1 : 0;
      *(_BYTE *)(a1 + 4) |= 1u;
      LOBYTE(v13) = *(_BYTE *)(a1 + 4);
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v5;
      LOBYTE(v13) = v5;
    }
    if ( (v13 & 1) != 0 )
    {
      LOBYTE(v13) = v5 ^ a1;
      v5 = v5 != 0 ? v5 ^ a1 : 0;
    }
    *(_DWORD *)a1 = v5;
    return v13;
  }
  if ( v106 && *(_DWORD *)(v4 + 4) )
    v7 = v4 ^ *(_DWORD *)(v4 + 4);
  else
    v7 = *(_DWORD *)(v4 + 4);
  v90 = (_DWORD *)v7;
  v8 = a2;
  if ( v90 != (_DWORD *)a2 )
  {
    if ( v106 && *(_DWORD *)v4 )
      v9 = v4 ^ *(_DWORD *)v4;
    else
      v9 = *(_DWORD *)v4;
    if ( v9 != a2 )
      goto LABEL_196;
    v100 = 0;
    v10 = *(_DWORD *)(a1 + 4);
    if ( (v10 & 1) != 0 )
    {
      if ( v10 == 1 )
        v101 = 0;
      else
        v101 = v10 ^ (a1 | 1);
    }
    else
    {
      v101 = *(_DWORD *)(a1 + 4);
    }
    v8 = a2;
    if ( v101 != a2 )
      goto LABEL_17;
    if ( v5 )
    {
      if ( !v106 )
      {
        *(_DWORD *)(a1 + 4) = v5;
        goto LABEL_17;
      }
      v81 = v5;
    }
    else
    {
      if ( !v106 )
      {
        *(_DWORD *)(a1 + 4) = v4;
        goto LABEL_17;
      }
      v81 = v4;
    }
    *(_DWORD *)(a1 + 4) = a1 ^ v81;
    *(_BYTE *)(a1 + 4) |= 1u;
    goto LABEL_17;
  }
  v100 = 1;
LABEL_17:
  v11 = *(_BYTE *)(v8 + 8);
LABEL_18:
  v12 = v11 & 1;
  if ( (*(_BYTE *)(v3 + 4) & 1) != 0 && v5 )
    v13 = v5 ^ v4;
  else
    v13 = v5;
  *(_DWORD *)(v4 + 4 * v100) = v13;
  v14 = a1;
  if ( v5 )
  {
    v13 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFC;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && v13 )
      v13 ^= v5;
    if ( v13 != v6 )
      goto LABEL_196;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && v4 )
      v4 ^= v5;
    *(_DWORD *)(v5 + 8) = v4;
    return v13;
  }
  if ( v12 )
    return v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 4);
  for ( i = v100; ; v100 = i )
  {
    v16 = v4;
    v91 = !i;
    v17 = *(_DWORD *)(v4 + 4 * !i);
    if ( (v13 & 1) != 0 && v17 )
      v18 = v4 ^ v17;
    else
      v18 = v17;
    if ( (*(_BYTE *)(v18 + 8) & 1) == 0 )
      goto LABEL_31;
    v64 = *(_DWORD *)v14;
    if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
    {
      if ( v64 )
        v64 ^= v14;
      else
        v64 = 0;
    }
    v104 = v13 & 1;
    v65 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFC;
    if ( v104 && v65 )
      v65 ^= v18;
    if ( v65 != v4 )
      goto LABEL_196;
    v66 = v104;
    if ( v104 && v17 )
      v17 ^= v4;
    if ( v17 != v18 )
      goto LABEL_196;
    v67 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFC;
    if ( v104 )
    {
      if ( !v67 )
      {
LABEL_190:
        if ( v64 != v4 )
          goto LABEL_196;
        v64 = v18;
        goto LABEL_153;
      }
      v67 ^= v4;
    }
    if ( !v67 )
      goto LABEL_190;
    v68 = *(_DWORD *)(v67 + 4);
    if ( v104 && v68 )
      v68 ^= v67;
    if ( v68 == v4 )
    {
      v76 = v104 ? v18 ^ v67 : v18;
      *(_DWORD *)(v67 + 4) = v76;
    }
    else
    {
      v69 = *(_DWORD *)v67;
      if ( v104 && v69 )
        v69 ^= v67;
      if ( v69 != v4 )
        goto LABEL_196;
      v70 = v104 ? v18 ^ v67 : v18;
      *(_DWORD *)v67 = v70;
    }
    v66 = v104;
LABEL_153:
    if ( v66 && v67 )
      v67 ^= v18;
    v71 = v67 | *(_DWORD *)(v18 + 8) & 3;
    v72 = v104;
    *(_DWORD *)(v18 + 8) = v71;
    v73 = *(_DWORD *)(v18 + 4 * v100);
    if ( !v104 )
      goto LABEL_155;
    if ( v73 )
    {
      v73 ^= v18;
LABEL_155:
      if ( v73 )
      {
        v79 = *(_DWORD *)(v73 + 8) & 0xFFFFFFFC;
        if ( v104 && v79 )
          v79 ^= v73;
        if ( v79 != v18 )
          goto LABEL_196;
        if ( v104 )
          v80 = v4 ^ v73;
        else
          v80 = v4;
        *(_DWORD *)(v73 + 8) = v80 | *(_DWORD *)(v73 + 8) & 3;
        v72 = v104;
      }
    }
    if ( v72 && v73 )
      v73 ^= v4;
    *(_DWORD *)(v4 + 4 * v91) = v73;
    v74 = v18 ^ v4;
    v75 = v18 ^ v4;
    if ( !v104 )
      v75 = v4;
    *(_DWORD *)(v18 + 4 * v100) = v75;
    v14 = a1;
    if ( !v104 )
      v74 = v18;
    *(_DWORD *)(v4 + 8) = v74 | *(_DWORD *)(v4 + 8) & 3;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      v64 = v64 != 0 ? v64 ^ a1 : 0;
    *(_DWORD *)a1 = v64;
    *(_BYTE *)(v18 + 8) &= ~1u;
    *(_BYTE *)(v4 + 8) |= 1u;
    v18 = *(_DWORD *)(v4 + 4 * v91);
    LOBYTE(v13) = *(_BYTE *)(a1 + 4);
    if ( (v13 & 1) != 0 && v18 )
      v18 ^= v4;
    v16 = v4;
LABEL_31:
    v19 = *(_DWORD *)v18;
    v20 = v13 & 1;
    if ( *(_DWORD *)v18 )
    {
      if ( v20 )
        v19 ^= v18;
      if ( (*(_BYTE *)(v19 + 8) & 1) != 0 )
        break;
    }
    v21 = *(_DWORD *)(v18 + 4);
    if ( v21 )
    {
      if ( v20 )
        v21 ^= v18;
      if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
        break;
    }
    v22 = *(_BYTE *)(v4 + 8);
    if ( (v22 & 1) != 0 )
    {
      LOBYTE(v13) = v22 & 0xFE;
      *(_BYTE *)(v4 + 8) = v13;
      *(_BYTE *)(v18 + 8) |= 1u;
      return v13;
    }
    *(_BYTE *)(v18 + 8) |= 1u;
    LOBYTE(v13) = *(_BYTE *)(v14 + 4);
    v37 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFC;
    if ( (v13 & 1) != 0 && v37 )
      v4 ^= v37;
    else
      v4 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFC;
    if ( !v4 )
      return v13;
    v38 = *(_DWORD *)(v4 + 4);
    if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v38 )
      v38 ^= v4;
    i = v38 == v16;
  }
  v39 = *(_DWORD *)(v18 + 4 * v91);
  if ( v20 )
  {
    if ( v39 )
    {
      v39 ^= v18;
      goto LABEL_80;
    }
  }
  else
  {
LABEL_80:
    if ( v39 && (*(_BYTE *)(v39 + 8) & 1) != 0 )
      goto LABEL_82;
  }
  v51 = *(_DWORD *)(v18 + 4 * v100);
  if ( v20 && v51 )
    v51 ^= v18;
  *(_BYTE *)(v51 + 8) &= ~1u;
  v95 = v100 ^ 1;
  v52 = *(_DWORD *)(v51 + 8) & 0xFFFFFFFC;
  v103 = *(_BYTE *)(v14 + 4) & 1;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v52 )
    v52 ^= v51;
  if ( v52 != v18 )
    goto LABEL_196;
  v53 = *(_DWORD *)(v18 + 4 * v100);
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v53 )
    v53 ^= v18;
  if ( v53 != v51 )
    goto LABEL_196;
  v54 = *(_DWORD *)(v4 + 4 * v95);
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v54 )
    v54 ^= v4;
  if ( v54 != v18 )
    goto LABEL_196;
  v55 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFC;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v55 )
    v55 ^= v18;
  if ( v55 != v4 )
    goto LABEL_196;
  v56 = v51 ^ v4;
  v57 = v51 ^ v4;
  if ( (*(_BYTE *)(v14 + 4) & 1) == 0 )
    v57 = v51;
  *(_DWORD *)(v4 + 4 * v95) = v57;
  if ( !v103 || !v4 )
    v56 = v4;
  v58 = v56 | *(_DWORD *)(v51 + 8) & 3;
  v59 = v103;
  *(_DWORD *)(v51 + 8) = v58;
  v60 = *(_DWORD *)(v51 + 4 * v95);
  if ( !v103 )
  {
LABEL_131:
    if ( !v60 )
      goto LABEL_132;
    v77 = *(_DWORD *)(v60 + 8) & 0xFFFFFFFC;
    if ( v103 && v77 )
      v77 ^= v60;
    if ( v77 == v51 )
    {
      if ( v103 )
        v78 = v18 ^ v60;
      else
        v78 = v18;
      *(_DWORD *)(v60 + 8) = v78 | *(_DWORD *)(v60 + 8) & 3;
      v59 = v103;
      goto LABEL_132;
    }
    goto LABEL_196;
  }
  if ( v60 )
  {
    v60 ^= v51;
    goto LABEL_131;
  }
LABEL_132:
  if ( v59 && v60 )
    v60 ^= v18;
  *(_DWORD *)(v18 + 4 * v100) = v60;
  v61 = v18 ^ v51;
  v62 = v18 ^ v51;
  if ( !v103 )
    v62 = v18;
  *(_DWORD *)(v51 + 4 * v95) = v62;
  if ( !v103 )
    v61 = v51;
  v14 = a1;
  v63 = v61 | *(_DWORD *)(v18 + 8) & 3;
  v39 = v18;
  *(_DWORD *)(v18 + 8) = v63;
  v18 = v51;
LABEL_82:
  v88 = (unsigned int *)(v4 + 8);
  *(_BYTE *)(v18 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v18 + 8)) & 1;
  *(_BYTE *)(v4 + 8) &= ~1u;
  *(_BYTE *)(v39 + 8) &= ~1u;
  v40 = *(_DWORD *)v14;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
  {
    if ( v40 )
      v40 ^= v14;
    else
      v40 = 0;
  }
  v41 = *(_BYTE *)(v14 + 4) & 1;
  v42 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFC;
  v102 = v41;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v42 )
    v42 ^= v18;
  if ( v42 != v4 )
    goto LABEL_196;
  v43 = *(_DWORD *)(v4 + 4 * v91);
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && v43 )
    v43 ^= v4;
  if ( v43 != v18 )
LABEL_196:
    __fastfail(0x1Du);
  v44 = *v88 & 0xFFFFFFFC;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
  {
    if ( v44 )
    {
      v44 ^= v4;
      goto LABEL_88;
    }
    goto LABEL_186;
  }
LABEL_88:
  if ( !v44 )
  {
LABEL_186:
    if ( v40 != v4 )
      goto LABEL_196;
    v40 = v18;
    goto LABEL_98;
  }
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 && *(_DWORD *)(v44 + 4) )
    v45 = v44 ^ *(_DWORD *)(v44 + 4);
  else
    v45 = *(_DWORD *)(v44 + 4);
  if ( v45 == v4 )
  {
    if ( v41 )
      v96 = v18 ^ v44;
    else
      v96 = v18;
    *(_DWORD *)(v44 + 4) = v96;
  }
  else
  {
    if ( v41 && *(_DWORD *)v44 )
      v46 = v44 ^ *(_DWORD *)v44;
    else
      v46 = *(_DWORD *)v44;
    if ( v46 != v4 )
      goto LABEL_196;
    if ( v41 )
      v94 = v18 ^ v44;
    else
      v94 = v18;
    *(_DWORD *)v44 = v94;
  }
LABEL_98:
  if ( v41 && v44 )
    v44 ^= v18;
  v47 = v44 | *(_DWORD *)(v18 + 8) & 3;
  v48 = v102;
  *(_DWORD *)(v18 + 8) = v47;
  v49 = *(_DWORD *)(v18 + 4 * v100);
  if ( v102 )
  {
    if ( v49 )
    {
      v49 ^= v18;
      goto LABEL_100;
    }
  }
  else
  {
LABEL_100:
    if ( v49 )
    {
      v99 = *(_DWORD *)(v49 + 8) & 0xFFFFFFFC;
      if ( v102 && v99 )
        v99 ^= v49;
      v48 = v102;
      if ( v99 != v18 )
        goto LABEL_196;
      if ( v102 )
        v97 = v4 ^ v49;
      else
        v97 = v4;
      *(_DWORD *)(v49 + 8) = v97 | *(_DWORD *)(v49 + 8) & 3;
    }
  }
  if ( v48 && v49 )
    v49 ^= v4;
  *(_DWORD *)(v4 + 4 * v91) = v49;
  v86 = v18 ^ v4;
  if ( v48 )
    v4 ^= v18;
  *(_DWORD *)(v18 + 4 * v100) = v4;
  if ( v48 )
    v18 = v86;
  v13 = v18 | *v88 & 3;
  *v88 = v13;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    LOBYTE(v13) = v40 ^ a1;
    v40 = v40 != 0 ? v40 ^ a1 : 0;
  }
  *(_DWORD *)a1 = v40;
  return v13;
}

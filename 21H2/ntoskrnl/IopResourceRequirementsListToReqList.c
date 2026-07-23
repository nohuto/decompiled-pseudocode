/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140751A14
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BF62C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B5FF0 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1408B34A8 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B9A4C (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IopSetupArbiterAndTranslators @ 0x140751FDC (IopSetupArbiterAndTranslators.c)
 *     IopFreeReqList @ 0x140753228 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x140753280 (IopFreeReqAlternative.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // edi
  unsigned int *v4; // rsi
  unsigned int *v5; // rbp
  int v6; // r10d
  unsigned int *v7; // rdx
  int v8; // r8d
  int v9; // r14d
  unsigned int *v10; // rcx
  unsigned int *v11; // r15
  char v12; // bl
  char v13; // r9
  int v14; // edi
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // r15d
  unsigned __int64 v18; // r13
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  signed int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  unsigned int v24; // edx
  signed int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  unsigned int v28; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v30; // rsi
  unsigned int *v31; // r12
  char *v32; // rbx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // r14d
  int *v36; // rdx
  char **v37; // r13
  unsigned int *v38; // rbx
  __int64 v39; // rbp
  char **v40; // r10
  int *v41; // rax
  int v42; // ecx
  char **v43; // rax
  int i; // edx
  char *v45; // rcx
  char *v46; // r8
  char v47; // al
  bool v48; // zf
  char v49; // al
  unsigned int v50; // eax
  __int64 v51; // r8
  int v52; // edi
  bool v53; // zf
  int v55; // eax
  unsigned __int64 v56; // rcx
  int v57; // r9d
  unsigned int v58; // [rsp+20h] [rbp-88h]
  int v59; // [rsp+24h] [rbp-84h]
  int v60; // [rsp+28h] [rbp-80h]
  char *v61; // [rsp+30h] [rbp-78h]
  char **v62; // [rsp+38h] [rbp-70h]
  int v63; // [rsp+40h] [rbp-68h]
  char *v64; // [rsp+48h] [rbp-60h]
  char **v65; // [rsp+50h] [rbp-58h]
  char *v66; // [rsp+58h] [rbp-50h]
  int v69; // [rsp+C0h] [rbp+18h]
  unsigned int *v70; // [rsp+C8h] [rbp+20h]
  int v71; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v69 = 0;
  v70 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = (unsigned int *)((char *)v2 + *v2);
  v5 = v2 + 8;
  v6 = v3 - 1;
  v7 = v2 + 8;
  v8 = 0;
  v9 = 0;
  if ( (int)(v3 - 1) >= 0 )
  {
    do
    {
      v10 = v7 + 2;
      v7 += 8 * v7[1] + 2;
      if ( v10 == v7 )
        return 0LL;
      if ( v10 > v7 || v10 > v4 || v7 > v4 )
        return 3221225485LL;
      if ( *((_BYTE *)v10 + 1) == 0x80 )
        v10 += 8;
      v11 = v10;
LABEL_10:
      v12 = 1;
      while ( v10 < v7 )
      {
        v13 = *((_BYTE *)v10 + 1);
        v14 = v8;
        if ( (unsigned __int8)v13 == 128 )
          return 3221225485LL;
        if ( *((unsigned __int8 *)v10 + 1) == 129 )
        {
          for ( ; v10 < v7; v10 += 8 )
          {
            if ( *((_BYTE *)v10 + 1) != 0x81 )
              break;
            if ( v10 == v11 )
              return 3221225485LL;
            ++v8;
          }
          goto LABEL_10;
        }
        v15 = ++v8;
        if ( v13 <= 0 )
        {
          v8 = v14;
          *(_BYTE *)v10 = 1;
          v10 += 8;
          if ( v13 != -16 )
            v8 = v15;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)v10 & 8) != 0 )
        {
          if ( v12 )
            return 3221225485LL;
          ++v9;
        }
        else
        {
          v12 = 0;
        }
        v10 += 8;
      }
      --v6;
    }
    while ( v6 >= 0 );
    v3 = v2[7];
  }
  v16 = v8 - v9;
  v17 = -1073741823;
  v18 = 296LL * v16;
  if ( v18 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v16 <= 1 )
  {
    v19 = 0;
    v21 = 0;
  }
  else
  {
    v19 = -1;
    v20 = 8LL * (v16 - 1);
    if ( v20 <= 0xFFFFFFFF )
      v19 = 8 * (v16 - 1);
    v21 = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v21 < 0 )
    return 2147483653LL;
  if ( v19 + 32 < v19 )
    return 2147483653LL;
  v22 = v3 * (unsigned __int64)(v19 + 32);
  if ( v22 > 0xFFFFFFFF )
    return 2147483653LL;
  v23 = (unsigned int)v22;
  if ( v3 > 1 )
  {
    v24 = -1;
    v56 = 8LL * (v3 - 1);
    if ( v56 <= 0xFFFFFFFF )
      v24 = 8 * (v3 - 1);
    v25 = v56 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  else
  {
    v24 = 0;
    v25 = 0;
  }
  if ( v25 < 0 )
    return 2147483653LL;
  if ( v24 + 48 < v24 )
    return 2147483653LL;
  v26 = v24 + 48;
  v27 = v23 + v24 + 48;
  if ( (unsigned int)v23 + v26 < v26 || v27 + (unsigned int)v18 < v27 )
    return 2147483653LL;
  v28 = v27 + v18;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v27 + (unsigned int)v18, 0x20207050u);
  v30 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v28);
  v62 = (char **)((char *)v30 + v26);
  memset(v62, 0, (unsigned int)v23);
  v64 = (char *)v62 + v23;
  memset((char *)v62 + v23, 0, (unsigned int)v18);
  v31 = v70;
  v32 = (char *)(v30 + 5);
  v61 = (char *)(v30 + 5);
  v33 = v70[1];
  v34 = v70[2];
  if ( v33 == -1 )
    v33 = 1;
  v58 = v70[2];
  v30[2] = 0LL;
  v30[1] = a1;
  *((_DWORD *)v30 + 1) = v34;
  v71 = v33;
  *(_DWORD *)v30 = v33;
  *((_DWORD *)v30 + 8) = v3;
  memset(v30 + 5, 0, 8LL * v3);
  v35 = 0;
  v60 = v3 - 1;
  if ( (int)(v3 - 1) < 0 )
    goto LABEL_63;
  do
  {
    v36 = (int *)v62;
    v66 = v32;
    v37 = v62;
    v38 = v5 + 2;
    v63 = v35;
    v39 = v5[1];
    v40 = v62 + 3;
    *(_QWORD *)v61 = v62;
    *((_DWORD *)v62 + 4) = v35;
    v5 = &v38[8 * v39];
    ++v35;
    v62[1] = (char *)v30;
    *((_DWORD *)v62 + 5) = 0;
    v62 += 3;
    v61 += 8;
    if ( *((_BYTE *)v38 + 1) == 0x80 )
    {
      v41 = (int *)(v38 + 2);
      v38 += 8;
      v42 = *v41;
    }
    else
    {
      v42 = 12288;
    }
    *v36 = v42;
    v43 = v40;
    for ( i = 0; ; i = v59 )
    {
      while ( 1 )
      {
        if ( v38 >= v5 )
        {
          v32 = v61;
          goto LABEL_62;
        }
        if ( *((_BYTE *)v38 + 1) != 0xF0 )
          break;
        v57 = v38[2];
        if ( v57 == -1 )
          v57 = 1;
        v58 = v38[3];
        v71 = v57;
LABEL_83:
        v38 += 8;
      }
      ++*((_DWORD *)v37 + 5);
      v45 = v64;
      v46 = v64;
      *v43 = v64;
      v64 += 296;
      v65 = v43 + 1;
      *((_DWORD *)v46 + 6) = i;
      *((_DWORD *)v46 + 1) = v58;
      *((_QWORD *)v46 + 2) = v37;
      *((_QWORD *)v46 + 4) = v46;
      *((_DWORD *)v46 + 69) = 0;
      *((_QWORD *)v46 + 35) = 0LL;
      *(_DWORD *)v46 = v71;
      v47 = *((_BYTE *)v38 + 1);
      v59 = i + 1;
      v48 = v47 == 0;
      if ( v47 < 0 || (v49 = 1, v48) )
        v49 = 0;
      v45[8] = v49;
      ++v40;
      *((_QWORD *)v45 + 6) = v45 + 40;
      *((_QWORD *)v45 + 5) = v45 + 40;
      *((_DWORD *)v45 + 14) = 0;
      *((_QWORD *)v45 + 8) = v38;
      *((_QWORD *)v45 + 9) = *(_QWORD *)a1;
      *((_DWORD *)v45 + 20) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v45 + 11) = 0LL;
      *((_DWORD *)v45 + 24) = v71;
      *((_DWORD *)v45 + 25) = v31[3];
      v50 = v31[2];
      *((_DWORD *)v45 + 32) = -1;
      *((_DWORD *)v45 + 26) = v50;
      *((_QWORD *)v45 + 14) = v45 + 136;
      v62 = v40;
      *((_DWORD *)v45 + 21) = 0;
      if ( !v45[8] )
      {
        ++i;
        v46[136] = *((_BYTE *)v38 + 1);
        v45[137] = *((_BYTE *)v38 + 2);
        *((_WORD *)v45 + 69) = *((_WORD *)v38 + 2);
        *((_DWORD *)v45 + 35) = v38[2];
        *((_DWORD *)v45 + 36) = v38[3];
        *((_DWORD *)v45 + 37) = v38[4];
        v55 = v69;
        if ( *((_BYTE *)v38 + 1) == 0x84 )
          v55 = 1;
        v69 = v55;
        v43 = v65;
        goto LABEL_83;
      }
      v46[136] = 8;
      v51 = (unsigned int)++*((_DWORD *)v45 + 14);
      v69 = 1;
      while ( 1 )
      {
        v38 += 8;
        if ( v38 >= v5 )
          break;
        if ( *((_BYTE *)v38 + 1) == 0x81 )
        {
          *((_QWORD *)v45 + 35) = v38;
          while ( v38 < v5 && *((_BYTE *)v38 + 1) == 0x81 )
          {
            ++*((_DWORD *)v45 + 69);
            v38 += 8;
          }
          break;
        }
        if ( (*(_BYTE *)v38 & 8) == 0 )
          break;
        v51 = (unsigned int)(v51 + 1);
        *((_DWORD *)v45 + 14) = v51;
      }
      v52 = IopSetupArbiterAndTranslators(v45, v45 + 40, v51);
      if ( v52 < 0 )
        break;
      v40 = v62;
      v43 = v65;
    }
    v32 = v66;
    --*((_DWORD *)v30 + 8);
    v35 = v63;
    v61 = v66;
    IopFreeReqAlternative(v37);
    v17 = v52;
LABEL_62:
    --v60;
  }
  while ( v60 >= 0 );
LABEL_63:
  v53 = v35 == 0;
  if ( !v35 )
  {
    IopFreeReqList(v30);
    v53 = 1;
  }
  if ( !v53 )
    v17 = 0;
  if ( !v17 )
  {
    if ( v69 )
      *a2 = v30;
    else
      IopFreeReqList(v30);
  }
  return v17;
}

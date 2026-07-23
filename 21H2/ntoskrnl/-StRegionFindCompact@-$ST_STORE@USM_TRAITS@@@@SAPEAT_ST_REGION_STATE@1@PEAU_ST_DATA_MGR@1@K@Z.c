/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140246B00
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140288120 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14022B578 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  int v2; // ebp
  unsigned int v3; // edx
  __int64 v4; // r9
  unsigned int v5; // r15d
  unsigned int v6; // r8d
  __int64 v7; // r13
  unsigned __int16 *v8; // rsi
  unsigned __int16 *v9; // r12
  unsigned __int16 *v10; // rbp
  unsigned int v11; // ebx
  unsigned __int16 *v12; // rcx
  int v13; // edi
  unsigned __int16 *v14; // r10
  unsigned int v15; // r11d
  BOOL v16; // eax
  unsigned int v17; // ecx
  unsigned __int16 v18; // cx
  unsigned __int16 *result; // rax
  int v20; // edx
  unsigned int v21; // ebx
  unsigned int v22; // r8d
  const signed __int32 *v23; // r14
  unsigned int v24; // r11d
  const signed __int32 *v25; // rdi
  const signed __int32 *v26; // r10
  __int64 v27; // rbp
  int v28; // r8d
  __int64 v29; // rbx
  const signed __int32 *v30; // r10
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edi
  unsigned __int16 *v34; // r10
  int v35; // r11d
  BOOL IsRegionBusy; // eax
  int v37; // eax
  _WORD v38[36]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL) )
  {
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1092);
    v6 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v7 = *(unsigned int *)(a1 + 856);
  v8 = v38;
  v9 = *(unsigned __int16 **)(a1 + 1032);
  v38[0] = (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && v6 )
  {
    v21 = 0;
    while ( 1 )
    {
LABEL_29:
      v22 = *(_DWORD *)(v4 + 1072);
      if ( v22 <= v21 )
        break;
      v23 = *(const signed __int32 **)(v4 + 1080);
      v24 = v21;
      v25 = &v23[(unsigned __int64)(v22 - 1) >> 5];
      v26 = &v23[(unsigned __int64)v21 >> 5];
      if ( v26 != v25 )
      {
        v27 = v21 & 0x1F;
        if ( (*v26 | *((_DWORD *)qword_140012120 + v27)) == -1 )
        {
          v24 = v21 - v27 + 32;
          for ( ++v26; v26 < v25 && *v26 == -1; ++v26 )
            v24 += 32;
        }
        v2 = a2;
        v3 = 0;
      }
      while ( v24 < v22 && _bittest(v23, v24) )
        ++v24;
      v28 = 0;
      if ( v26 != v25 )
      {
        v29 = v24 & 0x1F;
        if ( (*v26 & ~*((_DWORD *)qword_140012120 + v29)) != 0 )
        {
          v3 = 0;
        }
        else
        {
          v28 = 32 - v29;
          v3 = 0;
          if ( (_DWORD)v29 == 33 )
            goto LABEL_54;
          v30 = v26 + 1;
          while ( v30 < v25 && !*v30 )
          {
            ++v30;
            v28 += 32;
            if ( v28 == -1 )
              goto LABEL_54;
          }
        }
      }
      v31 = *(_DWORD *)(v4 + 1072);
      v32 = v28 + v24;
      if ( v28 + v24 < v31 )
      {
        do
        {
          if ( _bittest(*(const signed __int32 **)(v4 + 1080), v32) )
            break;
          if ( v28 == -1 )
            break;
          ++v32;
          ++v28;
        }
        while ( v32 < v31 );
        v3 = 0;
      }
LABEL_54:
      v21 = v24;
      if ( !v28 )
        break;
      v33 = v28 + v24;
      v34 = &v9[v24];
      if ( v24 < v28 + v24 )
      {
        v35 = *(_DWORD *)(v4 + 776);
        while ( 1 )
        {
          if ( (v35 & 0x40000) == 0
            || (IsRegionBusy = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(v4 + 800), v21), v3 = 0, !IsRegionBusy) )
          {
            v37 = (_BYTE)v35 ? 0 : *v34 >> 13;
            if ( v37 == v2 )
              break;
          }
          ++v21;
          ++v34;
          if ( v21 >= v33 )
            goto LABEL_29;
        }
        v8 = v34;
LABEL_20:
        result = v8;
        v20 = v8 - v9 + 1;
        if ( v20 == *(_DWORD *)(v4 + 856) )
          v20 = 0;
        *(_DWORD *)(v4 + 1092) = v20;
        return result;
      }
    }
  }
  v10 = &v9[v7];
  v11 = 0;
  v12 = &v9[v5];
  if ( !(_DWORD)v7 )
    return 0LL;
  v13 = *(_DWORD *)(v4 + 776);
  do
  {
    v14 = v9;
    v15 = v12 < v10 ? v5 : 0;
    if ( v12 < v10 )
      v14 = v12;
    if ( (v13 & 0x40000) == 0
      || (v16 = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(v4 + 800), v15), v3 = 0, !v16) )
    {
      v17 = *v14;
      if ( !(_BYTE)v13 )
        v3 = v17 >> 13;
      v18 = v17 & 0x1FFF;
      if ( v18 >= (unsigned __int16)(*v8 & 0x1FFF) )
        goto LABEL_13;
      if ( v3 != a2 )
      {
        if ( !v18 && v14 != &v9[*(unsigned int *)(v4 + 16 * (v3 + 78LL))] )
        {
          v8 = v14;
          goto LABEL_20;
        }
LABEL_13:
        v3 = 0;
        goto LABEL_14;
      }
      v3 = 0;
      v8 = v14;
      if ( !v18 )
        goto LABEL_20;
    }
LABEL_14:
    ++v11;
    v12 = v14 + 1;
    v5 = v15 + 1;
  }
  while ( v11 < (unsigned int)v7 );
  if ( v8 != v38 )
    goto LABEL_20;
  return 0LL;
}

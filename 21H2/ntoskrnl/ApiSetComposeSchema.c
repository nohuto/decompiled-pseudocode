/*
 * XREFs of ApiSetComposeSchema @ 0x1405BE5A0
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x14095EB80 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ApiSetpSearchForApiSet @ 0x1403A3330 (ApiSetpSearchForApiSet.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x1405BE2E4 (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x1405BEC84 (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x1405BED1C (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x1405BEE70 (AsiSortValueList.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(_DWORD **a1, unsigned int *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v4; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rax
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r12
  unsigned int v18; // eax
  const WCHAR *v19; // rdx
  _WORD *v20; // rcx
  unsigned __int16 v21; // ax
  _DWORD *v22; // rax
  int v23; // edx
  int v24; // r12d
  _DWORD *PoolWithTag; // rsi
  unsigned int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // r14d
  __int64 i; // r11
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 j; // r8
  char *v38; // r10
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  _DWORD *v43; // r9
  unsigned int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // edi
  __int64 v47; // r12
  unsigned int v48; // r11d
  __int64 v49; // r10
  char *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rbx
  const WCHAR *v55; // rcx
  _WORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r9
  _DWORD *v59; // rcx
  ULONG_PTR v60; // rcx
  unsigned int v62; // [rsp+28h] [rbp-59h]
  unsigned int v63; // [rsp+2Ch] [rbp-55h]
  unsigned int v64; // [rsp+30h] [rbp-51h]
  unsigned int v65; // [rsp+30h] [rbp-51h]
  int v66; // [rsp+34h] [rbp-4Dh]
  unsigned int v67; // [rsp+34h] [rbp-4Dh]
  int v68; // [rsp+34h] [rbp-4Dh]
  unsigned int v69; // [rsp+38h] [rbp-49h]
  unsigned int v70; // [rsp+3Ch] [rbp-45h]
  int v71; // [rsp+3Ch] [rbp-45h]
  __int64 v72; // [rsp+40h] [rbp-41h]
  unsigned int v73; // [rsp+40h] [rbp-41h]
  __int64 v74; // [rsp+48h] [rbp-39h]
  int v75; // [rsp+48h] [rbp-39h]
  __int64 v76; // [rsp+50h] [rbp-31h]
  _DWORD *v77; // [rsp+58h] [rbp-29h]
  const WCHAR *v78; // [rsp+60h] [rbp-21h]
  char *v79; // [rsp+68h] [rbp-19h]
  _DWORD *v80; // [rsp+70h] [rbp-11h]
  __int64 v81; // [rsp+78h] [rbp-9h] BYREF
  int v82; // [rsp+80h] [rbp-1h]
  unsigned int v83; // [rsp+84h] [rbp+3h]
  unsigned int v84; // [rsp+88h] [rbp+7h]
  __int128 v85; // [rsp+90h] [rbp+Fh] BYREF
  int v86; // [rsp+A0h] [rbp+1Fh]
  unsigned int v89; // [rsp+100h] [rbp+7Fh] BYREF

  v89 = a4;
  v4 = *a1;
  if ( **a1 < 5u || *a3 < 5u )
    return 3221225659LL;
  if ( (v4[2] & 1) != 0 )
    return 3221225485LL;
  if ( !v4[3] )
    return 3221225485LL;
  v6 = a3[3];
  v64 = v6;
  if ( !v6 )
    return 3221225485LL;
  v62 = 0;
  v7 = 0;
  v8 = ApiSetValidateSchemaFormat(v4, v4[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ApiSetValidateSchemaFormat(a3, a3[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = 0LL;
  v10 = (unsigned int)a3[4];
  v72 = v10;
  while ( 1 )
  {
    v11 = (_DWORD *)((char *)&a3[6 * v9] + v10);
    if ( (*v11 & 4) == 0 )
      break;
    ++v62;
    v7 += (v11[2] + 3) & 0xFFFFFFFC;
LABEL_29:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v6 )
    {
      v24 = 24 * v62;
      v67 = v7 + 24 * v62 + v4[1] + 8 * v62;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v67, 0x68635341u);
      if ( PoolWithTag )
      {
        v26 = v4[4] + 24 * v4[3];
        v27 = v26;
        memmove(PoolWithTag, v4, v26);
        v28 = v24 + v26;
        v29 = v4[5] - v26;
        v30 = v29 + v28;
        v63 = v29 + v28;
        v89 = v29 + v28;
        memmove((char *)PoolWithTag + v28, (char *)v4 + v27, v29);
        memset((char *)PoolWithTag + v30, 0, v7);
        v31 = v7 + v30;
        memmove((char *)PoolWithTag + v31, (char *)v4 + (unsigned int)v4[5], (unsigned int)(8 * v4[3]));
        v32 = v67;
        PoolWithTag[1] = v67;
        PoolWithTag[5] = v31;
        if ( v24 )
        {
          for ( i = 0LL; (unsigned int)i < PoolWithTag[3]; i = (unsigned int)(i + 1) )
          {
            v34 = (char *)PoolWithTag + (unsigned int)PoolWithTag[4];
            v35 = *(_DWORD *)&v34[24 * i + 4];
            if ( v35 )
              *(_DWORD *)&v34[24 * i + 4] = v24 + v35;
            v36 = *(_DWORD *)&v34[24 * i + 16];
            if ( v36 )
              *(_DWORD *)&v34[24 * i + 16] = v24 + v36;
            for ( j = 0LL; (unsigned int)j < *(_DWORD *)&v34[24 * i + 20]; j = (unsigned int)(j + 1) )
            {
              v38 = (char *)PoolWithTag + *(unsigned int *)&v34[24 * i + 16];
              v39 = *(_DWORD *)&v38[20 * j + 4];
              if ( v39 )
                *(_DWORD *)&v38[20 * j + 4] = v24 + v39;
              v40 = *(_DWORD *)&v38[20 * j + 12];
              if ( v40 )
                *(_DWORD *)&v38[20 * j + 12] = v24 + v40;
            }
          }
        }
        v8 = ApiSetValidateSchemaFormat(PoolWithTag, v67);
        if ( v8 < 0 )
          goto LABEL_83;
        v44 = 0;
        v45 = 0LL;
        v69 = 0;
        v68 = 0;
        if ( a3[3] )
        {
          v46 = v62;
          do
          {
            v47 = 3 * v45;
            v43 = (_DWORD *)((char *)a3 + (unsigned int)a3[4]);
            v80 = v43;
            v48 = v43[6 * v45 + 2];
            v49 = (unsigned int)v43[6 * v45 + 1];
            v65 = v48;
            if ( (v43[6 * v45] & 4) != 0 )
            {
              if ( v44 >= v46 )
              {
LABEL_86:
                v8 = -2147483643;
                goto LABEL_83;
              }
              v50 = (char *)PoolWithTag + (unsigned int)PoolWithTag[4];
              v69 = v44 + 1;
              v51 = (unsigned int)PoolWithTag[3];
              v52 = 3 * v51;
              PoolWithTag[3] = v51 + 1;
              *(_OWORD *)&v50[8 * v52] = 0LL;
              *(_QWORD *)&v50[8 * v52 + 16] = 0LL;
              *(_DWORD *)&v50[8 * v52] = v43[6 * v45];
              *(_DWORD *)&v50[8 * v52 + 4] = v63;
              *(_DWORD *)&v50[8 * v52 + 8] = v48;
              *(_DWORD *)&v50[8 * v52 + 12] = v48;
              v8 = AsiAddDataToSchema(PoolWithTag, &v89, (char *)a3 + v49, v48);
              if ( v8 < 0 )
                goto LABEL_83;
              v41 = v89;
              v63 = v89;
LABEL_78:
              v44 = v69;
            }
            else
            {
              v42 = 0LL;
              v79 = (char *)a3 + v49;
              v53 = 0LL;
              v73 = 0;
              v71 = 0;
              if ( v43[2 * v47 + 5] )
              {
                while ( 1 )
                {
                  v41 = 5 * v53;
                  v43 = (_DWORD *)((char *)a3 + (unsigned int)v43[2 * v47 + 4]);
                  v76 = 5 * v53;
                  v77 = v43;
                  v54 = (unsigned int)v43[5 * v53 + 4];
                  v55 = (const WCHAR *)((char *)a3 + (unsigned int)v43[5 * v53 + 3]);
                  v78 = v55;
                  v56 = (_WORD *)((char *)v55 + v54);
                  do
                  {
                    if ( (unsigned int)v54 <= 1 )
                      break;
                    LODWORD(v54) = v54 - 2;
                    --v56;
                  }
                  while ( *v56 != 45 );
                  v42 = (unsigned __int16)v54;
                  LOWORD(v42) = (unsigned __int16)v54 >> 1;
                  if ( !((unsigned __int16)v54 >> 1) )
                    break;
                  v75 = v43[v41 + 1];
                  v57 = ApiSetpSearchForApiSet(PoolWithTag, v55, v42);
                  if ( v57 )
                  {
                    v41 = v63;
                  }
                  else
                  {
                    if ( v69 >= v62 )
                      goto LABEL_86;
                    v58 = (unsigned int)PoolWithTag[3];
                    ++v69;
                    v57 = (__int64)&PoolWithTag[6 * v58] + (unsigned int)PoolWithTag[4];
                    PoolWithTag[3] = v58 + 1;
                    *(_OWORD *)v57 = 0LL;
                    *(_QWORD *)(v57 + 16) = 0LL;
                    *(_DWORD *)(v57 + 4) = v63;
                    *(_DWORD *)(v57 + 8) = v77[v76 + 4];
                    *(_DWORD *)(v57 + 12) = v54;
                    v8 = AsiAddDataToSchema(PoolWithTag, &v89, v78, (unsigned int)v77[v76 + 4]);
                    if ( v8 < 0 )
                      goto LABEL_83;
                    *(_DWORD *)(v57 + 20) = 1;
                    v86 = 0;
                    *(_DWORD *)(v57 + 16) = v89;
                    v85 = 0LL;
                    v8 = AsiAddDataToSchema(PoolWithTag, &v89, &v85, 20LL);
                    if ( v8 < 0 )
                      goto LABEL_83;
                    v41 = v89;
                    v63 = v89;
                  }
                  if ( (*(_DWORD *)v57 & 1) == 0 )
                  {
                    v42 = v73;
                    if ( !v73 )
                    {
                      v73 = v41;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v89, v79, v65);
                      if ( v8 < 0 )
                        goto LABEL_83;
                      v42 = v73;
                      v63 = v89;
                    }
                    if ( !*(_DWORD *)(v57 + 20) )
                    {
                      v8 = -1073741811;
                      goto LABEL_83;
                    }
                    v59 = (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(v57 + 16));
                    if ( v59[4] && v75 )
                    {
                      v59[1] = v42;
                      v59[2] = v65;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v89, v59, (unsigned int)(20 * *(_DWORD *)(v57 + 20)));
                      if ( v8 < 0 )
                        goto LABEL_83;
                      v81 = 0LL;
                      v82 = 0;
                      *(_DWORD *)(v57 + 16) = v63;
                      v83 = v73;
                      v84 = v65;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v89, &v81, 20LL);
                      if ( v8 < 0 )
                        goto LABEL_83;
                      ++*(_DWORD *)(v57 + 20);
                      AsiSortValueList(PoolWithTag, v57);
                      v63 = v89;
                    }
                    else
                    {
                      v59[1] = 0;
                      v59[2] = 0;
                      v59[3] = v42;
                      v59[4] = v65;
                      *(_DWORD *)(v57 + 20) = 1;
                    }
                  }
                  v43 = v80;
                  v53 = (unsigned int)(v71 + 1);
                  v71 = v53;
                  if ( (unsigned int)v53 >= v80[2 * v47 + 5] )
                  {
                    v46 = v62;
                    goto LABEL_78;
                  }
                }
                v8 = -1073740670;
                goto LABEL_83;
              }
            }
            v45 = (unsigned int)(v68 + 1);
            v68 = v45;
          }
          while ( (unsigned int)v45 < a3[3] );
        }
        if ( v62 && !(unsigned int)AsiPopulateHashes(PoolWithTag) )
        {
          v8 = -1073741823;
          goto LABEL_83;
        }
        v8 = ApiSetValidateSchemaFormat(PoolWithTag, v32);
        if ( v8 < 0 )
        {
LABEL_83:
          v60 = (ULONG_PTR)PoolWithTag;
        }
        else
        {
          v60 = (ULONG_PTR)v4;
          *a1 = PoolWithTag;
          *a2 = v32;
        }
        ExFreeHeapPool(v60, v41, v42, v43);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return (unsigned int)v8;
    }
  }
  v12 = v11[5];
  v13 = 0LL;
  v14 = 0;
  v89 = 0;
  v70 = v12;
  if ( !v12 )
    goto LABEL_29;
  v15 = (unsigned int)v11[4];
  v74 = v15;
  while ( 1 )
  {
    v16 = v15 + 20 * v13;
    v17 = *(unsigned int *)((char *)a3 + v16 + 16);
    v18 = *(_DWORD *)((char *)a3 + v16 + 16);
    v19 = (const WCHAR *)((char *)a3 + *(unsigned int *)((char *)a3 + v16 + 12));
    v20 = (_WORD *)((char *)v19 + v17);
    if ( (unsigned int)v17 > 1 )
    {
      do
      {
        v18 -= 2;
        --v20;
      }
      while ( *v20 != 45 && v18 > 1 );
    }
    v21 = (unsigned __int16)v18 >> 1;
    if ( !v21 )
      break;
    v66 = *(_DWORD *)((char *)a3 + v16 + 4);
    v22 = (_DWORD *)ApiSetpSearchForApiSet(v4, v19, v21);
    if ( v22 )
    {
      if ( (*v22 & 1) == 0 )
      {
        if ( !v14 )
        {
          v14 = 1;
          v7 += (v11[2] + 3) & 0xFFFFFFFC;
        }
        v23 = v22[5];
        if ( !v23 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)((char *)v4 + (unsigned int)v22[4] + 16) && v66 )
          v7 += 20 * v23 + 20;
      }
    }
    else
    {
      ++v62;
      v7 += ((v17 + 3) & 0xFFFFFFFC) + 20;
      if ( !v14 )
      {
        v14 = 1;
        v7 += (v11[2] + 3) & 0xFFFFFFFC;
      }
    }
    v15 = v74;
    v13 = v89 + 1;
    v89 = v13;
    if ( (unsigned int)v13 >= v70 )
    {
      v6 = v64;
      v10 = v72;
      goto LABEL_29;
    }
  }
  return (unsigned int)-1073740670;
}

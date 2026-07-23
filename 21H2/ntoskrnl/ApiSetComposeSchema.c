/*
 * XREFs of ApiSetComposeSchema @ 0x1405BE7D0
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x14095ED60 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ApiSetpSearchForApiSet @ 0x1403A3480 (ApiSetpSearchForApiSet.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x1405BE514 (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x1405BEEB4 (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x1405BEF4C (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x1405BF0A0 (AsiSortValueList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(_DWORD **a1, unsigned int *a2, _DWORD *a3, int a4)
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
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // edi
  __int64 v44; // r12
  char *v45; // r9
  unsigned int v46; // r11d
  __int64 v47; // r10
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  char *v53; // r9
  __int64 v54; // rbx
  const WCHAR *v55; // rcx
  _WORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r9
  int v59; // edx
  int v60; // r8d
  _DWORD *v61; // rcx
  ULONG_PTR v62; // rcx
  unsigned int v64; // [rsp+28h] [rbp-59h]
  int v65; // [rsp+2Ch] [rbp-55h]
  unsigned int v66; // [rsp+30h] [rbp-51h]
  unsigned int v67; // [rsp+30h] [rbp-51h]
  int v68; // [rsp+34h] [rbp-4Dh]
  unsigned int v69; // [rsp+34h] [rbp-4Dh]
  int v70; // [rsp+34h] [rbp-4Dh]
  unsigned int v71; // [rsp+38h] [rbp-49h]
  unsigned int v72; // [rsp+3Ch] [rbp-45h]
  int v73; // [rsp+3Ch] [rbp-45h]
  __int64 v74; // [rsp+40h] [rbp-41h]
  int v75; // [rsp+40h] [rbp-41h]
  __int64 v76; // [rsp+48h] [rbp-39h]
  int v77; // [rsp+48h] [rbp-39h]
  __int64 v78; // [rsp+50h] [rbp-31h]
  char *v79; // [rsp+58h] [rbp-29h]
  const WCHAR *v80; // [rsp+60h] [rbp-21h]
  char *v81; // [rsp+68h] [rbp-19h]
  char *v82; // [rsp+70h] [rbp-11h]
  __int64 v83; // [rsp+78h] [rbp-9h] BYREF
  int v84; // [rsp+80h] [rbp-1h]
  int v85; // [rsp+84h] [rbp+3h]
  unsigned int v86; // [rsp+88h] [rbp+7h]
  __int128 v87; // [rsp+90h] [rbp+Fh] BYREF
  int v88; // [rsp+A0h] [rbp+1Fh]
  int v91; // [rsp+100h] [rbp+7Fh] BYREF

  v91 = a4;
  v4 = *a1;
  if ( **a1 < 5u || *a3 < 5u )
    return 3221225659LL;
  if ( (v4[2] & 1) != 0 )
    return 3221225485LL;
  if ( !v4[3] )
    return 3221225485LL;
  v6 = a3[3];
  v66 = v6;
  if ( !v6 )
    return 3221225485LL;
  v64 = 0;
  v7 = 0;
  v8 = ApiSetValidateSchemaFormat(v4, v4[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ApiSetValidateSchemaFormat(a3, a3[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = 0LL;
  v10 = (unsigned int)a3[4];
  v74 = v10;
  while ( 1 )
  {
    v11 = (_DWORD *)((char *)&a3[6 * v9] + v10);
    if ( (*v11 & 4) == 0 )
      break;
    ++v64;
    v7 += (v11[2] + 3) & 0xFFFFFFFC;
LABEL_29:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v6 )
    {
      v24 = 24 * v64;
      v69 = v7 + 24 * v64 + v4[1] + 8 * v64;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v69, 0x68635341u);
      if ( PoolWithTag )
      {
        v26 = v4[4] + 24 * v4[3];
        v27 = v26;
        memmove(PoolWithTag, v4, v26);
        v28 = v24 + v26;
        v29 = v4[5] - v26;
        v30 = v29 + v28;
        v65 = v29 + v28;
        v91 = v29 + v28;
        memmove((char *)PoolWithTag + v28, (char *)v4 + v27, v29);
        memset((char *)PoolWithTag + v30, 0, v7);
        v31 = v7 + v30;
        memmove((char *)PoolWithTag + v31, (char *)v4 + (unsigned int)v4[5], (unsigned int)(8 * v4[3]));
        v32 = v69;
        PoolWithTag[1] = v69;
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
        v8 = ApiSetValidateSchemaFormat(PoolWithTag, v69);
        if ( v8 < 0 )
          goto LABEL_83;
        v41 = 0;
        v42 = 0LL;
        v71 = 0;
        v70 = 0;
        if ( a3[3] )
        {
          v43 = v64;
          do
          {
            v44 = 3 * v42;
            v45 = (char *)a3 + (unsigned int)a3[4];
            v82 = v45;
            v46 = *(_DWORD *)&v45[24 * v42 + 8];
            v47 = *(unsigned int *)&v45[24 * v42 + 4];
            v67 = v46;
            if ( (*(_DWORD *)&v45[24 * v42] & 4) != 0 )
            {
              if ( v41 >= v43 )
              {
LABEL_86:
                v8 = -2147483643;
                goto LABEL_83;
              }
              v48 = (char *)PoolWithTag + (unsigned int)PoolWithTag[4];
              v71 = v41 + 1;
              v49 = (unsigned int)PoolWithTag[3];
              v50 = 3 * v49;
              PoolWithTag[3] = v49 + 1;
              *(_OWORD *)&v48[8 * v50] = 0LL;
              *(_QWORD *)&v48[8 * v50 + 16] = 0LL;
              *(_DWORD *)&v48[8 * v50] = *(_DWORD *)&v45[24 * v42];
              *(_DWORD *)&v48[8 * v50 + 4] = v65;
              *(_DWORD *)&v48[8 * v50 + 8] = v46;
              *(_DWORD *)&v48[8 * v50 + 12] = v46;
              v8 = AsiAddDataToSchema(PoolWithTag, &v91, (char *)a3 + v47, v46);
              if ( v8 < 0 )
                goto LABEL_83;
              v65 = v91;
LABEL_78:
              v41 = v71;
            }
            else
            {
              v81 = (char *)a3 + v47;
              v51 = 0LL;
              v75 = 0;
              v73 = 0;
              if ( *(_DWORD *)&v45[8 * v44 + 20] )
              {
                while ( 1 )
                {
                  v52 = 5 * v51;
                  v53 = (char *)a3 + *(unsigned int *)&v45[8 * v44 + 16];
                  v78 = 5 * v51;
                  v79 = v53;
                  v54 = *(unsigned int *)&v53[20 * v51 + 16];
                  v55 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v53[20 * v51 + 12]);
                  v80 = v55;
                  v56 = (_WORD *)((char *)v55 + v54);
                  do
                  {
                    if ( (unsigned int)v54 <= 1 )
                      break;
                    LODWORD(v54) = v54 - 2;
                    --v56;
                  }
                  while ( *v56 != 45 );
                  if ( !((unsigned __int16)v54 >> 1) )
                    break;
                  v77 = *(_DWORD *)&v53[4 * v52 + 4];
                  v57 = ApiSetpSearchForApiSet(PoolWithTag, v55, (unsigned __int16)v54 >> 1);
                  if ( v57 )
                  {
                    v59 = v65;
                  }
                  else
                  {
                    if ( v71 >= v64 )
                      goto LABEL_86;
                    v58 = (unsigned int)PoolWithTag[3];
                    ++v71;
                    v57 = (__int64)&PoolWithTag[6 * v58] + (unsigned int)PoolWithTag[4];
                    PoolWithTag[3] = v58 + 1;
                    *(_OWORD *)v57 = 0LL;
                    *(_QWORD *)(v57 + 16) = 0LL;
                    *(_DWORD *)(v57 + 4) = v65;
                    *(_DWORD *)(v57 + 8) = *(_DWORD *)&v79[4 * v78 + 16];
                    *(_DWORD *)(v57 + 12) = v54;
                    v8 = AsiAddDataToSchema(PoolWithTag, &v91, v80, *(unsigned int *)&v79[4 * v78 + 16]);
                    if ( v8 < 0 )
                      goto LABEL_83;
                    *(_DWORD *)(v57 + 20) = 1;
                    v88 = 0;
                    *(_DWORD *)(v57 + 16) = v91;
                    v87 = 0LL;
                    v8 = AsiAddDataToSchema(PoolWithTag, &v91, &v87, 20LL);
                    if ( v8 < 0 )
                      goto LABEL_83;
                    v59 = v91;
                    v65 = v91;
                  }
                  if ( (*(_DWORD *)v57 & 1) == 0 )
                  {
                    v60 = v75;
                    if ( !v75 )
                    {
                      v75 = v59;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v91, v81, v67);
                      if ( v8 < 0 )
                        goto LABEL_83;
                      v60 = v75;
                      v65 = v91;
                    }
                    if ( !*(_DWORD *)(v57 + 20) )
                    {
                      v8 = -1073741811;
                      goto LABEL_83;
                    }
                    v61 = (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(v57 + 16));
                    if ( v61[4] && v77 )
                    {
                      v61[1] = v60;
                      v61[2] = v67;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v91, v61, (unsigned int)(20 * *(_DWORD *)(v57 + 20)));
                      if ( v8 < 0 )
                        goto LABEL_83;
                      v83 = 0LL;
                      v84 = 0;
                      *(_DWORD *)(v57 + 16) = v65;
                      v85 = v75;
                      v86 = v67;
                      v8 = AsiAddDataToSchema(PoolWithTag, &v91, &v83, 20LL);
                      if ( v8 < 0 )
                        goto LABEL_83;
                      ++*(_DWORD *)(v57 + 20);
                      AsiSortValueList(PoolWithTag, v57);
                      v65 = v91;
                    }
                    else
                    {
                      v61[1] = 0;
                      v61[2] = 0;
                      v61[3] = v60;
                      v61[4] = v67;
                      *(_DWORD *)(v57 + 20) = 1;
                    }
                  }
                  v45 = v82;
                  v51 = (unsigned int)(v73 + 1);
                  v73 = v51;
                  if ( (unsigned int)v51 >= *(_DWORD *)&v82[8 * v44 + 20] )
                  {
                    v43 = v64;
                    goto LABEL_78;
                  }
                }
                v8 = -1073740670;
                goto LABEL_83;
              }
            }
            v42 = (unsigned int)(v70 + 1);
            v70 = v42;
          }
          while ( (unsigned int)v42 < a3[3] );
        }
        if ( v64 && !(unsigned int)AsiPopulateHashes(PoolWithTag) )
        {
          v8 = -1073741823;
          goto LABEL_83;
        }
        v8 = ApiSetValidateSchemaFormat(PoolWithTag, v32);
        if ( v8 < 0 )
        {
LABEL_83:
          v62 = (ULONG_PTR)PoolWithTag;
        }
        else
        {
          v62 = (ULONG_PTR)v4;
          *a1 = PoolWithTag;
          *a2 = v32;
        }
        ExFreeHeapPool(v62);
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
  v91 = 0;
  v72 = v12;
  if ( !v12 )
    goto LABEL_29;
  v15 = (unsigned int)v11[4];
  v76 = v15;
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
    v68 = *(_DWORD *)((char *)a3 + v16 + 4);
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
        if ( *(_DWORD *)((char *)v4 + (unsigned int)v22[4] + 16) && v68 )
          v7 += 20 * v23 + 20;
      }
    }
    else
    {
      ++v64;
      v7 += ((v17 + 3) & 0xFFFFFFFC) + 20;
      if ( !v14 )
      {
        v14 = 1;
        v7 += (v11[2] + 3) & 0xFFFFFFFC;
      }
    }
    v15 = v76;
    v13 = (unsigned int)(v91 + 1);
    v91 = v13;
    if ( (unsigned int)v13 >= v72 )
    {
      v6 = v66;
      v10 = v74;
      goto LABEL_29;
    }
  }
  return (unsigned int)-1073740670;
}

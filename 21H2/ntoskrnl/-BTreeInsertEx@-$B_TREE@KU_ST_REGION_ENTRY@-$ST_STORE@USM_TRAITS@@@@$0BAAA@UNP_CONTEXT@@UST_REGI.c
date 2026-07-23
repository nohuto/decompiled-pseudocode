/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14028C864
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14024C84C (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14028C814 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14024C84C (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14024CF0C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14024D074 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     SmArrayGrow @ 0x1402A0534 (SmArrayGrow.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598A80 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        int **a1,
        __int64 a2,
        int *a3)
{
  int *v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  int **v10; // rsi
  char *v11; // rdi
  char v12; // cl
  int v13; // edx
  unsigned int v14; // r12d
  int *v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  char *v24; // r8
  int v25; // edx
  __int64 v26; // rax
  void **v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  void **v30; // rax
  bool v31; // cc
  struct NP_CONTEXT::NP_CTX *v32; // rcx
  int *v33; // rax
  __int64 v34; // rax
  void **v35; // rdx
  unsigned __int64 v36; // rcx
  void **v37; // rax
  struct NP_CONTEXT::NP_CTX *v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // ebp
  char v42; // al

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *((unsigned __int8 *)v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (int **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v33 = (int *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
                   (__int64)a1,
                   1u,
                   1);
    *a1 = v33;
    if ( !v33 )
      return (unsigned int)-1073741670;
    v10 = *(int ***)a2;
    *v10 = v33;
    v10[1] = *a1 + 4;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (char *)*v10;
  v12 = *((_BYTE *)*v10 + 3);
  v13 = **v10;
  v14 = v12 != 0 ? 1020 : 255;
  if ( (unsigned __int16)v13 >= v14 )
  {
    v17 = (char *)v10[1] - v11 - 16;
    v18 = v17 >> 2;
    v19 = v17 >> 4;
    if ( !v12 )
      LODWORD(v18) = v19;
    if ( v11 == (char *)*a1 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
              (__int64)a1,
              a2);
      v21 = (unsigned __int64)*(v10 - 1);
      v13 = *(_DWORD *)v11;
      v22 = v20;
      v23 = v21 + 32LL * ((v20 & 1) == 0) - 16;
    }
    if ( (unsigned __int16)v13 < v14 )
    {
      if ( (v22 & 1) != 0 )
      {
        v24 = (char *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
        v25 = v18 + (unsigned __int16)v13 - v14;
        if ( v11[3] )
        {
          if ( v25 > 0 )
            goto LABEL_19;
        }
        else
        {
          if ( v25 >= 0 )
            goto LABEL_19;
          ++v25;
        }
        v11 = v24;
        v25 += (unsigned __int16)*(_DWORD *)v24;
LABEL_19:
        if ( v11 == v24 )
          *(v10 - 1) = (int *)v23;
        else
          v21 = v23;
        goto LABEL_21;
      }
      if ( (int)v18 > (unsigned __int16)v13 )
      {
        v42 = v11[3];
        v41 = v18 - (unsigned __int16)v13;
        v11 = (char *)v22;
        *(v10 - 1) = (int *)v23;
LABEL_40:
        v25 = v41 - 1;
        if ( v42 )
          v25 = v41;
        goto LABEL_21;
      }
      v21 = v23;
      goto LABEL_48;
    }
    if ( v22 && v11[3] )
    {
      v34 = (__int64)*(v10 - 2);
      v35 = (void **)(v23 - 8);
      v36 = v34 + 16;
      v37 = (void **)(v34 + 8);
      v31 = v23 <= v36;
      v38 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v31 )
        v35 = v37;
      if ( **(_DWORD **)v38 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v38, v35);
    }
    v39 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
            (__int64)a1,
            a2);
    if ( v39 )
    {
      v10 = (int **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v40 = (unsigned __int16)*(_DWORD *)v11;
      v21 = (unsigned __int64)*(v10 - 1);
      if ( (int)v18 > v40 )
      {
        v41 = v18 - v40;
        v42 = v11[3];
        v11 = (char *)v39;
        *(v10 - 1) = (int *)(v21 + 16);
        goto LABEL_40;
      }
      v21 += 16LL;
LABEL_48:
      v25 = v18;
LABEL_21:
      *v10 = (int *)v11;
      v26 = v25;
      if ( v11[3] )
      {
        v27 = (void **)(v21 - 8);
        v10[1] = (int *)&v11[4 * v26 + 16];
        v28 = (__int64)*(v10 - 2);
        v29 = v28 + 16;
        v30 = (void **)(v28 + 8);
        v31 = v21 <= v29;
        v32 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
        if ( v31 )
          v27 = v30;
        if ( **(_DWORD **)v32 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v32, v27);
      }
      else
      {
        v10[1] = (int *)&v11[16 * v25 + 16];
      }
      v13 = *(_DWORD *)v11;
      v12 = v11[3];
      goto LABEL_7;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = v10[1];
  if ( v12 )
  {
    memmove(v15 + 1, v15, (size_t)&v11[4LL * (unsigned __int16)v13 + 16 - (_QWORD)v15]);
    *v15 = *a3;
    a1[1] = (int *)((char *)a1[1] + 1);
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)&v11[16 * ((unsigned __int16)v13 + 1LL) - (_QWORD)v15]);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}

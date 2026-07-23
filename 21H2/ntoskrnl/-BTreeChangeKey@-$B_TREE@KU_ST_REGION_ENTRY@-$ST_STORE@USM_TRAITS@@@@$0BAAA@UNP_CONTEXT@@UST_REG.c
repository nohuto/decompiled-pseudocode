/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14028E5B0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14028DFD8 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x14021F870 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14024E1E8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140251CD4 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598A80 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140598B40 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        _DWORD *a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r9
  __int64 *v5; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // eax
  int v11; // esi
  int v13; // eax
  _DWORD *v14; // r14
  unsigned __int64 v15; // r13
  __int64 *v16; // rcx
  unsigned int v17; // r8d
  int *v18; // rdx
  int v19; // r15d
  int v20; // eax
  int v21; // eax
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  __int128 v29; // [rsp+20h] [rbp-10h] BYREF
  int v30; // [rsp+78h] [rbp+48h] BYREF
  int v31; // [rsp+80h] [rbp+50h] BYREF
  void **v32; // [rsp+88h] [rbp+58h]

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v30 = a3;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16 * v4);
  v29 = 0LL;
  v8 = (int *)v5[1];
  v9 = *v5;
  v31 = *v8;
  LOBYTE(v10) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
  v11 = v10;
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v31 = v8[1];
      v30 = a3;
LABEL_6:
      LOBYTE(v13) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
      if ( v13 < 0 )
        goto LABEL_4;
      return 0LL;
    }
  }
  else if ( (unsigned __int64)v8 > v9 + 16 )
  {
    if ( !v10 )
    {
LABEL_4:
      *v8 = a3;
      return 1LL;
    }
    v30 = *(v8 - 1);
    v31 = a3;
    goto LABEL_6;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v10 > 0,
                        (__int64)&v29) )
    goto LABEL_4;
  v14 = (_DWORD *)*((_QWORD *)&v29 + 1);
  if ( v11 > 0 )
  {
    v31 = **((_DWORD **)&v29 + 1);
    v30 = a3;
    LOBYTE(v23) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
    if ( v23 < 0 )
      goto LABEL_4;
  }
  else if ( !v11 )
  {
    **((_DWORD **)&v29 + 1) = a3;
    goto LABEL_4;
  }
  v15 = (unsigned __int64)(a1 + 4);
  if ( v11 >= 0 && **(_DWORD **)((unsigned __int64)(a1 + 4) & -(__int64)(a1 != 0LL)) == -1 )
  {
    if ( **(_DWORD **)(v15 & -(__int64)(a1 != 0LL)) == -1 )
      v24 = *(_QWORD *)(v9 + 8);
    else
      v24 = 3358LL;
    v25 = *(_DWORD *)(v24 + 16);
    v31 = v25;
    v30 = a3;
    LOBYTE(v26) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
    if ( v26 < 0 )
    {
      *v14 = v25;
      goto LABEL_4;
    }
    return 0LL;
  }
  v16 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
          (__int64 *)&v29,
          v11 > 0,
          0LL);
  v32 = (void **)v16;
  if ( **(_DWORD **)(v15 & -(__int64)(a1 != 0LL)) == -1 )
    v18 = (int *)*v16;
  else
    v18 = (int *)NP_CONTEXT::NpLeafRefInternal(
                   (struct NP_CONTEXT::NP_CTX *)(v15 & -(__int64)(a1 != 0LL)),
                   (void **)v16,
                   v17);
  if ( v18 )
  {
    v19 = 0;
    if ( v11 >= 0 )
    {
      v27 = v18[4];
      v31 = v27;
      v30 = a3;
      LOBYTE(v28) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
      if ( v28 >= 0 )
      {
LABEL_22:
        v22 = (struct NP_CONTEXT::NP_CTX *)(v15 & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v22 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v22, v32);
        if ( v19 )
          goto LABEL_4;
        return 0LL;
      }
      *v14 = v27;
    }
    else
    {
      v20 = *v18;
      v31 = a3;
      v30 = v18[(unsigned __int16)v20 + 3];
      LOBYTE(v21) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v30, &v31);
      if ( v21 >= 0 )
        goto LABEL_22;
      *v14 = a3;
    }
    v19 = 1;
    goto LABEL_22;
  }
  return 0xFFFFFFFFLL;
}

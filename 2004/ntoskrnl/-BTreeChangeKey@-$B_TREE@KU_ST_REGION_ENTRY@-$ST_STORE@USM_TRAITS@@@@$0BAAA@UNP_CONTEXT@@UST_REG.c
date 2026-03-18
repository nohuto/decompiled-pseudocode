/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140307154
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140306B7C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14030A9E0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x140332100 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140360AF4 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140593380 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140593440 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r9
  __int64 *v5; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  _DWORD *v12; // r14
  __int64 v13; // r13
  void **v14; // rcx
  unsigned int v15; // r8d
  int *v16; // rdx
  int v17; // r15d
  int v18; // eax
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  __int64 v20; // rax
  int v21; // esi
  int v22; // esi
  __int128 v23; // [rsp+20h] [rbp-10h] BYREF
  int v24; // [rsp+78h] [rbp+48h] BYREF
  int v25; // [rsp+80h] [rbp+50h] BYREF
  void **v26; // [rsp+88h] [rbp+58h]

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v24 = a3;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16 * v4);
  v23 = 0LL;
  v8 = (int *)v5[1];
  v9 = *v5;
  v25 = *v8;
  v10 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25);
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v25 = v8[1];
      v24 = a3;
LABEL_6:
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25) < 0 )
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
    v24 = *(v8 - 1);
    v25 = a3;
    goto LABEL_6;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v10 > 0,
                        &v23) )
    goto LABEL_4;
  v12 = (_DWORD *)*((_QWORD *)&v23 + 1);
  if ( v10 > 0 )
  {
    v25 = **((_DWORD **)&v23 + 1);
    v24 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25) < 0 )
      goto LABEL_4;
  }
  else if ( !v10 )
  {
    **((_DWORD **)&v23 + 1) = a3;
    goto LABEL_4;
  }
  v13 = a1 + 16;
  if ( v10 >= 0 && **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
  {
    if ( **(_DWORD **)(v13 & -(__int64)(a1 != 0)) == -1 )
      v20 = *(_QWORD *)(v9 + 8);
    else
      v20 = 3358LL;
    v21 = *(_DWORD *)(v20 + 16);
    v25 = v21;
    v24 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25) < 0 )
    {
      *v12 = v21;
      goto LABEL_4;
    }
    return 0LL;
  }
  v14 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   &v23,
                   v10 > 0,
                   0LL);
  v26 = v14;
  if ( **(_DWORD **)(v13 & -(__int64)(a1 != 0)) == -1 )
    v16 = (int *)*v14;
  else
    v16 = (int *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0)), v14, v15);
  if ( v16 )
  {
    v17 = 0;
    if ( v10 >= 0 )
    {
      v22 = v16[4];
      v25 = v22;
      v24 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25) >= 0 )
      {
LABEL_22:
        v19 = (struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0));
        if ( **(_DWORD **)v19 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v19, v26);
        if ( v17 )
          goto LABEL_4;
        return 0LL;
      }
      *v12 = v22;
    }
    else
    {
      v18 = *v16;
      v25 = a3;
      v24 = v16[(unsigned __int16)v18 + 3];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v24, &v25) >= 0 )
        goto LABEL_22;
      *v12 = a3;
    }
    v17 = 1;
    goto LABEL_22;
  }
  return 0xFFFFFFFFLL;
}

/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403901F0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14038FC10 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140382E40 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1403839C0 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x1403909DC (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405F6710 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405F67D0 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        _DWORD *a1,
        __int64 a2,
        int a3)
{
  int v3; // r9d
  __int64 *v7; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // eax
  int v11; // esi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // r8d
  void **v18; // r13
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  int *v20; // rdx
  int v21; // r15d
  int v22; // eax
  int v23; // eax
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // eax
  __int128 v31; // [rsp+20h] [rbp-10h] BYREF
  int v32; // [rsp+78h] [rbp+48h] BYREF
  int v33; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp+58h]

  v3 = *(_DWORD *)(a2 + 24);
  v32 = a3;
  v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v3 - 1));
  v31 = 0LL;
  v8 = (int *)v7[1];
  v9 = *v7;
  v33 = *v8;
  LOBYTE(v10) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
  v11 = v10;
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v33 = v8[1];
      v32 = a3;
LABEL_6:
      LOBYTE(v13) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
      if ( v13 < 0 )
        goto LABEL_4;
      return 0LL;
    }
    v14 = 1;
  }
  else
  {
    if ( (unsigned __int64)v8 > v9 + 16 )
    {
      if ( !v10 )
      {
LABEL_4:
        *v8 = a3;
        return 1LL;
      }
      v32 = *(v8 - 1);
      v33 = a3;
      goto LABEL_6;
    }
    v14 = 0;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v14,
                        (__int64)&v31) )
    goto LABEL_4;
  v15 = (_DWORD *)*((_QWORD *)&v31 + 1);
  if ( v11 > 0 )
  {
    v33 = **((_DWORD **)&v31 + 1);
    v32 = a3;
    LOBYTE(v25) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
    if ( v25 < 0 )
      goto LABEL_4;
    v34 = (unsigned __int64)(a1 + 4);
    if ( **(_DWORD **)((unsigned __int64)(a1 + 4) & -(__int64)(a1 != 0LL)) == -1 )
    {
      v26 = *(_QWORD *)(v9 + 8);
      v32 = a3;
      v27 = *(_DWORD *)(v26 + 16);
      v33 = v27;
      LOBYTE(v28) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
      if ( v28 < 0 )
      {
        *v15 = v27;
        goto LABEL_4;
      }
      return 0LL;
    }
    v16 = 1LL;
  }
  else
  {
    if ( !v11 )
    {
      **((_DWORD **)&v31 + 1) = a3;
      goto LABEL_4;
    }
    v34 = (unsigned __int64)(a1 + 4);
    v16 = 0LL;
  }
  v18 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   &v31,
                   v16,
                   0LL);
  v19 = (struct NP_CONTEXT::NP_CTX *)(v34 & -(__int64)(a1 != 0LL));
  if ( **(_DWORD **)v19 == -1 )
    v20 = (int *)*v18;
  else
    v20 = (int *)NP_CONTEXT::NpLeafRefInternal(v19, v18, v17);
  if ( v20 )
  {
    v21 = 0;
    if ( v11 >= 0 )
    {
      v29 = v20[4];
      v33 = v29;
      v32 = a3;
      LOBYTE(v30) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
      if ( v30 >= 0 )
      {
LABEL_24:
        v24 = (struct NP_CONTEXT::NP_CTX *)(v34 & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v24 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v24, v18);
        if ( v21 )
          goto LABEL_4;
        return 0LL;
      }
      *v15 = v29;
    }
    else
    {
      v22 = *v20;
      v33 = a3;
      v32 = v20[(unsigned __int16)v22 + 3];
      LOBYTE(v23) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v32, &v33);
      if ( v23 >= 0 )
        goto LABEL_24;
      *v15 = a3;
    }
    v21 = 1;
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}

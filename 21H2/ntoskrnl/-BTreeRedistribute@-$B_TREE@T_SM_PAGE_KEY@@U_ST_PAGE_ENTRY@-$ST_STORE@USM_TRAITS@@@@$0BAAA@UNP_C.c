/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402494A4
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14028CDF0 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028EDE8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140598B40 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r8
  __int64 v4; // r15
  __int64 v5; // r11
  _DWORD *v6; // r14
  unsigned int v7; // esi
  void **v8; // rbx
  void **v9; // r9
  unsigned __int64 v10; // rax
  _DWORD *v11; // rbp
  unsigned __int64 v12; // r12
  _DWORD *v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edx
  _DWORD *v18; // rbx
  unsigned int v19; // esi
  _DWORD *v20; // r10
  char v21; // r9
  __int64 v22; // r11
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // edx
  char *v29; // r9
  char *v30; // r15
  char v31; // al
  size_t v32; // r8
  struct NP_CONTEXT::NP_CTX *v34; // rcx
  int v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]
  _DWORD *v42; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v43; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v44; // [rsp+90h] [rbp+18h]
  char *v45; // [rsp+98h] [rbp+20h]

  v43 = 0LL;
  v42 = 0LL;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16LL;
  v5 = *(_QWORD *)(v3 - 16);
  v6 = *(_DWORD **)(v3 - 8);
  v7 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    v42 = *(_DWORD **)v3;
    v8 = (void **)&v43;
    v9 = (void **)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v9 = (void **)(v5 + 8);
  }
  else
  {
    v43 = *(_DWORD **)v3;
    v9 = (void **)(v6 + 2);
    v8 = (void **)&v42;
    v2 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v10 = (unsigned __int64)*v9;
    *v8 = *v9;
  }
  else
  {
    v34 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v34 == -1 )
      v10 = (unsigned __int64)*v9;
    else
      v10 = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v34, v9, 0);
    *v8 = (void *)v10;
    if ( !v10 )
      return 0LL;
  }
  v11 = v42;
  v12 = v10 | v2;
  v13 = v43;
  v14 = (unsigned __int16)*v42;
  v15 = (unsigned __int16)*v43;
  v16 = v15 + v14;
  if ( v15 + v14 >= v7 && v16 < 2 * v7 - 1 )
  {
    v17 = v16 >> 1;
    if ( v15 > v14 )
    {
      v18 = v43;
      v19 = v15 - v17;
      v20 = v43;
      v13 = v42;
    }
    else
    {
      v18 = v42;
      v19 = v17 - v15;
      v20 = v43;
    }
    v21 = *((_BYTE *)v18 + 3);
    v44 = v20;
    LOBYTE(v42) = v21;
    v22 = v14 < v15 ? v17 : 0;
    v23 = 0;
    v40 = v22;
    if ( v15 <= v14 )
      v23 = v15;
    v24 = v23;
    v41 = v23;
    if ( v21 )
    {
      v25 = 8;
      v4 = 8LL;
      v26 = 8LL;
    }
    else
    {
      v25 = 16;
      v26 = 16LL;
    }
    v27 = v26 * v23;
    v28 = v25 * v19;
    v29 = (char *)v13 + v27 + 16;
    v30 = (char *)v18 + v22 * v4 + 16;
    v45 = v29;
    LODWORD(v43) = v25 * v19;
    if ( v18 == v20 )
    {
      memmove(&v29[v28], v29, v25 * (unsigned __int16)*v13);
      v31 = *((_BYTE *)v18 + 3);
      v28 = (unsigned int)v43;
      v29 = v45;
      v20 = v44;
      v22 = v40;
      v24 = v41;
    }
    else
    {
      v31 = (char)v42;
      LODWORD(v43) = v25 * v19;
    }
    if ( v31 )
    {
      v32 = v28;
    }
    else
    {
      v35 = *v6;
      v36 = v19 - 1;
      if ( v18 == v20 )
      {
        v37 = 2LL * v36;
        v13[4 * v36 + 4] = v35;
        v38 = *((_QWORD *)v13 + 1);
      }
      else
      {
        v37 = 2 * v24;
        v29 += v25;
        v13[2 * v37 + 4] = v35;
        v38 = *((_QWORD *)v18 + 1);
      }
      *(_QWORD *)&v13[2 * v37 + 6] = v38;
      if ( v18 == v20 )
      {
        v39 = 2 * v22;
        v30 += v25;
        *v6 = v18[2 * v39 + 4];
        *((_QWORD *)v13 + 1) = *(_QWORD *)&v18[2 * v39 + 6];
      }
      else
      {
        v36 = v19 - 1;
        *v6 = v18[4 * v19];
        *((_QWORD *)v18 + 1) = *(_QWORD *)&v18[4 * v19 + 2];
      }
      v32 = v25 * v36;
    }
    memmove(v29, v30, v32);
    *(_WORD *)v13 += v19;
    *(_WORD *)v18 -= v19;
    if ( v18 == v11 )
      memmove(v30, &v30[(unsigned int)v43], v25 * (unsigned __int16)*v18);
    if ( *((_BYTE *)v11 + 3) )
      *v6 = v11[4];
  }
  return v12;
}

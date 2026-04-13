/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18007831C
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180078134 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180017090 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800176E0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180068BC8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     memcpy_0 @ 0x1800CB698 (memcpy_0.c)
 *     memmove_0 @ 0x1800CB6A4 (memmove_0.c)
 */

char *__fastcall std::wstring::replace(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char *v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  char *v19; // rdx
  char *v20; // r9
  char *v21; // rdx
  char *v22; // rax
  char *v23; // rax
  char *v24; // rdx
  char *v25; // rax
  char *v26; // rdx
  char *v27; // rdx
  char *v28; // rcx
  char *v29; // rcx
  size_t v30; // r8
  char *v31; // rdx
  char *v32; // r9
  char *v33; // rdx
  bool v34; // cf
  char *v35; // rax
  char *v36; // rax
  unsigned __int64 v37; // r15
  char *v38; // rax
  char *v39; // rdx
  char *v40; // rax
  char *v41; // rdx
  char *v42; // rax
  char *v43; // rax
  char *v44; // rdx
  char *v45; // rdx
  char *v46; // rax
  _WORD *v47; // rax
  unsigned __int64 v49; // [rsp+50h] [rbp+8h]

  v7 = a4;
  v8 = *((_QWORD *)a1 + 2);
  v9 = a3;
  if ( v8 < a2 || (v11 = *((_QWORD *)a4 + 2), v12 = a5, v11 < a5) )
    std::wstring::_Xran();
  v13 = a6;
  v14 = v8 - a2;
  if ( v8 - a2 < a3 )
    v9 = v8 - a2;
  v15 = v11 - a5;
  if ( v15 < a6 )
    v13 = v15;
  v16 = v8 - v9;
  if ( ~v13 <= v8 - v9 )
    std::wstring::_Xlen();
  v17 = v14 - v9;
  v49 = v16 + v13;
  if ( v8 < v16 + v13 )
    std::wstring::_Grow((void **)a1, v16 + v13, 0);
  v18 = *((_QWORD *)a1 + 3);
  if ( a1 != v7 )
  {
    if ( v18 < 8 )
      v19 = a1;
    else
      v19 = *(char **)a1;
    v20 = &v19[2 * a2 + 2 * v9];
    if ( v18 < 8 )
      v21 = a1;
    else
      v21 = *(char **)a1;
    if ( v17 )
    {
      memmove_0(&v21[2 * a2 + 2 * v13], v20, 2 * v17);
      v18 = *((_QWORD *)a1 + 3);
    }
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v7 = *(char **)v7;
    if ( v18 < 8 )
      v22 = a1;
    else
      v22 = *(char **)a1;
    if ( v13 )
      memcpy_0(&v22[2 * a2], &v7[2 * a5], 2 * v13);
    goto LABEL_99;
  }
  if ( v13 > v9 )
  {
    if ( a5 > a2 )
    {
      v37 = a2 + v9;
      if ( a2 + v9 > a5 )
      {
        if ( v18 < 8 )
          v40 = a1;
        else
          v40 = *(char **)a1;
        v41 = &v40[2 * a5];
        if ( v18 < 8 )
          v42 = a1;
        else
          v42 = *(char **)a1;
        if ( v9 )
        {
          memmove_0(&v42[2 * a2], v41, 2 * v9);
          v18 = *((_QWORD *)a1 + 3);
        }
        if ( v18 < 8 )
          v43 = a1;
        else
          v43 = *(char **)a1;
        if ( v18 < 8 )
          v44 = a1;
        else
          v44 = *(char **)a1;
        if ( v17 )
        {
          memmove_0(&v44[2 * a2 + 2 * v13], &v43[2 * v37], 2 * v17);
          v18 = *((_QWORD *)a1 + 3);
        }
        if ( v18 < 8 )
          v45 = a1;
        else
          v45 = *(char **)a1;
        v27 = &v45[2 * a5 + 2 * v13];
        if ( v18 < 8 )
          v46 = a1;
        else
          v46 = *(char **)a1;
        v13 -= v9;
        if ( !v13 )
          goto LABEL_99;
        v29 = &v46[2 * v37];
LABEL_97:
        v30 = 2 * v13;
        goto LABEL_98;
      }
      if ( v18 < 8 )
        v38 = a1;
      else
        v38 = *(char **)a1;
      if ( v18 < 8 )
        v39 = a1;
      else
        v39 = *(char **)a1;
      if ( v17 )
      {
        memmove_0(&v39[2 * a2 + 2 * v13], &v38[2 * v37], 2 * v17);
        v18 = *((_QWORD *)a1 + 3);
      }
      if ( v18 < 8 )
        v35 = a1;
      else
        v35 = *(char **)a1;
      v12 = v13 + a5 - v9;
      v34 = v18 < 8;
    }
    else
    {
      if ( v18 < 8 )
        v31 = a1;
      else
        v31 = *(char **)a1;
      v32 = &v31[2 * a2 + 2 * v9];
      if ( v18 < 8 )
        v33 = a1;
      else
        v33 = *(char **)a1;
      if ( v17 )
      {
        memmove_0(&v33[2 * a2 + 2 * v13], v32, 2 * v17);
        v18 = *((_QWORD *)a1 + 3);
      }
      v34 = v18 < 8;
      if ( v18 < 8 )
        v35 = a1;
      else
        v35 = *(char **)a1;
    }
    v27 = &v35[2 * v12];
    if ( v34 )
      v36 = a1;
    else
      v36 = *(char **)a1;
    if ( !v13 )
      goto LABEL_99;
    v29 = &v36[2 * a2];
    goto LABEL_97;
  }
  if ( v18 < 8 )
    v23 = a1;
  else
    v23 = *(char **)a1;
  v24 = &v23[2 * a5];
  if ( v18 < 8 )
    v25 = a1;
  else
    v25 = *(char **)a1;
  if ( v13 )
  {
    memmove_0(&v25[2 * a2], v24, 2 * v13);
    v18 = *((_QWORD *)a1 + 3);
  }
  if ( v18 < 8 )
    v26 = a1;
  else
    v26 = *(char **)a1;
  v27 = &v26[2 * a2 + 2 * v9];
  if ( v18 < 8 )
    v28 = a1;
  else
    v28 = *(char **)a1;
  if ( v17 )
  {
    v29 = &v28[2 * a2 + 2 * v13];
    v30 = 2 * v17;
LABEL_98:
    memmove_0(v29, v27, v30);
  }
LABEL_99:
  if ( *((_QWORD *)a1 + 3) < 8uLL )
    v47 = a1;
  else
    v47 = *(_WORD **)a1;
  *((_QWORD *)a1 + 2) = v49;
  v47[v49] = 0;
  return a1;
}

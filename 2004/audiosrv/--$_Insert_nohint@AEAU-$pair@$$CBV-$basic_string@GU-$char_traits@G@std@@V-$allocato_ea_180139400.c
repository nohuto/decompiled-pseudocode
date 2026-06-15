/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180139400
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180138F28 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@1@Z @ 0x180138DB4 (--$_Insert_at@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5)
{
  _QWORD *v8; // r15
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned __int64 v12; // r14
  char *v13; // rcx
  char *v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  signed __int64 v17; // r8
  unsigned __int16 v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int16 v31; // di
  int v32; // eax
  bool v33; // sf
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  int v37; // [rsp+20h] [rbp-38h]
  __int64 v38; // [rsp+60h] [rbp+8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  LOBYTE(v11) = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *((_QWORD *)a4 + 2);
    do
    {
      v9 = v10;
      v13 = (char *)(v10 + 32);
      if ( *(_QWORD *)(v10 + 56) >= 8uLL )
        v13 = *(char **)(v10 + 32);
      v14 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v14 = *(char **)a4;
      v15 = *(_QWORD *)(v10 + 48);
      v16 = v15;
      if ( v15 >= v12 )
        v16 = *((_QWORD *)a4 + 2);
      if ( v16 )
      {
        v17 = v14 - v13;
        while ( 1 )
        {
          v18 = *(_WORD *)&v13[v17];
          if ( v18 != *(_WORD *)v13 )
            break;
          v13 += 2;
          if ( !--v16 )
            goto LABEL_13;
        }
        v19 = v18 < *(_WORD *)v13 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v19 = 0;
      }
      if ( !v19 )
      {
        if ( v12 >= v15 )
          v19 = v12 > v15;
        else
          v19 = -1;
      }
      v11 = v19 >> 31;
      if ( (_BYTE)v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  v20 = v9;
  if ( (_BYTE)v11 )
  {
    if ( v9 == *v8 )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                         a1,
                         &v38,
                         1,
                         (_QWORD *)v9,
                         v37,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    if ( *(_BYTE *)(v9 + 25) )
    {
      v20 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v22 = *(_QWORD *)v9;
      if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
      {
        v23 = *(_QWORD *)(v9 + 8);
        if ( !*(_BYTE *)(v23 + 25) )
        {
          v24 = v9;
          do
          {
            if ( v24 != *(_QWORD *)v23 )
              break;
            v20 = v23;
            v23 = *(_QWORD *)(v23 + 8);
            v24 = v20;
          }
          while ( !*(_BYTE *)(v23 + 25) );
        }
        if ( !*(_BYTE *)(v20 + 25) )
          v20 = v23;
      }
      else
      {
        do
        {
          v20 = v22;
          v22 = *(_QWORD *)(v22 + 16);
        }
        while ( !*(_BYTE *)(v22 + 25) );
      }
    }
  }
  v25 = (unsigned __int16 *)a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v25 = *(unsigned __int16 **)a4;
  v26 = v20 + 32;
  if ( *(_QWORD *)(v20 + 56) >= 8uLL )
    v26 = *(_QWORD *)(v20 + 32);
  v27 = *((_QWORD *)a4 + 2);
  v28 = *(_QWORD *)(v20 + 48);
  v29 = v27;
  if ( v27 >= v28 )
    v29 = *(_QWORD *)(v20 + 48);
  if ( v29 )
  {
    v30 = v26 - (_QWORD)v25;
    while ( 1 )
    {
      v31 = *(unsigned __int16 *)((char *)v25 + v30);
      if ( v31 != *v25 )
        break;
      ++v25;
      if ( !--v29 )
        goto LABEL_46;
    }
    v32 = v31 < *v25 ? -1 : 1;
  }
  else
  {
LABEL_46:
    v32 = 0;
  }
  v33 = v32 < 0;
  if ( v32 )
  {
LABEL_51:
    if ( !v33 )
      goto LABEL_52;
LABEL_57:
    *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                       a1,
                       &v38,
                       v11,
                       (_QWORD *)v9,
                       v37,
                       a5);
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  if ( v28 < v27 )
    goto LABEL_57;
  if ( v28 <= v27 )
  {
    v33 = 0;
    goto LABEL_51;
  }
LABEL_52:
  v34 = a5;
  v35 = *(_QWORD *)(a5 + 88);
  if ( v35 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a5 + 64), (const struct std::nothrow_t *)(2 * v35 + 2));
  *(_QWORD *)(v34 + 80) = 0LL;
  *(_QWORD *)(v34 + 88) = 7LL;
  *(_WORD *)(v34 + 64) = 0;
  v36 = *(_QWORD *)(v34 + 56);
  if ( v36 >= 8 )
    std::_Deallocate<16,0>(*(void **)(v34 + 32), (const struct std::nothrow_t *)(2 * v36 + 2));
  *(_QWORD *)(v34 + 48) = 0LL;
  *(_QWORD *)(v34 + 56) = 7LL;
  *(_WORD *)(v34 + 32) = 0;
  std::_Deallocate<16,0>((void *)v34, (const struct std::nothrow_t *)0x60);
  *(_QWORD *)a2 = v20;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}

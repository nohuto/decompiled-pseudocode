/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18001E750
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800326D0 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800331AC (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800353D4 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180046444 (-HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  struct _HAM_DEPENDENCY_LINK *v6; // rdx
  char *v7; // r9
  struct _HAM_DEPENDENCY_LINK *v8; // rdx
  struct _HAM_DEPENDENCY_LINK *v9; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rcx
  struct _HAM_DEPENDENCY_LINK *v11; // rdx
  struct _HAM_DEPENDENCY_LINK *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  struct _RTL_BALANCED_NODE *v16; // rdi
  int v17; // eax
  struct _RTL_BALANCED_NODE *v18; // rbx
  struct _RTL_BALANCED_NODE *v19; // rsi
  int v20; // eax
  struct _RTL_BALANCED_NODE *v21; // r9
  struct _RTL_BALANCED_NODE *ParentValue; // rdx
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v23; // r8
  struct _RTL_BALANCED_NODE **v24; // rbx
  int v25; // eax
  int v26; // eax
  struct _RTL_BALANCED_NODE *v27; // rcx
  struct _RTL_BALANCED_NODE *v28; // rbp
  unsigned int v29; // eax
  unsigned int v30; // edx
  struct _RTL_BALANCED_NODE *v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rdi
  struct _RTL_BALANCED_NODE *v34; // rdx
  struct _HAM_DEPENDENCY_LINK *v35; // r9
  struct _HAM_DEPENDENCY_LINK *j; // rcx
  struct _HAM_DEPENDENCY_LINK *v37; // rax
  struct _HAM_DEPENDENCY_LINK *v38; // rdx
  struct _HAM_DEPENDENCY_LINK *v39; // rdx
  __int64 v40; // rax
  struct _RTL_BALANCED_NODE *v41; // rsi
  void *v42; // rdi
  int v43; // r15d
  struct _RTL_BALANCED_NODE *v44; // rax
  __int64 v45; // rax
  struct _HAM_DEPENDENCY_LINK *v46; // r13
  struct _HAM_DEPENDENCY_LINK *v47; // rdx
  char *v48; // r9
  char v49; // dl
  __int64 v50; // rcx
  __int64 v51; // r8
  char v52; // dl
  int v53; // eax
  struct _HAM_DEPENDENCY_LINK *v54; // rdx
  struct _HAM_DEPENDENCY_LINK *v55; // r8
  struct _HAM_DEPENDENCY_LINK *k; // rcx
  struct _HAM_DEPENDENCY_LINK *v57; // rdx
  struct _HAM_DEPENDENCY_LINK *v58; // rdx
  struct _RTL_BALANCED_NODE *v59; // r15
  __int64 v60; // r8
  __int64 v61; // rax
  struct _RTL_BALANCED_NODE *v62; // rdi
  void *v63; // rsi
  int v64; // ebp
  struct _RTL_BALANCED_NODE *v65; // rax
  struct _RTL_BALANCED_NODE *v66; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = (unsigned __int64)a1 + 72;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)(v2 ^ (v3 | 1));
  }
  else
  {
    NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  if ( NextLink )
  {
    while ( 1 )
    {
      v6 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
      v7 = 0LL;
      if ( v6 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
        v7 = (char *)v6 - 16;
      if ( v7 )
        break;
      NextLink = HampDepGroupGetNextLink(NextLink);
      if ( !NextLink )
        goto LABEL_18;
    }
    while ( 1 )
    {
      do
      {
        v8 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 2);
        v9 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 1);
        *((_DWORD *)v7 + 8) = 0;
        v7 = 0LL;
        if ( v8 != (struct _HAM_DEPENDENCY_LINK *)((char *)v9 + 64) )
          v7 = (char *)v8 - 16;
      }
      while ( v7 );
      i = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v9 + 1);
      if ( i )
      {
        v11 = *(struct _HAM_DEPENDENCY_LINK **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = v11;
            v11 = *(struct _HAM_DEPENDENCY_LINK **)v11;
          }
          while ( v11 );
        }
      }
      else
      {
        for ( i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v9 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)i == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v12 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
        v7 = 0LL;
        if ( v12 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
          v7 = (char *)v12 - 16;
        if ( v7 )
          break;
        i = HampDepGroupGetNextLink(i);
        if ( !i )
          goto LABEL_18;
      }
    }
  }
LABEL_18:
  while ( !HampDepHostStackIsEmpty((struct _HAM_DEP_HOST_STACK *)a2) )
  {
    v14 = *(_QWORD *)(a2 + 8);
    if ( (v14 & 1) != 0 )
    {
      if ( v14 == 1 )
        v15 = 0LL;
      else
        v15 = v14 ^ (a2 | 1);
    }
    else
    {
      v15 = *(_QWORD *)(a2 + 8);
    }
    RtlRbRemoveNode(v13, v15);
    *(_QWORD *)(v15 + 16) = -1LL;
    v16 = *(struct _RTL_BALANCED_NODE **)v3;
    v66 = *(struct _RTL_BALANCED_NODE **)(v15 - 776);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = HampDepGroupCompareDependencyLinkForHost(&v66, v16);
        if ( !v17 )
          break;
        if ( v17 < 0 )
          v16 = v16->Children[0];
        else
          v16 = v16->Children[1];
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = v16->Children[0];
      v19 = 0LL;
      if ( v16->Children[0] )
      {
        while ( 1 )
        {
          v20 = HampDepGroupCompareDependencyLinkForHost(&v66, v18);
          if ( v20 >= 0 )
          {
            if ( v20 > 0 )
            {
              v18 = v18->Children[1];
              goto LABEL_32;
            }
            v19 = v18;
          }
          v18 = v18->Children[0];
LABEL_32:
          if ( !v18 )
          {
            if ( v19 )
              v16 = v19;
            break;
          }
        }
      }
      v21 = v66;
      do
      {
        if ( v16[1].Children[0] != v21 )
          break;
        ParentValue = (struct _RTL_BALANCED_NODE *)v16[2].ParentValue;
        v23 = &v16[2].16;
        v24 = 0LL;
        if ( ParentValue != (struct _RTL_BALANCED_NODE *)&v16[2].16 )
          v24 = &ParentValue[-1].Children[1];
        if ( v24 )
        {
          while ( 1 )
          {
            if ( *((_BYTE *)v24 + 40) != 3 )
            {
              v25 = *((_DWORD *)v24 + 9);
              *((_DWORD *)v24 + 8) |= 8u;
              v26 = v25 & 1;
              v27 = *v24;
              if ( (!*v24 || (*(_BYTE *)&v27[22].16 & 8) == 0) && !v26 )
              {
                v28 = v27[3].Children[1];
                v29 = (*(_DWORD *)(v15 + 24) >> 2) & 3;
                v30 = (LODWORD(v28[32].Children[0]) >> 2) & 3;
                if ( v30 > v29 )
                  v29 = (LODWORD(v28[32].Children[0]) >> 2) & 3;
                LODWORD(v28[32].Children[0]) = (4 * v29) | (__int64)v28[32].Children[0] & 0xFFFFFFF3;
                v31 = *v24;
                v31[18].Children[0] = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v31[18].Children[0] | 0x20);
                LODWORD(v31[20].Children[0]) ^= (LODWORD(v31[20].Children[0]) ^ (LODWORD(v28[32].Children[0]) >> 2)) & 3;
                v32 = (unsigned int)v28[32].Children[0];
                v33 = v32;
                if ( (v32 & 2) != 0 )
                {
                  if ( v30 < ((v32 >> 2) & 3) )
                  {
                    v59 = v28 + 31;
                    RtlRbRemoveNode(a2, &v28[31]);
                    v28[31].ParentValue = -1LL;
                    v61 = *(_QWORD *)(a2 + 8);
                    v62 = *(struct _RTL_BALANCED_NODE **)a2;
                    v63 = (void *)((LODWORD(v28[32].Children[0]) >> 2) & 3);
                    if ( (v61 & 1) != 0 && v62 )
                      v62 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v62);
                    LOBYTE(v60) = 0;
                    v64 = v61 & 1;
                    if ( v62 )
                    {
                      while ( 1 )
                      {
                        if ( (int)HampDepHostStackCompareHosts(v63, v62) < 0 )
                        {
                          v65 = v62->Children[0];
                          if ( v64 )
                          {
                            if ( !v65 )
                              goto LABEL_153;
                            v65 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v62 ^ (unsigned __int64)v65);
                          }
                          if ( !v65 )
                          {
LABEL_153:
                            LOBYTE(v60) = 0;
                            break;
                          }
                        }
                        else
                        {
                          v65 = v62->Children[1];
                          if ( v64 )
                          {
                            if ( !v65 )
                              goto LABEL_154;
                            v65 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v62 ^ (unsigned __int64)v65);
                          }
                          if ( !v65 )
                          {
LABEL_154:
                            LOBYTE(v60) = 1;
                            break;
                          }
                        }
                        v62 = v65;
                      }
                    }
                    RtlRbInsertNodeEx(a2, v62, v60, v59);
                  }
                }
                else
                {
                  v40 = *(_QWORD *)(a2 + 8);
                  v41 = *(struct _RTL_BALANCED_NODE **)a2;
                  v42 = (void *)((v33 >> 2) & 3);
                  if ( (v40 & 1) != 0 )
                  {
                    if ( v41 )
                      v41 = (struct _RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v41);
                    else
                      v41 = 0LL;
                  }
                  LOBYTE(v23) = 0;
                  v43 = v40 & 1;
                  if ( v41 )
                  {
                    while ( 1 )
                    {
                      if ( (int)HampDepHostStackCompareHosts(v42, v41) < 0 )
                      {
                        v44 = v41->Children[0];
                        if ( v43 )
                        {
                          if ( !v44 )
                            goto LABEL_85;
                          v44 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v41 ^ (unsigned __int64)v44);
                        }
                        if ( !v44 )
                        {
LABEL_85:
                          LOBYTE(v23) = 0;
                          break;
                        }
                      }
                      else
                      {
                        v44 = v41->Children[1];
                        if ( v43 )
                        {
                          if ( !v44 )
                            goto LABEL_86;
                          v44 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v41 ^ (unsigned __int64)v44);
                        }
                        if ( !v44 )
                        {
LABEL_86:
                          LOBYTE(v23) = 1;
                          break;
                        }
                      }
                      v41 = v44;
                    }
                  }
                  RtlRbInsertNodeEx(a2, v41, v23, &v28[31]);
                  LODWORD(v28[32].Children[0]) |= 2u;
                }
              }
            }
            v34 = v24[2];
            v35 = (struct _HAM_DEPENDENCY_LINK *)v24[1];
            v24 = 0LL;
            if ( v34 != (struct _RTL_BALANCED_NODE *)((char *)v35 + 64) )
              v24 = &v34[-1].Children[1];
            if ( !v24 )
            {
              j = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v35 + 1);
              v37 = v35;
              if ( j )
              {
                v38 = *(struct _HAM_DEPENDENCY_LINK **)j;
                if ( *(_QWORD *)j )
                {
                  do
                  {
                    j = v38;
                    v38 = *(struct _HAM_DEPENDENCY_LINK **)v38;
                  }
                  while ( v38 );
                }
              }
              else
              {
                for ( j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v35 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                      j;
                      j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  if ( *(struct _HAM_DEPENDENCY_LINK **)j == v37 )
                    break;
                  v37 = j;
                }
              }
              if ( !j )
                goto LABEL_18;
              while ( 1 )
              {
                v39 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)j + 8);
                v23 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)((char *)j + 64);
                v24 = 0LL;
                if ( v39 != (struct _HAM_DEPENDENCY_LINK *)((char *)j + 64) )
                  v24 = (struct _RTL_BALANCED_NODE **)((char *)v39 - 16);
                if ( v24 )
                  break;
                j = HampDepGroupGetNextLink(j);
                if ( !j )
                  goto LABEL_18;
              }
            }
            if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)v35 + 3) != v24[1][1].Children[0] )
              v24 = 0LL;
            if ( !v24 )
              goto LABEL_18;
          }
        }
        v16 = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)v16);
      }
      while ( v16 );
    }
  }
  v45 = *(_QWORD *)(v3 + 8);
  if ( (v45 & 1) != 0 )
  {
    if ( v45 == 1 )
      v46 = 0LL;
    else
      v46 = (struct _HAM_DEPENDENCY_LINK *)(v45 ^ (v3 | 1));
  }
  else
  {
    v46 = *(struct _HAM_DEPENDENCY_LINK **)(v3 + 8);
  }
  if ( v46 )
  {
    while ( 1 )
    {
      v47 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v46 + 8);
      v48 = 0LL;
      if ( v47 != (struct _HAM_DEPENDENCY_LINK *)((char *)v46 + 64) )
        v48 = (char *)v47 - 16;
      if ( v48 )
        break;
      v46 = HampDepGroupGetNextLink(v46);
      if ( !v46 )
        return;
    }
    while ( 1 )
    {
      v49 = v48[40];
      if ( v49 == 1 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v48 + 6) + 800LL) > *((_QWORD *)v48 + 8)
          || *(_QWORD *)(*((_QWORD *)v48 + 7) + 800LL) > *((_QWORD *)v48 + 9) )
        {
LABEL_128:
          *((_DWORD *)v48 + 9) |= 1u;
        }
      }
      else if ( v49 == 3 )
      {
        v50 = *((_QWORD *)v48 + 7);
        if ( *(_QWORD *)(v50 + 800) > *((_QWORD *)v48 + 9)
          || (HIWORD(*(_DWORD *)(v50 + 648)) & 3u) >= (unsigned __int64)*((int *)v48 + 21) )
        {
          goto LABEL_128;
        }
      }
      v51 = *(_QWORD *)v48;
      if ( *(_QWORD *)v48 && (*(_BYTE *)(v51 + 544) & 8) != 0 || (*((_DWORD *)v48 + 9) & 1) != 0 )
      {
        v53 = 3;
      }
      else if ( v49 == 3 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v48 + 6) + 800LL) > *((_QWORD *)v48 + 8) )
          v53 = 5;
        else
          v53 = 0;
      }
      else
      {
        if ( (*(_DWORD *)(v51 + 544) & 0xC0u) < 0x40 && (*((_DWORD *)v48 + 8) & 8) != 0 )
          v52 = 3;
        else
          v52 = 1;
        v53 = 0;
        if ( (v52 == 1) != (*(_BYTE *)(*(_QWORD *)v48 + 548LL) == 1) )
        {
          LOBYTE(v53) = v52 == 1;
          ++v53;
        }
      }
      v54 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v48 + 2);
      v55 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v48 + 1);
      *((_DWORD *)v48 + 8) = v53 | *((_DWORD *)v48 + 8) & 0xFFFFFFF8;
      v48 = 0LL;
      if ( v54 != (struct _HAM_DEPENDENCY_LINK *)((char *)v55 + 64) )
        v48 = (char *)v54 - 16;
      if ( !v48 )
      {
        k = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v55 + 1);
        if ( k )
        {
          v57 = *(struct _HAM_DEPENDENCY_LINK **)k;
          if ( *(_QWORD *)k )
          {
            do
            {
              k = v57;
              v57 = *(struct _HAM_DEPENDENCY_LINK **)v57;
            }
            while ( v57 );
          }
        }
        else
        {
          for ( k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v55 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                k;
                k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( *(struct _HAM_DEPENDENCY_LINK **)k == v55 )
              break;
            v55 = k;
          }
        }
        if ( !k )
          return;
        while ( 1 )
        {
          v58 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)k + 8);
          v48 = 0LL;
          if ( v58 != (struct _HAM_DEPENDENCY_LINK *)((char *)k + 64) )
            v48 = (char *)v58 - 16;
          if ( v48 )
            break;
          k = HampDepGroupGetNextLink(k);
          if ( !k )
            return;
        }
      }
    }
  }
}

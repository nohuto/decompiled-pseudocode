/*
 * XREFs of sub_18001E9C0 @ 0x18001E9C0
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 * Callees:
 *     sub_180032A20 @ 0x180032A20 (sub_180032A20.c)
 *     sub_1800334FC @ 0x1800334FC (sub_1800334FC.c)
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 *     sub_18004675C @ 0x18004675C (sub_18004675C.c)
 */

__int64 __fastcall sub_18001E9C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 i; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rbx
  _QWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // r9
  _QWORD *v22; // rdx
  _QWORD *v23; // r8
  _QWORD *v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbp
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rdi
  _QWORD *v34; // rdx
  _QWORD *v35; // r9
  unsigned __int64 j; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // rdi
  int v43; // r15d
  unsigned __int64 v44; // rax
  __int64 result; // rax
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 **v48; // r9
  char v49; // dl
  __int64 *v50; // rcx
  __int64 *v51; // r8
  char v52; // dl
  int v53; // eax
  __int64 **v54; // rdx
  __int64 **v55; // r8
  __int64 **k; // rcx
  __int64 *v57; // rdx
  __int64 **v58; // rdx
  __int64 v59; // r15
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned __int64 v62; // rdi
  __int64 v63; // rsi
  int v64; // ebp
  unsigned __int64 v65; // rax
  __int64 v66; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v3 = a1 + 72;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      v5 = 0LL;
    else
      v5 = v2 ^ (v3 | 1);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 80);
  }
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 64);
      v7 = 0LL;
      if ( v6 != v5 + 64 )
        v7 = v6 - 16;
      if ( v7 )
        break;
      v5 = sub_180035594(v5);
      if ( !v5 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 16);
        v9 = *(_QWORD *)(v7 + 8);
        *(_DWORD *)(v7 + 32) = 0;
        v7 = 0LL;
        if ( v8 != v9 + 64 )
          v7 = v8 - 16;
      }
      while ( v7 );
      i = *(_QWORD *)(v9 + 8);
      if ( i )
      {
        v11 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v11;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v12 = *(_QWORD *)(i + 64);
        v7 = 0LL;
        if ( v12 != i + 64 )
          v7 = v12 - 16;
        if ( v7 )
          break;
        i = sub_180035594(i);
        if ( !i )
          goto LABEL_18;
      }
    }
  }
LABEL_18:
  while ( !(unsigned int)sub_18004675C(a2) )
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
    v16 = *(_QWORD **)v3;
    v66 = *(_QWORD *)(v15 - 776);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = sub_180032A20(&v66, v16);
        if ( !v17 )
          break;
        if ( v17 < 0 )
          v16 = (_QWORD *)*v16;
        else
          v16 = (_QWORD *)v16[1];
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (_QWORD *)*v16;
      v19 = 0LL;
      if ( *v16 )
      {
        while ( 1 )
        {
          v20 = sub_180032A20(&v66, v18);
          if ( v20 >= 0 )
          {
            if ( v20 > 0 )
            {
              v18 = (_QWORD *)v18[1];
              goto LABEL_32;
            }
            v19 = v18;
          }
          v18 = (_QWORD *)*v18;
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
        if ( v16[3] != v21 )
          break;
        v22 = (_QWORD *)v16[8];
        v23 = v16 + 8;
        v24 = 0LL;
        if ( v22 != v16 + 8 )
          v24 = v22 - 2;
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
              if ( (!*v24 || (*(_BYTE *)(v27 + 544) & 8) == 0) && !v26 )
              {
                v28 = *(_QWORD *)(v27 + 80);
                v29 = (*(_DWORD *)(v15 + 24) >> 2) & 3;
                v30 = (*(_DWORD *)(v28 + 768) >> 2) & 3;
                if ( v30 > v29 )
                  v29 = (*(_DWORD *)(v28 + 768) >> 2) & 3;
                *(_DWORD *)(v28 + 768) = (4 * v29) | *(_DWORD *)(v28 + 768) & 0xFFFFFFF3;
                v31 = *v24;
                *(_QWORD *)(v31 + 432) |= 0x20uLL;
                *(_DWORD *)(v31 + 480) ^= (*(_DWORD *)(v31 + 480) ^ (*(_DWORD *)(v28 + 768) >> 2)) & 3;
                v32 = *(_DWORD *)(v28 + 768);
                v33 = v32;
                if ( (v32 & 2) != 0 )
                {
                  if ( v30 < ((v32 >> 2) & 3) )
                  {
                    v59 = v28 + 744;
                    RtlRbRemoveNode(a2, v28 + 744);
                    *(_QWORD *)(v28 + 760) = -1LL;
                    v61 = *(_QWORD *)(a2 + 8);
                    v62 = *(_QWORD *)a2;
                    v63 = (*(_DWORD *)(v28 + 768) >> 2) & 3;
                    if ( (v61 & 1) != 0 && v62 )
                      v62 ^= a2;
                    LOBYTE(v60) = 0;
                    v64 = v61 & 1;
                    if ( v62 )
                    {
                      while ( 1 )
                      {
                        if ( (int)sub_1800334FC(v63, v62, v60) < 0 )
                        {
                          v65 = *(_QWORD *)v62;
                          if ( v64 )
                          {
                            if ( !v65 )
                              goto LABEL_153;
                            v65 ^= v62;
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
                          v65 = *(_QWORD *)(v62 + 8);
                          if ( v64 )
                          {
                            if ( !v65 )
                              goto LABEL_154;
                            v65 ^= v62;
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
                  v41 = *(_QWORD *)a2;
                  v42 = (v33 >> 2) & 3;
                  if ( (v40 & 1) != 0 )
                  {
                    if ( v41 )
                      v41 ^= a2;
                    else
                      v41 = 0LL;
                  }
                  LOBYTE(v23) = 0;
                  v43 = v40 & 1;
                  if ( v41 )
                  {
                    while ( 1 )
                    {
                      if ( (int)sub_1800334FC(v42, v41, v23) < 0 )
                      {
                        v44 = *(_QWORD *)v41;
                        if ( v43 )
                        {
                          if ( !v44 )
                            goto LABEL_85;
                          v44 ^= v41;
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
                        v44 = *(_QWORD *)(v41 + 8);
                        if ( v43 )
                        {
                          if ( !v44 )
                            goto LABEL_86;
                          v44 ^= v41;
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
                  RtlRbInsertNodeEx(a2, v41, v23, v28 + 744);
                  *(_DWORD *)(v28 + 768) |= 2u;
                }
              }
            }
            v34 = (_QWORD *)v24[2];
            v35 = (_QWORD *)v24[1];
            v24 = 0LL;
            if ( v34 != v35 + 8 )
              v24 = v34 - 2;
            if ( !v24 )
            {
              j = v35[1];
              v37 = v35;
              if ( j )
              {
                v38 = *(_QWORD **)j;
                if ( *(_QWORD *)j )
                {
                  do
                  {
                    j = (unsigned __int64)v38;
                    v38 = (_QWORD *)*v38;
                  }
                  while ( v38 );
                }
              }
              else
              {
                for ( j = v35[2] & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                {
                  if ( *(_QWORD **)j == v37 )
                    break;
                  v37 = (_QWORD *)j;
                }
              }
              if ( !j )
                goto LABEL_18;
              while ( 1 )
              {
                v39 = *(_QWORD *)(j + 64);
                v23 = (_QWORD *)(j + 64);
                v24 = 0LL;
                if ( v39 != j + 64 )
                  v24 = (_QWORD *)(v39 - 16);
                if ( v24 )
                  break;
                j = sub_180035594(j);
                if ( !j )
                  goto LABEL_18;
              }
            }
            if ( v35[3] != *(_QWORD *)(v24[1] + 24LL) )
              v24 = 0LL;
            if ( !v24 )
              goto LABEL_18;
          }
        }
        v16 = (_QWORD *)sub_180035594(v16);
      }
      while ( v16 );
    }
  }
  result = *(_QWORD *)(v3 + 8);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      v46 = 0LL;
    else
      v46 = result ^ (v3 | 1);
  }
  else
  {
    v46 = *(_QWORD *)(v3 + 8);
  }
  if ( v46 )
  {
    while ( 1 )
    {
      v47 = *(_QWORD *)(v46 + 64);
      v48 = 0LL;
      if ( v47 != v46 + 64 )
        v48 = (__int64 **)(v47 - 16);
      if ( v48 )
        break;
      result = sub_180035594(v46);
      v46 = result;
      if ( !result )
        return result;
    }
    while ( 1 )
    {
      v49 = *((_BYTE *)v48 + 40);
      if ( v49 == 1 )
      {
        if ( v48[6][100] > (unsigned __int64)v48[8] || v48[7][100] > (unsigned __int64)v48[9] )
LABEL_128:
          *((_DWORD *)v48 + 9) |= 1u;
      }
      else if ( v49 == 3 )
      {
        v50 = v48[7];
        if ( v50[100] > (unsigned __int64)v48[9]
          || (HIWORD(*((_DWORD *)v50 + 162)) & 3u) >= (unsigned __int64)*((int *)v48 + 21) )
        {
          goto LABEL_128;
        }
      }
      v51 = *v48;
      if ( *v48 && (v51[68] & 8) != 0 || (*((_DWORD *)v48 + 9) & 1) != 0 )
      {
        v53 = 3;
      }
      else if ( v49 == 3 )
      {
        if ( v48[6][100] > (unsigned __int64)v48[8] )
          v53 = 5;
        else
          v53 = 0;
      }
      else
      {
        if ( ((_DWORD)v51[68] & 0xC0u) < 0x40 && ((_DWORD)v48[4] & 8) != 0 )
          v52 = 3;
        else
          v52 = 1;
        v53 = 0;
        if ( (v52 == 1) != (*((_BYTE *)*v48 + 548) == 1) )
        {
          LOBYTE(v53) = v52 == 1;
          ++v53;
        }
      }
      v54 = (__int64 **)v48[2];
      v55 = (__int64 **)v48[1];
      *((_DWORD *)v48 + 8) = v53 | (_DWORD)v48[4] & 0xFFFFFFF8;
      v48 = 0LL;
      result = (__int64)(v54 - 2);
      if ( v54 != v55 + 8 )
        v48 = v54 - 2;
      if ( !v48 )
      {
        k = (__int64 **)v55[1];
        if ( k )
        {
          v57 = *k;
          if ( *k )
          {
            do
            {
              result = *v57;
              k = (__int64 **)v57;
              v57 = (__int64 *)result;
            }
            while ( result );
          }
        }
        else
        {
          for ( k = (__int64 **)((unsigned __int64)v55[2] & 0xFFFFFFFFFFFFFFFCuLL);
                k;
                k = (__int64 **)((unsigned __int64)k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( *k == (__int64 *)v55 )
              break;
            v55 = k;
          }
        }
        if ( !k )
          return result;
        while ( 1 )
        {
          v58 = (__int64 **)k[8];
          v48 = 0LL;
          if ( v58 != k + 8 )
            v48 = v58 - 2;
          if ( v48 )
            break;
          result = sub_180035594(k);
          k = (__int64 **)result;
          if ( !result )
            return result;
        }
      }
    }
  }
  return result;
}

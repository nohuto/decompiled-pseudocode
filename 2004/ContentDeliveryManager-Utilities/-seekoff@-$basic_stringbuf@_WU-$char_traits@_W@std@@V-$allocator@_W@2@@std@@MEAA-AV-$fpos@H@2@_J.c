/*
 * XREFs of ?seekoff@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAA?AV?$fpos@H@2@_JHH@Z @ 0x180034B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::seekoff(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // edx
  _QWORD *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  __int64 result; // rax

  v5 = *(unsigned __int64 **)(a1 + 64);
  v8 = *v5;
  if ( *v5 && *(_QWORD *)(a1 + 104) < v8 )
    *(_QWORD *)(a1 + 104) = v8;
  if ( (a5 & 1) != 0 )
  {
    v9 = **(_QWORD **)(a1 + 56);
    if ( v9 )
    {
      switch ( a4 )
      {
        case 2:
          v10 = *(_QWORD **)(a1 + 24);
          v11 = *(_QWORD *)(a1 + 104);
LABEL_11:
          a3 += (v11 - *v10) >> 1;
LABEL_14:
          if ( a3 < 0 || (v12 = **(_QWORD **)(a1 + 24), a3 > (*(_QWORD *)(a1 + 104) - v12) >> 1) )
          {
            a3 = std::_BADOFF;
          }
          else
          {
            v13 = a3 + ((v12 - v9) >> 1);
            **(_DWORD **)(a1 + 80) -= v13;
            **(_QWORD **)(a1 + 56) += 2LL * v13;
            if ( (a5 & 2) != 0 )
            {
              v14 = *(_QWORD **)(a1 + 64);
              if ( *v14 )
              {
                v15 = *v14 + 2LL * **(int **)(a1 + 88);
                v16 = **(_QWORD **)(a1 + 56);
                *v14 = v16;
                **(_DWORD **)(a1 + 88) = (v15 - v16) >> 1;
              }
            }
          }
          goto LABEL_35;
        case 1:
          if ( (a5 & 2) == 0 )
          {
            v10 = *(_QWORD **)(a1 + 24);
            v11 = **(_QWORD **)(a1 + 56);
            goto LABEL_11;
          }
          break;
        case 0:
          goto LABEL_14;
      }
      a3 = std::_BADOFF;
      goto LABEL_14;
    }
  }
  if ( (a5 & 2) != 0 && *v5 )
  {
    if ( a4 == 2 )
    {
      v17 = *(_QWORD **)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
          a3 = std::_BADOFF;
        goto LABEL_29;
      }
      v17 = *(_QWORD **)(a1 + 24);
      v18 = *v5;
    }
    a3 += (__int64)(v18 - *v17) >> 1;
LABEL_29:
    if ( a3 < 0 || (v19 = **(_QWORD **)(a1 + 24), a3 > (*(_QWORD *)(a1 + 104) - v19) >> 1) )
    {
      a3 = std::_BADOFF;
    }
    else
    {
      v20 = a3 + ((__int64)(v19 - *v5) >> 1);
      **(_DWORD **)(a1 + 88) -= v20;
      **(_QWORD **)(a1 + 64) += 2LL * v20;
    }
    goto LABEL_35;
  }
  if ( a3 )
    a3 = std::_BADOFF;
LABEL_35:
  *(_QWORD *)(a2 + 8) = 0LL;
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = a3;
  return result;
}

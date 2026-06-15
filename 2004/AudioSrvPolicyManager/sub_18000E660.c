/*
 * XREFs of sub_18000E660 @ 0x18000E660
 * Callers:
 *     sub_18000E560 @ 0x18000E560 (sub_18000E560.c)
 *     sub_180030814 @ 0x180030814 (sub_180030814.c)
 * Callees:
 *     sub_180009868 @ 0x180009868 (sub_180009868.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_UNKNOWN **__fastcall sub_18000E660(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  SIZE_T v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 i; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // r10
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_QWORD **)a1;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v8 )
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3;
    if ( a2 > v9 )
    {
      if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
        sub_180009868();
      v10 = v9 >> 1;
      if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
      {
        v11 = v10 + v9;
        if ( v10 + v9 < a2 )
          v11 = a2;
      }
      else
      {
        v11 = a2;
      }
      if ( !v4 )
        goto LABEL_13;
      v12 = 8 * v9;
      if ( v12 < 0x1000 )
      {
LABEL_12:
        sub_180039D98(v4);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
LABEL_13:
        v15 = 8 * v11;
        if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
          v15 = -1LL;
        v16 = sub_180009F20(v15);
        *(_QWORD *)a1 = v16;
        v8 = 0LL;
        *(_QWORD *)(a1 + 8) = v16;
        result = (_UNKNOWN **)&v16[v11];
        *(_QWORD *)(a1 + 16) = result;
LABEL_28:
        v21 = *(_QWORD **)(a1 + 8);
        for ( i = a2 - v8; i; --i )
        {
          result = (_UNKNOWN **)*a3;
          *v21++ = *a3;
        }
        *(_QWORD *)(a1 + 8) = v21;
        return result;
      }
      v13 = *(v4 - 1);
      v14 = v12 + 39;
      if ( (unsigned __int64)v4 - v13 - 8 <= 0x1F )
      {
        v4 = (_QWORD *)*(v4 - 1);
        goto LABEL_12;
      }
      result = (_UNKNOWN **)o__invalid_parameter_noinfo_noreturn(v13, v14);
      __debugbreak();
    }
    v17 = 0LL;
    v18 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v18 = 0LL;
    if ( v18 )
    {
      if ( v18 >= 2 )
      {
        result = (_UNKNOWN **)*a3;
        if ( v4 > a3 || &v4[v18 - 1] < a3 )
        {
          v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v17 += 2LL;
          while ( v17 != v19 );
          v20 = 8 * v19;
          memset64(v4, (unsigned __int64)result, v20 >> 3);
          v4 = (_QWORD *)((char *)v4 + v20);
        }
      }
      while ( v17 != v18 )
      {
        result = (_UNKNOWN **)*a3;
        ++v17;
        *v4++ = *a3;
      }
    }
    goto LABEL_28;
  }
  v23 = 0LL;
  v24 = &v4[a2];
  v25 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v4 > v24 )
    v25 = 0LL;
  if ( v25 )
  {
    if ( v25 >= 2 )
    {
      result = (_UNKNOWN **)*a3;
      if ( v4 > a3 || &v4[v25 - 1] < a3 )
      {
        v26 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v23 += 2LL;
        while ( v23 != v26 );
        v27 = 8 * v26;
        memset64(v4, (unsigned __int64)result, v27 >> 3);
        v4 = (_QWORD *)((char *)v4 + v27);
      }
    }
    while ( v23 != v25 )
    {
      result = (_UNKNOWN **)*a3;
      ++v23;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v24;
  return result;
}

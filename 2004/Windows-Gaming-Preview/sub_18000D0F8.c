/*
 * XREFs of sub_18000D0F8 @ 0x18000D0F8
 * Callers:
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 * Callees:
 *     sub_18000D978 @ 0x18000D978 (sub_18000D978.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall sub_18000D0F8(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rsi
  unsigned __int64 v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 *v23; // r8
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  char *v26; // rdx
  __int64 *v27; // rbx
  __int64 *v28; // r15
  __int64 v29; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+28h] [rbp-40h]
  char *v34; // [rsp+78h] [rbp+10h]
  unsigned __int64 v35; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (char *)a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
LABEL_51:
    sub_18000D978();
  v8 = v7 + 1;
  v32 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v35 = v11;
  v33 = v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (__int64 *)operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
LABEL_50:
      o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
      goto LABEL_51;
    }
    v17 = (__int64 *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = (__int64)v14;
  }
  v18 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = (__int64 *)((char *)v17 + v18);
  try
  {
    v20 = *a3;
    *v19 = *a3;
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 136);
      while ( v21 >= 0 )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 136), v21 + 1, v21);
        if ( v22 == v21 )
          goto LABEL_22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v21 + 16));
    }
LABEL_22:
    v34 = (char *)v17 + v18;
    v23 = a1[1];
    v24 = *a1;
    v25 = v17;
    if ( v4 == v23 )
    {
      while ( v24 != v23 )
      {
        *v25 = 0LL;
        if ( v25 != v24 )
        {
          *v25 = *v24;
          *v24 = 0LL;
        }
        ++v25;
        ++v24;
      }
    }
    else
    {
      if ( v24 != v4 )
      {
        do
        {
          *v25 = 0LL;
          if ( v25 != v24 )
          {
            *v25 = *v24;
            *v24 = 0LL;
          }
          ++v25;
          ++v24;
        }
        while ( v24 != v4 );
        v23 = a1[1];
      }
      v34 = (char *)v17;
      if ( v4 != v23 )
      {
        v26 = (char *)v17 + v18 - (_QWORD)v4 + 8;
        do
        {
          v24 = (__int64 *)((char *)v4 + (_QWORD)v26);
          *(__int64 *)((char *)v4 + (_QWORD)v26) = 0LL;
          if ( (__int64 *)((char *)v4 + (_QWORD)v26) != v4 )
          {
            *v24 = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v23 );
      }
    }
  }
  catch ( ... )
  {
    sub_18000D998(v24, v34, (char *)v17 + v18 + 8);
    sub_18000D9DC(v31, v17, v35);
    throw;
  }
  v27 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    if ( v27 != v28 )
    {
      do
      {
        v29 = *v27;
        if ( *v27 )
        {
          *v27 = 0LL;
          sub_1800120A0(v29);
        }
        ++v27;
      }
      while ( v27 != v28 );
      v27 = *a1;
    }
    v15 = ((char *)a1[2] - (char *)v27) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 < 0x1000 )
      goto LABEL_43;
    v15 += 39LL;
    v16 = *(v27 - 1);
    if ( (unsigned __int64)v27 - v16 - 8 <= 0x1F )
    {
      v27 = (__int64 *)*(v27 - 1);
LABEL_43:
      j_j__o_free(v27, v15);
      goto LABEL_44;
    }
    goto LABEL_50;
  }
LABEL_44:
  *a1 = v17;
  a1[1] = &v17[v32];
  a1[2] = &v17[v33];
  return v19;
}

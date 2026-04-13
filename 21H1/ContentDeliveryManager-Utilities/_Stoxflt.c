/*
 * XREFs of _Stoxflt @ 0x1800B5964
 * Callers:
 *     _Stofx @ 0x1800AE640 (_Stofx.c)
 *     _Stodx @ 0x1800AF178 (_Stodx.c)
 *     _Stoldx @ 0x1800AF7B4 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     memchr_0 @ 0x1800CB735 (memchr_0.c)
 */

__int64 __fastcall Stoxflt(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 **a3, _DWORD *a4, int a5)
{
  int v5; // ebp
  int v6; // r13d
  unsigned __int8 *v8; // rbx
  int v9; // r14d
  unsigned __int8 v10; // al
  int v11; // esi
  _BYTE *v12; // rax
  __int64 v13; // r15
  struct lconv *v14; // rax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rbx
  _BYTE *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  bool v20; // zf
  signed int v21; // r9d
  __int64 v22; // r8
  __int64 i; // r10
  int v24; // r11d
  unsigned __int8 *v25; // r12
  char v26; // bp
  unsigned __int8 v27; // cl
  int v28; // r15d
  int v29; // esi
  int v30; // eax
  __int64 result; // rax
  unsigned __int8 *v32; // rcx
  unsigned __int8 *v34; // [rsp+30h] [rbp-78h]
  _BYTE v35[40]; // [rsp+38h] [rbp-70h]

  v5 = 7 * a5;
  v6 = 0;
  v8 = a2;
  v34 = a1;
  if ( 7 * a5 > 35 )
    v5 = 35;
  *a4 = 0;
  a4[1] = 0;
  v9 = 0;
  v10 = *a2;
  if ( *a2 == 48 )
  {
    v9 = 1;
    do
      v10 = *++v8;
    while ( *v8 == 48 );
  }
  v11 = 0;
  v12 = memchr_0("0123456789abcdefABCDEF", (char)v10, 0x16uLL);
  if ( v12 )
  {
    v13 = 0LL;
    v9 = 1;
    do
    {
      if ( v13 > v5 )
      {
        ++*a4;
      }
      else
      {
        ++v11;
        v35[v13++] = byte_1800FD350[v12 - "0123456789abcdefABCDEF"];
      }
      v12 = memchr_0("0123456789abcdefABCDEF", (char)*++v8, 0x16uLL);
    }
    while ( v12 );
    v6 = 0;
  }
  v14 = localeconv();
  v15 = v8 + 1;
  if ( *v8 != *v14->decimal_point )
    v15 = v8;
  v16 = v15;
  if ( !v11 && *v15 == 48 )
  {
    v9 = 1;
    do
    {
      --*a4;
      ++v16;
    }
    while ( *v16 == 48 );
  }
  v17 = memchr_0("0123456789abcdefABCDEF", (char)*v16, 0x16uLL);
  if ( v17 )
  {
    v18 = v11;
    v9 = 1;
    do
    {
      if ( v18 <= v5 )
      {
        ++v11;
        v35[v18++] = byte_1800FD350[v17 - "0123456789abcdefABCDEF"];
        --*a4;
      }
      v17 = memchr_0("0123456789abcdefABCDEF", (char)*++v16, 0x16uLL);
    }
    while ( v17 );
    v6 = 0;
  }
  if ( v5 < v11 )
  {
    if ( (char)v35[v5] >= 8 )
      ++v35[v5 - 1];
    ++*a4;
    v11 = v5;
  }
  v19 = v11;
  v20 = v11 == 0;
  if ( v11 > 0 )
  {
    do
    {
      if ( v35[v19 - 1] )
        break;
      ++*a4;
      --v11;
      --v19;
    }
    while ( v19 > 0 );
    v20 = v11 == 0;
  }
  if ( v20 )
  {
    v11 = 1;
    v35[0] = 0;
  }
  *a4 *= 4;
  if ( v9 )
  {
    v21 = 7
        * (((int)((unsigned __int64)(2454267027LL * v11) >> 32) >> 2)
         + 1
         + ((unsigned int)((unsigned __int64)(2454267027LL * v11) >> 32) >> 31))
        - v11;
    v6 = v21 != 7 * (v21 / 7);
    if ( v11 > 0 )
    {
      v22 = v21 != 7 * (v21 / 7);
      for ( i = 0LL; i < v11; ++i )
      {
        v24 = (char)v35[i];
        if ( v21 == 7 * (v21 / 7) )
        {
          ++v6;
          a4[++v22] = v24;
        }
        else
        {
          a4[v22] = v24 + 16 * a4[v22];
        }
        ++v21;
      }
    }
    if ( ((*v16 - 80) & 0xDF) == 0 )
    {
      v25 = v16;
      v26 = 43;
      v27 = *++v16;
      if ( ((*v16 - 43) & 0xFD) == 0 )
      {
        ++v16;
        v26 = v27;
        v27 = *v16;
      }
      v28 = 0;
      v29 = 0;
      if ( isdigit(v27) )
      {
        v28 = 1;
        do
        {
          if ( v29 < 100000000 )
            v29 = *v16 + 2 * (5 * v29 - 24);
          ++v16;
        }
        while ( isdigit(*v16) );
      }
      v30 = -v29;
      if ( v26 != 45 )
        v30 = v29;
      *a4 += v30;
      if ( !v28 )
        v16 = v25;
    }
  }
  result = v6 & (unsigned int)-(v9 != 0);
  if ( a3 )
  {
    v32 = v34;
    if ( v9 )
      v32 = v16;
    *a3 = v32;
  }
  return result;
}

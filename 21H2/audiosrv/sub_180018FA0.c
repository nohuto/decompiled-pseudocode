/*
 * XREFs of sub_180018FA0 @ 0x180018FA0
 * Callers:
 *     sub_180003CE0 @ 0x180003CE0 (sub_180003CE0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B750 @ 0x18001B750 (sub_18001B750.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 sub_180018FA0(const wchar_t **a1, const wchar_t *a2, _WORD *a3, ...)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r12
  wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // r13
  wchar_t *v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // rdx
  wchar_t *v17; // rsi
  wchar_t *v18; // rcx
  size_t v19; // rdx
  __int64 v20; // r9
  wchar_t *v21; // rax
  __int64 v22; // rcx
  wchar_t *v23; // [rsp+20h] [rbp-68h]
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned int v26; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  v6 = *a1;
  v7 = 0;
  v8 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
  if ( (unsigned __int64)*a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v12 = (int)v4;
        do
        {
          v6 = &v9[v12];
          ++v7;
          v9 = wcsstr(&v9[v12], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v6 += (int)v10 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v13 = (wchar_t *)*a1;
      v14 = *((_DWORD *)*a1 - 4);
      v15 = v14 + v7 * (v5 - v4);
      v26 = v14;
      v16 = v14;
      if ( (int)v15 > (int)v14 )
        v16 = v15;
      if ( (int)((*((_DWORD *)*a1 - 3) - v16) | (1 - *((_DWORD *)v13 - 2))) < 0 )
      {
        sub_18001B550(a1, v16);
        v13 = (wchar_t *)*a1;
      }
      v17 = v13;
      v24 = (unsigned __int64)&v13[v26];
      if ( (unsigned __int64)v13 < v24 )
      {
        do
        {
          v23 = wcsstr(v17, a2);
          v18 = v23;
          if ( v23 )
          {
            v19 = (int)v5;
            v20 = (int)v4;
            do
            {
              v17 = &v18[v19];
              v28 = v26 - (v18 - v13) - v4;
              if ( 2LL * v28 )
              {
                if ( !v17 || !&v18[v20] )
                  goto LABEL_40;
                memmove(v17, &v18[v20], 2LL * v28);
                v18 = v23;
                v19 = (int)v5;
              }
              if ( v19 * 2 )
              {
                if ( !v18 )
                  goto LABEL_40;
                if ( !a3 )
                {
                  memset(v18, 0, v19 * 2);
LABEL_40:
                  *(_DWORD *)o__errno(v18) = 22;
                  o__invalid_parameter_noinfo(v22);
                  sub_1800B8610(2147942487LL);
                }
                memcpy(v18, a3, v19 * 2);
              }
              v23[(int)v5 + v28] = 0;
              v26 += v5 - v4;
              v21 = wcsstr(v17, a2);
              v19 = (int)v5;
              v18 = v21;
              v20 = (int)v4;
              v23 = v21;
            }
            while ( v21 );
          }
          v17 += (int)(sub_18001B750(v17) + 1);
        }
        while ( (unsigned __int64)v17 < v24 );
      }
      sub_1800448E4(a1, v15);
    }
  }
  return (unsigned int)v7;
}

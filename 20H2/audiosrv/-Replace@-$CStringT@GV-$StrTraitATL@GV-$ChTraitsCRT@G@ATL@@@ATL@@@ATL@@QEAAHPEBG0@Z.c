/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180018F70
 * Callers:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180003CB0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018480 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x1800188A0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001B720 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180044A14 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const wchar_t **a1,
        const wchar_t *a2,
        _WORD *a3,
        ...)
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
  wchar_t *v22; // [rsp+20h] [rbp-68h]
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned int v25; // [rsp+98h] [rbp+10h]
  int v27; // [rsp+A8h] [rbp+20h]

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
      v25 = v14;
      v16 = v14;
      if ( (int)v15 > (int)v14 )
        v16 = v15;
      if ( (int)((*((_DWORD *)*a1 - 3) - v16) | (1 - *((_DWORD *)v13 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v16);
        v13 = (wchar_t *)*a1;
      }
      v17 = v13;
      v23 = (unsigned __int64)&v13[v25];
      if ( (unsigned __int64)v13 < v23 )
      {
        do
        {
          v22 = wcsstr(v17, a2);
          v18 = v22;
          if ( v22 )
          {
            v19 = (int)v5;
            v20 = (int)v4;
            do
            {
              v17 = &v18[v19];
              v27 = v25 - (v18 - v13) - v4;
              if ( 2LL * v27 )
              {
                if ( !v17 || !&v18[v20] )
                  goto LABEL_40;
                memmove_0(v17, &v18[v20], 2LL * v27);
                v18 = v22;
                v19 = (int)v5;
              }
              if ( v19 * 2 )
              {
                if ( !v18 )
                  goto LABEL_40;
                if ( !a3 )
                {
                  memset_0(v18, 0, v19 * 2);
LABEL_40:
                  *(_DWORD *)_o__errno(v18) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v18, a3, v19 * 2);
              }
              v22[(int)v5 + v27] = 0;
              v25 += v5 - v4;
              v21 = wcsstr(v17, a2);
              v19 = (int)v5;
              v18 = v21;
              v20 = (int)v4;
              v22 = v21;
            }
            while ( v21 );
          }
          v17 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v17) + 1);
        }
        while ( (unsigned __int64)v17 < v23 );
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v15);
    }
  }
  return (unsigned int)v7;
}

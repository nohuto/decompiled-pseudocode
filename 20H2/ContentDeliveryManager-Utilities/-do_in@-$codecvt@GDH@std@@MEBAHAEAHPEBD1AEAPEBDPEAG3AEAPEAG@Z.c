/*
 * XREFs of ?do_in@?$codecvt@GDH@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x18004A180
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800B03A0 (_Mbrtowc.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::do_in(
        __int64 a1,
        mbstate_t *a2,
        const char *a3,
        const char *a4,
        const char **a5,
        wchar_t *a6,
        wchar_t *a7,
        wchar_t **a8)
{
  wchar_t *v9; // rcx
  const char *v12; // rdx
  BOOL v13; // edi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax

  v9 = a6;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  v13 = *a5 != a4;
  if ( *a5 != a4 )
  {
    while ( v9 != a7 )
    {
      v14 = Mbrtowc(v9, v12, a4 - v12, a2, (const _Cvtvec *)(a1 + 16));
      v15 = v14;
      if ( v14 == -2 )
      {
        *a5 = a4;
        return v13;
      }
      if ( v14 == -1 )
        return 2LL;
      if ( !v14 && !**a8 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( (*a5)[v16] );
        v15 = v16 + 1;
      }
      v17 = 0;
      v13 = 0;
      if ( v15 != -3 )
        v17 = v15;
      *a5 += v17;
      ++*a8;
      v12 = *a5;
      v9 = *a8;
      if ( *a5 == a4 )
        return v13;
    }
  }
  return v13;
}

/*
 * XREFs of ?PutFntCacheDrvAndFileInfo@@YGXKPAVPDEV@@KPAPAU_FONTFILEVIEW@@K@Z @ 0xECCEE
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0xECD92 (SearchFntCacheNewLink.c)
 */

void __userpurge PutFntCacheDrvAndFileInfo(
        struct PDEV **a1@<edx>,
        int a2@<ecx>,
        __int16 a3,
        struct PDEV *a4,
        unsigned int a5,
        struct _FONTFILEVIEW **a6,
        unsigned int a7)
{
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // edx
  _DWORD *v12; // ecx

  if ( (dword_274064 & 3) != 0 )
  {
    v7 = dword_274068;
    if ( dword_274068 )
    {
      if ( a2 )
      {
        v8 = 0;
        v9 = 0;
        while ( a1 != (&gaFntPDev)[v9] )
        {
          if ( (unsigned int)++v9 >= 6 )
            return;
        }
        if ( v9 )
        {
          if ( (dword_274064 & 2) != 0 )
          {
            v10 = SearchFntCacheNewLink(a2);
            if ( v10 )
            {
              if ( *(_WORD *)(v10 + 14) )
              {
                *(_DWORD *)(v10 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v10 + 12) = v9;
                *(_WORD *)(v10 + 14) = a3;
                if ( a5 )
                {
                  v11 = (_DWORD *)(v10 + 40);
                  do
                  {
                    *(v11 - 2) = *(_DWORD *)(*((_DWORD *)a4 + v8) + 16);
                    v12 = (_DWORD *)*((_DWORD *)a4 + v8++);
                    *v11 = *v12;
                    v11 += 4;
                    *(v11 - 3) = v12[1];
                  }
                  while ( v8 < a5 );
                }
              }
            }
            else
            {
              *(_DWORD *)(v7 + 12) |= 2u;
            }
            *(_DWORD *)(v7 + 16) = 1;
          }
          else
          {
            *(_DWORD *)(dword_274068 + 12) |= 2u;
          }
        }
      }
    }
  }
}

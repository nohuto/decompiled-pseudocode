/*
 * XREFs of LdrpResCompareResourceNames @ 0x1405ED09C
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1405EC514 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v9; // ebx
  __int64 v11; // rcx
  unsigned __int16 *v13; // rsi
  int v14; // edx
  __int64 v15; // rcx

  v9 = 0;
  if ( a5 && a6 )
  {
    v11 = *a6;
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (int)v11 >= 0 )
      {
        *a8 = -1;
        return v9;
      }
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      v13 = (unsigned __int16 *)(v11 + a5);
      if ( (a7 & 0x1000) != 0
        && ((unsigned __int64)v13 < a5 || (unsigned __int64)v13 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL))
        || ((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        return (unsigned int)-1073741701;
      }
      v14 = wcsncmp(a4, v13 + 1, *v13);
      if ( v14 )
        goto LABEL_18;
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
      if ( v15 == *v13 )
      {
LABEL_18:
        *a8 = v14;
        return v9;
      }
    }
    else
    {
      if ( (int)v11 >= 0 )
      {
        if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          *a8 = (_DWORD)a4 - v11;
          return v9;
        }
        return (unsigned int)-1073741701;
      }
      if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
    }
    *a8 = 1;
    return v9;
  }
  return 3221225485LL;
}

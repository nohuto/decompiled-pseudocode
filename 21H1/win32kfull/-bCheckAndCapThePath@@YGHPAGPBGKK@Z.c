/*
 * XREFs of ?bCheckAndCapThePath@@YGHPAGPBGKK@Z @ 0xDEE26
 * Callers:
 *     _NtGdiAddFontResourceW@24 @ 0xDC320 (_NtGdiAddFontResourceW@24.c)
 *     _NtGdiGetFontResourceInfoInternalW@28 @ 0x212E5B (_NtGdiGetFontResourceInfoInternalW@28.c)
 *     _NtGdiRemoveFontResourceW@24 @ 0x213CF7 (_NtGdiRemoveFontResourceW@24.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 */

BOOL __userpurge bCheckAndCapThePath@<eax>(
        WCHAR *a1@<edx>,
        WCHAR *a2@<ecx>,
        int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6)
{
  WCHAR *v6; // eax
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // ecx

  v6 = a2;
  v7 = 1;
  v8 = 0;
  v9 = a3;
  if ( 2 * a3 )
  {
    if ( (unsigned int)&a1[v9] > _MmUserProbeAddress || &a1[v9] < a1 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    v6 = a2;
  }
  if ( !a1[v9 - 1] )
  {
    cCapString(v6, a1, a3);
    if ( a3 )
    {
      do
      {
        if ( a2[v8] == 124 )
        {
          ++v7;
          a2[v8] = 0;
        }
        ++v8;
      }
      while ( v8 < a3 );
    }
    return a4 == (const unsigned __int16 *)v7;
  }
  return v8;
}

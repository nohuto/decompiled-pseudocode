/*
 * XREFs of ?STROBJ_bEnumLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z @ 0x2077A3
 * Callers:
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 */

BOOL __userpurge STROBJ_bEnumLinked@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct ESTROBJ *a3,
        unsigned int *a4,
        struct _GLYPHPOS **a5)
{
  int v7; // eax
  _DWORD *v8; // ecx
  struct _GLYPHPOS *v9; // eax
  int v10; // edx
  _DWORD *v11; // ecx
  int v12; // edx
  RFONTOBJ *v13; // ecx

  v7 = a2[9];
  if ( v7 )
  {
    if ( v7 == *a2 )
      goto LABEL_13;
    a2[46] += 4;
    a2[47] += 16;
    v11 = (_DWORD *)a2[46];
    v9 = (struct _GLYPHPOS *)a2[47];
    v12 = a2[49];
    while ( *v11 != v12 )
    {
      ++v9;
      ++v11;
      a2[47] = v9;
      a2[46] = v11;
    }
  }
  else
  {
    v8 = (_DWORD *)a2[45];
    v9 = (struct _GLYPHPOS *)a2[12];
    v10 = a2[49];
    while ( 1 )
    {
      a2[46] = v8;
      a2[47] = v9;
      if ( *v8 == v10 )
        break;
      ++v9;
      ++v8;
    }
  }
  v13 = (RFONTOBJ *)a2[11];
  if ( v13 && RFONTOBJ::cGetGlyphData(v13, 1u, v9) )
  {
    ++a2[9];
    *a1 = 1;
    *(_DWORD *)a3 = a2[47];
    return a2[9] < *a2;
  }
LABEL_13:
  *a1 = 0;
  return 0;
}

/*
 * XREFs of ?STROBJ_bEnumPositionsOnlyLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z @ 0x223C26
 * Callers:
 *     _STROBJ_bEnumPositionsOnly@12 @ 0x225654 (_STROBJ_bEnumPositionsOnly@12.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge STROBJ_bEnumPositionsOnlyLinked@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct ESTROBJ *a3,
        unsigned int *a4,
        struct _GLYPHPOS **a5)
{
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ebx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // ebx

  v7 = a2[10];
  if ( v7 )
  {
    if ( v7 == *a2 )
    {
      *a1 = 0;
      return 0;
    }
    a2[46] += 4;
    a2[47] += 16;
    v12 = (_DWORD *)a2[46];
    v13 = a2[47];
    v14 = a2[49];
    while ( *v12 != v14 )
    {
      v13 += 16;
      ++v12;
      a2[47] = v13;
      a2[46] = v12;
    }
  }
  else
  {
    v8 = (_DWORD *)a2[45];
    v9 = a2[12];
    v10 = a2[49];
    while ( 1 )
    {
      a2[46] = v8;
      a2[47] = v9;
      if ( *v8 == v10 )
        break;
      v9 += 16;
      ++v8;
    }
  }
  a2[10] = v7 + 1;
  *a1 = 1;
  *(_DWORD *)a3 = a2[47];
  return a2[10] < *a2;
}

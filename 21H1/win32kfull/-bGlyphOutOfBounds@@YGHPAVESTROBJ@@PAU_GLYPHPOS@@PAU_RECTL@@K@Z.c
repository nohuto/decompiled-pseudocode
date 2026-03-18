/*
 * XREFs of ?bGlyphOutOfBounds@@YGHPAVESTROBJ@@PAU_GLYPHPOS@@PAU_RECTL@@K@Z @ 0x22411C
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z @ 0x223AE6 (-STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _vGetPosInfo@12 @ 0x225781 (_vGetPosInfo@12.c)
 */

int __userpurge bGlyphOutOfBounds@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct ESTROBJ *a3,
        struct _GLYPHPOS *a4,
        struct _RECTL *a5,
        unsigned int a6)
{
  int v7; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // ebx
  int v15; // edi
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v7 = 0;
  v8 = (*(_DWORD *)(a2 + 192) & 0x1400) == 0;
  v9 = a1[3];
  v10 = a1[2];
  v17 = v10;
  v19 = v9;
  v18 = v9;
  if ( v8 && a4 && *(_DWORD *)(a2 + 8) )
  {
    vGetPosInfo(&v17);
    v11 = v18;
    v10 = v17;
  }
  else
  {
    v11 = v19;
  }
  v12 = a1[1];
  v13 = *(_DWORD **)v12;
  v14 = **(_DWORD **)v12 + v10;
  v15 = v11 + *(_DWORD *)(*(_DWORD *)v12 + 4);
  if ( v14 < *(_DWORD *)a3
    || v14 + v13[2] > *((_DWORD *)a3 + 2)
    || v15 < *((_DWORD *)a3 + 1)
    || v15 + v13[3] > *((_DWORD *)a3 + 3) )
  {
    return 1;
  }
  return v7;
}

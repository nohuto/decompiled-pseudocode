/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z @ 0x223AE6
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YGHPAVESTROBJ@@PAU_GLYPHPOS@@PAU_RECTL@@K@Z @ 0x22411C (-bGlyphOutOfBounds@@YGHPAVESTROBJ@@PAU_GLYPHPOS@@PAU_RECTL@@K@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 *     _vGetPosInfo@12 @ 0x225781 (_vGetPosInfo@12.c)
 */

int __userpurge STROBJ_bEnumCheckBounds@<eax>(
        int *a1@<edx>,
        STROBJ *a2@<ecx>,
        PGLYPHPOS *ppgpos,
        struct ESTROBJ *a4,
        struct _GLYPHPOS **a5,
        struct _RECTL *a6)
{
  ULONG *v6; // eax
  BOOL v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // ebx
  ULONG v12; // edx
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // esi
  struct _RECTL *v16; // [esp+0h] [ebp-30h]
  unsigned int v17; // [esp+4h] [ebp-2Ch]
  ULONG v18; // [esp+Ch] [ebp-24h]
  unsigned int v19; // [esp+10h] [ebp-20h]
  unsigned int v20; // [esp+14h] [ebp-1Ch]
  PGLYPHPOS v21; // [esp+18h] [ebp-18h]
  struct _GLYPHPOS *v22; // [esp+18h] [ebp-18h]
  ULONG v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  ULONG cGlyphs; // [esp+28h] [ebp-8h]
  PGLYPHPOS v27; // [esp+2Ch] [ebp-4h]
  int v28; // [esp+2Ch] [ebp-4h]

  v6 = (ULONG *)a1;
  while ( 1 )
  {
    cGlyphs = a2[1].cGlyphs;
    v8 = STROBJ_bEnum(a2, v6, ppgpos);
    v6 = (ULONG *)a1;
    v9 = 0;
    v24 = v8;
    v21 = *ppgpos;
    v19 = 0;
    v10 = *a1;
    if ( *a1 )
    {
      v27 = *ppgpos;
      do
      {
        if ( !bGlyphOutOfBounds(a4, (struct _GLYPHPOS *)(v9 + cGlyphs), v16, v17) )
          break;
        ++v9;
        ++v27;
      }
      while ( v9 < v10 );
      v6 = (ULONG *)a1;
      v8 = v24;
      v19 = v9;
    }
    if ( v9 < v10 )
      break;
    if ( !v8 )
    {
      *v6 = 0;
      return 0;
    }
  }
  v12 = v9 + 1;
  v13 = 1;
  v23 = v9 + 1;
  if ( v9 + 1 < v10 )
  {
    v14 = v9 + 1;
    v15 = 1;
    v20 = v10;
    v18 = *v6;
    v22 = &v21[v14];
    do
    {
      v10 = v20;
      if ( bGlyphOutOfBounds(a4, (struct _GLYPHPOS *)(v12 + cGlyphs), v16, v17) )
        break;
      ++v15;
      v12 = v23 + 1;
      v23 = v12;
      v10 = v18;
      ++v22;
      v20 = v18;
    }
    while ( v12 < v18 );
    v28 = v15;
    v9 = v19;
    v13 = v28;
  }
  if ( v13 + v9 < v10 )
    v24 = 1;
  a2[1].cGlyphs = v9 + v13 + cGlyphs;
  *ppgpos += v9;
  *a1 = v13;
  if ( (a2[5].rclBkGround.left & 0x1400) == 0 && (cGlyphs || v9) )
  {
    if ( a2->ulCharInc )
      vGetPosInfo(&(*ppgpos)->ptl);
  }
  return v24;
}

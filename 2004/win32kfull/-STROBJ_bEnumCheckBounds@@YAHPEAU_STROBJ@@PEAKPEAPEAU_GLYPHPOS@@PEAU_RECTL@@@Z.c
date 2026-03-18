/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00CEED8
 * Callers:
 *     EngTextOut @ 0x1C00CDA90 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C00CF0B4 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C00CF140 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C02BF2F0 (vGetPosInfo.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  PGLYPHPOS *v5; // rbp
  ULONG cGlyphs; // r15d
  BOOL v9; // eax
  PGLYPHPOS v10; // r8
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r12d
  PGLYPHPOS v14; // rbp
  __int64 v15; // r10
  ULONG v16; // r11d
  int v17; // edx
  __int64 v18; // rax
  LONG x; // ecx
  LONG y; // r8d
  __int64 v21; // rdx
  GLYPHDEF *v22; // rax
  GLYPHBITS *pgb; // rdx
  LONG v24; // r8d
  LONG v25; // r9d
  LONG v27; // [rsp+20h] [rbp-58h] BYREF
  LONG v28; // [rsp+24h] [rbp-54h]
  PGLYPHPOS v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  LONG left; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+88h] [rbp+10h]
  unsigned int v34; // [rsp+90h] [rbp+18h]

  v5 = ppgpos;
  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v9 = STROBJ_bEnum(a1, pc, v5);
    v10 = *v5;
    v11 = 0LL;
    v12 = *pc;
    v13 = v9;
    v29 = *v5;
    if ( v12 )
    {
      v14 = v10;
      do
      {
        if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v14[v11], a4, cGlyphs + (unsigned int)v11) )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < v12 );
      v5 = ppgpos;
      v10 = v29;
    }
    if ( (unsigned int)v11 < v12 )
      break;
    if ( !v13 )
    {
      *pc = 0;
      return 0LL;
    }
  }
  v15 = (unsigned int)(v11 + 1);
  v16 = 1;
  if ( (unsigned int)v15 < v12 )
  {
    v17 = (__int64)a1[4].pwszOrg & 0x1400;
    v32 = v17;
    left = a4->left;
    v34 = v12;
    while ( 1 )
    {
      v18 = 3 * v15;
      x = v10[v15].ptl.x;
      y = v10[v15].ptl.y;
      v28 = y;
      v30 = 3 * v15;
      v27 = x;
      if ( !v17 )
      {
        v21 = (unsigned int)v15 + cGlyphs;
        if ( (_DWORD)v21 )
        {
          if ( a1->ulCharInc )
          {
            vGetPosInfo(a1, v21, &v27);
            x = v27;
            v18 = v30;
            y = v28;
          }
        }
      }
      v22 = (&v29->pgdf)[v18];
      pgb = v22->pgb;
      v24 = v22->pgb->ptlOrigin.y + y;
      v25 = x + v22->pgb->ptlOrigin.x;
      if ( v25 < left || v25 + pgb->sizlBitmap.cx > a4->right || v24 < a4->top || v24 + pgb->sizlBitmap.cy > a4->bottom )
        break;
      v34 = v12;
      ++v16;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= v12 )
        goto LABEL_19;
      v10 = v29;
      v17 = v32;
    }
    v12 = v34;
  }
LABEL_19:
  if ( v16 + (unsigned int)v11 < v12 )
    v13 = 1;
  a1[1].cGlyphs = v11 + v16 + cGlyphs;
  *v5 += v11;
  *pc = v16;
  if ( ((__int64)a1[4].pwszOrg & 0x1400) == 0 && (cGlyphs || (_DWORD)v11) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, cGlyphs + (unsigned int)v11, &(*v5)->ptl);
  }
  return v13;
}

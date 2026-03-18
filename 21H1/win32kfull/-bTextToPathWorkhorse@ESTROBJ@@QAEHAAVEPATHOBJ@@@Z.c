/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z @ 0x22419E (-bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 */

BOOL __thiscall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  ULONG v3; // esi
  PGLYPHPOS v4; // ebx
  ULONG ulCharInc; // eax
  bool v6; // zf
  FIX x; // ecx
  FIX y; // edx
  int v9; // eax
  ULONG GlyphData; // eax
  int v11; // esi
  FIX v12; // eax
  FIX v13; // ecx
  int v14; // eax
  ULONG v15; // ecx
  struct _POINTFIX v17; // [esp+10h] [ebp-24h] BYREF
  BOOL v18; // [esp+18h] [ebp-1Ch]
  ULONG v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h]
  PGLYPHPOS ppgpos; // [esp+24h] [ebp-10h] BYREF
  ULONG v22; // [esp+28h] [ebp-Ch]
  ULONG v23; // [esp+2Ch] [ebp-8h]
  ULONG pc; // [esp+30h] [ebp-4h] BYREF

  pc = 0;
  v17.x = 0;
  v3 = 0;
  v17.y = 0;
  ppgpos = 0;
  pstro[1].cGlyphs = 0;
  pstro[1].flAccel = 0;
  do
  {
    v18 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( !pc )
      break;
    v4 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v6 = (pstro[5].rclBkGround.left & 0x100) == 0;
      x = ppgpos->ptl.x;
      v17.x = x;
      y = ppgpos->ptl.y;
      v17.y = y;
      if ( v6 )
      {
        v17.x = 16 * x;
        v17.y = 16 * y;
      }
      v9 = 16 * ulCharInc;
      v17.x -= v9;
      v20 = v9;
    }
    else
    {
      v20 = 0;
    }
    v3 = pc;
    GlyphData = pc;
    v19 = pc;
    v23 = pc;
    do
    {
      if ( (pstro[5].rclBkGround.left & 2) == 0 )
      {
        GlyphData = RFONTOBJ::cGetGlyphData((RFONTOBJ *)pstro[1].ulCharInc, v3, v4);
        v23 = GlyphData;
        if ( !GlyphData )
          break;
      }
      v22 = 0;
      if ( GlyphData )
      {
        v11 = v20;
        do
        {
          if ( v11 )
          {
            v17.x += v11;
          }
          else
          {
            v6 = (pstro[5].rclBkGround.left & 0x100) == 0;
            v12 = v4->ptl.x;
            v17.x = v12;
            v13 = v4->ptl.y;
            v17.y = v13;
            if ( v6 )
            {
              v17.x = 16 * v12;
              v17.y = 16 * v13;
            }
          }
          v14 = EPATHOBJ::bAppend(a2, (struct EPATHOBJ *)v4->pgdf->pgb, &v17);
          v15 = v22;
          v6 = v14 == 0;
          GlyphData = v23;
          if ( v6 )
            break;
          v15 = v22 + 1;
          ++v4;
          v22 = v15;
        }
        while ( v15 < v23 );
        v3 = v19;
        ppgpos = v4;
        if ( v15 < v23 )
          break;
      }
      v3 -= GlyphData;
      v19 = v3;
    }
    while ( v3 );
  }
  while ( !v3 && v18 );
  return v3 == 0;
}

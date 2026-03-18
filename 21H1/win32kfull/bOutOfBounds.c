/*
 * XREFs of bOutOfBounds @ 0x1F8638
 * Callers:
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 */

int __fastcall bOutOfBounds(STROBJ *pstro, int *a2)
{
  int v2; // eax
  int v4; // edi
  int result; // eax
  ULONG v6; // edi
  GLYPHDEF **p_pgdf; // ecx
  GLYPHBITS *pgb; // edx
  BOOL v9; // [esp+10h] [ebp-18h]
  LONG v10; // [esp+14h] [ebp-14h]
  LONG v11; // [esp+18h] [ebp-10h]
  PGLYPHPOS ppgpos; // [esp+1Ch] [ebp-Ch] BYREF
  ULONG pc; // [esp+20h] [ebp-8h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  v2 = *a2;
  v4 = 0;
  pc = 0;
  ppgpos = 0;
  v14 = 0;
  if ( !*(_DWORD *)(v2 + 92) && !*(_DWORD *)(v2 + 96) )
    return 0;
  do
  {
    v9 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( pc )
    {
      v6 = 0;
      p_pgdf = &ppgpos->pgdf;
      while ( 1 )
      {
        pgb = (*p_pgdf)->pgb;
        if ( pgb )
        {
          v11 = (LONG)p_pgdf[1] + pgb->ptlOrigin.x;
          v10 = (LONG)p_pgdf[2] + pgb->ptlOrigin.y;
          if ( v11 < pstro->rclBkGround.left
            || v11 + pgb->sizlBitmap.cx > pstro->rclBkGround.right
            || v10 < pstro->rclBkGround.top
            || v10 + pgb->sizlBitmap.cy > pstro->rclBkGround.bottom )
          {
            break;
          }
        }
        ++v6;
        p_pgdf += 4;
        if ( v6 >= pc )
        {
          v4 = v14;
          goto LABEL_13;
        }
      }
      v4 = 1;
      v14 = 1;
    }
LABEL_13:
    ;
  }
  while ( v9 );
  pstro[1].cGlyphs = 0;
  result = v4;
  pstro[1].flAccel = 0;
  return result;
}

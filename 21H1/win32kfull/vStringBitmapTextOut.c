/*
 * XREFs of vStringBitmapTextOut @ 0xF725E
 * Callers:
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     vDrawGlyph @ 0xF70BE (vDrawGlyph.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 */

char __fastcall vStringBitmapTextOut(STROBJ *pstro, unsigned int *a2, int a3)
{
  LONG left; // esi
  GLYPHPOS *pgp; // edx
  LONG top; // edi
  char result; // al
  GLYPHDEF *pgdf; // eax
  GLYPHBITS *pgb; // ecx
  ULONG pc; // [esp+Ch] [ebp-8h] BYREF
  PGLYPHPOS ppgpos; // [esp+10h] [ebp-4h] BYREF

  left = pstro->rclBkGround.left;
  ppgpos = 0;
  if ( left > 0 )
    left = 0;
  pgp = pstro->pgp;
  top = pstro->rclBkGround.top;
  pstro[1].cGlyphs = 0;
  pstro[1].flAccel = 0;
  if ( pgp || (result = STROBJ_bEnum(pstro, &pc, &ppgpos), (pgp = ppgpos) != 0) )
  {
    pgdf = pgp->pgdf;
    pgb = pgdf->pgb;
    pgp->ptl.x += pgdf->pgb->ptlOrigin.x - left;
    pgp->ptl.y += pgb->ptlOrigin.y - top;
    return vDrawGlyph(a2, a3, (int)pgp);
  }
  return result;
}
